/* Generated code for Python module 'urllib3.util.ssl_'
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

/* The "_module_urllib3$util$ssl_" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$ssl_;
PyDictObject *moduledict_urllib3$util$ssl_;

/* The declarations of module constants used, if any. */
static PyObject *const_tuple_str_plain_self_str_plain_cipher_suite_tuple;
static PyObject *const_tuple_8a6a9087acf223607f8d761b05c3c635_tuple;
static PyObject *const_str_digest_f5ab9e44d9781bbce93000ad3a218dd6;
extern PyObject *const_str_plain_get;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_resolve_cert_reqs;
static PyObject *const_str_digest_7c46323d1955d9b4a74a964a21041d91;
static PyObject *const_tuple_7f7a0b18e3f69c3d677814bc00472a5f_tuple;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_hmac;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_fdc80410a2b2c167f6d010d95118c7a2;
extern PyObject *const_str_plain_decode;
static PyObject *const_str_digest_b1b851bd94b3604444b241240c75e7c3;
extern PyObject *const_str_plain_cert_reqs;
static PyObject *const_str_plain_CERT_;
extern PyObject *const_str_plain_AF_INET;
static PyObject *const_str_digest_c1fe56cac1a6e686996ed34baa3f9615;
extern PyObject *const_str_plain_verify_mode;
static PyObject *const_str_plain_families;
extern PyObject *const_str_plain_IS_SECURETRANSPORT;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_digest_length;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_fingerprint;
extern PyObject *const_tuple_none_none_none_none_none_none_none_none_none_tuple;
static PyObject *const_str_plain_is_ipaddress;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_encode;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain_create_urllib3_context;
extern PyObject *const_str_plain_exceptions;
static PyObject *const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple;
static PyObject *const_tuple_str_plain_hexlify_str_plain_unhexlify_tuple;
static PyObject *const_str_plain__const_compare_digest;
extern PyObject *const_str_plain_ssl_wrap_socket;
static PyObject *const_tuple_9473549b7ba644563513e7e61e0dc810_tuple;
extern PyObject *const_str_plain_compare_digest;
static PyObject *const_str_digest_1f7b5ce5a77b16d07a45e4d29e803bbc;
extern PyObject *const_str_plain_IS_PYOPENSSL;
extern PyObject *const_str_plain_warnings;
static PyObject *const_str_digest_fa180d3d80537b2aa9f9227fc855b3ea;
static PyObject *const_tuple_str_plain_SSLContext_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_cafile_str_plain_capath_tuple;
static PyObject *const_str_plain_fingerprint_bytes;
extern PyObject *const_str_plain_InsecurePlatformWarning;
static PyObject *const_str_digest_a101688642f990a79cf212c0b39629e0;
extern PyObject *const_str_plain_format;
extern PyObject *const_int_pos_64;
extern PyObject *const_str_plain_socket;
extern PyObject *const_str_plain_ssl_version;
extern PyObject *const_str_plain_af;
extern PyObject *const_str_plain_hexlify;
extern PyObject *const_str_plain_inet_pton;
static PyObject *const_str_digest_265453facacdc76d97e06e2b7ad3f2c4;
static PyObject *const_str_digest_e7dc819c78ea2e0685e83afc15e2e26b;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_digest_af8fbc6bbb34bfe947825ffe4bd0065f;
extern PyObject *const_str_plain_b;
static PyObject *const_str_plain_hashfunc;
extern PyObject *const_str_plain_SNIMissingWarning;
extern PyObject *const_tuple_none_false_tuple;
extern PyObject *const_str_plain_abs;
static PyObject *const_str_digest_fb43a38a807b012d6115ce5bca79e777;
extern PyObject *const_str_plain_capath;
static PyObject *const_int_pos_16777216;
extern PyObject *const_str_plain_ascii;
static PyObject *const_str_digest_9ebaad0cbc72527ae950f03b507e0fc1;
static PyObject *const_str_digest_40d4c2a9acff45d215ea7c0bc7f6dfe1;
extern PyObject *const_str_plain_cafile;
extern PyObject *const_str_plain_ciphers;
static PyObject *const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple;
static PyObject *const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple;
extern PyObject *const_str_plain_OP_NO_SSLv2;
extern PyObject *const_str_plain_OP_NO_SSLv3;
extern PyObject *const_str_plain_resolve_ssl_version;
extern PyObject *const_str_plain_digest;
extern PyObject *const_str_plain_OP_NO_COMPRESSION;
extern PyObject *const_str_plain_unhexlify;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_ca_cert_dir;
static PyObject *const_str_digest_6efba4feba5d3ac1fc26ca13b212a604;
extern PyObject *const_str_plain_check_hostname;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_plain_HASHFUNC_MAP;
extern PyObject *const_str_plain_SSLError;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_hashlib;
static PyObject *const_tuple_f6a01fdcad2a4358443ea98eee1471b3_tuple;
extern PyObject *const_str_plain_str;
static PyObject *const_str_plain_DEFAULT_CIPHERS;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_protocol_version;
static PyObject *const_str_digest_935dace93363545d379a5e2ed3994f38;
extern PyObject *const_str_plain_sha256;
extern PyObject *const_str_plain_lower;
static PyObject *const_str_digest_873f89c91a6f1965f5902998a695e3d7;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain__const_compare_digest_backport;
extern PyObject *const_str_plain_certfile;
extern PyObject *const_str_plain_sha1;
extern PyObject *const_str_plain_keyfile;
extern PyObject *const_str_plain_CERT_NONE;
extern PyObject *const_str_plain_errno;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain___init__;
static PyObject *const_tuple_str_plain_candidate_str_plain_res_tuple;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_str_plain_protocol;
static PyObject *const_str_digest_c6e5c4394838f24a74fcd724137f89e0;
static PyObject *const_str_plain_cert_digest;
static PyObject *const_str_digest_9d4f19242df661a4c9d5362d33a94ce4;
extern PyObject *const_str_plain_replace;
static PyObject *const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple;
static PyObject *const_str_digest_355d1696e5e022fa728033399bc0d0e8;
extern PyObject *const_str_plain_assert_fingerprint;
extern PyObject *const_str_plain_ssl;
static PyObject *const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple;
static PyObject *const_int_pos_33554432;
extern PyObject *const_str_plain_join;
static PyObject *const_str_digest_08cf86bfe868f74da347ad64484f1176;
static PyObject *const_str_digest_0735a7cb67d0fec10de5e4a8b02501c8;
static PyObject *const_str_digest_0fe010e1d38d2438d38213689d35c2f6;
extern PyObject *const_int_pos_32;
extern PyObject *const_tuple_none_none_none_none_tuple;
extern PyObject *const_str_plain_options;
static PyObject *const_tuple_str_chr_58_str_empty_tuple;
extern PyObject *const_str_plain_set_ciphers;
static PyObject *const_str_digest_e1b3a7a1a20db5825d0ccb741103186e;
extern PyObject *const_str_plain_ip_address;
static PyObject *const_str_digest_f7e2a08279d197616743e7b5cf5d2f08;
extern PyObject *const_str_chr_58;
extern PyObject *const_str_plain_binascii;
static PyObject *const_tuple_str_digest_7c46323d1955d9b4a74a964a21041d91_tuple;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain__;
static PyObject *const_tuple_str_plain_self_str_plain_protocol_version_tuple;
static PyObject *const_list_6d21a87f2069ec2831ba43615fd6e331_list;
static PyObject *const_str_digest_8dea7a9de4b59b57c96f518f0d07104f;
static PyObject *const_str_plain_load_default_certs;
extern PyObject *const_str_plain_l;
extern PyObject *const_str_plain_ipaddress;
extern PyObject *const_str_plain_e;
static PyObject *const_str_plain_ENOENT;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_SSLContext;
extern PyObject *const_str_plain_AF_INET6;
extern PyObject *const_str_plain_CERT_REQUIRED;
extern PyObject *const_str_plain_candidate;
static PyObject *const_str_digest_905877c86fc5e54980f5662d63a5bca0;
extern PyObject *const_tuple_str_plain_ascii_tuple;
static PyObject *const_tuple_str_plain___str_plain_host_tuple;
static PyObject *const_tuple_int_pos_16777216_int_pos_33554432_tuple;
static PyObject *const_tuple_str_plain_HAS_SNI_tuple;
extern PyObject *const_str_plain_wrap_socket;
extern PyObject *const_str_plain_load_cert_chain;
static PyObject *const_str_plain_PROTOCOL_;
static PyObject *const_str_plain_cipher_suite;
static PyObject *const_str_digest_8a0a40c5e158ea9e745f39e0d70c38a5;
static PyObject *const_tuple_str_plain_self_str_plain_certfile_str_plain_keyfile_tuple;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_server_side;
extern PyObject *const_str_plain_cert;
extern PyObject *const_str_plain_zip;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_md5;
extern PyObject *const_str_plain_sock;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_six;
extern PyObject *const_str_plain_PROTOCOL_SSLv23;
static PyObject *const_tuple_str_plain_hostname_str_plain_families_str_plain_af_tuple;
extern PyObject *const_str_plain_host;
extern PyObject *const_str_plain_HAS_SNI;
extern PyObject *const_int_pos_131072;
static PyObject *const_str_digest_5af34d61d2693f4cb5ec31c92baaebb5;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_PY3;
extern PyObject *const_str_plain_context;
extern PyObject *const_str_plain_False;
static PyObject *const_str_digest_685a073df21318a8485ca83469aec2b9;
extern PyObject *const_str_plain_hostname;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_server_hostname;
static PyObject *const_str_digest_d069314bcc014e8d1c0cdffc71176664;
extern PyObject *const_str_plain_ca_certs;
extern PyObject *const_str_plain_inet_aton;
extern PyObject *const_str_plain_load_verify_locations;
extern PyObject *const_int_pos_40;
extern PyObject *const_str_plain_ssl_context;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_plain_self_str_plain_cipher_suite_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cipher_suite_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_cipher_suite = UNSTREAM_STRING( &constant_bin[ 1105569 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cipher_suite_tuple, 1, const_str_plain_cipher_suite ); Py_INCREF( const_str_plain_cipher_suite );
    const_tuple_8a6a9087acf223607f8d761b05c3c635_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_8a6a9087acf223607f8d761b05c3c635_tuple, 0, const_str_plain_cert ); Py_INCREF( const_str_plain_cert );
    PyTuple_SET_ITEM( const_tuple_8a6a9087acf223607f8d761b05c3c635_tuple, 1, const_str_plain_fingerprint ); Py_INCREF( const_str_plain_fingerprint );
    const_str_plain_cert_digest = UNSTREAM_STRING( &constant_bin[ 1105581 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_8a6a9087acf223607f8d761b05c3c635_tuple, 2, const_str_plain_cert_digest ); Py_INCREF( const_str_plain_cert_digest );
    const_str_plain_digest_length = UNSTREAM_STRING( &constant_bin[ 1105592 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_8a6a9087acf223607f8d761b05c3c635_tuple, 3, const_str_plain_digest_length ); Py_INCREF( const_str_plain_digest_length );
    const_str_plain_fingerprint_bytes = UNSTREAM_STRING( &constant_bin[ 1105605 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_8a6a9087acf223607f8d761b05c3c635_tuple, 4, const_str_plain_fingerprint_bytes ); Py_INCREF( const_str_plain_fingerprint_bytes );
    const_str_plain_hashfunc = UNSTREAM_STRING( &constant_bin[ 1105622 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_8a6a9087acf223607f8d761b05c3c635_tuple, 5, const_str_plain_hashfunc ); Py_INCREF( const_str_plain_hashfunc );
    const_str_digest_f5ab9e44d9781bbce93000ad3a218dd6 = UNSTREAM_STRING( &constant_bin[ 1105630 ], 167, 0 );
    const_str_digest_7c46323d1955d9b4a74a964a21041d91 = UNSTREAM_STRING( &constant_bin[ 1105797 ], 45, 0 );
    const_tuple_7f7a0b18e3f69c3d677814bc00472a5f_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_7f7a0b18e3f69c3d677814bc00472a5f_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_7f7a0b18e3f69c3d677814bc00472a5f_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_7f7a0b18e3f69c3d677814bc00472a5f_tuple, 2, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_7f7a0b18e3f69c3d677814bc00472a5f_tuple, 3, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    PyTuple_SET_ITEM( const_tuple_7f7a0b18e3f69c3d677814bc00472a5f_tuple, 4, const_str_plain_l ); Py_INCREF( const_str_plain_l );
    const_str_digest_fdc80410a2b2c167f6d010d95118c7a2 = UNSTREAM_STRING( &constant_bin[ 1105842 ], 10, 0 );
    const_str_digest_b1b851bd94b3604444b241240c75e7c3 = UNSTREAM_STRING( &constant_bin[ 1105852 ], 4, 0 );
    const_str_plain_CERT_ = UNSTREAM_STRING( &constant_bin[ 1335 ], 5, 1 );
    const_str_digest_c1fe56cac1a6e686996ed34baa3f9615 = UNSTREAM_STRING( &constant_bin[ 1105856 ], 30, 0 );
    const_str_plain_families = UNSTREAM_STRING( &constant_bin[ 1105886 ], 8, 1 );
    const_str_plain_is_ipaddress = UNSTREAM_STRING( &constant_bin[ 1105894 ], 12, 1 );
    const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple, 0, const_str_plain_sock ); Py_INCREF( const_str_plain_sock );
    PyTuple_SET_ITEM( const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple, 1, const_str_plain_keyfile ); Py_INCREF( const_str_plain_keyfile );
    PyTuple_SET_ITEM( const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple, 2, const_str_plain_certfile ); Py_INCREF( const_str_plain_certfile );
    PyTuple_SET_ITEM( const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple, 3, const_str_plain_cert_reqs ); Py_INCREF( const_str_plain_cert_reqs );
    PyTuple_SET_ITEM( const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple, 4, const_str_plain_ca_certs ); Py_INCREF( const_str_plain_ca_certs );
    PyTuple_SET_ITEM( const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple, 5, const_str_plain_server_hostname ); Py_INCREF( const_str_plain_server_hostname );
    PyTuple_SET_ITEM( const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple, 6, const_str_plain_ssl_version ); Py_INCREF( const_str_plain_ssl_version );
    PyTuple_SET_ITEM( const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple, 7, const_str_plain_ciphers ); Py_INCREF( const_str_plain_ciphers );
    PyTuple_SET_ITEM( const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple, 8, const_str_plain_ssl_context ); Py_INCREF( const_str_plain_ssl_context );
    PyTuple_SET_ITEM( const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple, 9, const_str_plain_ca_cert_dir ); Py_INCREF( const_str_plain_ca_cert_dir );
    PyTuple_SET_ITEM( const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple, 10, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    PyTuple_SET_ITEM( const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple, 11, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_tuple_str_plain_hexlify_str_plain_unhexlify_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_hexlify_str_plain_unhexlify_tuple, 0, const_str_plain_hexlify ); Py_INCREF( const_str_plain_hexlify );
    PyTuple_SET_ITEM( const_tuple_str_plain_hexlify_str_plain_unhexlify_tuple, 1, const_str_plain_unhexlify ); Py_INCREF( const_str_plain_unhexlify );
    const_str_plain__const_compare_digest = UNSTREAM_STRING( &constant_bin[ 1105906 ], 21, 1 );
    const_tuple_9473549b7ba644563513e7e61e0dc810_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_9473549b7ba644563513e7e61e0dc810_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_9473549b7ba644563513e7e61e0dc810_tuple, 1, const_str_plain_socket ); Py_INCREF( const_str_plain_socket );
    PyTuple_SET_ITEM( const_tuple_9473549b7ba644563513e7e61e0dc810_tuple, 2, const_str_plain_server_hostname ); Py_INCREF( const_str_plain_server_hostname );
    PyTuple_SET_ITEM( const_tuple_9473549b7ba644563513e7e61e0dc810_tuple, 3, const_str_plain_server_side ); Py_INCREF( const_str_plain_server_side );
    PyTuple_SET_ITEM( const_tuple_9473549b7ba644563513e7e61e0dc810_tuple, 4, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_digest_1f7b5ce5a77b16d07a45e4d29e803bbc = UNSTREAM_STRING( &constant_bin[ 1105927 ], 384, 0 );
    const_str_digest_fa180d3d80537b2aa9f9227fc855b3ea = UNSTREAM_STRING( &constant_bin[ 1106311 ], 6, 0 );
    const_tuple_str_plain_SSLContext_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SSLContext_tuple, 0, const_str_plain_SSLContext ); Py_INCREF( const_str_plain_SSLContext );
    const_tuple_str_plain_self_str_plain_cafile_str_plain_capath_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cafile_str_plain_capath_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cafile_str_plain_capath_tuple, 1, const_str_plain_cafile ); Py_INCREF( const_str_plain_cafile );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cafile_str_plain_capath_tuple, 2, const_str_plain_capath ); Py_INCREF( const_str_plain_capath );
    const_str_digest_a101688642f990a79cf212c0b39629e0 = UNSTREAM_STRING( &constant_bin[ 1106317 ], 11, 0 );
    const_str_digest_265453facacdc76d97e06e2b7ad3f2c4 = UNSTREAM_STRING( &constant_bin[ 1106328 ], 306, 0 );
    const_str_digest_e7dc819c78ea2e0685e83afc15e2e26b = UNSTREAM_STRING( &constant_bin[ 1106634 ], 54, 0 );
    const_str_digest_af8fbc6bbb34bfe947825ffe4bd0065f = UNSTREAM_STRING( &constant_bin[ 1105842 ], 7, 0 );
    const_str_digest_fb43a38a807b012d6115ce5bca79e777 = UNSTREAM_STRING( &constant_bin[ 1106688 ], 6, 0 );
    const_int_pos_16777216 = PyInt_FromLong( 16777216l );
    const_str_digest_9ebaad0cbc72527ae950f03b507e0fc1 = UNSTREAM_STRING( &constant_bin[ 1106694 ], 24, 0 );
    const_str_digest_40d4c2a9acff45d215ea7c0bc7f6dfe1 = UNSTREAM_STRING( &constant_bin[ 1106718 ], 32, 0 );
    const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple, 0, const_str_plain_OP_NO_SSLv2 ); Py_INCREF( const_str_plain_OP_NO_SSLv2 );
    PyTuple_SET_ITEM( const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple, 1, const_str_plain_OP_NO_SSLv3 ); Py_INCREF( const_str_plain_OP_NO_SSLv3 );
    PyTuple_SET_ITEM( const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple, 2, const_str_plain_OP_NO_COMPRESSION ); Py_INCREF( const_str_plain_OP_NO_COMPRESSION );
    const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple, 0, const_str_plain_ssl_version ); Py_INCREF( const_str_plain_ssl_version );
    PyTuple_SET_ITEM( const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple, 1, const_str_plain_cert_reqs ); Py_INCREF( const_str_plain_cert_reqs );
    PyTuple_SET_ITEM( const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple, 2, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    PyTuple_SET_ITEM( const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple, 3, const_str_plain_ciphers ); Py_INCREF( const_str_plain_ciphers );
    PyTuple_SET_ITEM( const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple, 4, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    const_str_digest_6efba4feba5d3ac1fc26ca13b212a604 = UNSTREAM_STRING( &constant_bin[ 1051358 ], 17, 0 );
    const_str_plain_HASHFUNC_MAP = UNSTREAM_STRING( &constant_bin[ 1106750 ], 12, 1 );
    const_tuple_f6a01fdcad2a4358443ea98eee1471b3_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_f6a01fdcad2a4358443ea98eee1471b3_tuple, 0, const_str_plain_wrap_socket ); Py_INCREF( const_str_plain_wrap_socket );
    PyTuple_SET_ITEM( const_tuple_f6a01fdcad2a4358443ea98eee1471b3_tuple, 1, const_str_plain_CERT_NONE ); Py_INCREF( const_str_plain_CERT_NONE );
    PyTuple_SET_ITEM( const_tuple_f6a01fdcad2a4358443ea98eee1471b3_tuple, 2, const_str_plain_PROTOCOL_SSLv23 ); Py_INCREF( const_str_plain_PROTOCOL_SSLv23 );
    const_str_plain_DEFAULT_CIPHERS = UNSTREAM_STRING( &constant_bin[ 1106762 ], 15, 1 );
    const_str_plain_protocol_version = UNSTREAM_STRING( &constant_bin[ 22939 ], 16, 1 );
    const_str_digest_935dace93363545d379a5e2ed3994f38 = UNSTREAM_STRING( &constant_bin[ 1106777 ], 225, 0 );
    const_str_digest_873f89c91a6f1965f5902998a695e3d7 = UNSTREAM_STRING( &constant_bin[ 1107002 ], 487, 0 );
    const_str_plain__const_compare_digest_backport = UNSTREAM_STRING( &constant_bin[ 1107489 ], 30, 1 );
    const_tuple_str_plain_candidate_str_plain_res_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_candidate_str_plain_res_tuple, 0, const_str_plain_candidate ); Py_INCREF( const_str_plain_candidate );
    PyTuple_SET_ITEM( const_tuple_str_plain_candidate_str_plain_res_tuple, 1, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_str_digest_c6e5c4394838f24a74fcd724137f89e0 = UNSTREAM_STRING( &constant_bin[ 1107519 ], 1259, 0 );
    const_str_digest_9d4f19242df661a4c9d5362d33a94ce4 = UNSTREAM_STRING( &constant_bin[ 1108778 ], 24, 0 );
    const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple, 0, const_str_plain_SSLError ); Py_INCREF( const_str_plain_SSLError );
    PyTuple_SET_ITEM( const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple, 1, const_str_plain_InsecurePlatformWarning ); Py_INCREF( const_str_plain_InsecurePlatformWarning );
    PyTuple_SET_ITEM( const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple, 2, const_str_plain_SNIMissingWarning ); Py_INCREF( const_str_plain_SNIMissingWarning );
    const_str_digest_355d1696e5e022fa728033399bc0d0e8 = UNSTREAM_STRING( &constant_bin[ 1108802 ], 6, 0 );
    const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple, 0, const_str_plain_md5 ); Py_INCREF( const_str_plain_md5 );
    PyTuple_SET_ITEM( const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple, 1, const_str_plain_sha1 ); Py_INCREF( const_str_plain_sha1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple, 2, const_str_plain_sha256 ); Py_INCREF( const_str_plain_sha256 );
    const_int_pos_33554432 = PyInt_FromLong( 33554432l );
    const_str_digest_08cf86bfe868f74da347ad64484f1176 = UNSTREAM_STRING( &constant_bin[ 1108808 ], 9, 0 );
    const_str_digest_0735a7cb67d0fec10de5e4a8b02501c8 = UNSTREAM_STRING( &constant_bin[ 1108817 ], 34, 0 );
    const_str_digest_0fe010e1d38d2438d38213689d35c2f6 = UNSTREAM_STRING( &constant_bin[ 1108851 ], 11, 0 );
    const_tuple_str_chr_58_str_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_chr_58_str_empty_tuple, 0, const_str_chr_58 ); Py_INCREF( const_str_chr_58 );
    PyTuple_SET_ITEM( const_tuple_str_chr_58_str_empty_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );
    const_str_digest_e1b3a7a1a20db5825d0ccb741103186e = UNSTREAM_STRING( &constant_bin[ 1108862 ], 13, 0 );
    const_str_digest_f7e2a08279d197616743e7b5cf5d2f08 = UNSTREAM_STRING( &constant_bin[ 1108875 ], 53, 0 );
    const_tuple_str_digest_7c46323d1955d9b4a74a964a21041d91_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_7c46323d1955d9b4a74a964a21041d91_tuple, 0, const_str_digest_7c46323d1955d9b4a74a964a21041d91 ); Py_INCREF( const_str_digest_7c46323d1955d9b4a74a964a21041d91 );
    const_tuple_str_plain_self_str_plain_protocol_version_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_protocol_version_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_protocol_version_tuple, 1, const_str_plain_protocol_version ); Py_INCREF( const_str_plain_protocol_version );
    const_list_6d21a87f2069ec2831ba43615fd6e331_list = PyList_New( 16 );
    PyList_SET_ITEM( const_list_6d21a87f2069ec2831ba43615fd6e331_list, 0, const_str_digest_9d4f19242df661a4c9d5362d33a94ce4 ); Py_INCREF( const_str_digest_9d4f19242df661a4c9d5362d33a94ce4 );
    PyList_SET_ITEM( const_list_6d21a87f2069ec2831ba43615fd6e331_list, 1, const_str_digest_c1fe56cac1a6e686996ed34baa3f9615 ); Py_INCREF( const_str_digest_c1fe56cac1a6e686996ed34baa3f9615 );
    PyList_SET_ITEM( const_list_6d21a87f2069ec2831ba43615fd6e331_list, 2, const_str_digest_9ebaad0cbc72527ae950f03b507e0fc1 ); Py_INCREF( const_str_digest_9ebaad0cbc72527ae950f03b507e0fc1 );
    const_str_digest_5af34d61d2693f4cb5ec31c92baaebb5 = UNSTREAM_STRING( &constant_bin[ 1108928 ], 11, 0 );
    PyList_SET_ITEM( const_list_6d21a87f2069ec2831ba43615fd6e331_list, 3, const_str_digest_5af34d61d2693f4cb5ec31c92baaebb5 ); Py_INCREF( const_str_digest_5af34d61d2693f4cb5ec31c92baaebb5 );
    PyList_SET_ITEM( const_list_6d21a87f2069ec2831ba43615fd6e331_list, 4, const_str_digest_e1b3a7a1a20db5825d0ccb741103186e ); Py_INCREF( const_str_digest_e1b3a7a1a20db5825d0ccb741103186e );
    const_str_digest_d069314bcc014e8d1c0cdffc71176664 = UNSTREAM_STRING( &constant_bin[ 1108930 ], 9, 0 );
    PyList_SET_ITEM( const_list_6d21a87f2069ec2831ba43615fd6e331_list, 5, const_str_digest_d069314bcc014e8d1c0cdffc71176664 ); Py_INCREF( const_str_digest_d069314bcc014e8d1c0cdffc71176664 );
    PyList_SET_ITEM( const_list_6d21a87f2069ec2831ba43615fd6e331_list, 6, const_str_digest_a101688642f990a79cf212c0b39629e0 ); Py_INCREF( const_str_digest_a101688642f990a79cf212c0b39629e0 );
    const_str_digest_685a073df21318a8485ca83469aec2b9 = UNSTREAM_STRING( &constant_bin[ 1108939 ], 11, 0 );
    PyList_SET_ITEM( const_list_6d21a87f2069ec2831ba43615fd6e331_list, 7, const_str_digest_685a073df21318a8485ca83469aec2b9 ); Py_INCREF( const_str_digest_685a073df21318a8485ca83469aec2b9 );
    PyList_SET_ITEM( const_list_6d21a87f2069ec2831ba43615fd6e331_list, 8, const_str_digest_08cf86bfe868f74da347ad64484f1176 ); Py_INCREF( const_str_digest_08cf86bfe868f74da347ad64484f1176 );
    PyList_SET_ITEM( const_list_6d21a87f2069ec2831ba43615fd6e331_list, 9, const_str_digest_0fe010e1d38d2438d38213689d35c2f6 ); Py_INCREF( const_str_digest_0fe010e1d38d2438d38213689d35c2f6 );
    PyList_SET_ITEM( const_list_6d21a87f2069ec2831ba43615fd6e331_list, 10, const_str_digest_355d1696e5e022fa728033399bc0d0e8 ); Py_INCREF( const_str_digest_355d1696e5e022fa728033399bc0d0e8 );
    PyList_SET_ITEM( const_list_6d21a87f2069ec2831ba43615fd6e331_list, 11, const_str_digest_fdc80410a2b2c167f6d010d95118c7a2 ); Py_INCREF( const_str_digest_fdc80410a2b2c167f6d010d95118c7a2 );
    PyList_SET_ITEM( const_list_6d21a87f2069ec2831ba43615fd6e331_list, 12, const_str_digest_af8fbc6bbb34bfe947825ffe4bd0065f ); Py_INCREF( const_str_digest_af8fbc6bbb34bfe947825ffe4bd0065f );
    PyList_SET_ITEM( const_list_6d21a87f2069ec2831ba43615fd6e331_list, 13, const_str_digest_fa180d3d80537b2aa9f9227fc855b3ea ); Py_INCREF( const_str_digest_fa180d3d80537b2aa9f9227fc855b3ea );
    PyList_SET_ITEM( const_list_6d21a87f2069ec2831ba43615fd6e331_list, 14, const_str_digest_fb43a38a807b012d6115ce5bca79e777 ); Py_INCREF( const_str_digest_fb43a38a807b012d6115ce5bca79e777 );
    PyList_SET_ITEM( const_list_6d21a87f2069ec2831ba43615fd6e331_list, 15, const_str_digest_b1b851bd94b3604444b241240c75e7c3 ); Py_INCREF( const_str_digest_b1b851bd94b3604444b241240c75e7c3 );
    const_str_digest_8dea7a9de4b59b57c96f518f0d07104f = UNSTREAM_STRING( &constant_bin[ 1108950 ], 26, 0 );
    const_str_plain_load_default_certs = UNSTREAM_STRING( &constant_bin[ 1108976 ], 18, 1 );
    const_str_plain_ENOENT = UNSTREAM_STRING( &constant_bin[ 1108994 ], 6, 1 );
    const_str_digest_905877c86fc5e54980f5662d63a5bca0 = UNSTREAM_STRING( &constant_bin[ 1109000 ], 173, 0 );
    const_tuple_str_plain___str_plain_host_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain___str_plain_host_tuple, 0, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    PyTuple_SET_ITEM( const_tuple_str_plain___str_plain_host_tuple, 1, const_str_plain_host ); Py_INCREF( const_str_plain_host );
    const_tuple_int_pos_16777216_int_pos_33554432_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_16777216_int_pos_33554432_tuple, 0, const_int_pos_16777216 ); Py_INCREF( const_int_pos_16777216 );
    PyTuple_SET_ITEM( const_tuple_int_pos_16777216_int_pos_33554432_tuple, 1, const_int_pos_33554432 ); Py_INCREF( const_int_pos_33554432 );
    const_tuple_str_plain_HAS_SNI_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HAS_SNI_tuple, 0, const_str_plain_HAS_SNI ); Py_INCREF( const_str_plain_HAS_SNI );
    const_str_plain_PROTOCOL_ = UNSTREAM_STRING( &constant_bin[ 1065048 ], 9, 1 );
    const_str_digest_8a0a40c5e158ea9e745f39e0d70c38a5 = UNSTREAM_STRING( &constant_bin[ 1109173 ], 707, 0 );
    const_tuple_str_plain_self_str_plain_certfile_str_plain_keyfile_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_certfile_str_plain_keyfile_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_certfile_str_plain_keyfile_tuple, 1, const_str_plain_certfile ); Py_INCREF( const_str_plain_certfile );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_certfile_str_plain_keyfile_tuple, 2, const_str_plain_keyfile ); Py_INCREF( const_str_plain_keyfile );
    const_tuple_str_plain_hostname_str_plain_families_str_plain_af_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_hostname_str_plain_families_str_plain_af_tuple, 0, const_str_plain_hostname ); Py_INCREF( const_str_plain_hostname );
    PyTuple_SET_ITEM( const_tuple_str_plain_hostname_str_plain_families_str_plain_af_tuple, 1, const_str_plain_families ); Py_INCREF( const_str_plain_families );
    PyTuple_SET_ITEM( const_tuple_str_plain_hostname_str_plain_families_str_plain_af_tuple, 2, const_str_plain_af ); Py_INCREF( const_str_plain_af );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$util$ssl_( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_419bdb9e3c00be55156b6e00dbe897b1;
static PyCodeObject *codeobj_be51a5572141e67a09e71a643b4a4ed6;
static PyCodeObject *codeobj_10e93237740fef40771567baaf1df391;
static PyCodeObject *codeobj_7da4a8cb5118e7861de201b44ab73aa4;
static PyCodeObject *codeobj_7b53990ae52bb54447bd8cffc0a12fbb;
static PyCodeObject *codeobj_88e9f8c9c933060642a5c122efbdfbda;
static PyCodeObject *codeobj_8941bb54ae2602b7031f9954f0cd8833;
static PyCodeObject *codeobj_b732c3473252e55deccf9c615b3c6015;
static PyCodeObject *codeobj_cb02302809c3cef3cd313916018849e0;
static PyCodeObject *codeobj_c807408e505f3a2d842d20c6e1a5d17f;
static PyCodeObject *codeobj_460708522da41b92c1791d80566e7010;
static PyCodeObject *codeobj_d6ad9e74c315ee0853f0136f7d4401fd;
static PyCodeObject *codeobj_e462791b08cd57a3fb42762492b68e1c;
static PyCodeObject *codeobj_b5cd86ece8e7f1d7074e749ca7699102;
static PyCodeObject *codeobj_f13de2f6a7f0292a4421fe39407ad503;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_f7e2a08279d197616743e7b5cf5d2f08;
    codeobj_419bdb9e3c00be55156b6e00dbe897b1 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_8dea7a9de4b59b57c96f518f0d07104f, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_be51a5572141e67a09e71a643b4a4ed6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 118, const_tuple_str_plain_self_str_plain_protocol_version_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_10e93237740fef40771567baaf1df391 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__const_compare_digest_backport, 27, const_tuple_7f7a0b18e3f69c3d677814bc00472a5f_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_7da4a8cb5118e7861de201b44ab73aa4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_assert_fingerprint, 163, const_tuple_8a6a9087acf223607f8d761b05c3c635_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_7b53990ae52bb54447bd8cffc0a12fbb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_urllib3_context, 229, const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_88e9f8c9c933060642a5c122efbdfbda = MAKE_CODEOBJ( module_filename_obj, const_str_plain_inet_pton, 68, const_tuple_str_plain___str_plain_host_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_8941bb54ae2602b7031f9954f0cd8833 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_inet_pton, 74, const_tuple_str_plain___str_plain_host_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_b732c3473252e55deccf9c615b3c6015 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_ipaddress, 360, const_tuple_str_plain_hostname_str_plain_families_str_plain_af_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_cb02302809c3cef3cd313916018849e0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_cert_chain, 129, const_tuple_str_plain_self_str_plain_certfile_str_plain_keyfile_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_c807408e505f3a2d842d20c6e1a5d17f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_verify_locations, 133, const_tuple_str_plain_self_str_plain_cafile_str_plain_capath_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_460708522da41b92c1791d80566e7010 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_resolve_cert_reqs, 190, const_tuple_str_plain_candidate_str_plain_res_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_d6ad9e74c315ee0853f0136f7d4401fd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_resolve_ssl_version, 213, const_tuple_str_plain_candidate_str_plain_res_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_e462791b08cd57a3fb42762492b68e1c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_ciphers, 139, const_tuple_str_plain_self_str_plain_cipher_suite_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_b5cd86ece8e7f1d7074e749ca7699102 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ssl_wrap_socket, 291, const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple, 10, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_f13de2f6a7f0292a4421fe39407ad503 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wrap_socket, 142, const_tuple_9473549b7ba644563513e7e61e0dc810_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_7_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_10_resolve_cert_reqs(  );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_11_resolve_ssl_version(  );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_12_create_urllib3_context( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_13_ssl_wrap_socket( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_14_is_ipaddress(  );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_1__const_compare_digest_backport(  );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_2_inet_pton(  );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_3_inet_pton(  );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_4___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_5_load_cert_chain(  );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_6_load_verify_locations( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_7_set_ciphers(  );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_8_wrap_socket( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_9_assert_fingerprint(  );


// The module function definitions.
static PyObject *impl_urllib3$util$ssl_$$$function_1__const_compare_digest_backport( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *var_r = NULL;
    PyObject *var_result = NULL;
    PyObject *var_l = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_10e93237740fef40771567baaf1df391;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_10e93237740fef40771567baaf1df391 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_10e93237740fef40771567baaf1df391, codeobj_10e93237740fef40771567baaf1df391, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_10e93237740fef40771567baaf1df391 = cache_frame_10e93237740fef40771567baaf1df391;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_10e93237740fef40771567baaf1df391 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_10e93237740fef40771567baaf1df391 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_len_arg_2;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_abs );
        assert( tmp_called_name_1 != NULL );
        CHECK_OBJECT( par_a );
        tmp_len_arg_1 = par_a;
        tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_b );
        tmp_len_arg_2 = par_b;
        tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 34;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_10e93237740fef40771567baaf1df391->m_frame.f_lineno = 34;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_result == NULL );
        var_result = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_bytearray_arg_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_bytearray_arg_2;
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_zip );
        assert( tmp_called_name_2 != NULL );
        CHECK_OBJECT( par_a );
        tmp_bytearray_arg_1 = par_a;
        tmp_args_element_name_2 = BUILTIN_BYTEARRAY1( tmp_bytearray_arg_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_b );
        tmp_bytearray_arg_2 = par_b;
        tmp_args_element_name_3 = BUILTIN_BYTEARRAY1( tmp_bytearray_arg_2 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 35;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_10e93237740fef40771567baaf1df391->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
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
                type_description_1 = "ooooo";
                exception_lineno = 35;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_1, 0 );
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


            type_description_1 = "ooooo";
            exception_lineno = 35;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


            type_description_1 = "ooooo";
            exception_lineno = 35;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 35;
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

            type_description_1 = "ooooo";
            exception_lineno = 35;
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
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_l;
            var_l = tmp_assign_source_7;
            Py_INCREF( var_l );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_8;
            Py_INCREF( var_r );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( var_result );
        tmp_left_name_2 = var_result;
        CHECK_OBJECT( var_l );
        tmp_left_name_3 = var_l;
        CHECK_OBJECT( var_r );
        tmp_right_name_3 = var_r;
        tmp_right_name_2 = BINARY_OPERATION( PyNumber_Xor, tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = tmp_left_name_2;
        var_result = tmp_assign_source_9;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "ooooo";
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
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_result );
        tmp_compexpr_left_1 = var_result;
        tmp_compexpr_right_1 = const_int_0;
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10e93237740fef40771567baaf1df391 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_10e93237740fef40771567baaf1df391 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10e93237740fef40771567baaf1df391 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_10e93237740fef40771567baaf1df391, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_10e93237740fef40771567baaf1df391->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_10e93237740fef40771567baaf1df391, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_10e93237740fef40771567baaf1df391,
        type_description_1,
        par_a,
        par_b,
        var_r,
        var_result,
        var_l
    );


    // Release cached frame.
    if ( frame_10e93237740fef40771567baaf1df391 == cache_frame_10e93237740fef40771567baaf1df391 )
    {
        Py_DECREF( frame_10e93237740fef40771567baaf1df391 );
    }
    cache_frame_10e93237740fef40771567baaf1df391 = NULL;

    assertFrameObject( frame_10e93237740fef40771567baaf1df391 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_1__const_compare_digest_backport );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_1__const_compare_digest_backport );
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


static PyObject *impl_urllib3$util$ssl_$$$function_2_inet_pton( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par__ = python_pars[ 0 ];
    PyObject *par_host = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_88e9f8c9c933060642a5c122efbdfbda;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_88e9f8c9c933060642a5c122efbdfbda = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_88e9f8c9c933060642a5c122efbdfbda, codeobj_88e9f8c9c933060642a5c122efbdfbda, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *) );
    frame_88e9f8c9c933060642a5c122efbdfbda = cache_frame_88e9f8c9c933060642a5c122efbdfbda;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_88e9f8c9c933060642a5c122efbdfbda );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_88e9f8c9c933060642a5c122efbdfbda ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_host );
        tmp_isinstance_inst_1 = par_host;
        tmp_isinstance_cls_1 = (PyObject *)&PyString_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
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
            CHECK_OBJECT( par_host );
            tmp_called_instance_1 = par_host;
            frame_88e9f8c9c933060642a5c122efbdfbda->m_frame.f_lineno = 70;
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_plain_ascii_tuple, 0 ) );

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 70;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_host;
                assert( old != NULL );
                par_host = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ipaddress );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ipaddress );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ipaddress" );
            exception_tb = NULL;

            exception_lineno = 71;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( par_host );
        tmp_args_element_name_1 = par_host;
        frame_88e9f8c9c933060642a5c122efbdfbda->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_ip_address, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_88e9f8c9c933060642a5c122efbdfbda );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_88e9f8c9c933060642a5c122efbdfbda );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_88e9f8c9c933060642a5c122efbdfbda );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_88e9f8c9c933060642a5c122efbdfbda, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_88e9f8c9c933060642a5c122efbdfbda->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_88e9f8c9c933060642a5c122efbdfbda, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_88e9f8c9c933060642a5c122efbdfbda,
        type_description_1,
        par__,
        par_host
    );


    // Release cached frame.
    if ( frame_88e9f8c9c933060642a5c122efbdfbda == cache_frame_88e9f8c9c933060642a5c122efbdfbda )
    {
        Py_DECREF( frame_88e9f8c9c933060642a5c122efbdfbda );
    }
    cache_frame_88e9f8c9c933060642a5c122efbdfbda = NULL;

    assertFrameObject( frame_88e9f8c9c933060642a5c122efbdfbda );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_2_inet_pton );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_host );
    Py_DECREF( par_host );
    par_host = NULL;

    CHECK_OBJECT( (PyObject *)par__ );
    Py_DECREF( par__ );
    par__ = NULL;

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

    Py_XDECREF( par_host );
    par_host = NULL;

    CHECK_OBJECT( (PyObject *)par__ );
    Py_DECREF( par__ );
    par__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_2_inet_pton );
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


static PyObject *impl_urllib3$util$ssl_$$$function_3_inet_pton( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par__ = python_pars[ 0 ];
    PyObject *par_host = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_8941bb54ae2602b7031f9954f0cd8833;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8941bb54ae2602b7031f9954f0cd8833 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8941bb54ae2602b7031f9954f0cd8833, codeobj_8941bb54ae2602b7031f9954f0cd8833, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *) );
    frame_8941bb54ae2602b7031f9954f0cd8833 = cache_frame_8941bb54ae2602b7031f9954f0cd8833;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8941bb54ae2602b7031f9954f0cd8833 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8941bb54ae2602b7031f9954f0cd8833 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_socket );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "socket" );
            exception_tb = NULL;

            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_host );
        tmp_args_element_name_1 = par_host;
        frame_8941bb54ae2602b7031f9954f0cd8833->m_frame.f_lineno = 75;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_inet_aton, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8941bb54ae2602b7031f9954f0cd8833 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8941bb54ae2602b7031f9954f0cd8833 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8941bb54ae2602b7031f9954f0cd8833 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8941bb54ae2602b7031f9954f0cd8833, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8941bb54ae2602b7031f9954f0cd8833->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8941bb54ae2602b7031f9954f0cd8833, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8941bb54ae2602b7031f9954f0cd8833,
        type_description_1,
        par__,
        par_host
    );


    // Release cached frame.
    if ( frame_8941bb54ae2602b7031f9954f0cd8833 == cache_frame_8941bb54ae2602b7031f9954f0cd8833 )
    {
        Py_DECREF( frame_8941bb54ae2602b7031f9954f0cd8833 );
    }
    cache_frame_8941bb54ae2602b7031f9954f0cd8833 = NULL;

    assertFrameObject( frame_8941bb54ae2602b7031f9954f0cd8833 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_3_inet_pton );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_host );
    Py_DECREF( par_host );
    par_host = NULL;

    CHECK_OBJECT( (PyObject *)par__ );
    Py_DECREF( par__ );
    par__ = NULL;

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

    CHECK_OBJECT( (PyObject *)par_host );
    Py_DECREF( par_host );
    par_host = NULL;

    CHECK_OBJECT( (PyObject *)par__ );
    Py_DECREF( par__ );
    par__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_3_inet_pton );
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


static PyObject *impl_urllib3$util$ssl_$$$function_4___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_protocol_version = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_be51a5572141e67a09e71a643b4a4ed6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_be51a5572141e67a09e71a643b4a4ed6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_be51a5572141e67a09e71a643b4a4ed6, codeobj_be51a5572141e67a09e71a643b4a4ed6, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *) );
    frame_be51a5572141e67a09e71a643b4a4ed6 = cache_frame_be51a5572141e67a09e71a643b4a4ed6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_be51a5572141e67a09e71a643b4a4ed6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_be51a5572141e67a09e71a643b4a4ed6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_protocol_version );
        tmp_assattr_name_1 = par_protocol_version;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_protocol, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_False;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_check_hostname, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 121;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_assattr_target_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ssl" );
            exception_tb = NULL;

            exception_lineno = 122;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_CERT_NONE );
        if ( tmp_assattr_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_verify_mode, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_ca_certs, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_name_5 = const_int_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_options, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_name_6 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_certfile, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_name_7 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_keyfile, tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_name_8 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_ciphers, tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be51a5572141e67a09e71a643b4a4ed6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be51a5572141e67a09e71a643b4a4ed6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_be51a5572141e67a09e71a643b4a4ed6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_be51a5572141e67a09e71a643b4a4ed6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_be51a5572141e67a09e71a643b4a4ed6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_be51a5572141e67a09e71a643b4a4ed6,
        type_description_1,
        par_self,
        par_protocol_version
    );


    // Release cached frame.
    if ( frame_be51a5572141e67a09e71a643b4a4ed6 == cache_frame_be51a5572141e67a09e71a643b4a4ed6 )
    {
        Py_DECREF( frame_be51a5572141e67a09e71a643b4a4ed6 );
    }
    cache_frame_be51a5572141e67a09e71a643b4a4ed6 = NULL;

    assertFrameObject( frame_be51a5572141e67a09e71a643b4a4ed6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_4___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_protocol_version );
    Py_DECREF( par_protocol_version );
    par_protocol_version = NULL;

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

    CHECK_OBJECT( (PyObject *)par_protocol_version );
    Py_DECREF( par_protocol_version );
    par_protocol_version = NULL;

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
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_4___init__ );
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


static PyObject *impl_urllib3$util$ssl_$$$function_5_load_cert_chain( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_certfile = python_pars[ 1 ];
    PyObject *par_keyfile = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_cb02302809c3cef3cd313916018849e0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cb02302809c3cef3cd313916018849e0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cb02302809c3cef3cd313916018849e0, codeobj_cb02302809c3cef3cd313916018849e0, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cb02302809c3cef3cd313916018849e0 = cache_frame_cb02302809c3cef3cd313916018849e0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cb02302809c3cef3cd313916018849e0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cb02302809c3cef3cd313916018849e0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_certfile );
        tmp_assattr_name_1 = par_certfile;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_certfile, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_keyfile );
        tmp_assattr_name_2 = par_keyfile;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_keyfile, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb02302809c3cef3cd313916018849e0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb02302809c3cef3cd313916018849e0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cb02302809c3cef3cd313916018849e0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cb02302809c3cef3cd313916018849e0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cb02302809c3cef3cd313916018849e0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cb02302809c3cef3cd313916018849e0,
        type_description_1,
        par_self,
        par_certfile,
        par_keyfile
    );


    // Release cached frame.
    if ( frame_cb02302809c3cef3cd313916018849e0 == cache_frame_cb02302809c3cef3cd313916018849e0 )
    {
        Py_DECREF( frame_cb02302809c3cef3cd313916018849e0 );
    }
    cache_frame_cb02302809c3cef3cd313916018849e0 = NULL;

    assertFrameObject( frame_cb02302809c3cef3cd313916018849e0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_5_load_cert_chain );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_keyfile );
    Py_DECREF( par_keyfile );
    par_keyfile = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_5_load_cert_chain );
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


static PyObject *impl_urllib3$util$ssl_$$$function_6_load_verify_locations( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_cafile = python_pars[ 1 ];
    PyObject *par_capath = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_c807408e505f3a2d842d20c6e1a5d17f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c807408e505f3a2d842d20c6e1a5d17f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c807408e505f3a2d842d20c6e1a5d17f, codeobj_c807408e505f3a2d842d20c6e1a5d17f, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c807408e505f3a2d842d20c6e1a5d17f = cache_frame_c807408e505f3a2d842d20c6e1a5d17f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c807408e505f3a2d842d20c6e1a5d17f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c807408e505f3a2d842d20c6e1a5d17f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_cafile );
        tmp_assattr_name_1 = par_cafile;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_ca_certs, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_capath );
        tmp_compexpr_left_1 = par_capath;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "SSLError" );
                exception_tb = NULL;

                exception_lineno = 137;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            frame_c807408e505f3a2d842d20c6e1a5d17f->m_frame.f_lineno = 137;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_7c46323d1955d9b4a74a964a21041d91_tuple, 0 ) );

            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 137;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 137;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c807408e505f3a2d842d20c6e1a5d17f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c807408e505f3a2d842d20c6e1a5d17f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c807408e505f3a2d842d20c6e1a5d17f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c807408e505f3a2d842d20c6e1a5d17f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c807408e505f3a2d842d20c6e1a5d17f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c807408e505f3a2d842d20c6e1a5d17f,
        type_description_1,
        par_self,
        par_cafile,
        par_capath
    );


    // Release cached frame.
    if ( frame_c807408e505f3a2d842d20c6e1a5d17f == cache_frame_c807408e505f3a2d842d20c6e1a5d17f )
    {
        Py_DECREF( frame_c807408e505f3a2d842d20c6e1a5d17f );
    }
    cache_frame_c807408e505f3a2d842d20c6e1a5d17f = NULL;

    assertFrameObject( frame_c807408e505f3a2d842d20c6e1a5d17f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_6_load_verify_locations );
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

    CHECK_OBJECT( (PyObject *)par_capath );
    Py_DECREF( par_capath );
    par_capath = NULL;

    CHECK_OBJECT( (PyObject *)par_cafile );
    Py_DECREF( par_cafile );
    par_cafile = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_6_load_verify_locations );
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


static PyObject *impl_urllib3$util$ssl_$$$function_7_set_ciphers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_cipher_suite = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_e462791b08cd57a3fb42762492b68e1c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e462791b08cd57a3fb42762492b68e1c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e462791b08cd57a3fb42762492b68e1c, codeobj_e462791b08cd57a3fb42762492b68e1c, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *) );
    frame_e462791b08cd57a3fb42762492b68e1c = cache_frame_e462791b08cd57a3fb42762492b68e1c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e462791b08cd57a3fb42762492b68e1c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e462791b08cd57a3fb42762492b68e1c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_cipher_suite );
        tmp_assattr_name_1 = par_cipher_suite;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_ciphers, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e462791b08cd57a3fb42762492b68e1c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e462791b08cd57a3fb42762492b68e1c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e462791b08cd57a3fb42762492b68e1c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e462791b08cd57a3fb42762492b68e1c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e462791b08cd57a3fb42762492b68e1c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e462791b08cd57a3fb42762492b68e1c,
        type_description_1,
        par_self,
        par_cipher_suite
    );


    // Release cached frame.
    if ( frame_e462791b08cd57a3fb42762492b68e1c == cache_frame_e462791b08cd57a3fb42762492b68e1c )
    {
        Py_DECREF( frame_e462791b08cd57a3fb42762492b68e1c );
    }
    cache_frame_e462791b08cd57a3fb42762492b68e1c = NULL;

    assertFrameObject( frame_e462791b08cd57a3fb42762492b68e1c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_7_set_ciphers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cipher_suite );
    Py_DECREF( par_cipher_suite );
    par_cipher_suite = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cipher_suite );
    Py_DECREF( par_cipher_suite );
    par_cipher_suite = NULL;

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
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_7_set_ciphers );
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


static PyObject *impl_urllib3$util$ssl_$$$function_8_wrap_socket( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_socket = python_pars[ 1 ];
    PyObject *par_server_hostname = python_pars[ 2 ];
    PyObject *par_server_side = python_pars[ 3 ];
    PyObject *var_kwargs = NULL;
    struct Nuitka_FrameObject *frame_f13de2f6a7f0292a4421fe39407ad503;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f13de2f6a7f0292a4421fe39407ad503 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f13de2f6a7f0292a4421fe39407ad503, codeobj_f13de2f6a7f0292a4421fe39407ad503, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f13de2f6a7f0292a4421fe39407ad503 = cache_frame_f13de2f6a7f0292a4421fe39407ad503;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f13de2f6a7f0292a4421fe39407ad503 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f13de2f6a7f0292a4421fe39407ad503 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_warnings );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "warnings" );
            exception_tb = NULL;

            exception_lineno = 143;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = const_str_digest_265453facacdc76d97e06e2b7ad3f2c4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_InsecurePlatformWarning );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InsecurePlatformWarning );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "InsecurePlatformWarning" );
            exception_tb = NULL;

            exception_lineno = 150;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_2;
        frame_f13de2f6a7f0292a4421fe39407ad503->m_frame.f_lineno = 143;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_keyfile );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_keyfile;
        tmp_assign_source_1 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_certfile );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 154;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = const_str_plain_certfile;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ca_certs );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 155;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_3 = const_str_plain_ca_certs;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_verify_mode );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 156;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_4 = const_str_plain_cert_reqs;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_protocol );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 157;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_5 = const_str_plain_ssl_version;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_server_side );
        tmp_dict_value_6 = par_server_side;
        tmp_dict_key_6 = const_str_plain_server_side;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        assert( var_kwargs == NULL );
        var_kwargs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_source_name_7;
        PyObject *tmp_dircall_arg4_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_wrap_socket );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wrap_socket );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "wrap_socket" );
            exception_tb = NULL;

            exception_lineno = 160;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_3;
        CHECK_OBJECT( par_socket );
        tmp_tuple_element_1 = par_socket;
        tmp_dircall_arg2_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_7 = par_self;
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ciphers );
        if ( tmp_dict_value_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg2_1 );

            exception_lineno = 160;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_7 = const_str_plain_ciphers;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( var_kwargs );
        tmp_dircall_arg4_1 = var_kwargs;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg4_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___internal__$$$function_7_complex_call_helper_pos_keywords_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f13de2f6a7f0292a4421fe39407ad503 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f13de2f6a7f0292a4421fe39407ad503 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f13de2f6a7f0292a4421fe39407ad503 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f13de2f6a7f0292a4421fe39407ad503, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f13de2f6a7f0292a4421fe39407ad503->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f13de2f6a7f0292a4421fe39407ad503, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f13de2f6a7f0292a4421fe39407ad503,
        type_description_1,
        par_self,
        par_socket,
        par_server_hostname,
        par_server_side,
        var_kwargs
    );


    // Release cached frame.
    if ( frame_f13de2f6a7f0292a4421fe39407ad503 == cache_frame_f13de2f6a7f0292a4421fe39407ad503 )
    {
        Py_DECREF( frame_f13de2f6a7f0292a4421fe39407ad503 );
    }
    cache_frame_f13de2f6a7f0292a4421fe39407ad503 = NULL;

    assertFrameObject( frame_f13de2f6a7f0292a4421fe39407ad503 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_8_wrap_socket );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_server_hostname );
    Py_DECREF( par_server_hostname );
    par_server_hostname = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_socket );
    Py_DECREF( par_socket );
    par_socket = NULL;

    CHECK_OBJECT( (PyObject *)par_server_side );
    Py_DECREF( par_server_side );
    par_server_side = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_socket );
    Py_DECREF( par_socket );
    par_socket = NULL;

    CHECK_OBJECT( (PyObject *)par_server_side );
    Py_DECREF( par_server_side );
    par_server_side = NULL;

    Py_XDECREF( var_kwargs );
    var_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_8_wrap_socket );
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


static PyObject *impl_urllib3$util$ssl_$$$function_9_assert_fingerprint( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cert = python_pars[ 0 ];
    PyObject *par_fingerprint = python_pars[ 1 ];
    PyObject *var_cert_digest = NULL;
    PyObject *var_digest_length = NULL;
    PyObject *var_fingerprint_bytes = NULL;
    PyObject *var_hashfunc = NULL;
    struct Nuitka_FrameObject *frame_7da4a8cb5118e7861de201b44ab73aa4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7da4a8cb5118e7861de201b44ab73aa4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7da4a8cb5118e7861de201b44ab73aa4, codeobj_7da4a8cb5118e7861de201b44ab73aa4, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7da4a8cb5118e7861de201b44ab73aa4 = cache_frame_7da4a8cb5118e7861de201b44ab73aa4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7da4a8cb5118e7861de201b44ab73aa4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7da4a8cb5118e7861de201b44ab73aa4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_fingerprint );
        tmp_called_instance_2 = par_fingerprint;
        frame_7da4a8cb5118e7861de201b44ab73aa4->m_frame.f_lineno = 173;
        tmp_called_instance_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_chr_58_str_empty_tuple, 0 ) );

        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_7da4a8cb5118e7861de201b44ab73aa4->m_frame.f_lineno = 173;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lower );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_fingerprint;
            assert( old != NULL );
            par_fingerprint = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_fingerprint );
        tmp_len_arg_1 = par_fingerprint;
        tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_digest_length == NULL );
        var_digest_length = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_HASHFUNC_MAP );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HASHFUNC_MAP );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "HASHFUNC_MAP" );
            exception_tb = NULL;

            exception_lineno = 175;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_1;
        CHECK_OBJECT( var_digest_length );
        tmp_args_element_name_1 = var_digest_length;
        frame_7da4a8cb5118e7861de201b44ab73aa4->m_frame.f_lineno = 175;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_get, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_hashfunc == NULL );
        var_hashfunc = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_hashfunc );
        tmp_operand_name_1 = var_hashfunc;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "oooooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "SSLError" );
                exception_tb = NULL;

                exception_lineno = 177;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            tmp_called_instance_4 = const_str_digest_0735a7cb67d0fec10de5e4a8b02501c8;
            CHECK_OBJECT( par_fingerprint );
            tmp_args_element_name_3 = par_fingerprint;
            frame_7da4a8cb5118e7861de201b44ab73aa4->m_frame.f_lineno = 178;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_format, call_args );
            }

            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 178;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_7da4a8cb5118e7861de201b44ab73aa4->m_frame.f_lineno = 177;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 177;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 177;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_instance_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_unhexlify );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unhexlify );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "unhexlify" );
            exception_tb = NULL;

            exception_lineno = 181;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( par_fingerprint );
        tmp_called_instance_5 = par_fingerprint;
        frame_7da4a8cb5118e7861de201b44ab73aa4->m_frame.f_lineno = 181;
        tmp_args_element_name_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_encode );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_7da4a8cb5118e7861de201b44ab73aa4->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_fingerprint_bytes == NULL );
        var_fingerprint_bytes = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT( var_hashfunc );
        tmp_called_name_3 = var_hashfunc;
        CHECK_OBJECT( par_cert );
        tmp_args_element_name_5 = par_cert;
        frame_7da4a8cb5118e7861de201b44ab73aa4->m_frame.f_lineno = 183;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_called_instance_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_called_instance_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_7da4a8cb5118e7861de201b44ab73aa4->m_frame.f_lineno = 183;
        tmp_assign_source_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_digest );
        Py_DECREF( tmp_called_instance_6 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_cert_digest == NULL );
        var_cert_digest = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain__const_compare_digest );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__const_compare_digest );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_const_compare_digest" );
            exception_tb = NULL;

            exception_lineno = 185;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( var_cert_digest );
        tmp_args_element_name_6 = var_cert_digest;
        CHECK_OBJECT( var_fingerprint_bytes );
        tmp_args_element_name_7 = var_fingerprint_bytes;
        frame_7da4a8cb5118e7861de201b44ab73aa4->m_frame.f_lineno = 185;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "oooooo";
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_1;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_11;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "SSLError" );
                exception_tb = NULL;

                exception_lineno = 186;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_5;
            tmp_source_name_1 = const_str_digest_e7dc819c78ea2e0685e83afc15e2e26b;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
            assert( !(tmp_called_name_6 == NULL) );
            CHECK_OBJECT( par_fingerprint );
            tmp_args_element_name_9 = par_fingerprint;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_hexlify );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hexlify );
            }

            if ( tmp_mvar_value_6 == NULL )
            {
                Py_DECREF( tmp_called_name_6 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "hexlify" );
                exception_tb = NULL;

                exception_lineno = 187;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_7 = tmp_mvar_value_6;
            CHECK_OBJECT( var_cert_digest );
            tmp_args_element_name_11 = var_cert_digest;
            frame_7da4a8cb5118e7861de201b44ab73aa4->m_frame.f_lineno = 187;
            {
                PyObject *call_args[] = { tmp_args_element_name_11 };
                tmp_args_element_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 187;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_7da4a8cb5118e7861de201b44ab73aa4->m_frame.f_lineno = 186;
            {
                PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
                tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 186;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_7da4a8cb5118e7861de201b44ab73aa4->m_frame.f_lineno = 186;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_8 );
            if ( tmp_raise_type_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 186;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_2;
            exception_lineno = 186;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7da4a8cb5118e7861de201b44ab73aa4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7da4a8cb5118e7861de201b44ab73aa4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7da4a8cb5118e7861de201b44ab73aa4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7da4a8cb5118e7861de201b44ab73aa4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7da4a8cb5118e7861de201b44ab73aa4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7da4a8cb5118e7861de201b44ab73aa4,
        type_description_1,
        par_cert,
        par_fingerprint,
        var_cert_digest,
        var_digest_length,
        var_fingerprint_bytes,
        var_hashfunc
    );


    // Release cached frame.
    if ( frame_7da4a8cb5118e7861de201b44ab73aa4 == cache_frame_7da4a8cb5118e7861de201b44ab73aa4 )
    {
        Py_DECREF( frame_7da4a8cb5118e7861de201b44ab73aa4 );
    }
    cache_frame_7da4a8cb5118e7861de201b44ab73aa4 = NULL;

    assertFrameObject( frame_7da4a8cb5118e7861de201b44ab73aa4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_9_assert_fingerprint );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_cert_digest );
    Py_DECREF( var_cert_digest );
    var_cert_digest = NULL;

    CHECK_OBJECT( (PyObject *)var_digest_length );
    Py_DECREF( var_digest_length );
    var_digest_length = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_fingerprint );
    Py_DECREF( par_fingerprint );
    par_fingerprint = NULL;

    CHECK_OBJECT( (PyObject *)var_fingerprint_bytes );
    Py_DECREF( var_fingerprint_bytes );
    var_fingerprint_bytes = NULL;

    CHECK_OBJECT( (PyObject *)var_hashfunc );
    Py_DECREF( var_hashfunc );
    var_hashfunc = NULL;

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

    Py_XDECREF( var_cert_digest );
    var_cert_digest = NULL;

    Py_XDECREF( var_digest_length );
    var_digest_length = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_fingerprint );
    Py_DECREF( par_fingerprint );
    par_fingerprint = NULL;

    Py_XDECREF( var_fingerprint_bytes );
    var_fingerprint_bytes = NULL;

    Py_XDECREF( var_hashfunc );
    var_hashfunc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_9_assert_fingerprint );
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


static PyObject *impl_urllib3$util$ssl_$$$function_10_resolve_cert_reqs( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_candidate = python_pars[ 0 ];
    PyObject *var_res = NULL;
    struct Nuitka_FrameObject *frame_460708522da41b92c1791d80566e7010;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_460708522da41b92c1791d80566e7010 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_460708522da41b92c1791d80566e7010, codeobj_460708522da41b92c1791d80566e7010, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *) );
    frame_460708522da41b92c1791d80566e7010 = cache_frame_460708522da41b92c1791d80566e7010;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_460708522da41b92c1791d80566e7010 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_460708522da41b92c1791d80566e7010 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_candidate );
        tmp_compexpr_left_1 = par_candidate;
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
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_CERT_NONE );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CERT_NONE );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "CERT_NONE" );
                exception_tb = NULL;

                exception_lineno = 202;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_return_value = tmp_mvar_value_1;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_candidate );
        tmp_isinstance_inst_1 = par_candidate;
        tmp_isinstance_cls_1 = (PyObject *)&PyString_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_getattr_target_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_getattr_attr_1;
            PyObject *tmp_getattr_default_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "ssl" );
                exception_tb = NULL;

                exception_lineno = 205;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_getattr_target_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_candidate );
            tmp_getattr_attr_1 = par_candidate;
            tmp_getattr_default_1 = Py_None;
            tmp_assign_source_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 205;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert( var_res == NULL );
            var_res = tmp_assign_source_1;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( var_res );
            tmp_compexpr_left_2 = var_res;
            tmp_compexpr_right_2 = Py_None;
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
                PyObject *tmp_assign_source_2;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "ssl" );
                    exception_tb = NULL;

                    exception_lineno = 207;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }

                tmp_getattr_target_2 = tmp_mvar_value_3;
                tmp_left_name_1 = const_str_plain_CERT_;
                CHECK_OBJECT( par_candidate );
                tmp_right_name_1 = par_candidate;
                tmp_getattr_attr_2 = BINARY_OPERATION_ADD_STR_OBJECT( tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_getattr_attr_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 207;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_2 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, NULL );
                Py_DECREF( tmp_getattr_attr_2 );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 207;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_res;
                    assert( old != NULL );
                    var_res = tmp_assign_source_2;
                    Py_DECREF( old );
                }

            }
            branch_no_3:;
        }
        CHECK_OBJECT( var_res );
        tmp_return_value = var_res;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_460708522da41b92c1791d80566e7010 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_460708522da41b92c1791d80566e7010 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_460708522da41b92c1791d80566e7010 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_460708522da41b92c1791d80566e7010, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_460708522da41b92c1791d80566e7010->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_460708522da41b92c1791d80566e7010, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_460708522da41b92c1791d80566e7010,
        type_description_1,
        par_candidate,
        var_res
    );


    // Release cached frame.
    if ( frame_460708522da41b92c1791d80566e7010 == cache_frame_460708522da41b92c1791d80566e7010 )
    {
        Py_DECREF( frame_460708522da41b92c1791d80566e7010 );
    }
    cache_frame_460708522da41b92c1791d80566e7010 = NULL;

    assertFrameObject( frame_460708522da41b92c1791d80566e7010 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_candidate );
    tmp_return_value = par_candidate;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_10_resolve_cert_reqs );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)par_candidate );
    Py_DECREF( par_candidate );
    par_candidate = NULL;

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

    Py_XDECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)par_candidate );
    Py_DECREF( par_candidate );
    par_candidate = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_10_resolve_cert_reqs );
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


static PyObject *impl_urllib3$util$ssl_$$$function_11_resolve_ssl_version( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_candidate = python_pars[ 0 ];
    PyObject *var_res = NULL;
    struct Nuitka_FrameObject *frame_d6ad9e74c315ee0853f0136f7d4401fd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_d6ad9e74c315ee0853f0136f7d4401fd = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d6ad9e74c315ee0853f0136f7d4401fd, codeobj_d6ad9e74c315ee0853f0136f7d4401fd, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *) );
    frame_d6ad9e74c315ee0853f0136f7d4401fd = cache_frame_d6ad9e74c315ee0853f0136f7d4401fd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d6ad9e74c315ee0853f0136f7d4401fd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d6ad9e74c315ee0853f0136f7d4401fd ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_candidate );
        tmp_compexpr_left_1 = par_candidate;
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
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_PROTOCOL_SSLv23 );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PROTOCOL_SSLv23 );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "PROTOCOL_SSLv23" );
                exception_tb = NULL;

                exception_lineno = 218;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_return_value = tmp_mvar_value_1;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_candidate );
        tmp_isinstance_inst_1 = par_candidate;
        tmp_isinstance_cls_1 = (PyObject *)&PyString_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_getattr_target_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_getattr_attr_1;
            PyObject *tmp_getattr_default_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "ssl" );
                exception_tb = NULL;

                exception_lineno = 221;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_getattr_target_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_candidate );
            tmp_getattr_attr_1 = par_candidate;
            tmp_getattr_default_1 = Py_None;
            tmp_assign_source_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 221;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert( var_res == NULL );
            var_res = tmp_assign_source_1;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( var_res );
            tmp_compexpr_left_2 = var_res;
            tmp_compexpr_right_2 = Py_None;
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
                PyObject *tmp_assign_source_2;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "ssl" );
                    exception_tb = NULL;

                    exception_lineno = 223;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }

                tmp_getattr_target_2 = tmp_mvar_value_3;
                tmp_left_name_1 = const_str_plain_PROTOCOL_;
                CHECK_OBJECT( par_candidate );
                tmp_right_name_1 = par_candidate;
                tmp_getattr_attr_2 = BINARY_OPERATION_ADD_STR_OBJECT( tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_getattr_attr_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 223;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_2 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, NULL );
                Py_DECREF( tmp_getattr_attr_2 );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 223;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_res;
                    assert( old != NULL );
                    var_res = tmp_assign_source_2;
                    Py_DECREF( old );
                }

            }
            branch_no_3:;
        }
        CHECK_OBJECT( var_res );
        tmp_return_value = var_res;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d6ad9e74c315ee0853f0136f7d4401fd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d6ad9e74c315ee0853f0136f7d4401fd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d6ad9e74c315ee0853f0136f7d4401fd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d6ad9e74c315ee0853f0136f7d4401fd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d6ad9e74c315ee0853f0136f7d4401fd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d6ad9e74c315ee0853f0136f7d4401fd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d6ad9e74c315ee0853f0136f7d4401fd,
        type_description_1,
        par_candidate,
        var_res
    );


    // Release cached frame.
    if ( frame_d6ad9e74c315ee0853f0136f7d4401fd == cache_frame_d6ad9e74c315ee0853f0136f7d4401fd )
    {
        Py_DECREF( frame_d6ad9e74c315ee0853f0136f7d4401fd );
    }
    cache_frame_d6ad9e74c315ee0853f0136f7d4401fd = NULL;

    assertFrameObject( frame_d6ad9e74c315ee0853f0136f7d4401fd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_candidate );
    tmp_return_value = par_candidate;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_11_resolve_ssl_version );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)par_candidate );
    Py_DECREF( par_candidate );
    par_candidate = NULL;

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

    Py_XDECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)par_candidate );
    Py_DECREF( par_candidate );
    par_candidate = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_11_resolve_ssl_version );
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


static PyObject *impl_urllib3$util$ssl_$$$function_12_create_urllib3_context( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ssl_version = python_pars[ 0 ];
    PyObject *par_cert_reqs = python_pars[ 1 ];
    PyObject *par_options = python_pars[ 2 ];
    PyObject *par_ciphers = python_pars[ 3 ];
    PyObject *var_context = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_7b53990ae52bb54447bd8cffc0a12fbb;
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
    static struct Nuitka_FrameObject *cache_frame_7b53990ae52bb54447bd8cffc0a12fbb = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7b53990ae52bb54447bd8cffc0a12fbb, codeobj_7b53990ae52bb54447bd8cffc0a12fbb, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7b53990ae52bb54447bd8cffc0a12fbb = cache_frame_7b53990ae52bb54447bd8cffc0a12fbb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7b53990ae52bb54447bd8cffc0a12fbb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7b53990ae52bb54447bd8cffc0a12fbb ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLContext );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLContext );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "SSLContext" );
            exception_tb = NULL;

            exception_lineno = 264;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_ssl_version );
        tmp_or_left_value_1 = par_ssl_version;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;
            type_description_1 = "ooooo";
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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ssl" );
            exception_tb = NULL;

            exception_lineno = 264;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_or_right_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_PROTOCOL_SSLv23 );
        if ( tmp_or_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF( tmp_or_left_value_1 );
        tmp_args_element_name_1 = tmp_or_left_value_1;
        or_end_1:;
        frame_7b53990ae52bb54447bd8cffc0a12fbb->m_frame.f_lineno = 264;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_context == NULL );
        var_context = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT( var_context );
        tmp_source_name_2 = var_context;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_set_ciphers );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 266;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ciphers );
        tmp_or_left_value_2 = par_ciphers;
        tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
        if ( tmp_or_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 266;
            type_description_1 = "ooooo";
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
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_DEFAULT_CIPHERS );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_CIPHERS );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "DEFAULT_CIPHERS" );
            exception_tb = NULL;

            exception_lineno = 266;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_or_right_value_2 = tmp_mvar_value_3;
        tmp_args_element_name_2 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_args_element_name_2 = tmp_or_left_value_2;
        or_end_2:;
        frame_7b53990ae52bb54447bd8cffc0a12fbb->m_frame.f_lineno = 266;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 266;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_4;
        CHECK_OBJECT( par_cert_reqs );
        tmp_compexpr_left_1 = par_cert_reqs;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ssl" );
            exception_tb = NULL;

            exception_lineno = 269;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_4;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_CERT_REQUIRED );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( par_cert_reqs );
        tmp_assign_source_2 = par_cert_reqs;
        Py_INCREF( tmp_assign_source_2 );
        condexpr_end_1:;
        {
            PyObject *old = par_cert_reqs;
            assert( old != NULL );
            par_cert_reqs = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_options );
        tmp_compexpr_left_2 = par_options;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        Py_XDECREF( par_options );
        par_options = NULL;

        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_mvar_value_5;
            tmp_left_name_1 = const_int_0;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv2 );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv2 );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "OP_NO_SSLv2" );
                exception_tb = NULL;

                exception_lineno = 274;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_1 = tmp_mvar_value_5;
            tmp_assign_source_3 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 274;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( par_options == NULL );
            par_options = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_mvar_value_6;
            CHECK_OBJECT( par_options );
            tmp_left_name_2 = par_options;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv3 );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv3 );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "OP_NO_SSLv3" );
                exception_tb = NULL;

                exception_lineno = 276;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_2 = tmp_mvar_value_6;
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 276;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = tmp_left_name_2;
            par_options = tmp_assign_source_4;

        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_mvar_value_7;
            CHECK_OBJECT( par_options );
            tmp_left_name_3 = par_options;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_COMPRESSION );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OP_NO_COMPRESSION );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "OP_NO_COMPRESSION" );
                exception_tb = NULL;

                exception_lineno = 279;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_3 = tmp_mvar_value_7;
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 279;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_5 = tmp_left_name_3;
            par_options = tmp_assign_source_5;

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( var_context );
        tmp_source_name_4 = var_context;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_options );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 281;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_4 = tmp_inplace_assign_attr_1__start;
        CHECK_OBJECT( par_options );
        tmp_right_name_4 = par_options;
        tmp_assign_source_7 = BINARY_OPERATION( PyNumber_InPlaceOr, tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 281;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT( var_context );
        tmp_assattr_target_1 = var_context;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_options, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 281;
            type_description_1 = "ooooo";
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
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_cert_reqs );
        tmp_assattr_name_2 = par_cert_reqs;
        CHECK_OBJECT( var_context );
        tmp_assattr_target_2 = var_context;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_verify_mode, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 283;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT( var_context );
        tmp_getattr_target_1 = var_context;
        tmp_getattr_attr_1 = const_str_plain_check_hostname;
        tmp_getattr_default_1 = Py_None;
        tmp_compexpr_left_3 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 284;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_3 );
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
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_assattr_target_3;
            tmp_assattr_name_3 = Py_False;
            CHECK_OBJECT( var_context );
            tmp_assattr_target_3 = var_context;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_check_hostname, tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 287;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b53990ae52bb54447bd8cffc0a12fbb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b53990ae52bb54447bd8cffc0a12fbb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7b53990ae52bb54447bd8cffc0a12fbb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7b53990ae52bb54447bd8cffc0a12fbb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7b53990ae52bb54447bd8cffc0a12fbb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7b53990ae52bb54447bd8cffc0a12fbb,
        type_description_1,
        par_ssl_version,
        par_cert_reqs,
        par_options,
        par_ciphers,
        var_context
    );


    // Release cached frame.
    if ( frame_7b53990ae52bb54447bd8cffc0a12fbb == cache_frame_7b53990ae52bb54447bd8cffc0a12fbb )
    {
        Py_DECREF( frame_7b53990ae52bb54447bd8cffc0a12fbb );
    }
    cache_frame_7b53990ae52bb54447bd8cffc0a12fbb = NULL;

    assertFrameObject( frame_7b53990ae52bb54447bd8cffc0a12fbb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_context );
    tmp_return_value = var_context;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_12_create_urllib3_context );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ciphers );
    Py_DECREF( par_ciphers );
    par_ciphers = NULL;

    CHECK_OBJECT( (PyObject *)par_ssl_version );
    Py_DECREF( par_ssl_version );
    par_ssl_version = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

    CHECK_OBJECT( (PyObject *)var_context );
    Py_DECREF( var_context );
    var_context = NULL;

    CHECK_OBJECT( (PyObject *)par_cert_reqs );
    Py_DECREF( par_cert_reqs );
    par_cert_reqs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ciphers );
    Py_DECREF( par_ciphers );
    par_ciphers = NULL;

    CHECK_OBJECT( (PyObject *)par_ssl_version );
    Py_DECREF( par_ssl_version );
    par_ssl_version = NULL;

    Py_XDECREF( par_options );
    par_options = NULL;

    Py_XDECREF( var_context );
    var_context = NULL;

    CHECK_OBJECT( (PyObject *)par_cert_reqs );
    Py_DECREF( par_cert_reqs );
    par_cert_reqs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_12_create_urllib3_context );
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


static PyObject *impl_urllib3$util$ssl_$$$function_13_ssl_wrap_socket( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sock = python_pars[ 0 ];
    PyObject *par_keyfile = python_pars[ 1 ];
    PyObject *par_certfile = python_pars[ 2 ];
    PyObject *par_cert_reqs = python_pars[ 3 ];
    PyObject *par_ca_certs = python_pars[ 4 ];
    PyObject *par_server_hostname = python_pars[ 5 ];
    PyObject *par_ssl_version = python_pars[ 6 ];
    PyObject *par_ciphers = python_pars[ 7 ];
    PyObject *par_ssl_context = python_pars[ 8 ];
    PyObject *par_ca_cert_dir = python_pars[ 9 ];
    PyObject *var_context = NULL;
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_b5cd86ece8e7f1d7074e749ca7699102;
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
    static struct Nuitka_FrameObject *cache_frame_b5cd86ece8e7f1d7074e749ca7699102 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( par_ssl_context );
        tmp_assign_source_1 = par_ssl_context;
        assert( var_context == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_context = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b5cd86ece8e7f1d7074e749ca7699102, codeobj_b5cd86ece8e7f1d7074e749ca7699102, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b5cd86ece8e7f1d7074e749ca7699102 = cache_frame_b5cd86ece8e7f1d7074e749ca7699102;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b5cd86ece8e7f1d7074e749ca7699102 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b5cd86ece8e7f1d7074e749ca7699102 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_context );
        tmp_compexpr_left_1 = var_context;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_create_urllib3_context );

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

                exception_lineno = 316;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_ssl_version );
            tmp_tuple_element_1 = par_ssl_version;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_cert_reqs );
            tmp_tuple_element_1 = par_cert_reqs;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( par_ciphers );
            tmp_dict_value_1 = par_ciphers;
            tmp_dict_key_1 = const_str_plain_ciphers;
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_b5cd86ece8e7f1d7074e749ca7699102->m_frame.f_lineno = 316;
            tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 316;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_context;
                assert( old != NULL );
                var_context = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
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


            exception_lineno = 319;
            type_description_1 = "oooooooooooo";
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


            exception_lineno = 319;
            type_description_1 = "oooooooooooo";
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
        // Tried code:
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( var_context );
            tmp_called_instance_1 = var_context;
            CHECK_OBJECT( par_ca_certs );
            tmp_args_element_name_1 = par_ca_certs;
            CHECK_OBJECT( par_ca_cert_dir );
            tmp_args_element_name_2 = par_ca_cert_dir;
            frame_b5cd86ece8e7f1d7074e749ca7699102->m_frame.f_lineno = 321;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_load_verify_locations, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 321;
                type_description_1 = "oooooooooooo";
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
        PRESERVE_FRAME_EXCEPTION( frame_b5cd86ece8e7f1d7074e749ca7699102 );
        if ( exception_keeper_tb_1 == NULL )
        {
            exception_keeper_tb_1 = MAKE_TRACEBACK( frame_b5cd86ece8e7f1d7074e749ca7699102, exception_keeper_lineno_1 );
        }
        else if ( exception_keeper_lineno_1 != 0 )
        {
            exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_b5cd86ece8e7f1d7074e749ca7699102, exception_keeper_lineno_1 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_2 = PyExc_IOError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 322;
                type_description_1 = "oooooooooooo";
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
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_3;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "SSLError" );
                    exception_tb = NULL;

                    exception_lineno = 323;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_2 = tmp_mvar_value_2;
                CHECK_OBJECT( var_e );
                tmp_args_element_name_3 = var_e;
                frame_b5cd86ece8e7f1d7074e749ca7699102->m_frame.f_lineno = 323;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                }

                if ( tmp_raise_type_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 323;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_1;
                exception_lineno = 323;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
                tmp_compexpr_right_3 = PyExc_OSError;
                tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 326;
                    type_description_1 = "oooooooooooo";
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
                    nuitka_bool tmp_condition_result_5;
                    PyObject *tmp_compexpr_left_4;
                    PyObject *tmp_compexpr_right_4;
                    PyObject *tmp_source_name_1;
                    PyObject *tmp_source_name_2;
                    PyObject *tmp_mvar_value_3;
                    CHECK_OBJECT( var_e );
                    tmp_source_name_1 = var_e;
                    tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_errno );
                    if ( tmp_compexpr_left_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 327;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_errno );

                    if (unlikely( tmp_mvar_value_3 == NULL ))
                    {
                        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_errno );
                    }

                    if ( tmp_mvar_value_3 == NULL )
                    {
                        Py_DECREF( tmp_compexpr_left_4 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "errno" );
                        exception_tb = NULL;

                        exception_lineno = 327;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_2 = tmp_mvar_value_3;
                    tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ENOENT );
                    if ( tmp_compexpr_right_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_compexpr_left_4 );

                        exception_lineno = 327;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                    Py_DECREF( tmp_compexpr_left_4 );
                    Py_DECREF( tmp_compexpr_right_4 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 327;
                        type_description_1 = "oooooooooooo";
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
                        PyObject *tmp_raise_type_2;
                        PyObject *tmp_called_name_3;
                        PyObject *tmp_mvar_value_4;
                        PyObject *tmp_args_element_name_4;
                        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError );

                        if (unlikely( tmp_mvar_value_4 == NULL ))
                        {
                            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
                        }

                        if ( tmp_mvar_value_4 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyString_FromFormat( "global name '%s' is not defined", "SSLError" );
                            exception_tb = NULL;

                            exception_lineno = 328;
                            type_description_1 = "oooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_name_3 = tmp_mvar_value_4;
                        CHECK_OBJECT( var_e );
                        tmp_args_element_name_4 = var_e;
                        frame_b5cd86ece8e7f1d7074e749ca7699102->m_frame.f_lineno = 328;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_4 };
                            tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                        }

                        if ( tmp_raise_type_2 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 328;
                            type_description_1 = "oooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        exception_type = tmp_raise_type_2;
                        exception_lineno = 328;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    branch_no_5:;
                }
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 329;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_b5cd86ece8e7f1d7074e749ca7699102->m_frame) frame_b5cd86ece8e7f1d7074e749ca7699102->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
                goto branch_end_4;
                branch_no_4:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 320;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_b5cd86ece8e7f1d7074e749ca7699102->m_frame) frame_b5cd86ece8e7f1d7074e749ca7699102->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
                branch_end_4:;
            }
            branch_end_3:;
        }
        // End of try:
        try_end_1:;
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_getattr_target_1;
            PyObject *tmp_getattr_attr_1;
            PyObject *tmp_getattr_default_1;
            CHECK_OBJECT( var_context );
            tmp_getattr_target_1 = var_context;
            tmp_getattr_attr_1 = const_str_plain_load_default_certs;
            tmp_getattr_default_1 = Py_None;
            tmp_compexpr_left_5 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
            if ( tmp_compexpr_left_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 330;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_5 = Py_None;
            tmp_condition_result_6 = ( tmp_compexpr_left_5 != tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_compexpr_left_5 );
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
                PyObject *tmp_called_instance_2;
                PyObject *tmp_call_result_2;
                CHECK_OBJECT( var_context );
                tmp_called_instance_2 = var_context;
                frame_b5cd86ece8e7f1d7074e749ca7699102->m_frame.f_lineno = 332;
                tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_load_default_certs );
                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 332;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            branch_no_6:;
        }
        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_3;
        CHECK_OBJECT( par_certfile );
        tmp_truth_name_3 = CHECK_IF_TRUE( par_certfile );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_3;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            CHECK_OBJECT( var_context );
            tmp_called_instance_3 = var_context;
            CHECK_OBJECT( par_certfile );
            tmp_args_element_name_5 = par_certfile;
            CHECK_OBJECT( par_keyfile );
            tmp_args_element_name_6 = par_keyfile;
            frame_b5cd86ece8e7f1d7074e749ca7699102->m_frame.f_lineno = 335;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_call_result_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_load_cert_chain, call_args );
            }

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 335;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_7:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_mvar_value_6;
        int tmp_truth_name_4;
        CHECK_OBJECT( par_server_hostname );
        tmp_compexpr_left_6 = par_server_hostname;
        tmp_compexpr_right_6 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_6 != tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_is_ipaddress );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_ipaddress );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "is_ipaddress" );
            exception_tb = NULL;

            exception_lineno = 341;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_5;
        CHECK_OBJECT( par_server_hostname );
        tmp_args_element_name_7 = par_server_hostname;
        frame_b5cd86ece8e7f1d7074e749ca7699102->m_frame.f_lineno = 341;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 341;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 341;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_value_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_or_left_value_2 = tmp_and_left_value_1;
        and_end_1:;
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_2 == 1 )
        {
            goto or_left_2;
        }
        else
        {
            goto or_right_2;
        }
        or_right_2:;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_IS_SECURETRANSPORT );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IS_SECURETRANSPORT );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "IS_SECURETRANSPORT" );
            exception_tb = NULL;

            exception_lineno = 342;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_4 = CHECK_IF_TRUE( tmp_mvar_value_6 );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_8 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_8 = tmp_or_left_value_2;
        or_end_2:;
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
            nuitka_bool tmp_condition_result_9;
            int tmp_and_left_truth_2;
            nuitka_bool tmp_and_left_value_2;
            nuitka_bool tmp_and_right_value_2;
            PyObject *tmp_mvar_value_7;
            int tmp_truth_name_5;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_HAS_SNI );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HAS_SNI );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "HAS_SNI" );
                exception_tb = NULL;

                exception_lineno = 343;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_truth_name_5 = CHECK_IF_TRUE( tmp_mvar_value_7 );
            if ( tmp_truth_name_5 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 343;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_2 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            CHECK_OBJECT( par_server_hostname );
            tmp_compexpr_left_7 = par_server_hostname;
            tmp_compexpr_right_7 = Py_None;
            tmp_and_right_value_2 = ( tmp_compexpr_left_7 != tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_9 = tmp_and_right_value_2;
            goto and_end_2;
            and_left_2:;
            tmp_condition_result_9 = tmp_and_left_value_2;
            and_end_2:;
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
                PyObject *tmp_called_name_5;
                PyObject *tmp_source_name_3;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_kw_name_2;
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                CHECK_OBJECT( var_context );
                tmp_source_name_3 = var_context;
                tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_wrap_socket );
                if ( tmp_called_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 344;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_sock );
                tmp_tuple_element_2 = par_sock;
                tmp_args_name_2 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
                CHECK_OBJECT( par_server_hostname );
                tmp_dict_value_2 = par_server_hostname;
                tmp_dict_key_2 = const_str_plain_server_hostname;
                tmp_kw_name_2 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
                assert( !(tmp_res != 0) );
                frame_b5cd86ece8e7f1d7074e749ca7699102->m_frame.f_lineno = 344;
                tmp_return_value = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_args_name_2 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 344;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_no_9:;
        }
        {
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_call_result_4;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_mvar_value_9;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_warnings );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "warnings" );
                exception_tb = NULL;

                exception_lineno = 346;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_8;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_warn );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 346;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_8 = const_str_digest_1f7b5ce5a77b16d07a45e4d29e803bbc;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SNIMissingWarning );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SNIMissingWarning );
            }

            if ( tmp_mvar_value_9 == NULL )
            {
                Py_DECREF( tmp_called_name_6 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "SNIMissingWarning" );
                exception_tb = NULL;

                exception_lineno = 354;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_9 = tmp_mvar_value_9;
            frame_b5cd86ece8e7f1d7074e749ca7699102->m_frame.f_lineno = 346;
            {
                PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
                tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 346;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        branch_no_8:;
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_10;
        CHECK_OBJECT( var_context );
        tmp_called_instance_4 = var_context;
        CHECK_OBJECT( par_sock );
        tmp_args_element_name_10 = par_sock;
        frame_b5cd86ece8e7f1d7074e749ca7699102->m_frame.f_lineno = 357;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_wrap_socket, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 357;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_b5cd86ece8e7f1d7074e749ca7699102 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_b5cd86ece8e7f1d7074e749ca7699102 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_b5cd86ece8e7f1d7074e749ca7699102 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b5cd86ece8e7f1d7074e749ca7699102, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b5cd86ece8e7f1d7074e749ca7699102->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b5cd86ece8e7f1d7074e749ca7699102, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b5cd86ece8e7f1d7074e749ca7699102,
        type_description_1,
        par_sock,
        par_keyfile,
        par_certfile,
        par_cert_reqs,
        par_ca_certs,
        par_server_hostname,
        par_ssl_version,
        par_ciphers,
        par_ssl_context,
        par_ca_cert_dir,
        var_context,
        var_e
    );


    // Release cached frame.
    if ( frame_b5cd86ece8e7f1d7074e749ca7699102 == cache_frame_b5cd86ece8e7f1d7074e749ca7699102 )
    {
        Py_DECREF( frame_b5cd86ece8e7f1d7074e749ca7699102 );
    }
    cache_frame_b5cd86ece8e7f1d7074e749ca7699102 = NULL;

    assertFrameObject( frame_b5cd86ece8e7f1d7074e749ca7699102 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_13_ssl_wrap_socket );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_server_hostname );
    Py_DECREF( par_server_hostname );
    par_server_hostname = NULL;

    CHECK_OBJECT( (PyObject *)par_certfile );
    Py_DECREF( par_certfile );
    par_certfile = NULL;

    CHECK_OBJECT( (PyObject *)par_ssl_version );
    Py_DECREF( par_ssl_version );
    par_ssl_version = NULL;

    CHECK_OBJECT( (PyObject *)par_ciphers );
    Py_DECREF( par_ciphers );
    par_ciphers = NULL;

    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_ssl_context );
    Py_DECREF( par_ssl_context );
    par_ssl_context = NULL;

    CHECK_OBJECT( (PyObject *)par_ca_cert_dir );
    Py_DECREF( par_ca_cert_dir );
    par_ca_cert_dir = NULL;

    CHECK_OBJECT( (PyObject *)var_context );
    Py_DECREF( var_context );
    var_context = NULL;

    CHECK_OBJECT( (PyObject *)par_cert_reqs );
    Py_DECREF( par_cert_reqs );
    par_cert_reqs = NULL;

    CHECK_OBJECT( (PyObject *)par_ca_certs );
    Py_DECREF( par_ca_certs );
    par_ca_certs = NULL;

    CHECK_OBJECT( (PyObject *)par_keyfile );
    Py_DECREF( par_keyfile );
    par_keyfile = NULL;

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

    CHECK_OBJECT( (PyObject *)par_server_hostname );
    Py_DECREF( par_server_hostname );
    par_server_hostname = NULL;

    CHECK_OBJECT( (PyObject *)par_certfile );
    Py_DECREF( par_certfile );
    par_certfile = NULL;

    CHECK_OBJECT( (PyObject *)par_ssl_version );
    Py_DECREF( par_ssl_version );
    par_ssl_version = NULL;

    CHECK_OBJECT( (PyObject *)par_ciphers );
    Py_DECREF( par_ciphers );
    par_ciphers = NULL;

    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_ssl_context );
    Py_DECREF( par_ssl_context );
    par_ssl_context = NULL;

    CHECK_OBJECT( (PyObject *)par_ca_cert_dir );
    Py_DECREF( par_ca_cert_dir );
    par_ca_cert_dir = NULL;

    Py_XDECREF( var_context );
    var_context = NULL;

    CHECK_OBJECT( (PyObject *)par_cert_reqs );
    Py_DECREF( par_cert_reqs );
    par_cert_reqs = NULL;

    CHECK_OBJECT( (PyObject *)par_ca_certs );
    Py_DECREF( par_ca_certs );
    par_ca_certs = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    CHECK_OBJECT( (PyObject *)par_keyfile );
    Py_DECREF( par_keyfile );
    par_keyfile = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_13_ssl_wrap_socket );
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


static PyObject *impl_urllib3$util$ssl_$$$function_14_is_ipaddress( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_hostname = python_pars[ 0 ];
    PyObject *var_families = NULL;
    PyObject *var_af = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_try_except_1__unhandled_indicator = NULL;
    struct Nuitka_FrameObject *frame_b732c3473252e55deccf9c615b3c6015;
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
    static struct Nuitka_FrameObject *cache_frame_b732c3473252e55deccf9c615b3c6015 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b732c3473252e55deccf9c615b3c6015, codeobj_b732c3473252e55deccf9c615b3c6015, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b732c3473252e55deccf9c615b3c6015 = cache_frame_b732c3473252e55deccf9c615b3c6015;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b732c3473252e55deccf9c615b3c6015 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b732c3473252e55deccf9c615b3c6015 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_six );

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

            exception_lineno = 366;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_PY3 );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 366;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 366;
            type_description_1 = "ooo";
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
        CHECK_OBJECT( par_hostname );
        tmp_isinstance_inst_1 = par_hostname;
        tmp_isinstance_cls_1 = (PyObject *)&PyString_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 366;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_hostname );
            tmp_called_instance_1 = par_hostname;
            frame_b732c3473252e55deccf9c615b3c6015->m_frame.f_lineno = 368;
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_plain_ascii_tuple, 0 ) );

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 368;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_hostname;
                assert( old != NULL );
                par_hostname = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_socket );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "socket" );
            exception_tb = NULL;

            exception_lineno = 370;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_AF_INET );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 370;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = PyList_New( 1 );
        PyList_SET_ITEM( tmp_assign_source_2, 0, tmp_list_element_1 );
        assert( var_families == NULL );
        var_families = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_attribute_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_socket );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "socket" );
            exception_tb = NULL;

            exception_lineno = 371;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_attribute_name_1 = const_str_plain_AF_INET6;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_3, tmp_attribute_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 371;
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
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_4;
            CHECK_OBJECT( var_families );
            tmp_source_name_4 = var_families;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 372;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_socket );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "socket" );
                exception_tb = NULL;

                exception_lineno = 372;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_4;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_AF_INET6 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 372;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_b732c3473252e55deccf9c615b3c6015->m_frame.f_lineno = 372;
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


                exception_lineno = 372;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( var_families );
        tmp_iter_arg_1 = var_families;
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 374;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooo";
                exception_lineno = 374;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_af;
            var_af = tmp_assign_source_5;
            Py_INCREF( var_af );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_True;
        {
            PyObject *old = tmp_try_except_1__unhandled_indicator;
            tmp_try_except_1__unhandled_indicator = tmp_assign_source_6;
            Py_INCREF( tmp_try_except_1__unhandled_indicator );
            Py_XDECREF( old );
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_inet_pton );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inet_pton );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "inet_pton" );
            exception_tb = NULL;

            exception_lineno = 376;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }

        tmp_called_name_2 = tmp_mvar_value_5;
        CHECK_OBJECT( var_af );
        tmp_args_element_name_2 = var_af;
        CHECK_OBJECT( par_hostname );
        tmp_args_element_name_3 = par_hostname;
        frame_b732c3473252e55deccf9c615b3c6015->m_frame.f_lineno = 376;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        Py_DECREF( tmp_call_result_2 );
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

    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_False;
        {
            PyObject *old = tmp_try_except_1__unhandled_indicator;
            assert( old != NULL );
            tmp_try_except_1__unhandled_indicator = tmp_assign_source_7;
            Py_INCREF( tmp_try_except_1__unhandled_indicator );
            Py_DECREF( old );
        }

    }
    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_b732c3473252e55deccf9c615b3c6015 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_b732c3473252e55deccf9c615b3c6015, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_b732c3473252e55deccf9c615b3c6015, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_6;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_socket );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "socket" );
            exception_tb = NULL;

            exception_lineno = 377;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }

        tmp_source_name_6 = tmp_mvar_value_6;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_error );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_compexpr_right_1 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_compexpr_right_1, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = PyExc_ValueError;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_1, 1, tmp_tuple_element_1 );
        tmp_tuple_element_1 = PyExc_OSError;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_1, 2, tmp_tuple_element_1 );
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;
            type_description_1 = "ooo";
            goto try_except_handler_3;
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
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 375;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_b732c3473252e55deccf9c615b3c6015->m_frame) frame_b732c3473252e55deccf9c615b3c6015->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooo";
        goto try_except_handler_3;
        branch_no_3:;
    }
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_14_is_ipaddress );
    return NULL;
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        int tmp_truth_name_2;
        CHECK_OBJECT( tmp_try_except_1__unhandled_indicator );
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_try_except_1__unhandled_indicator );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 375;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_compexpr_left_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        tmp_return_value = Py_True;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_3;
        branch_no_4:;
    }
    goto try_end_2;
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    goto try_return_handler_2;
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

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__iter_value );
    Py_DECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
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

#if 1
    RESTORE_FRAME_EXCEPTION( frame_b732c3473252e55deccf9c615b3c6015 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_b732c3473252e55deccf9c615b3c6015 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_b732c3473252e55deccf9c615b3c6015 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b732c3473252e55deccf9c615b3c6015, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b732c3473252e55deccf9c615b3c6015->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b732c3473252e55deccf9c615b3c6015, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b732c3473252e55deccf9c615b3c6015,
        type_description_1,
        par_hostname,
        var_families,
        var_af
    );


    // Release cached frame.
    if ( frame_b732c3473252e55deccf9c615b3c6015 == cache_frame_b732c3473252e55deccf9c615b3c6015 )
    {
        Py_DECREF( frame_b732c3473252e55deccf9c615b3c6015 );
    }
    cache_frame_b732c3473252e55deccf9c615b3c6015 = NULL;

    assertFrameObject( frame_b732c3473252e55deccf9c615b3c6015 );

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

    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_14_is_ipaddress );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_hostname );
    Py_DECREF( par_hostname );
    par_hostname = NULL;

    CHECK_OBJECT( (PyObject *)var_families );
    Py_DECREF( var_families );
    var_families = NULL;

    Py_XDECREF( var_af );
    var_af = NULL;

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

    Py_XDECREF( par_hostname );
    par_hostname = NULL;

    Py_XDECREF( var_families );
    var_families = NULL;

    Py_XDECREF( var_af );
    var_af = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_14_is_ipaddress );
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



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_10_resolve_cert_reqs(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_10_resolve_cert_reqs,
        const_str_plain_resolve_cert_reqs,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_460708522da41b92c1791d80566e7010,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_873f89c91a6f1965f5902998a695e3d7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_11_resolve_ssl_version(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_11_resolve_ssl_version,
        const_str_plain_resolve_ssl_version,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d6ad9e74c315ee0853f0136f7d4401fd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_40d4c2a9acff45d215ea7c0bc7f6dfe1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_12_create_urllib3_context( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_12_create_urllib3_context,
        const_str_plain_create_urllib3_context,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7b53990ae52bb54447bd8cffc0a12fbb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_c6e5c4394838f24a74fcd724137f89e0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_13_ssl_wrap_socket( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_13_ssl_wrap_socket,
        const_str_plain_ssl_wrap_socket,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b5cd86ece8e7f1d7074e749ca7699102,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_8a0a40c5e158ea9e745f39e0d70c38a5,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_14_is_ipaddress(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_14_is_ipaddress,
        const_str_plain_is_ipaddress,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b732c3473252e55deccf9c615b3c6015,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_905877c86fc5e54980f5662d63a5bca0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_1__const_compare_digest_backport(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_1__const_compare_digest_backport,
        const_str_plain__const_compare_digest_backport,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_10e93237740fef40771567baaf1df391,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_f5ab9e44d9781bbce93000ad3a218dd6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_2_inet_pton(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_2_inet_pton,
        const_str_plain_inet_pton,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_88e9f8c9c933060642a5c122efbdfbda,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$ssl_,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_3_inet_pton(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_3_inet_pton,
        const_str_plain_inet_pton,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8941bb54ae2602b7031f9954f0cd8833,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$ssl_,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_4___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_be51a5572141e67a09e71a643b4a4ed6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$ssl_,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_5_load_cert_chain(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_5_load_cert_chain,
        const_str_plain_load_cert_chain,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cb02302809c3cef3cd313916018849e0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$ssl_,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_6_load_verify_locations( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_6_load_verify_locations,
        const_str_plain_load_verify_locations,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c807408e505f3a2d842d20c6e1a5d17f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$ssl_,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_7_set_ciphers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_7_set_ciphers,
        const_str_plain_set_ciphers,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e462791b08cd57a3fb42762492b68e1c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$ssl_,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_8_wrap_socket( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_8_wrap_socket,
        const_str_plain_wrap_socket,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f13de2f6a7f0292a4421fe39407ad503,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$ssl_,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_9_assert_fingerprint(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_9_assert_fingerprint,
        const_str_plain_assert_fingerprint,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7da4a8cb5118e7861de201b44ab73aa4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_935dace93363545d379a5e2ed3994f38,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$util$ssl_ =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.util.ssl_",
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

MOD_INIT_DECL( urllib3$util$ssl_ )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$util$ssl_ );
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
    puts("urllib3.util.ssl_: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.ssl_: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.ssl_: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$util$ssl_" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$util$ssl_ = Py_InitModule4(
        "urllib3.util.ssl_",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$util$ssl_ = PyModule_Create( &mdef_urllib3$util$ssl_ );
#endif

    moduledict_urllib3$util$ssl_ = MODULE_DICT( module_urllib3$util$ssl_ );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$util$ssl_,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$ssl_,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$ssl_,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$util$ssl_ );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_6efba4feba5d3ac1fc26ca13b212a604, module_urllib3$util$ssl_ );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_419bdb9e3c00be55156b6e00dbe897b1;
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
    PyObject *locals_urllib3$util$ssl__117 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_f7e2a08279d197616743e7b5cf5d2f08;
        UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_419bdb9e3c00be55156b6e00dbe897b1 = MAKE_MODULE_FRAME( codeobj_419bdb9e3c00be55156b6e00dbe897b1, module_urllib3$util$ssl_ );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_419bdb9e3c00be55156b6e00dbe897b1 );
    assert( Py_REFCNT( frame_419bdb9e3c00be55156b6e00dbe897b1 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        frame_419bdb9e3c00be55156b6e00dbe897b1->m_frame.f_lineno = 1;
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
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_errno;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_419bdb9e3c00be55156b6e00dbe897b1->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        assert( !(tmp_assign_source_4 == NULL) );
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_errno, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_warnings;
        tmp_globals_name_2 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_419bdb9e3c00be55156b6e00dbe897b1->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_hmac;
        tmp_globals_name_3 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_419bdb9e3c00be55156b6e00dbe897b1->m_frame.f_lineno = 4;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_hmac, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_socket;
        tmp_globals_name_4 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_419bdb9e3c00be55156b6e00dbe897b1->m_frame.f_lineno = 5;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_socket, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_binascii;
        tmp_globals_name_5 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_hexlify_str_plain_unhexlify_tuple;
        tmp_level_name_5 = const_int_0;
        frame_419bdb9e3c00be55156b6e00dbe897b1->m_frame.f_lineno = 7;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        assert( !(tmp_assign_source_8 == NULL) );
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_hexlify );
        assert( !(tmp_assign_source_9 == NULL) );
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_hexlify, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_unhexlify );
        assert( !(tmp_assign_source_10 == NULL) );
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_unhexlify, tmp_assign_source_10 );
    }
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
        tmp_name_name_6 = const_str_plain_hashlib;
        tmp_globals_name_6 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple;
        tmp_level_name_6 = const_int_0;
        frame_419bdb9e3c00be55156b6e00dbe897b1->m_frame.f_lineno = 8;
        tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_4 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_md5 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_md5, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_sha1 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sha1, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_sha256 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sha256, tmp_assign_source_14 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_exceptions;
        tmp_globals_name_7 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple;
        tmp_level_name_7 = const_int_pos_2;
        frame_419bdb9e3c00be55156b6e00dbe897b1->m_frame.f_lineno = 10;
        tmp_assign_source_15 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_7 = tmp_import_from_3__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_SSLError );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_8 = tmp_import_from_3__module;
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_InsecurePlatformWarning );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_InsecurePlatformWarning, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_9 = tmp_import_from_3__module;
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_SNIMissingWarning );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SNIMissingWarning, tmp_assign_source_18 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain_six;
        tmp_globals_name_8 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = Py_None;
        tmp_level_name_8 = const_int_0;
        frame_419bdb9e3c00be55156b6e00dbe897b1->m_frame.f_lineno = 11;
        tmp_assign_source_19 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = Py_None;
        UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLContext, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = Py_False;
        UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_HAS_SNI, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = Py_False;
        UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_IS_PYOPENSSL, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = Py_False;
        UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_IS_SECURETRANSPORT, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_md5 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_md5 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "md5" );
            exception_tb = NULL;

            exception_lineno = 21;

            goto frame_exception_exit_1;
        }

        tmp_dict_value_1 = tmp_mvar_value_1;
        tmp_dict_key_1 = const_int_pos_32;
        tmp_assign_source_24 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_assign_source_24, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sha1 );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sha1 );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_assign_source_24 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "sha1" );
            exception_tb = NULL;

            exception_lineno = 22;

            goto frame_exception_exit_1;
        }

        tmp_dict_value_2 = tmp_mvar_value_2;
        tmp_dict_key_2 = const_int_pos_40;
        tmp_res = PyDict_SetItem( tmp_assign_source_24, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sha256 );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sha256 );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_assign_source_24 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "sha256" );
            exception_tb = NULL;

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }

        tmp_dict_value_3 = tmp_mvar_value_3;
        tmp_dict_key_3 = const_int_pos_64;
        tmp_res = PyDict_SetItem( tmp_assign_source_24, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_HASHFUNC_MAP, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_FUNCTION_urllib3$util$ssl_$$$function_1__const_compare_digest_backport(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain__const_compare_digest_backport, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_hmac );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hmac );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "hmac" );
            exception_tb = NULL;

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }

        tmp_getattr_target_1 = tmp_mvar_value_4;
        tmp_getattr_attr_1 = const_str_plain_compare_digest;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain__const_compare_digest_backport );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__const_compare_digest_backport );
        }

        CHECK_OBJECT( tmp_mvar_value_5 );
        tmp_getattr_default_1 = tmp_mvar_value_5;
        tmp_assign_source_26 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain__const_compare_digest, tmp_assign_source_26 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_plain_ssl;
        tmp_globals_name_9 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = Py_None;
        tmp_level_name_9 = const_int_0;
        frame_419bdb9e3c00be55156b6e00dbe897b1->m_frame.f_lineno = 45;
        tmp_assign_source_27 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_plain_ssl;
        tmp_globals_name_10 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = const_tuple_f6a01fdcad2a4358443ea98eee1471b3_tuple;
        tmp_level_name_10 = const_int_0;
        frame_419bdb9e3c00be55156b6e00dbe897b1->m_frame.f_lineno = 46;
        tmp_assign_source_28 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_3;
        }
        assert( tmp_import_from_4__module == NULL );
        tmp_import_from_4__module = tmp_assign_source_28;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_10 = tmp_import_from_4__module;
        tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_wrap_socket );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_wrap_socket, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_11 = tmp_import_from_4__module;
        tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_CERT_NONE );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_CERT_NONE, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_12 = tmp_import_from_4__module;
        tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_PROTOCOL_SSLv23 );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_PROTOCOL_SSLv23, tmp_assign_source_31 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_11;
        PyObject *tmp_locals_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = const_str_plain_ssl;
        tmp_globals_name_11 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_11 = Py_None;
        tmp_fromlist_name_11 = const_tuple_str_plain_HAS_SNI_tuple;
        tmp_level_name_11 = const_int_0;
        frame_419bdb9e3c00be55156b6e00dbe897b1->m_frame.f_lineno = 47;
        tmp_import_name_from_13 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
        if ( tmp_import_name_from_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;

            goto try_except_handler_3;
        }
        tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_HAS_SNI );
        Py_DECREF( tmp_import_name_from_13 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_HAS_SNI, tmp_assign_source_32 );
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
    PRESERVE_FRAME_EXCEPTION( frame_419bdb9e3c00be55156b6e00dbe897b1 );
    if ( exception_keeper_tb_4 == NULL )
    {
        exception_keeper_tb_4 = MAKE_TRACEBACK( frame_419bdb9e3c00be55156b6e00dbe897b1, exception_keeper_lineno_4 );
    }
    else if ( exception_keeper_lineno_4 != 0 )
    {
        exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_419bdb9e3c00be55156b6e00dbe897b1, exception_keeper_lineno_4 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;

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
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 44;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_419bdb9e3c00be55156b6e00dbe897b1->m_frame) frame_419bdb9e3c00be55156b6e00dbe897b1->m_frame.f_lineno = exception_tb->tb_lineno;

        goto frame_exception_exit_1;
        branch_no_1:;
    }
    goto try_end_4;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_ );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_4:;
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_name_name_12;
        PyObject *tmp_globals_name_12;
        PyObject *tmp_locals_name_12;
        PyObject *tmp_fromlist_name_12;
        PyObject *tmp_level_name_12;
        tmp_name_name_12 = const_str_plain_ssl;
        tmp_globals_name_12 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_12 = Py_None;
        tmp_fromlist_name_12 = const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple;
        tmp_level_name_12 = const_int_0;
        frame_419bdb9e3c00be55156b6e00dbe897b1->m_frame.f_lineno = 53;
        tmp_assign_source_33 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto try_except_handler_5;
        }
        assert( tmp_import_from_5__module == NULL );
        tmp_import_from_5__module = tmp_assign_source_33;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_14 = tmp_import_from_5__module;
        tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_OP_NO_SSLv2 );
        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv2, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_15 = tmp_import_from_5__module;
        tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_OP_NO_SSLv3 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv3, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_16 = tmp_import_from_5__module;
        tmp_assign_source_36 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_OP_NO_COMPRESSION );
        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_COMPRESSION, tmp_assign_source_36 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_5;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    goto try_end_6;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_419bdb9e3c00be55156b6e00dbe897b1 );
    if ( exception_keeper_tb_6 == NULL )
    {
        exception_keeper_tb_6 = MAKE_TRACEBACK( frame_419bdb9e3c00be55156b6e00dbe897b1, exception_keeper_lineno_6 );
    }
    else if ( exception_keeper_lineno_6 != 0 )
    {
        exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, frame_419bdb9e3c00be55156b6e00dbe897b1, exception_keeper_lineno_6 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    PUBLISH_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;

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
            PyObject *tmp_assign_source_37;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = const_tuple_int_pos_16777216_int_pos_33554432_tuple;
            tmp_assign_source_37 = MAKE_ITERATOR( tmp_iter_arg_1 );
            assert( !(tmp_assign_source_37 == NULL) );
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_37;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_38 = UNPACK_NEXT( tmp_unpack_1, 0 );
            if ( tmp_assign_source_38 == NULL )
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



                exception_lineno = 55;
                goto try_except_handler_8;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_38;
        }
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_39 = UNPACK_NEXT( tmp_unpack_2, 1 );
            if ( tmp_assign_source_39 == NULL )
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



                exception_lineno = 55;
                goto try_except_handler_8;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_39;
        }
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_7;
        // End of try:
        try_end_7:;
        goto try_end_8;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto frame_exception_exit_1;
        // End of try:
        try_end_8:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_40;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_40 = tmp_tuple_unpack_1__element_1;
            UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv2, tmp_assign_source_40 );
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_41;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_41 = tmp_tuple_unpack_1__element_2;
            UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv3, tmp_assign_source_41 );
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_42;
            tmp_assign_source_42 = const_int_pos_131072;
            UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_COMPRESSION, tmp_assign_source_42 );
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 52;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_419bdb9e3c00be55156b6e00dbe897b1->m_frame) frame_419bdb9e3c00be55156b6e00dbe897b1->m_frame.f_lineno = exception_tb->tb_lineno;

        goto frame_exception_exit_1;
        branch_end_2:;
    }
    goto try_end_6;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_ );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_6:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_attribute_name_1;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_socket );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "socket" );
            exception_tb = NULL;

            exception_lineno = 61;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_6;
        tmp_attribute_name_1 = const_str_plain_inet_pton;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_1, tmp_attribute_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;

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
            PyObject *tmp_assign_source_43;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_7;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_socket );

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

                exception_lineno = 62;

                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_7;
            tmp_assign_source_43 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_inet_pton );
            if ( tmp_assign_source_43 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 62;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_inet_pton, tmp_assign_source_43 );
        }
        goto branch_end_3;
        branch_no_3:;
        // Tried code:
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_name_name_13;
            PyObject *tmp_globals_name_13;
            PyObject *tmp_locals_name_13;
            PyObject *tmp_fromlist_name_13;
            PyObject *tmp_level_name_13;
            tmp_name_name_13 = const_str_plain_ipaddress;
            tmp_globals_name_13 = (PyObject *)moduledict_urllib3$util$ssl_;
            tmp_locals_name_13 = Py_None;
            tmp_fromlist_name_13 = Py_None;
            tmp_level_name_13 = const_int_0;
            frame_419bdb9e3c00be55156b6e00dbe897b1->m_frame.f_lineno = 66;
            tmp_assign_source_44 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
            if ( tmp_assign_source_44 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;

                goto try_except_handler_9;
            }
            UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ipaddress, tmp_assign_source_44 );
        }
        {
            PyObject *tmp_assign_source_45;
            tmp_assign_source_45 = MAKE_FUNCTION_urllib3$util$ssl_$$$function_2_inet_pton(  );



            UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_inet_pton, tmp_assign_source_45 );
        }
        goto try_end_9;
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

        // Preserve existing published exception.
        PRESERVE_FRAME_EXCEPTION( frame_419bdb9e3c00be55156b6e00dbe897b1 );
        if ( exception_keeper_tb_9 == NULL )
        {
            exception_keeper_tb_9 = MAKE_TRACEBACK( frame_419bdb9e3c00be55156b6e00dbe897b1, exception_keeper_lineno_9 );
        }
        else if ( exception_keeper_lineno_9 != 0 )
        {
            exception_keeper_tb_9 = ADD_TRACEBACK( exception_keeper_tb_9, frame_419bdb9e3c00be55156b6e00dbe897b1, exception_keeper_lineno_9 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9 );
        PUBLISH_EXCEPTION( &exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9 );
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_3 = PyExc_ImportError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;

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
                PyObject *tmp_assign_source_46;
                tmp_assign_source_46 = MAKE_FUNCTION_urllib3$util$ssl_$$$function_3_inet_pton(  );



                UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_inet_pton, tmp_assign_source_46 );
            }
            goto branch_end_4;
            branch_no_4:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 65;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_419bdb9e3c00be55156b6e00dbe897b1->m_frame) frame_419bdb9e3c00be55156b6e00dbe897b1->m_frame.f_lineno = exception_tb->tb_lineno;

            goto frame_exception_exit_1;
            branch_end_4:;
        }
        goto try_end_9;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_ );
        return MOD_RETURN_VALUE( NULL );
        // End of try:
        try_end_9:;
        branch_end_3:;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_arg_element_1;
        tmp_called_instance_1 = const_str_chr_58;
        tmp_call_arg_element_1 = LIST_COPY( const_list_6d21a87f2069ec2831ba43615fd6e331_list );
        frame_419bdb9e3c00be55156b6e00dbe897b1->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = { tmp_call_arg_element_1 };
            tmp_assign_source_47 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_join, call_args );
        }

        Py_DECREF( tmp_call_arg_element_1 );
        if ( tmp_assign_source_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_DEFAULT_CIPHERS, tmp_assign_source_47 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_name_14;
        PyObject *tmp_globals_name_14;
        PyObject *tmp_locals_name_14;
        PyObject *tmp_fromlist_name_14;
        PyObject *tmp_level_name_14;
        tmp_name_name_14 = const_str_plain_ssl;
        tmp_globals_name_14 = (PyObject *)moduledict_urllib3$util$ssl_;
        tmp_locals_name_14 = Py_None;
        tmp_fromlist_name_14 = const_tuple_str_plain_SSLContext_tuple;
        tmp_level_name_14 = const_int_0;
        frame_419bdb9e3c00be55156b6e00dbe897b1->m_frame.f_lineno = 113;
        tmp_import_name_from_17 = IMPORT_MODULE5( tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14 );
        if ( tmp_import_name_from_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;

            goto try_except_handler_10;
        }
        tmp_assign_source_48 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_SSLContext );
        Py_DECREF( tmp_import_name_from_17 );
        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLContext, tmp_assign_source_48 );
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_419bdb9e3c00be55156b6e00dbe897b1 );
    if ( exception_keeper_tb_10 == NULL )
    {
        exception_keeper_tb_10 = MAKE_TRACEBACK( frame_419bdb9e3c00be55156b6e00dbe897b1, exception_keeper_lineno_10 );
    }
    else if ( exception_keeper_lineno_10 != 0 )
    {
        exception_keeper_tb_10 = ADD_TRACEBACK( exception_keeper_tb_10, frame_419bdb9e3c00be55156b6e00dbe897b1, exception_keeper_lineno_10 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_10, &exception_keeper_value_10, &exception_keeper_tb_10 );
    PUBLISH_EXCEPTION( &exception_keeper_type_10, &exception_keeper_value_10, &exception_keeper_tb_10 );
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_4 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;

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
            PyObject *tmp_assign_source_49;
            PyObject *tmp_name_name_15;
            PyObject *tmp_globals_name_15;
            PyObject *tmp_locals_name_15;
            PyObject *tmp_fromlist_name_15;
            PyObject *tmp_level_name_15;
            tmp_name_name_15 = const_str_plain_sys;
            tmp_globals_name_15 = (PyObject *)moduledict_urllib3$util$ssl_;
            tmp_locals_name_15 = Py_None;
            tmp_fromlist_name_15 = Py_None;
            tmp_level_name_15 = const_int_0;
            frame_419bdb9e3c00be55156b6e00dbe897b1->m_frame.f_lineno = 115;
            tmp_assign_source_49 = IMPORT_MODULE5( tmp_name_name_15, tmp_globals_name_15, tmp_locals_name_15, tmp_fromlist_name_15, tmp_level_name_15 );
            assert( !(tmp_assign_source_49 == NULL) );
            UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_49 );
        }
        {
            PyObject *tmp_assign_source_50;
            {
                PyObject *tmp_set_locals_1;
                tmp_set_locals_1 = PyDict_New();
                locals_urllib3$util$ssl__117 = tmp_set_locals_1;
            }
            tmp_dictset_value = const_str_digest_6efba4feba5d3ac1fc26ca13b212a604;
            tmp_res = PyDict_SetItem( locals_urllib3$util$ssl__117, const_str_plain___module__, tmp_dictset_value );
            assert( !(tmp_res != 0) );
            tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssl_$$$function_4___init__(  );



            tmp_res = PyDict_SetItem( locals_urllib3$util$ssl__117, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
            tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssl_$$$function_5_load_cert_chain(  );



            tmp_res = PyDict_SetItem( locals_urllib3$util$ssl__117, const_str_plain_load_cert_chain, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
            {
                PyObject *tmp_defaults_1;
                tmp_defaults_1 = const_tuple_none_none_tuple;
                Py_INCREF( tmp_defaults_1 );
                tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssl_$$$function_6_load_verify_locations( tmp_defaults_1 );



                tmp_res = PyDict_SetItem( locals_urllib3$util$ssl__117, const_str_plain_load_verify_locations, tmp_dictset_value );
                Py_DECREF( tmp_dictset_value );
                assert( !(tmp_res != 0) );
            }
            tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssl_$$$function_7_set_ciphers(  );



            tmp_res = PyDict_SetItem( locals_urllib3$util$ssl__117, const_str_plain_set_ciphers, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
            {
                PyObject *tmp_defaults_2;
                tmp_defaults_2 = const_tuple_none_false_tuple;
                Py_INCREF( tmp_defaults_2 );
                tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssl_$$$function_8_wrap_socket( tmp_defaults_2 );



                tmp_res = PyDict_SetItem( locals_urllib3$util$ssl__117, const_str_plain_wrap_socket, tmp_dictset_value );
                Py_DECREF( tmp_dictset_value );
                assert( !(tmp_res != 0) );
            }
            // Tried code:
            tmp_assign_source_50 = locals_urllib3$util$ssl__117;
            Py_INCREF( tmp_assign_source_50 );
            goto try_return_handler_11;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_ );
            return MOD_RETURN_VALUE( NULL );
            // Return handler code:
            try_return_handler_11:;
            Py_DECREF( locals_urllib3$util$ssl__117 );
            locals_urllib3$util$ssl__117 = NULL;
            goto outline_result_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_ );
            return MOD_RETURN_VALUE( NULL );
            outline_result_1:;
            assert( tmp_class_creation_1__class_dict == NULL );
            tmp_class_creation_1__class_dict = tmp_assign_source_50;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_51;
            nuitka_bool tmp_condition_result_6;
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


                exception_lineno = 117;

                goto try_except_handler_12;
            }
            tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
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
            tmp_assign_source_51 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
            if ( tmp_assign_source_51 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 117;

                goto try_except_handler_12;
            }
            goto condexpr_end_1;
            condexpr_false_1:;
            tmp_assign_source_51 = (PyObject *)&PyType_Type;
            Py_INCREF( tmp_assign_source_51 );
            condexpr_end_1:;
            assert( tmp_class_creation_1__metaclass == NULL );
            tmp_class_creation_1__metaclass = tmp_assign_source_51;
        }
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_1 = tmp_class_creation_1__metaclass;
            tmp_args_element_name_1 = const_str_plain_SSLContext;
            tmp_args_element_name_2 = const_tuple_type_object_tuple;
            CHECK_OBJECT( tmp_class_creation_1__class_dict );
            tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
            frame_419bdb9e3c00be55156b6e00dbe897b1->m_frame.f_lineno = 117;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_assign_source_52 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
            }

            if ( tmp_assign_source_52 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 117;

                goto try_except_handler_12;
            }
            assert( tmp_class_creation_1__class == NULL );
            tmp_class_creation_1__class = tmp_assign_source_52;
        }
        goto try_end_11;
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

        CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
        Py_DECREF( tmp_class_creation_1__class_dict );
        tmp_class_creation_1__class_dict = NULL;

        Py_XDECREF( tmp_class_creation_1__metaclass );
        tmp_class_creation_1__metaclass = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto frame_exception_exit_1;
        // End of try:
        try_end_11:;
        {
            PyObject *tmp_assign_source_53;
            CHECK_OBJECT( tmp_class_creation_1__class );
            tmp_assign_source_53 = tmp_class_creation_1__class;
            UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLContext, tmp_assign_source_53 );
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

        goto branch_end_5;
        branch_no_5:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 112;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_419bdb9e3c00be55156b6e00dbe897b1->m_frame) frame_419bdb9e3c00be55156b6e00dbe897b1->m_frame.f_lineno = exception_tb->tb_lineno;

        goto frame_exception_exit_1;
        branch_end_5:;
    }
    goto try_end_10;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_ );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_10:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_419bdb9e3c00be55156b6e00dbe897b1 );
#endif
    popFrameStack();

    assertFrameObject( frame_419bdb9e3c00be55156b6e00dbe897b1 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_419bdb9e3c00be55156b6e00dbe897b1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_419bdb9e3c00be55156b6e00dbe897b1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_419bdb9e3c00be55156b6e00dbe897b1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_419bdb9e3c00be55156b6e00dbe897b1, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = MAKE_FUNCTION_urllib3$util$ssl_$$$function_9_assert_fingerprint(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_assert_fingerprint, tmp_assign_source_54 );
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = MAKE_FUNCTION_urllib3$util$ssl_$$$function_10_resolve_cert_reqs(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs, tmp_assign_source_55 );
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = MAKE_FUNCTION_urllib3$util$ssl_$$$function_11_resolve_ssl_version(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_resolve_ssl_version, tmp_assign_source_56 );
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_none_none_none_none_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_57 = MAKE_FUNCTION_urllib3$util$ssl_$$$function_12_create_urllib3_context( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_create_urllib3_context, tmp_assign_source_57 );
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_none_none_none_none_none_none_none_none_none_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_58 = MAKE_FUNCTION_urllib3$util$ssl_$$$function_13_ssl_wrap_socket( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl_wrap_socket, tmp_assign_source_58 );
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = MAKE_FUNCTION_urllib3$util$ssl_$$$function_14_is_ipaddress(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_is_ipaddress, tmp_assign_source_59 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_urllib3$util$ssl_ );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
