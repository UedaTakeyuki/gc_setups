/* Generated code for Python module 'cryptography.hazmat.bindings.openssl._conditional'
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

/* The "_module_cryptography$hazmat$bindings$openssl$_conditional" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$bindings$openssl$_conditional;
PyDictObject *moduledict_cryptography$hazmat$bindings$openssl$_conditional;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_Cryptography_HAS_CUSTOM_EXT;
static PyObject *const_str_plain_Cryptography_HAS_OPENSSL_CLEANUP;
static PyObject *const_str_plain_Cryptography_CRYPTO_set_mem_functions;
static PyObject *const_str_plain_TLS_ST_OK;
static PyObject *const_str_digest_7899e04c61e679344a45988ca746bae2;
extern PyObject *const_str_digest_6c6405718530cbdfc8da1bb69c050727;
static PyObject *const_str_plain_cryptography_has_raw_key;
static PyObject *const_list_str_plain_SSL_get_server_tmp_key_list;
extern PyObject *const_str_plain_ENGINE_free;
static PyObject *const_str_plain_X509_V_ERR_EMAIL_MISMATCH;
static PyObject *const_list_2b0156be132bced5637961a9aa48cb51_list;
static PyObject *const_list_str_plain_SSL_CTX_set_cert_cb_str_plain_SSL_set_cert_cb_list;
static PyObject *const_str_plain_cryptography_has_psk;
static PyObject *const_str_plain_SSLv3_client_method;
static PyObject *const_str_plain_X509_STORE_get_get_issuer;
static PyObject *const_list_a2ccfb1541ef6968650ac43562856e84_list;
static PyObject *const_str_plain_FIPS_mode;
static PyObject *const_str_digest_5ebdc304a856f17bec9566811cc3653b;
extern PyObject *const_str_plain_EVP_PKEY_get1_tls_encodedpoint;
static PyObject *const_str_plain_X509_V_ERR_SUITE_B_INVALID_VERSION;
static PyObject *const_str_digest_2fcc949fb99081eda00ddcfc8aa01f9a;
static PyObject *const_list_str_plain_EVP_PKEY_DHX_list;
static PyObject *const_str_plain_SCT_set_source;
static PyObject *const_str_plain_cryptography_has_110_verification_params;
static PyObject *const_str_plain_X509_VERIFY_PARAM_set_hostflags;
static PyObject *const_str_digest_0134e31627bb74f9df2edcd82a96ece3;
static PyObject *const_str_plain_ENGINE_get_name;
static PyObject *const_str_plain_cryptography_has_fips;
static PyObject *const_str_plain_DTLS_get_link_min_mtu;
static PyObject *const_str_digest_5e36ac0615fb0e6445b1e014cca7bd54;
static PyObject *const_str_plain_Cryptography_HAS_ED448;
static PyObject *const_str_plain_Cryptography_HAS_PSK;
static PyObject *const_list_str_plain_RSA_R_PKCS_DECODING_ERROR_list;
extern PyObject *const_str_plain_EVP_PKEY_new_raw_private_key;
static PyObject *const_str_plain_cryptography_has_cipher_details;
static PyObject *const_str_plain_SSL_CTX_use_psk_identity_hint;
static PyObject *const_list_str_plain_EVP_PKEY_ED448_str_plain_NID_ED448_list;
static PyObject *const_str_plain_Cryptography_HAS_102_VERIFICATION_PARAMS;
extern PyObject *const_str_plain_EVP_PKEY_ED25519;
static PyObject *const_list_str_plain_X509_V_FLAG_TRUSTED_FIRST_list;
static PyObject *const_str_plain_cryptography_has_tlsv13;
static PyObject *const_str_plain_X509_V_ERR_SUITE_B_LOS_NOT_ALLOWED;
extern PyObject *const_str_plain_SSL_ST_OK;
static PyObject *const_list_8637a8e096edeccc96cf2940262bfd01_list;
static PyObject *const_str_plain_X509_V_FLAG_TRUSTED_FIRST;
static PyObject *const_str_plain_SSL_set_post_handshake_auth;
static PyObject *const_list_86c40a5c21cefd9f6af8769ff1175caf_list;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_SSL_set_cert_cb;
static PyObject *const_str_plain_SSL_CTX_set_psk_client_callback;
static PyObject *const_list_str_plain_X509_CHECK_FLAG_NEVER_CHECK_SUBJECT_list;
static PyObject *const_str_plain_Cryptography_HAS_SIGALGS;
static PyObject *const_str_plain_SSL_CTX_add_client_custom_ext;
extern PyObject *const_str_plain_CONDITIONAL_NAMES;
extern PyObject *const_str_plain_EVP_DigestFinalXOF;
extern PyObject *const_str_plain_RSA_R_PKCS_DECODING_ERROR;
static PyObject *const_str_plain_cryptography_has_ed25519;
extern PyObject *const_str_plain_Cryptography_HAS_ALPN;
static PyObject *const_str_plain_SSL_OP_NO_DTLSv1;
static PyObject *const_str_plain_SSL_extension_supported;
static PyObject *const_str_plain_Cryptography_HAS_110_VERIFICATION_PARAMS;
static PyObject *const_list_str_plain_FIPS_set_mode_str_plain_FIPS_mode_list;
static PyObject *const_list_str_plain_EVP_PKEY_X448_str_plain_NID_X448_list;
static PyObject *const_str_plain_cryptography_has_rsa_oaep_label;
static PyObject *const_str_plain_Cryptography_HAS_GET_SERVER_TMP_KEY;
extern PyObject *const_str_plain_EVP_PKEY_get_raw_private_key;
static PyObject *const_list_str_plain_EVP_PKEY_X25519_str_plain_NID_X25519_list;
static PyObject *const_str_digest_4492d7ee374a0b9e687cf99e3c6facc1;
extern PyObject *const_str_plain_EVP_PKEY_X25519;
extern PyObject *const_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md;
static PyObject *const_str_digest_fafbfe30544ba42854ed0b86baac5f84;
static PyObject *const_str_plain_SSL_get_sigalgs;
static PyObject *const_str_digest_05e8c3e45ca4a8d1991048b3b057a830;
static PyObject *const_str_plain_X509_CHECK_FLAG_NEVER_CHECK_SUBJECT;
static PyObject *const_str_plain_SCT_set1_log_id;
static PyObject *const_list_str_plain_EVP_R_MEMORY_LIMIT_EXCEEDED_list;
static PyObject *const_str_plain_X509_CHECK_FLAG_NO_PARTIAL_WILDCARDS;
extern PyObject *const_str_plain_SSL_ST_INIT;
static PyObject *const_str_plain_SSL_CIPHER_get_kx_nid;
static PyObject *const_str_plain_SSL_VERIFY_POST_HANDSHAKE;
static PyObject *const_str_plain_SSL_CTX_set_max_early_data;
static PyObject *const_str_plain_cryptography_has_evp_digestfinal_xof;
static PyObject *const_str_digest_0a25da58d8b65f965de99956a1b5aad7;
static PyObject *const_str_plain_cryptography_has_custom_ext;
extern PyObject *const_str_plain_EVP_PKEY_new_raw_public_key;
extern PyObject *const_str_plain_SSL_set_alpn_protos;
static PyObject *const_str_plain_SSL_CIPHER_get_auth_nid;
static PyObject *const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list;
static PyObject *const_str_plain_X509_V_ERR_HOSTNAME_MISMATCH;
static PyObject *const_list_9cf036427baefafa3a18cbc2378aecdb_list;
static PyObject *const_str_plain_cryptography_has_get_server_tmp_key;
extern PyObject *const_str_plain_Cryptography_HAS_RSA_OAEP_LABEL;
static PyObject *const_str_plain_Cryptography_HAS_FIPS;
extern PyObject *const_str_plain_ENGINE_init;
extern PyObject *const_str_plain_sk_SCT_value;
static PyObject *const_str_digest_c8d4ed7f56a6990e5028c35f4876f90c;
static PyObject *const_str_plain_SSLv3_server_method;
extern PyObject *const_str_plain_Cryptography_HAS_SSL_ST;
extern PyObject *const_str_plain_EVP_PKEY_ED448;
extern PyObject *const_str_plain_Cryptography_HAS_RSA_OAEP_MD;
static PyObject *const_list_03133653ae1f779dd1ae650a3a80ba30_list;
static PyObject *const_list_70d66b11b8b83912e7ed175ae865dfed_list;
static PyObject *const_str_plain_EC_POINT_set_compressed_coordinates_GF2m;
static PyObject *const_str_plain_cryptography_has_102_verification_params;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_Cryptography_HAS_TLS_ST;
extern PyObject *const_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label;
static PyObject *const_str_plain_SSL_COMP_get_name;
static PyObject *const_str_plain_cryptography_has_ssl_sigalgs;
static PyObject *const_list_str_plain_TLS_ST_BEFORE_str_plain_TLS_ST_OK_list;
static PyObject *const_list_str_plain_EVP_DigestSign_str_plain_EVP_DigestVerify_list;
extern PyObject *const_str_plain_NID_X448;
static PyObject *const_str_plain_Cryptography_HAS_X25519;
static PyObject *const_str_plain_SSL_CTX_set_post_handshake_auth;
extern PyObject *const_str_plain_EVP_PBE_scrypt;
extern PyObject *const_str_plain_Cryptography_HAS_LOCKING_CALLBACKS;
extern PyObject *const_str_plain_NID_X25519;
static PyObject *const_list_e5729eb47bb2bb77d896a48e0ba4a292_list;
static PyObject *const_list_str_plain_SSL_CTX_set_ecdh_auto_list;
static PyObject *const_str_plain_DTLS_method;
static PyObject *const_str_plain_cryptography_has_tls_st;
static PyObject *const_list_a92b37e3fd97e57634d2e2c4f15929c2_list;
static PyObject *const_str_plain_SCT_set_timestamp;
extern PyObject *const_str_plain_SCT_get0_signature;
extern PyObject *const_str_plain_SSL_CTX_set_ecdh_auto;
static PyObject *const_str_digest_89c6e3f07e56ca3212435467944ee8af;
static PyObject *const_str_plain_Cryptography_HAS_CIPHER_DETAILS;
static PyObject *const_list_29407ac2cfa5bacd5103ba17ced806aa_list;
static PyObject *const_str_plain_Cryptography_HAS_X448;
static PyObject *const_str_plain_TLS_ST_BEFORE;
static PyObject *const_list_str_plain_Cryptography_CRYPTO_set_mem_functions_list;
static PyObject *const_str_plain_SSL_get0_param;
extern PyObject *const_str_digest_f2f56e52e9bead94215489df18f9e023;
static PyObject *const_str_plain_EC_POINT_set_affine_coordinates_GF2m;
static PyObject *const_str_plain_SCT_set_version;
static PyObject *const_list_str_plain_EC_curve_nid2nist_list;
static PyObject *const_str_plain_cryptography_has_set_cert_cb;
static PyObject *const_str_plain_SSL_get_current_expansion;
extern PyObject *const_str_plain_Cryptography_HAS_SCRYPT;
extern PyObject *const_str_plain_EVP_DigestVerify;
static PyObject *const_list_531063e0f807f77ec21047a47441d048_list;
extern PyObject *const_str_plain_Cryptography_add_osrandom_engine;
extern PyObject *const_str_plain_SSL_get0_alpn_selected;
static PyObject *const_str_plain_SSL_SESSION_get_max_early_data;
static PyObject *const_str_plain_X509_CHECK_FLAG_NO_WILDCARDS;
extern PyObject *const_str_plain_NID_ED448;
static PyObject *const_str_plain_cryptography_has_x448;
static PyObject *const_list_str_plain_OPENSSL_cleanup_list;
static PyObject *const_str_plain_DTLS_client_method;
static PyObject *const_str_plain_X509_STORE_set_get_issuer;
static PyObject *const_str_plain_SCT_new;
extern PyObject *const_str_plain_EVP_R_MEMORY_LIMIT_EXCEEDED;
extern PyObject *const_str_plain_Cryptography_HAS_EC2M;
static PyObject *const_str_plain_Cryptography_HAS_ED25519;
static PyObject *const_list_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label_list;
static PyObject *const_str_plain_SSL_CIPHER_is_aead;
static PyObject *const_str_plain_SSL_CTX_set1_sigalgs_list;
static PyObject *const_str_plain_SSL_CTX_set_ciphersuites;
static PyObject *const_str_plain_SSL_CIPHER_get_cipher_nid;
extern PyObject *const_str_plain_SSLv3_method;
static PyObject *const_str_plain_SSL_get_server_tmp_key;
extern PyObject *const_str_plain_SSL_ST_RENEGOTIATE;
static PyObject *const_str_plain_cryptography_has_ssl3_method;
static PyObject *const_str_plain_cryptography_has_generic_dtls_method;
static PyObject *const_str_plain_SSL_get_current_compression;
static PyObject *const_str_digest_96e83fdb049b186bfc982a4b37cdf168;
static PyObject *const_list_8cf6be4317fa4d6df8e3c06784c94792_list;
static PyObject *const_str_plain_cryptography_has_ec2m;
extern PyObject *const_str_plain_EVP_PKEY_X448;
extern PyObject *const_str_plain_SSL_CTX_set_alpn_protos;
static PyObject *const_str_plain_SSL_OP_NO_TLSv1_3;
extern PyObject *const_str_plain_ENGINE_finish;
static PyObject *const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9;
static PyObject *const_str_plain_X509_V_FLAG_SUITEB_128_LOS_ONLY;
static PyObject *const_str_plain_cryptography_has_evp_pkey_dhx;
static PyObject *const_str_plain_SCT_set_log_entry_type;
extern PyObject *const_str_plain_NID_ED25519;
static PyObject *const_str_plain_X509_VERIFY_PARAM_set1_ip;
static PyObject *const_str_plain_cryptography_has_locking_callbacks;
static PyObject *const_str_plain_cryptography_has_rsa_oaep_md;
static PyObject *const_str_plain_Cryptography_HAS_EC_1_0_2;
extern PyObject *const_str_plain_SSL_ST_BEFORE;
static PyObject *const_str_plain_Cryptography_HAS_TLSv1_3;
static PyObject *const_str_plain_Cryptography_HAS_SET_CERT_CB;
static PyObject *const_str_plain_sk_SCT_new_null;
static PyObject *const_list_str_plain_NID_ED25519_str_plain_EVP_PKEY_ED25519_list;
extern PyObject *const_str_plain_EVP_PKEY_get_raw_public_key;
static PyObject *const_str_plain_FIPS_set_mode;
static PyObject *const_str_plain_X509_V_FLAG_PARTIAL_CHAIN;
static PyObject *const_str_digest_d2c4bd506cf66a4d1c7adfe4f312872c;
extern PyObject *const_str_plain_EVP_DigestSign;
extern PyObject *const_str_plain_Cryptography_HAS_ENGINE;
static PyObject *const_list_99d2a9f3afa4bd958ff3177b2faaca12_list;
extern PyObject *const_str_plain_ENGINE_set_default_RAND;
static PyObject *const_str_plain_cryptography_has_ed448;
static PyObject *const_str_plain_X509_VERIFY_PARAM_set1_host;
extern PyObject *const_str_plain_SSL_CTX_set_alpn_select_cb;
static PyObject *const_str_plain_SSL_verify_client_post_handshake;
static PyObject *const_str_plain_X509_CHECK_FLAG_ALWAYS_CHECK_SUBJECT;
static PyObject *const_str_plain_X509_V_ERR_SUITE_B_INVALID_CURVE;
static PyObject *const_str_plain_SSL_CTX_set_psk_server_callback;
extern PyObject *const_str_plain_ENGINE_unregister_RAND;
static PyObject *const_str_plain_SSL_read_early_data;
static PyObject *const_str_plain_Cryptography_HAS_SET_ECDH_AUTO;
static PyObject *const_str_plain_cryptography_has_scrypt;
static PyObject *const_str_plain_DTLS_set_link_mtu;
static PyObject *const_str_plain_sk_SCT_push;
static PyObject *const_str_plain_cryptography_has_mem_functions;
static PyObject *const_str_plain_SSL_CTX_set_cert_cb;
extern PyObject *const_str_plain_ENGINE_get_default_RAND;
static PyObject *const_str_plain_Cryptography_HAS_RAW_KEY;
static PyObject *const_str_plain_X509_V_ERR_SUITE_B_INVALID_ALGORITHM;
static PyObject *const_str_plain_X509_V_ERR_IP_ADDRESS_MISMATCH;
extern PyObject *const_str_plain_SCT_get0_log_id;
static PyObject *const_str_plain_X509_VERIFY_PARAM_set1_email;
static PyObject *const_str_plain_cryptography_has_ssl_st;
static PyObject *const_str_plain_Cryptography_HAS_SSL3_METHOD;
static PyObject *const_str_plain_X509_VERIFY_PARAM_set1_ip_asc;
static PyObject *const_str_plain_cryptography_has_ec_1_0_2;
static PyObject *const_str_plain_Cryptography_HAS_GENERIC_DTLS_METHOD;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain_X509_V_FLAG_SUITEB_128_LOS;
static PyObject *const_str_plain_cryptography_has_compression;
static PyObject *const_list_str_plain_Cryptography_setup_ssl_threads_list;
extern PyObject *const_str_plain_EVP_PKEY_DHX;
static PyObject *const_str_plain_EC_curve_nid2nist;
static PyObject *const_list_69b906847d25decb1cda42670e7e5241_list;
static PyObject *const_str_digest_b2405d2434f1275e2b8933b43c529fbe;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_Cryptography_HAS_EVP_DIGESTFINAL_XOF;
static PyObject *const_str_digest_38eba4904dfc59e8c0458109674fe900;
extern PyObject *const_str_plain_Cryptography_HAS_EVP_PKEY_DHX;
static PyObject *const_str_plain_SSL_write_early_data;
static PyObject *const_str_plain_cryptography_has_engine;
static PyObject *const_list_str_plain_X509_V_FLAG_PARTIAL_CHAIN_list;
static PyObject *const_str_plain_Cryptography_HAS_SCT;
static PyObject *const_list_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md_list;
static PyObject *const_list_136332fc21a01754e44f9a06545f3713_list;
static PyObject *const_str_plain_cryptography_has_openssl_cleanup;
static PyObject *const_str_plain_OPENSSL_cleanup;
static PyObject *const_str_digest_8535fc31daf81b5f04208070d851f01e;
extern PyObject *const_str_plain_SCT_get_version;
static PyObject *const_str_plain_Cryptography_HAS_COMPRESSION;
static PyObject *const_list_str_plain_EVP_DigestFinalXOF_list;
static PyObject *const_str_digest_08906fb95f8ef4a836f252aa7b12b1cf;
static PyObject *const_str_plain_Cryptography_HAS_MEM_FUNCTIONS;
static PyObject *const_str_plain_SSL_OP_NO_DTLSv1_2;
extern PyObject *const_str_plain_division;
static PyObject *const_list_f501d0e9bfb78a701032fc968ff559f6_list;
extern PyObject *const_str_plain_sk_SCT_num;
extern PyObject *const_str_plain_EVP_PKEY_set1_tls_encodedpoint;
static PyObject *const_str_plain_X509_CHECK_FLAG_SINGLE_LABEL_SUBDOMAINS;
extern PyObject *const_str_plain_EC_POINT_get_affine_coordinates_GF2m;
static PyObject *const_str_plain_X509_V_FLAG_SUITEB_192_LOS;
static PyObject *const_str_plain_DTLS_server_method;
static PyObject *const_str_plain_cryptography_has_sct;
static PyObject *const_list_d0eb343c74fa9d778f192626e2b9d53e_list;
static PyObject *const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33;
static PyObject *const_str_plain_cryptography_has_set_ecdh_auto;
static PyObject *const_str_plain_cryptography_has_alpn;
extern PyObject *const_str_plain_Cryptography_setup_ssl_threads;
extern PyObject *const_str_plain_SCT_get_log_entry_type;
static PyObject *const_str_plain_cryptography_has_x25519;
extern PyObject *const_str_plain_SCT_get_timestamp;
extern PyObject *const_str_plain_ENGINE_by_id;
static PyObject *const_str_plain_SSL_CTX_add_server_custom_ext;
static PyObject *const_str_plain_X509_CHECK_FLAG_MULTI_LABEL_WILDCARDS;
static PyObject *const_list_str_plain_EVP_PBE_scrypt_list;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_ENGINE_ctrl_cmd;
static PyObject *const_str_plain_SSL_CIPHER_get_digest_nid;
extern PyObject *const_str_plain_SCT_LIST_free;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_Cryptography_HAS_CUSTOM_EXT = UNSTREAM_STRING( &constant_bin[ 555433 ], 27, 1 );
    const_str_plain_Cryptography_HAS_OPENSSL_CLEANUP = UNSTREAM_STRING( &constant_bin[ 555460 ], 32, 1 );
    const_str_plain_Cryptography_CRYPTO_set_mem_functions = UNSTREAM_STRING( &constant_bin[ 555492 ], 37, 1 );
    const_str_plain_TLS_ST_OK = UNSTREAM_STRING( &constant_bin[ 555529 ], 9, 1 );
    const_str_digest_7899e04c61e679344a45988ca746bae2 = UNSTREAM_STRING( &constant_bin[ 555538 ], 85, 0 );
    const_str_plain_cryptography_has_raw_key = UNSTREAM_STRING( &constant_bin[ 555623 ], 24, 1 );
    const_list_str_plain_SSL_get_server_tmp_key_list = PyList_New( 1 );
    const_str_plain_SSL_get_server_tmp_key = UNSTREAM_STRING( &constant_bin[ 555647 ], 22, 1 );
    PyList_SET_ITEM( const_list_str_plain_SSL_get_server_tmp_key_list, 0, const_str_plain_SSL_get_server_tmp_key ); Py_INCREF( const_str_plain_SSL_get_server_tmp_key );
    const_str_plain_X509_V_ERR_EMAIL_MISMATCH = UNSTREAM_STRING( &constant_bin[ 555669 ], 25, 1 );
    const_list_2b0156be132bced5637961a9aa48cb51_list = PyList_New( 2 );
    const_str_plain_X509_STORE_get_get_issuer = UNSTREAM_STRING( &constant_bin[ 555694 ], 25, 1 );
    PyList_SET_ITEM( const_list_2b0156be132bced5637961a9aa48cb51_list, 0, const_str_plain_X509_STORE_get_get_issuer ); Py_INCREF( const_str_plain_X509_STORE_get_get_issuer );
    const_str_plain_X509_STORE_set_get_issuer = UNSTREAM_STRING( &constant_bin[ 555719 ], 25, 1 );
    PyList_SET_ITEM( const_list_2b0156be132bced5637961a9aa48cb51_list, 1, const_str_plain_X509_STORE_set_get_issuer ); Py_INCREF( const_str_plain_X509_STORE_set_get_issuer );
    const_list_str_plain_SSL_CTX_set_cert_cb_str_plain_SSL_set_cert_cb_list = PyList_New( 2 );
    const_str_plain_SSL_CTX_set_cert_cb = UNSTREAM_STRING( &constant_bin[ 555744 ], 19, 1 );
    PyList_SET_ITEM( const_list_str_plain_SSL_CTX_set_cert_cb_str_plain_SSL_set_cert_cb_list, 0, const_str_plain_SSL_CTX_set_cert_cb ); Py_INCREF( const_str_plain_SSL_CTX_set_cert_cb );
    const_str_plain_SSL_set_cert_cb = UNSTREAM_STRING( &constant_bin[ 555763 ], 15, 1 );
    PyList_SET_ITEM( const_list_str_plain_SSL_CTX_set_cert_cb_str_plain_SSL_set_cert_cb_list, 1, const_str_plain_SSL_set_cert_cb ); Py_INCREF( const_str_plain_SSL_set_cert_cb );
    const_str_plain_cryptography_has_psk = UNSTREAM_STRING( &constant_bin[ 555778 ], 20, 1 );
    const_str_plain_SSLv3_client_method = UNSTREAM_STRING( &constant_bin[ 555798 ], 19, 1 );
    const_list_a2ccfb1541ef6968650ac43562856e84_list = PyList_New( 7 );
    const_str_plain_DTLS_method = UNSTREAM_STRING( &constant_bin[ 555817 ], 11, 1 );
    PyList_SET_ITEM( const_list_a2ccfb1541ef6968650ac43562856e84_list, 0, const_str_plain_DTLS_method ); Py_INCREF( const_str_plain_DTLS_method );
    const_str_plain_DTLS_server_method = UNSTREAM_STRING( &constant_bin[ 555828 ], 18, 1 );
    PyList_SET_ITEM( const_list_a2ccfb1541ef6968650ac43562856e84_list, 1, const_str_plain_DTLS_server_method ); Py_INCREF( const_str_plain_DTLS_server_method );
    const_str_plain_DTLS_client_method = UNSTREAM_STRING( &constant_bin[ 555846 ], 18, 1 );
    PyList_SET_ITEM( const_list_a2ccfb1541ef6968650ac43562856e84_list, 2, const_str_plain_DTLS_client_method ); Py_INCREF( const_str_plain_DTLS_client_method );
    const_str_plain_SSL_OP_NO_DTLSv1 = UNSTREAM_STRING( &constant_bin[ 555864 ], 16, 1 );
    PyList_SET_ITEM( const_list_a2ccfb1541ef6968650ac43562856e84_list, 3, const_str_plain_SSL_OP_NO_DTLSv1 ); Py_INCREF( const_str_plain_SSL_OP_NO_DTLSv1 );
    const_str_plain_SSL_OP_NO_DTLSv1_2 = UNSTREAM_STRING( &constant_bin[ 555880 ], 18, 1 );
    PyList_SET_ITEM( const_list_a2ccfb1541ef6968650ac43562856e84_list, 4, const_str_plain_SSL_OP_NO_DTLSv1_2 ); Py_INCREF( const_str_plain_SSL_OP_NO_DTLSv1_2 );
    const_str_plain_DTLS_set_link_mtu = UNSTREAM_STRING( &constant_bin[ 555898 ], 17, 1 );
    PyList_SET_ITEM( const_list_a2ccfb1541ef6968650ac43562856e84_list, 5, const_str_plain_DTLS_set_link_mtu ); Py_INCREF( const_str_plain_DTLS_set_link_mtu );
    const_str_plain_DTLS_get_link_min_mtu = UNSTREAM_STRING( &constant_bin[ 555915 ], 21, 1 );
    PyList_SET_ITEM( const_list_a2ccfb1541ef6968650ac43562856e84_list, 6, const_str_plain_DTLS_get_link_min_mtu ); Py_INCREF( const_str_plain_DTLS_get_link_min_mtu );
    const_str_plain_FIPS_mode = UNSTREAM_STRING( &constant_bin[ 555936 ], 9, 1 );
    const_str_digest_5ebdc304a856f17bec9566811cc3653b = UNSTREAM_STRING( &constant_bin[ 555945 ], 44, 1 );
    const_str_plain_X509_V_ERR_SUITE_B_INVALID_VERSION = UNSTREAM_STRING( &constant_bin[ 555989 ], 34, 1 );
    const_str_digest_2fcc949fb99081eda00ddcfc8aa01f9a = UNSTREAM_STRING( &constant_bin[ 556023 ], 45, 1 );
    const_list_str_plain_EVP_PKEY_DHX_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_EVP_PKEY_DHX_list, 0, const_str_plain_EVP_PKEY_DHX ); Py_INCREF( const_str_plain_EVP_PKEY_DHX );
    const_str_plain_SCT_set_source = UNSTREAM_STRING( &constant_bin[ 556068 ], 14, 1 );
    const_str_plain_cryptography_has_110_verification_params = UNSTREAM_STRING( &constant_bin[ 556082 ], 40, 1 );
    const_str_plain_X509_VERIFY_PARAM_set_hostflags = UNSTREAM_STRING( &constant_bin[ 556122 ], 31, 1 );
    const_str_digest_0134e31627bb74f9df2edcd82a96ece3 = UNSTREAM_STRING( &constant_bin[ 556153 ], 45, 1 );
    const_str_plain_ENGINE_get_name = UNSTREAM_STRING( &constant_bin[ 556198 ], 15, 1 );
    const_str_plain_cryptography_has_fips = UNSTREAM_STRING( &constant_bin[ 556213 ], 21, 1 );
    const_str_digest_5e36ac0615fb0e6445b1e014cca7bd54 = UNSTREAM_STRING( &constant_bin[ 556234 ], 47, 1 );
    const_str_plain_Cryptography_HAS_ED448 = UNSTREAM_STRING( &constant_bin[ 556281 ], 22, 1 );
    const_str_plain_Cryptography_HAS_PSK = UNSTREAM_STRING( &constant_bin[ 556303 ], 20, 1 );
    const_list_str_plain_RSA_R_PKCS_DECODING_ERROR_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_RSA_R_PKCS_DECODING_ERROR_list, 0, const_str_plain_RSA_R_PKCS_DECODING_ERROR ); Py_INCREF( const_str_plain_RSA_R_PKCS_DECODING_ERROR );
    const_str_plain_cryptography_has_cipher_details = UNSTREAM_STRING( &constant_bin[ 556323 ], 31, 1 );
    const_str_plain_SSL_CTX_use_psk_identity_hint = UNSTREAM_STRING( &constant_bin[ 556354 ], 29, 1 );
    const_list_str_plain_EVP_PKEY_ED448_str_plain_NID_ED448_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_EVP_PKEY_ED448_str_plain_NID_ED448_list, 0, const_str_plain_EVP_PKEY_ED448 ); Py_INCREF( const_str_plain_EVP_PKEY_ED448 );
    PyList_SET_ITEM( const_list_str_plain_EVP_PKEY_ED448_str_plain_NID_ED448_list, 1, const_str_plain_NID_ED448 ); Py_INCREF( const_str_plain_NID_ED448 );
    const_str_plain_Cryptography_HAS_102_VERIFICATION_PARAMS = UNSTREAM_STRING( &constant_bin[ 556383 ], 40, 1 );
    const_list_str_plain_X509_V_FLAG_TRUSTED_FIRST_list = PyList_New( 1 );
    const_str_plain_X509_V_FLAG_TRUSTED_FIRST = UNSTREAM_STRING( &constant_bin[ 556423 ], 25, 1 );
    PyList_SET_ITEM( const_list_str_plain_X509_V_FLAG_TRUSTED_FIRST_list, 0, const_str_plain_X509_V_FLAG_TRUSTED_FIRST ); Py_INCREF( const_str_plain_X509_V_FLAG_TRUSTED_FIRST );
    const_str_plain_cryptography_has_tlsv13 = UNSTREAM_STRING( &constant_bin[ 556448 ], 23, 1 );
    const_str_plain_X509_V_ERR_SUITE_B_LOS_NOT_ALLOWED = UNSTREAM_STRING( &constant_bin[ 556471 ], 34, 1 );
    const_list_8637a8e096edeccc96cf2940262bfd01_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_8637a8e096edeccc96cf2940262bfd01_list, 0, const_str_plain_EVP_PKEY_new_raw_private_key ); Py_INCREF( const_str_plain_EVP_PKEY_new_raw_private_key );
    PyList_SET_ITEM( const_list_8637a8e096edeccc96cf2940262bfd01_list, 1, const_str_plain_EVP_PKEY_new_raw_public_key ); Py_INCREF( const_str_plain_EVP_PKEY_new_raw_public_key );
    PyList_SET_ITEM( const_list_8637a8e096edeccc96cf2940262bfd01_list, 2, const_str_plain_EVP_PKEY_get_raw_private_key ); Py_INCREF( const_str_plain_EVP_PKEY_get_raw_private_key );
    PyList_SET_ITEM( const_list_8637a8e096edeccc96cf2940262bfd01_list, 3, const_str_plain_EVP_PKEY_get_raw_public_key ); Py_INCREF( const_str_plain_EVP_PKEY_get_raw_public_key );
    const_str_plain_SSL_set_post_handshake_auth = UNSTREAM_STRING( &constant_bin[ 556505 ], 27, 1 );
    const_list_86c40a5c21cefd9f6af8769ff1175caf_list = PyList_New( 9 );
    PyList_SET_ITEM( const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 0, const_str_plain_X509_V_ERR_SUITE_B_INVALID_VERSION ); Py_INCREF( const_str_plain_X509_V_ERR_SUITE_B_INVALID_VERSION );
    const_str_plain_X509_V_ERR_SUITE_B_INVALID_ALGORITHM = UNSTREAM_STRING( &constant_bin[ 556532 ], 36, 1 );
    PyList_SET_ITEM( const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 1, const_str_plain_X509_V_ERR_SUITE_B_INVALID_ALGORITHM ); Py_INCREF( const_str_plain_X509_V_ERR_SUITE_B_INVALID_ALGORITHM );
    const_str_plain_X509_V_ERR_SUITE_B_INVALID_CURVE = UNSTREAM_STRING( &constant_bin[ 556568 ], 32, 1 );
    PyList_SET_ITEM( const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 2, const_str_plain_X509_V_ERR_SUITE_B_INVALID_CURVE ); Py_INCREF( const_str_plain_X509_V_ERR_SUITE_B_INVALID_CURVE );
    const_str_digest_4492d7ee374a0b9e687cf99e3c6facc1 = UNSTREAM_STRING( &constant_bin[ 556600 ], 46, 1 );
    PyList_SET_ITEM( const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 3, const_str_digest_4492d7ee374a0b9e687cf99e3c6facc1 ); Py_INCREF( const_str_digest_4492d7ee374a0b9e687cf99e3c6facc1 );
    PyList_SET_ITEM( const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 4, const_str_plain_X509_V_ERR_SUITE_B_LOS_NOT_ALLOWED ); Py_INCREF( const_str_plain_X509_V_ERR_SUITE_B_LOS_NOT_ALLOWED );
    const_str_digest_05e8c3e45ca4a8d1991048b3b057a830 = UNSTREAM_STRING( &constant_bin[ 556646 ], 47, 1 );
    PyList_SET_ITEM( const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 5, const_str_digest_05e8c3e45ca4a8d1991048b3b057a830 ); Py_INCREF( const_str_digest_05e8c3e45ca4a8d1991048b3b057a830 );
    const_str_plain_X509_V_ERR_HOSTNAME_MISMATCH = UNSTREAM_STRING( &constant_bin[ 556693 ], 28, 1 );
    PyList_SET_ITEM( const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 6, const_str_plain_X509_V_ERR_HOSTNAME_MISMATCH ); Py_INCREF( const_str_plain_X509_V_ERR_HOSTNAME_MISMATCH );
    PyList_SET_ITEM( const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 7, const_str_plain_X509_V_ERR_EMAIL_MISMATCH ); Py_INCREF( const_str_plain_X509_V_ERR_EMAIL_MISMATCH );
    const_str_plain_X509_V_ERR_IP_ADDRESS_MISMATCH = UNSTREAM_STRING( &constant_bin[ 556721 ], 30, 1 );
    PyList_SET_ITEM( const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 8, const_str_plain_X509_V_ERR_IP_ADDRESS_MISMATCH ); Py_INCREF( const_str_plain_X509_V_ERR_IP_ADDRESS_MISMATCH );
    const_str_plain_SSL_CTX_set_psk_client_callback = UNSTREAM_STRING( &constant_bin[ 556751 ], 31, 1 );
    const_list_str_plain_X509_CHECK_FLAG_NEVER_CHECK_SUBJECT_list = PyList_New( 1 );
    const_str_plain_X509_CHECK_FLAG_NEVER_CHECK_SUBJECT = UNSTREAM_STRING( &constant_bin[ 556782 ], 35, 1 );
    PyList_SET_ITEM( const_list_str_plain_X509_CHECK_FLAG_NEVER_CHECK_SUBJECT_list, 0, const_str_plain_X509_CHECK_FLAG_NEVER_CHECK_SUBJECT ); Py_INCREF( const_str_plain_X509_CHECK_FLAG_NEVER_CHECK_SUBJECT );
    const_str_plain_Cryptography_HAS_SIGALGS = UNSTREAM_STRING( &constant_bin[ 556817 ], 24, 1 );
    const_str_plain_SSL_CTX_add_client_custom_ext = UNSTREAM_STRING( &constant_bin[ 556841 ], 29, 1 );
    const_str_plain_cryptography_has_ed25519 = UNSTREAM_STRING( &constant_bin[ 556870 ], 24, 1 );
    const_str_plain_SSL_extension_supported = UNSTREAM_STRING( &constant_bin[ 556894 ], 23, 1 );
    const_str_plain_Cryptography_HAS_110_VERIFICATION_PARAMS = UNSTREAM_STRING( &constant_bin[ 556917 ], 40, 1 );
    const_list_str_plain_FIPS_set_mode_str_plain_FIPS_mode_list = PyList_New( 2 );
    const_str_plain_FIPS_set_mode = UNSTREAM_STRING( &constant_bin[ 556957 ], 13, 1 );
    PyList_SET_ITEM( const_list_str_plain_FIPS_set_mode_str_plain_FIPS_mode_list, 0, const_str_plain_FIPS_set_mode ); Py_INCREF( const_str_plain_FIPS_set_mode );
    PyList_SET_ITEM( const_list_str_plain_FIPS_set_mode_str_plain_FIPS_mode_list, 1, const_str_plain_FIPS_mode ); Py_INCREF( const_str_plain_FIPS_mode );
    const_list_str_plain_EVP_PKEY_X448_str_plain_NID_X448_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_EVP_PKEY_X448_str_plain_NID_X448_list, 0, const_str_plain_EVP_PKEY_X448 ); Py_INCREF( const_str_plain_EVP_PKEY_X448 );
    PyList_SET_ITEM( const_list_str_plain_EVP_PKEY_X448_str_plain_NID_X448_list, 1, const_str_plain_NID_X448 ); Py_INCREF( const_str_plain_NID_X448 );
    const_str_plain_cryptography_has_rsa_oaep_label = UNSTREAM_STRING( &constant_bin[ 556970 ], 31, 1 );
    const_str_plain_Cryptography_HAS_GET_SERVER_TMP_KEY = UNSTREAM_STRING( &constant_bin[ 557001 ], 35, 1 );
    const_list_str_plain_EVP_PKEY_X25519_str_plain_NID_X25519_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_EVP_PKEY_X25519_str_plain_NID_X25519_list, 0, const_str_plain_EVP_PKEY_X25519 ); Py_INCREF( const_str_plain_EVP_PKEY_X25519 );
    PyList_SET_ITEM( const_list_str_plain_EVP_PKEY_X25519_str_plain_NID_X25519_list, 1, const_str_plain_NID_X25519 ); Py_INCREF( const_str_plain_NID_X25519 );
    const_str_digest_fafbfe30544ba42854ed0b86baac5f84 = UNSTREAM_STRING( &constant_bin[ 557036 ], 58, 0 );
    const_str_plain_SSL_get_sigalgs = UNSTREAM_STRING( &constant_bin[ 557094 ], 15, 1 );
    const_str_plain_SCT_set1_log_id = UNSTREAM_STRING( &constant_bin[ 557109 ], 15, 1 );
    const_list_str_plain_EVP_R_MEMORY_LIMIT_EXCEEDED_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_EVP_R_MEMORY_LIMIT_EXCEEDED_list, 0, const_str_plain_EVP_R_MEMORY_LIMIT_EXCEEDED ); Py_INCREF( const_str_plain_EVP_R_MEMORY_LIMIT_EXCEEDED );
    const_str_plain_X509_CHECK_FLAG_NO_PARTIAL_WILDCARDS = UNSTREAM_STRING( &constant_bin[ 557124 ], 36, 1 );
    const_str_plain_SSL_CIPHER_get_kx_nid = UNSTREAM_STRING( &constant_bin[ 557160 ], 21, 1 );
    const_str_plain_SSL_VERIFY_POST_HANDSHAKE = UNSTREAM_STRING( &constant_bin[ 557181 ], 25, 1 );
    const_str_plain_SSL_CTX_set_max_early_data = UNSTREAM_STRING( &constant_bin[ 557206 ], 26, 1 );
    const_str_plain_cryptography_has_evp_digestfinal_xof = UNSTREAM_STRING( &constant_bin[ 557232 ], 36, 1 );
    const_str_digest_0a25da58d8b65f965de99956a1b5aad7 = UNSTREAM_STRING( &constant_bin[ 557268 ], 42, 1 );
    const_str_plain_cryptography_has_custom_ext = UNSTREAM_STRING( &constant_bin[ 557310 ], 27, 1 );
    const_str_plain_SSL_CIPHER_get_auth_nid = UNSTREAM_STRING( &constant_bin[ 557337 ], 23, 1 );
    const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list = PyList_New( 14 );
    const_str_plain_X509_V_FLAG_SUITEB_128_LOS_ONLY = UNSTREAM_STRING( &constant_bin[ 557360 ], 31, 1 );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 0, const_str_plain_X509_V_FLAG_SUITEB_128_LOS_ONLY ); Py_INCREF( const_str_plain_X509_V_FLAG_SUITEB_128_LOS_ONLY );
    const_str_plain_X509_V_FLAG_SUITEB_192_LOS = UNSTREAM_STRING( &constant_bin[ 557391 ], 26, 1 );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 1, const_str_plain_X509_V_FLAG_SUITEB_192_LOS ); Py_INCREF( const_str_plain_X509_V_FLAG_SUITEB_192_LOS );
    const_str_plain_X509_V_FLAG_SUITEB_128_LOS = UNSTREAM_STRING( &constant_bin[ 557360 ], 26, 1 );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 2, const_str_plain_X509_V_FLAG_SUITEB_128_LOS ); Py_INCREF( const_str_plain_X509_V_FLAG_SUITEB_128_LOS );
    const_str_plain_X509_VERIFY_PARAM_set1_host = UNSTREAM_STRING( &constant_bin[ 557417 ], 27, 1 );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 3, const_str_plain_X509_VERIFY_PARAM_set1_host ); Py_INCREF( const_str_plain_X509_VERIFY_PARAM_set1_host );
    const_str_plain_X509_VERIFY_PARAM_set1_email = UNSTREAM_STRING( &constant_bin[ 557444 ], 28, 1 );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 4, const_str_plain_X509_VERIFY_PARAM_set1_email ); Py_INCREF( const_str_plain_X509_VERIFY_PARAM_set1_email );
    const_str_plain_X509_VERIFY_PARAM_set1_ip = UNSTREAM_STRING( &constant_bin[ 557472 ], 25, 1 );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 5, const_str_plain_X509_VERIFY_PARAM_set1_ip ); Py_INCREF( const_str_plain_X509_VERIFY_PARAM_set1_ip );
    const_str_plain_X509_VERIFY_PARAM_set1_ip_asc = UNSTREAM_STRING( &constant_bin[ 557497 ], 29, 1 );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 6, const_str_plain_X509_VERIFY_PARAM_set1_ip_asc ); Py_INCREF( const_str_plain_X509_VERIFY_PARAM_set1_ip_asc );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 7, const_str_plain_X509_VERIFY_PARAM_set_hostflags ); Py_INCREF( const_str_plain_X509_VERIFY_PARAM_set_hostflags );
    const_str_plain_SSL_get0_param = UNSTREAM_STRING( &constant_bin[ 557526 ], 14, 1 );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 8, const_str_plain_SSL_get0_param ); Py_INCREF( const_str_plain_SSL_get0_param );
    const_str_plain_X509_CHECK_FLAG_ALWAYS_CHECK_SUBJECT = UNSTREAM_STRING( &constant_bin[ 557540 ], 36, 1 );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 9, const_str_plain_X509_CHECK_FLAG_ALWAYS_CHECK_SUBJECT ); Py_INCREF( const_str_plain_X509_CHECK_FLAG_ALWAYS_CHECK_SUBJECT );
    const_str_plain_X509_CHECK_FLAG_NO_WILDCARDS = UNSTREAM_STRING( &constant_bin[ 557576 ], 28, 1 );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 10, const_str_plain_X509_CHECK_FLAG_NO_WILDCARDS ); Py_INCREF( const_str_plain_X509_CHECK_FLAG_NO_WILDCARDS );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 11, const_str_plain_X509_CHECK_FLAG_NO_PARTIAL_WILDCARDS ); Py_INCREF( const_str_plain_X509_CHECK_FLAG_NO_PARTIAL_WILDCARDS );
    const_str_plain_X509_CHECK_FLAG_MULTI_LABEL_WILDCARDS = UNSTREAM_STRING( &constant_bin[ 557604 ], 37, 1 );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 12, const_str_plain_X509_CHECK_FLAG_MULTI_LABEL_WILDCARDS ); Py_INCREF( const_str_plain_X509_CHECK_FLAG_MULTI_LABEL_WILDCARDS );
    const_str_plain_X509_CHECK_FLAG_SINGLE_LABEL_SUBDOMAINS = UNSTREAM_STRING( &constant_bin[ 557641 ], 39, 1 );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 13, const_str_plain_X509_CHECK_FLAG_SINGLE_LABEL_SUBDOMAINS ); Py_INCREF( const_str_plain_X509_CHECK_FLAG_SINGLE_LABEL_SUBDOMAINS );
    const_list_9cf036427baefafa3a18cbc2378aecdb_list = PyList_New( 10 );
    const_str_plain_SSL_OP_NO_TLSv1_3 = UNSTREAM_STRING( &constant_bin[ 557680 ], 17, 1 );
    PyList_SET_ITEM( const_list_9cf036427baefafa3a18cbc2378aecdb_list, 0, const_str_plain_SSL_OP_NO_TLSv1_3 ); Py_INCREF( const_str_plain_SSL_OP_NO_TLSv1_3 );
    PyList_SET_ITEM( const_list_9cf036427baefafa3a18cbc2378aecdb_list, 1, const_str_plain_SSL_VERIFY_POST_HANDSHAKE ); Py_INCREF( const_str_plain_SSL_VERIFY_POST_HANDSHAKE );
    const_str_plain_SSL_CTX_set_ciphersuites = UNSTREAM_STRING( &constant_bin[ 557697 ], 24, 1 );
    PyList_SET_ITEM( const_list_9cf036427baefafa3a18cbc2378aecdb_list, 2, const_str_plain_SSL_CTX_set_ciphersuites ); Py_INCREF( const_str_plain_SSL_CTX_set_ciphersuites );
    const_str_plain_SSL_verify_client_post_handshake = UNSTREAM_STRING( &constant_bin[ 557721 ], 32, 1 );
    PyList_SET_ITEM( const_list_9cf036427baefafa3a18cbc2378aecdb_list, 3, const_str_plain_SSL_verify_client_post_handshake ); Py_INCREF( const_str_plain_SSL_verify_client_post_handshake );
    const_str_plain_SSL_CTX_set_post_handshake_auth = UNSTREAM_STRING( &constant_bin[ 557753 ], 31, 1 );
    PyList_SET_ITEM( const_list_9cf036427baefafa3a18cbc2378aecdb_list, 4, const_str_plain_SSL_CTX_set_post_handshake_auth ); Py_INCREF( const_str_plain_SSL_CTX_set_post_handshake_auth );
    PyList_SET_ITEM( const_list_9cf036427baefafa3a18cbc2378aecdb_list, 5, const_str_plain_SSL_set_post_handshake_auth ); Py_INCREF( const_str_plain_SSL_set_post_handshake_auth );
    const_str_plain_SSL_SESSION_get_max_early_data = UNSTREAM_STRING( &constant_bin[ 557784 ], 30, 1 );
    PyList_SET_ITEM( const_list_9cf036427baefafa3a18cbc2378aecdb_list, 6, const_str_plain_SSL_SESSION_get_max_early_data ); Py_INCREF( const_str_plain_SSL_SESSION_get_max_early_data );
    const_str_plain_SSL_write_early_data = UNSTREAM_STRING( &constant_bin[ 557814 ], 20, 1 );
    PyList_SET_ITEM( const_list_9cf036427baefafa3a18cbc2378aecdb_list, 7, const_str_plain_SSL_write_early_data ); Py_INCREF( const_str_plain_SSL_write_early_data );
    const_str_plain_SSL_read_early_data = UNSTREAM_STRING( &constant_bin[ 557834 ], 19, 1 );
    PyList_SET_ITEM( const_list_9cf036427baefafa3a18cbc2378aecdb_list, 8, const_str_plain_SSL_read_early_data ); Py_INCREF( const_str_plain_SSL_read_early_data );
    PyList_SET_ITEM( const_list_9cf036427baefafa3a18cbc2378aecdb_list, 9, const_str_plain_SSL_CTX_set_max_early_data ); Py_INCREF( const_str_plain_SSL_CTX_set_max_early_data );
    const_str_plain_cryptography_has_get_server_tmp_key = UNSTREAM_STRING( &constant_bin[ 557853 ], 35, 1 );
    const_str_plain_Cryptography_HAS_FIPS = UNSTREAM_STRING( &constant_bin[ 557888 ], 21, 1 );
    const_str_digest_c8d4ed7f56a6990e5028c35f4876f90c = UNSTREAM_STRING( &constant_bin[ 557909 ], 50, 1 );
    const_str_plain_SSLv3_server_method = UNSTREAM_STRING( &constant_bin[ 557959 ], 19, 1 );
    const_list_03133653ae1f779dd1ae650a3a80ba30_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_03133653ae1f779dd1ae650a3a80ba30_list, 0, const_str_plain_SSL_CTX_add_client_custom_ext ); Py_INCREF( const_str_plain_SSL_CTX_add_client_custom_ext );
    const_str_plain_SSL_CTX_add_server_custom_ext = UNSTREAM_STRING( &constant_bin[ 557978 ], 29, 1 );
    PyList_SET_ITEM( const_list_03133653ae1f779dd1ae650a3a80ba30_list, 1, const_str_plain_SSL_CTX_add_server_custom_ext ); Py_INCREF( const_str_plain_SSL_CTX_add_server_custom_ext );
    PyList_SET_ITEM( const_list_03133653ae1f779dd1ae650a3a80ba30_list, 2, const_str_plain_SSL_extension_supported ); Py_INCREF( const_str_plain_SSL_extension_supported );
    const_list_70d66b11b8b83912e7ed175ae865dfed_list = PyList_New( 2 );
    const_str_plain_SSL_CTX_set1_sigalgs_list = UNSTREAM_STRING( &constant_bin[ 558007 ], 25, 1 );
    PyList_SET_ITEM( const_list_70d66b11b8b83912e7ed175ae865dfed_list, 0, const_str_plain_SSL_CTX_set1_sigalgs_list ); Py_INCREF( const_str_plain_SSL_CTX_set1_sigalgs_list );
    PyList_SET_ITEM( const_list_70d66b11b8b83912e7ed175ae865dfed_list, 1, const_str_plain_SSL_get_sigalgs ); Py_INCREF( const_str_plain_SSL_get_sigalgs );
    const_str_plain_EC_POINT_set_compressed_coordinates_GF2m = UNSTREAM_STRING( &constant_bin[ 558032 ], 40, 1 );
    const_str_plain_cryptography_has_102_verification_params = UNSTREAM_STRING( &constant_bin[ 558072 ], 40, 1 );
    const_str_plain_Cryptography_HAS_TLS_ST = UNSTREAM_STRING( &constant_bin[ 558112 ], 23, 1 );
    const_str_plain_SSL_COMP_get_name = UNSTREAM_STRING( &constant_bin[ 558135 ], 17, 1 );
    const_str_plain_cryptography_has_ssl_sigalgs = UNSTREAM_STRING( &constant_bin[ 558152 ], 28, 1 );
    const_list_str_plain_TLS_ST_BEFORE_str_plain_TLS_ST_OK_list = PyList_New( 2 );
    const_str_plain_TLS_ST_BEFORE = UNSTREAM_STRING( &constant_bin[ 558180 ], 13, 1 );
    PyList_SET_ITEM( const_list_str_plain_TLS_ST_BEFORE_str_plain_TLS_ST_OK_list, 0, const_str_plain_TLS_ST_BEFORE ); Py_INCREF( const_str_plain_TLS_ST_BEFORE );
    PyList_SET_ITEM( const_list_str_plain_TLS_ST_BEFORE_str_plain_TLS_ST_OK_list, 1, const_str_plain_TLS_ST_OK ); Py_INCREF( const_str_plain_TLS_ST_OK );
    const_list_str_plain_EVP_DigestSign_str_plain_EVP_DigestVerify_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_EVP_DigestSign_str_plain_EVP_DigestVerify_list, 0, const_str_plain_EVP_DigestSign ); Py_INCREF( const_str_plain_EVP_DigestSign );
    PyList_SET_ITEM( const_list_str_plain_EVP_DigestSign_str_plain_EVP_DigestVerify_list, 1, const_str_plain_EVP_DigestVerify ); Py_INCREF( const_str_plain_EVP_DigestVerify );
    const_str_plain_Cryptography_HAS_X25519 = UNSTREAM_STRING( &constant_bin[ 558193 ], 23, 1 );
    const_list_e5729eb47bb2bb77d896a48e0ba4a292_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_e5729eb47bb2bb77d896a48e0ba4a292_list, 0, const_str_plain_SSL_CTX_use_psk_identity_hint ); Py_INCREF( const_str_plain_SSL_CTX_use_psk_identity_hint );
    const_str_plain_SSL_CTX_set_psk_server_callback = UNSTREAM_STRING( &constant_bin[ 558216 ], 31, 1 );
    PyList_SET_ITEM( const_list_e5729eb47bb2bb77d896a48e0ba4a292_list, 1, const_str_plain_SSL_CTX_set_psk_server_callback ); Py_INCREF( const_str_plain_SSL_CTX_set_psk_server_callback );
    PyList_SET_ITEM( const_list_e5729eb47bb2bb77d896a48e0ba4a292_list, 2, const_str_plain_SSL_CTX_set_psk_client_callback ); Py_INCREF( const_str_plain_SSL_CTX_set_psk_client_callback );
    const_list_str_plain_SSL_CTX_set_ecdh_auto_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_SSL_CTX_set_ecdh_auto_list, 0, const_str_plain_SSL_CTX_set_ecdh_auto ); Py_INCREF( const_str_plain_SSL_CTX_set_ecdh_auto );
    const_str_plain_cryptography_has_tls_st = UNSTREAM_STRING( &constant_bin[ 558247 ], 23, 1 );
    const_list_a92b37e3fd97e57634d2e2c4f15929c2_list = PyList_New( 16 );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 0, const_str_plain_SCT_get_version ); Py_INCREF( const_str_plain_SCT_get_version );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 1, const_str_plain_SCT_get_log_entry_type ); Py_INCREF( const_str_plain_SCT_get_log_entry_type );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 2, const_str_plain_SCT_get0_log_id ); Py_INCREF( const_str_plain_SCT_get0_log_id );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 3, const_str_plain_SCT_get0_signature ); Py_INCREF( const_str_plain_SCT_get0_signature );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 4, const_str_plain_SCT_get_timestamp ); Py_INCREF( const_str_plain_SCT_get_timestamp );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 5, const_str_plain_SCT_set_source ); Py_INCREF( const_str_plain_SCT_set_source );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 6, const_str_plain_sk_SCT_num ); Py_INCREF( const_str_plain_sk_SCT_num );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 7, const_str_plain_sk_SCT_value ); Py_INCREF( const_str_plain_sk_SCT_value );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 8, const_str_plain_SCT_LIST_free ); Py_INCREF( const_str_plain_SCT_LIST_free );
    const_str_plain_sk_SCT_push = UNSTREAM_STRING( &constant_bin[ 558270 ], 11, 1 );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 9, const_str_plain_sk_SCT_push ); Py_INCREF( const_str_plain_sk_SCT_push );
    const_str_plain_sk_SCT_new_null = UNSTREAM_STRING( &constant_bin[ 558281 ], 15, 1 );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 10, const_str_plain_sk_SCT_new_null ); Py_INCREF( const_str_plain_sk_SCT_new_null );
    const_str_plain_SCT_new = UNSTREAM_STRING( &constant_bin[ 558284 ], 7, 1 );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 11, const_str_plain_SCT_new ); Py_INCREF( const_str_plain_SCT_new );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 12, const_str_plain_SCT_set1_log_id ); Py_INCREF( const_str_plain_SCT_set1_log_id );
    const_str_plain_SCT_set_timestamp = UNSTREAM_STRING( &constant_bin[ 558296 ], 17, 1 );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 13, const_str_plain_SCT_set_timestamp ); Py_INCREF( const_str_plain_SCT_set_timestamp );
    const_str_plain_SCT_set_version = UNSTREAM_STRING( &constant_bin[ 558313 ], 15, 1 );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 14, const_str_plain_SCT_set_version ); Py_INCREF( const_str_plain_SCT_set_version );
    const_str_plain_SCT_set_log_entry_type = UNSTREAM_STRING( &constant_bin[ 558328 ], 22, 1 );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 15, const_str_plain_SCT_set_log_entry_type ); Py_INCREF( const_str_plain_SCT_set_log_entry_type );
    const_str_digest_89c6e3f07e56ca3212435467944ee8af = UNSTREAM_STRING( &constant_bin[ 558350 ], 42, 1 );
    const_str_plain_Cryptography_HAS_CIPHER_DETAILS = UNSTREAM_STRING( &constant_bin[ 558392 ], 31, 1 );
    const_list_29407ac2cfa5bacd5103ba17ced806aa_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_29407ac2cfa5bacd5103ba17ced806aa_list, 0, const_str_plain_SSL_ST_BEFORE ); Py_INCREF( const_str_plain_SSL_ST_BEFORE );
    PyList_SET_ITEM( const_list_29407ac2cfa5bacd5103ba17ced806aa_list, 1, const_str_plain_SSL_ST_OK ); Py_INCREF( const_str_plain_SSL_ST_OK );
    PyList_SET_ITEM( const_list_29407ac2cfa5bacd5103ba17ced806aa_list, 2, const_str_plain_SSL_ST_INIT ); Py_INCREF( const_str_plain_SSL_ST_INIT );
    PyList_SET_ITEM( const_list_29407ac2cfa5bacd5103ba17ced806aa_list, 3, const_str_plain_SSL_ST_RENEGOTIATE ); Py_INCREF( const_str_plain_SSL_ST_RENEGOTIATE );
    const_str_plain_Cryptography_HAS_X448 = UNSTREAM_STRING( &constant_bin[ 558423 ], 21, 1 );
    const_list_str_plain_Cryptography_CRYPTO_set_mem_functions_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_Cryptography_CRYPTO_set_mem_functions_list, 0, const_str_plain_Cryptography_CRYPTO_set_mem_functions ); Py_INCREF( const_str_plain_Cryptography_CRYPTO_set_mem_functions );
    const_str_plain_EC_POINT_set_affine_coordinates_GF2m = UNSTREAM_STRING( &constant_bin[ 558444 ], 36, 1 );
    const_list_str_plain_EC_curve_nid2nist_list = PyList_New( 1 );
    const_str_plain_EC_curve_nid2nist = UNSTREAM_STRING( &constant_bin[ 558480 ], 17, 1 );
    PyList_SET_ITEM( const_list_str_plain_EC_curve_nid2nist_list, 0, const_str_plain_EC_curve_nid2nist ); Py_INCREF( const_str_plain_EC_curve_nid2nist );
    const_str_plain_cryptography_has_set_cert_cb = UNSTREAM_STRING( &constant_bin[ 558497 ], 28, 1 );
    const_str_plain_SSL_get_current_expansion = UNSTREAM_STRING( &constant_bin[ 558525 ], 25, 1 );
    const_list_531063e0f807f77ec21047a47441d048_list = PyList_New( 5 );
    const_str_plain_SSL_CIPHER_is_aead = UNSTREAM_STRING( &constant_bin[ 558550 ], 18, 1 );
    PyList_SET_ITEM( const_list_531063e0f807f77ec21047a47441d048_list, 0, const_str_plain_SSL_CIPHER_is_aead ); Py_INCREF( const_str_plain_SSL_CIPHER_is_aead );
    const_str_plain_SSL_CIPHER_get_cipher_nid = UNSTREAM_STRING( &constant_bin[ 558568 ], 25, 1 );
    PyList_SET_ITEM( const_list_531063e0f807f77ec21047a47441d048_list, 1, const_str_plain_SSL_CIPHER_get_cipher_nid ); Py_INCREF( const_str_plain_SSL_CIPHER_get_cipher_nid );
    const_str_plain_SSL_CIPHER_get_digest_nid = UNSTREAM_STRING( &constant_bin[ 558593 ], 25, 1 );
    PyList_SET_ITEM( const_list_531063e0f807f77ec21047a47441d048_list, 2, const_str_plain_SSL_CIPHER_get_digest_nid ); Py_INCREF( const_str_plain_SSL_CIPHER_get_digest_nid );
    PyList_SET_ITEM( const_list_531063e0f807f77ec21047a47441d048_list, 3, const_str_plain_SSL_CIPHER_get_kx_nid ); Py_INCREF( const_str_plain_SSL_CIPHER_get_kx_nid );
    PyList_SET_ITEM( const_list_531063e0f807f77ec21047a47441d048_list, 4, const_str_plain_SSL_CIPHER_get_auth_nid ); Py_INCREF( const_str_plain_SSL_CIPHER_get_auth_nid );
    const_str_plain_cryptography_has_x448 = UNSTREAM_STRING( &constant_bin[ 558618 ], 21, 1 );
    const_list_str_plain_OPENSSL_cleanup_list = PyList_New( 1 );
    const_str_plain_OPENSSL_cleanup = UNSTREAM_STRING( &constant_bin[ 558639 ], 15, 1 );
    PyList_SET_ITEM( const_list_str_plain_OPENSSL_cleanup_list, 0, const_str_plain_OPENSSL_cleanup ); Py_INCREF( const_str_plain_OPENSSL_cleanup );
    const_str_plain_Cryptography_HAS_ED25519 = UNSTREAM_STRING( &constant_bin[ 558654 ], 24, 1 );
    const_list_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label_list, 0, const_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label ); Py_INCREF( const_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label );
    const_str_plain_cryptography_has_ssl3_method = UNSTREAM_STRING( &constant_bin[ 558678 ], 28, 1 );
    const_str_plain_cryptography_has_generic_dtls_method = UNSTREAM_STRING( &constant_bin[ 558706 ], 36, 1 );
    const_str_plain_SSL_get_current_compression = UNSTREAM_STRING( &constant_bin[ 558742 ], 27, 1 );
    const_str_digest_96e83fdb049b186bfc982a4b37cdf168 = UNSTREAM_STRING( &constant_bin[ 558769 ], 42, 1 );
    const_list_8cf6be4317fa4d6df8e3c06784c94792_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_8cf6be4317fa4d6df8e3c06784c94792_list, 0, const_str_plain_EC_POINT_set_affine_coordinates_GF2m ); Py_INCREF( const_str_plain_EC_POINT_set_affine_coordinates_GF2m );
    PyList_SET_ITEM( const_list_8cf6be4317fa4d6df8e3c06784c94792_list, 1, const_str_plain_EC_POINT_get_affine_coordinates_GF2m ); Py_INCREF( const_str_plain_EC_POINT_get_affine_coordinates_GF2m );
    PyList_SET_ITEM( const_list_8cf6be4317fa4d6df8e3c06784c94792_list, 2, const_str_plain_EC_POINT_set_compressed_coordinates_GF2m ); Py_INCREF( const_str_plain_EC_POINT_set_compressed_coordinates_GF2m );
    const_str_plain_cryptography_has_ec2m = UNSTREAM_STRING( &constant_bin[ 558811 ], 21, 1 );
    const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9 = UNSTREAM_STRING( &constant_bin[ 558832 ], 42, 1 );
    const_str_plain_cryptography_has_evp_pkey_dhx = UNSTREAM_STRING( &constant_bin[ 558874 ], 29, 1 );
    const_str_plain_cryptography_has_locking_callbacks = UNSTREAM_STRING( &constant_bin[ 558903 ], 34, 1 );
    const_str_plain_cryptography_has_rsa_oaep_md = UNSTREAM_STRING( &constant_bin[ 558937 ], 28, 1 );
    const_str_plain_Cryptography_HAS_EC_1_0_2 = UNSTREAM_STRING( &constant_bin[ 558965 ], 25, 1 );
    const_str_plain_Cryptography_HAS_TLSv1_3 = UNSTREAM_STRING( &constant_bin[ 558990 ], 24, 1 );
    const_str_plain_Cryptography_HAS_SET_CERT_CB = UNSTREAM_STRING( &constant_bin[ 559014 ], 28, 1 );
    const_list_str_plain_NID_ED25519_str_plain_EVP_PKEY_ED25519_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_NID_ED25519_str_plain_EVP_PKEY_ED25519_list, 0, const_str_plain_NID_ED25519 ); Py_INCREF( const_str_plain_NID_ED25519 );
    PyList_SET_ITEM( const_list_str_plain_NID_ED25519_str_plain_EVP_PKEY_ED25519_list, 1, const_str_plain_EVP_PKEY_ED25519 ); Py_INCREF( const_str_plain_EVP_PKEY_ED25519 );
    const_str_plain_X509_V_FLAG_PARTIAL_CHAIN = UNSTREAM_STRING( &constant_bin[ 558786 ], 25, 1 );
    const_str_digest_d2c4bd506cf66a4d1c7adfe4f312872c = UNSTREAM_STRING( &constant_bin[ 559042 ], 42, 1 );
    const_list_99d2a9f3afa4bd958ff3177b2faaca12_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_99d2a9f3afa4bd958ff3177b2faaca12_list, 0, const_str_plain_SSLv3_method ); Py_INCREF( const_str_plain_SSLv3_method );
    PyList_SET_ITEM( const_list_99d2a9f3afa4bd958ff3177b2faaca12_list, 1, const_str_plain_SSLv3_client_method ); Py_INCREF( const_str_plain_SSLv3_client_method );
    PyList_SET_ITEM( const_list_99d2a9f3afa4bd958ff3177b2faaca12_list, 2, const_str_plain_SSLv3_server_method ); Py_INCREF( const_str_plain_SSLv3_server_method );
    const_str_plain_cryptography_has_ed448 = UNSTREAM_STRING( &constant_bin[ 559084 ], 22, 1 );
    const_str_plain_Cryptography_HAS_SET_ECDH_AUTO = UNSTREAM_STRING( &constant_bin[ 559106 ], 30, 1 );
    const_str_plain_cryptography_has_scrypt = UNSTREAM_STRING( &constant_bin[ 559136 ], 23, 1 );
    const_str_plain_cryptography_has_mem_functions = UNSTREAM_STRING( &constant_bin[ 559159 ], 30, 1 );
    const_str_plain_Cryptography_HAS_RAW_KEY = UNSTREAM_STRING( &constant_bin[ 559189 ], 24, 1 );
    const_str_plain_cryptography_has_ssl_st = UNSTREAM_STRING( &constant_bin[ 559213 ], 23, 1 );
    const_str_plain_Cryptography_HAS_SSL3_METHOD = UNSTREAM_STRING( &constant_bin[ 559236 ], 28, 1 );
    const_str_plain_cryptography_has_ec_1_0_2 = UNSTREAM_STRING( &constant_bin[ 559264 ], 25, 1 );
    const_str_plain_Cryptography_HAS_GENERIC_DTLS_METHOD = UNSTREAM_STRING( &constant_bin[ 559289 ], 36, 1 );
    const_str_plain_cryptography_has_compression = UNSTREAM_STRING( &constant_bin[ 559325 ], 28, 1 );
    const_list_str_plain_Cryptography_setup_ssl_threads_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_Cryptography_setup_ssl_threads_list, 0, const_str_plain_Cryptography_setup_ssl_threads ); Py_INCREF( const_str_plain_Cryptography_setup_ssl_threads );
    const_list_69b906847d25decb1cda42670e7e5241_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_69b906847d25decb1cda42670e7e5241_list, 0, const_str_plain_SSL_CTX_set_alpn_protos ); Py_INCREF( const_str_plain_SSL_CTX_set_alpn_protos );
    PyList_SET_ITEM( const_list_69b906847d25decb1cda42670e7e5241_list, 1, const_str_plain_SSL_set_alpn_protos ); Py_INCREF( const_str_plain_SSL_set_alpn_protos );
    PyList_SET_ITEM( const_list_69b906847d25decb1cda42670e7e5241_list, 2, const_str_plain_SSL_CTX_set_alpn_select_cb ); Py_INCREF( const_str_plain_SSL_CTX_set_alpn_select_cb );
    PyList_SET_ITEM( const_list_69b906847d25decb1cda42670e7e5241_list, 3, const_str_plain_SSL_get0_alpn_selected ); Py_INCREF( const_str_plain_SSL_get0_alpn_selected );
    const_str_digest_b2405d2434f1275e2b8933b43c529fbe = UNSTREAM_STRING( &constant_bin[ 559353 ], 42, 1 );
    const_str_plain_Cryptography_HAS_EVP_DIGESTFINAL_XOF = UNSTREAM_STRING( &constant_bin[ 559395 ], 36, 1 );
    const_str_digest_38eba4904dfc59e8c0458109674fe900 = UNSTREAM_STRING( &constant_bin[ 559431 ], 50, 1 );
    const_str_plain_cryptography_has_engine = UNSTREAM_STRING( &constant_bin[ 559481 ], 23, 1 );
    const_list_str_plain_X509_V_FLAG_PARTIAL_CHAIN_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_X509_V_FLAG_PARTIAL_CHAIN_list, 0, const_str_plain_X509_V_FLAG_PARTIAL_CHAIN ); Py_INCREF( const_str_plain_X509_V_FLAG_PARTIAL_CHAIN );
    const_str_plain_Cryptography_HAS_SCT = UNSTREAM_STRING( &constant_bin[ 559504 ], 20, 1 );
    const_list_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md_list, 0, const_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md ); Py_INCREF( const_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md );
    const_list_136332fc21a01754e44f9a06545f3713_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_136332fc21a01754e44f9a06545f3713_list, 0, const_str_plain_EVP_PKEY_get1_tls_encodedpoint ); Py_INCREF( const_str_plain_EVP_PKEY_get1_tls_encodedpoint );
    PyList_SET_ITEM( const_list_136332fc21a01754e44f9a06545f3713_list, 1, const_str_plain_EVP_PKEY_set1_tls_encodedpoint ); Py_INCREF( const_str_plain_EVP_PKEY_set1_tls_encodedpoint );
    const_str_plain_cryptography_has_openssl_cleanup = UNSTREAM_STRING( &constant_bin[ 559524 ], 32, 1 );
    const_str_digest_8535fc31daf81b5f04208070d851f01e = UNSTREAM_STRING( &constant_bin[ 559556 ], 44, 1 );
    const_str_plain_Cryptography_HAS_COMPRESSION = UNSTREAM_STRING( &constant_bin[ 559600 ], 28, 1 );
    const_list_str_plain_EVP_DigestFinalXOF_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_EVP_DigestFinalXOF_list, 0, const_str_plain_EVP_DigestFinalXOF ); Py_INCREF( const_str_plain_EVP_DigestFinalXOF );
    const_str_digest_08906fb95f8ef4a836f252aa7b12b1cf = UNSTREAM_STRING( &constant_bin[ 559628 ], 47, 1 );
    const_str_plain_Cryptography_HAS_MEM_FUNCTIONS = UNSTREAM_STRING( &constant_bin[ 559675 ], 30, 1 );
    const_list_f501d0e9bfb78a701032fc968ff559f6_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_f501d0e9bfb78a701032fc968ff559f6_list, 0, const_str_plain_SSL_get_current_compression ); Py_INCREF( const_str_plain_SSL_get_current_compression );
    PyList_SET_ITEM( const_list_f501d0e9bfb78a701032fc968ff559f6_list, 1, const_str_plain_SSL_get_current_expansion ); Py_INCREF( const_str_plain_SSL_get_current_expansion );
    PyList_SET_ITEM( const_list_f501d0e9bfb78a701032fc968ff559f6_list, 2, const_str_plain_SSL_COMP_get_name ); Py_INCREF( const_str_plain_SSL_COMP_get_name );
    const_str_plain_cryptography_has_sct = UNSTREAM_STRING( &constant_bin[ 559705 ], 20, 1 );
    const_list_d0eb343c74fa9d778f192626e2b9d53e_list = PyList_New( 10 );
    PyList_SET_ITEM( const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 0, const_str_plain_ENGINE_by_id ); Py_INCREF( const_str_plain_ENGINE_by_id );
    PyList_SET_ITEM( const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 1, const_str_plain_ENGINE_init ); Py_INCREF( const_str_plain_ENGINE_init );
    PyList_SET_ITEM( const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 2, const_str_plain_ENGINE_finish ); Py_INCREF( const_str_plain_ENGINE_finish );
    PyList_SET_ITEM( const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 3, const_str_plain_ENGINE_get_default_RAND ); Py_INCREF( const_str_plain_ENGINE_get_default_RAND );
    PyList_SET_ITEM( const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 4, const_str_plain_ENGINE_set_default_RAND ); Py_INCREF( const_str_plain_ENGINE_set_default_RAND );
    PyList_SET_ITEM( const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 5, const_str_plain_ENGINE_unregister_RAND ); Py_INCREF( const_str_plain_ENGINE_unregister_RAND );
    PyList_SET_ITEM( const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 6, const_str_plain_ENGINE_ctrl_cmd ); Py_INCREF( const_str_plain_ENGINE_ctrl_cmd );
    PyList_SET_ITEM( const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 7, const_str_plain_ENGINE_free ); Py_INCREF( const_str_plain_ENGINE_free );
    PyList_SET_ITEM( const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 8, const_str_plain_ENGINE_get_name ); Py_INCREF( const_str_plain_ENGINE_get_name );
    PyList_SET_ITEM( const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 9, const_str_plain_Cryptography_add_osrandom_engine ); Py_INCREF( const_str_plain_Cryptography_add_osrandom_engine );
    const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33 = UNSTREAM_STRING( &constant_bin[ 559725 ], 42, 1 );
    const_str_plain_cryptography_has_set_ecdh_auto = UNSTREAM_STRING( &constant_bin[ 559767 ], 30, 1 );
    const_str_plain_cryptography_has_alpn = UNSTREAM_STRING( &constant_bin[ 559797 ], 21, 1 );
    const_str_plain_cryptography_has_x25519 = UNSTREAM_STRING( &constant_bin[ 559818 ], 23, 1 );
    const_list_str_plain_EVP_PBE_scrypt_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_EVP_PBE_scrypt_list, 0, const_str_plain_EVP_PBE_scrypt ); Py_INCREF( const_str_plain_EVP_PBE_scrypt );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$bindings$openssl$_conditional( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_2452a9f29901e383eedeebe556ad37f7;
static PyCodeObject *codeobj_0021209e7d391dec15e5f26734a8853a;
static PyCodeObject *codeobj_83ad7bbb0a7fff5ecfb9437e2f0fd530;
static PyCodeObject *codeobj_3aa31eb2c067da63ca69d75b02cf3d58;
static PyCodeObject *codeobj_5b0eb7bd769bc3de106b20d6df3d107d;
static PyCodeObject *codeobj_605830a15607362ac9580d1df990b049;
static PyCodeObject *codeobj_b5ddc229b17840b7cf9b107a0ef9e5bf;
static PyCodeObject *codeobj_ea0b67019330a00ef9ee0862d41609b1;
static PyCodeObject *codeobj_23f91de0f091bd3ccb6dcc0cbc9e2df1;
static PyCodeObject *codeobj_89e93be3602cefb4aeb30e92b64d058e;
static PyCodeObject *codeobj_18cb8d97292dc62952cbb48ad28f3045;
static PyCodeObject *codeobj_05c653b88c655551a498cd633147486d;
static PyCodeObject *codeobj_a486ce41cff320dfe5db08e54d8346a6;
static PyCodeObject *codeobj_701bb64da6b53a1eaf29caad6139b746;
static PyCodeObject *codeobj_448bd98495c6a19e284e04ed81ed968e;
static PyCodeObject *codeobj_50e7c73066078db670e65c0a8b093ed9;
static PyCodeObject *codeobj_f4a00a9d60e80684cc53bc7f0b5e7227;
static PyCodeObject *codeobj_0c7ba432fa2e418e8b6591d3d0b177e8;
static PyCodeObject *codeobj_75755457170b184961053cc9d2256875;
static PyCodeObject *codeobj_78637fe8f7ee61445f5dca3cd65f0fe9;
static PyCodeObject *codeobj_6c9ff7e2d940c93b88707a42003a7568;
static PyCodeObject *codeobj_6b004f50d9994de7d61d699cb2998a3e;
static PyCodeObject *codeobj_ccb31eae0763f43768593217f24d3961;
static PyCodeObject *codeobj_4279c004f4e0473d65bcaecb127143c6;
static PyCodeObject *codeobj_0ffa104eece41bcec4454d39f67456fd;
static PyCodeObject *codeobj_181f572c920a73d986276d2b154f10a2;
static PyCodeObject *codeobj_305dcaf9f6e2d67ee179b2fb5997b780;
static PyCodeObject *codeobj_629237eb63882362970c374192f1344a;
static PyCodeObject *codeobj_fa10aaf2f811f5844344403e8bcfc74b;
static PyCodeObject *codeobj_060e2eae97ae7de1a770b21a5dfe2668;
static PyCodeObject *codeobj_4eadc249aafa2e7fc8410e48638bf517;
static PyCodeObject *codeobj_be39ea9341189767c3e3a5539647461b;
static PyCodeObject *codeobj_a385ecefed57f827d84aa146300948c5;
static PyCodeObject *codeobj_bd61e3caed60d5ed799af901bc0eb589;
static PyCodeObject *codeobj_a4424bcfeaae9d3c69622197b0283515;
static PyCodeObject *codeobj_521b8f802f3ea62d61ca2b796c1c2ea3;
static PyCodeObject *codeobj_0443a4693f04502fb5158980647e85b0;
static PyCodeObject *codeobj_23214a8e3fdf679e23886a45743572f9;
static PyCodeObject *codeobj_696b218f7ead95bfdeef6f0827fac1c3;
static PyCodeObject *codeobj_8ecc226d11abc29d7d085e966733c2e7;
static PyCodeObject *codeobj_89e03f136eaa46b30b3ab1ec4cc7eee2;
static PyCodeObject *codeobj_a697d4b0e20051569f3c77bf599962cf;
static PyCodeObject *codeobj_de20b533f8b9c5f98504fd806dd17d2d;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_7899e04c61e679344a45988ca746bae2;
    codeobj_2452a9f29901e383eedeebe556ad37f7 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_fafbfe30544ba42854ed0b86baac5f84, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0021209e7d391dec15e5f26734a8853a = MAKE_CODEOBJ( module_filename_obj, const_str_digest_0134e31627bb74f9df2edcd82a96ece3, 77, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_83ad7bbb0a7fff5ecfb9437e2f0fd530 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_102_verification_params, 91, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3aa31eb2c067da63ca69d75b02cf3d58 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_110_verification_params, 110, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5b0eb7bd769bc3de106b20d6df3d107d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_alpn, 54, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_605830a15607362ac9580d1df990b049 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_cipher_details, 299, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b5ddc229b17840b7cf9b107a0ef9e5bf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_compression, 63, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ea0b67019330a00ef9ee0862d41609b1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_custom_ext, 285, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_23f91de0f091bd3ccb6dcc0cbc9e2df1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_ec2m, 8, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_89e93be3602cefb4aeb30e92b64d058e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_ec_1_0_2, 16, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_18cb8d97292dc62952cbb48ad28f3045 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_ed25519, 236, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_05c653b88c655551a498cd633147486d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_ed448, 229, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a486ce41cff320dfe5db08e54d8346a6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_engine, 339, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_701bb64da6b53a1eaf29caad6139b746 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_evp_digestfinal_xof, 250, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_448bd98495c6a19e284e04ed81ed968e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_evp_pkey_dhx, 175, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_50e7c73066078db670e65c0a8b093ed9 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_38eba4904dfc59e8c0458109674fe900, 256, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f4a00a9d60e80684cc53bc7f0b5e7227 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_8535fc31daf81b5f04208070d851f01e, 333, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0c7ba432fa2e418e8b6591d3d0b177e8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_fips, 263, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_75755457170b184961053cc9d2256875 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_generic_dtls_method, 163, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_78637fe8f7ee61445f5dca3cd65f0fe9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_get_server_tmp_key, 71, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6c9ff7e2d940c93b88707a42003a7568 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_locking_callbacks, 151, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6b004f50d9994de7d61d699cb2998a3e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_mem_functions, 181, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ccb31eae0763f43768593217f24d3961 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_5e36ac0615fb0e6445b1e014cca7bd54, 243, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4279c004f4e0473d65bcaecb127143c6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_openssl_cleanup, 293, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0ffa104eece41bcec4454d39f67456fd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_psk, 277, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_181f572c920a73d986276d2b154f10a2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_raw_key, 324, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_305dcaf9f6e2d67ee179b2fb5997b780 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_rsa_oaep_label, 40, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_629237eb63882362970c374192f1344a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_rsa_oaep_md, 34, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fa10aaf2f811f5844344403e8bcfc74b = MAKE_CODEOBJ( module_filename_obj, const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9, 28, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_060e2eae97ae7de1a770b21a5dfe2668 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_scrypt, 157, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4eadc249aafa2e7fc8410e48638bf517 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_sct, 187, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_be39ea9341189767c3e3a5539647461b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_set_cert_cb, 128, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a385ecefed57f827d84aa146300948c5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_set_ecdh_auto, 22, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bd61e3caed60d5ed799af901bc0eb589 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_ssl3_method, 46, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a4424bcfeaae9d3c69622197b0283515 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_ssl_sigalgs, 270, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_521b8f802f3ea62d61ca2b796c1c2ea3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_ssl_st, 135, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0443a4693f04502fb5158980647e85b0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_tls_st, 144, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_23214a8e3fdf679e23886a45743572f9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_tlsv13, 309, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_696b218f7ead95bfdeef6f0827fac1c3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_x25519, 215, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8ecc226d11abc29d7d085e966733c2e7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_x448, 222, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_89e03f136eaa46b30b3ab1ec4cc7eee2 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33, 208, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a697d4b0e20051569f3c77bf599962cf = MAKE_CODEOBJ( module_filename_obj, const_str_digest_89c6e3f07e56ca3212435467944ee8af, 122, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_de20b533f8b9c5f98504fd806dd17d2d = MAKE_CODEOBJ( module_filename_obj, const_str_digest_b2405d2434f1275e2b8933b43c529fbe, 116, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_10_cryptography_has_get_server_tmp_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_11_cryptography_has_102_verification_error_codes(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_12_cryptography_has_102_verification_params(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_13_cryptography_has_110_verification_params(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_14_cryptography_has_x509_v_flag_trusted_first(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_15_cryptography_has_x509_v_flag_partial_chain(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_16_cryptography_has_set_cert_cb(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_17_cryptography_has_ssl_st(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_18_cryptography_has_tls_st(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_19_cryptography_has_locking_callbacks(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_1_cryptography_has_ec2m(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_20_cryptography_has_scrypt(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_21_cryptography_has_generic_dtls_method(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_22_cryptography_has_evp_pkey_dhx(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_23_cryptography_has_mem_functions(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_24_cryptography_has_sct(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_25_cryptography_has_x509_store_ctx_get_issuer(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_26_cryptography_has_x25519(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_27_cryptography_has_x448(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_28_cryptography_has_ed448(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_29_cryptography_has_ed25519(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_2_cryptography_has_ec_1_0_2(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_30_cryptography_has_oneshot_evp_digest_sign_verify(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_31_cryptography_has_evp_digestfinal_xof(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_32_cryptography_has_evp_pkey_get_set_tls_encodedpoint(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_33_cryptography_has_fips(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_34_cryptography_has_ssl_sigalgs(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_35_cryptography_has_psk(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_36_cryptography_has_custom_ext(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_37_cryptography_has_openssl_cleanup(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_38_cryptography_has_cipher_details(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_39_cryptography_has_tlsv13(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_3_cryptography_has_set_ecdh_auto(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_40_cryptography_has_raw_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_41_cryptography_has_evp_r_memory_limit_exceeded(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_42_cryptography_has_engine(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_4_cryptography_has_rsa_r_pkcs_decoding_error(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_5_cryptography_has_rsa_oaep_md(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_6_cryptography_has_rsa_oaep_label(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_7_cryptography_has_ssl3_method(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_8_cryptography_has_alpn(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_9_cryptography_has_compression(  );


// The module function definitions.
static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_1_cryptography_has_ec2m( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_8cf6be4317fa4d6df8e3c06784c94792_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_1_cryptography_has_ec2m );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_2_cryptography_has_ec_1_0_2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_str_plain_EC_curve_nid2nist_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_2_cryptography_has_ec_1_0_2 );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_3_cryptography_has_set_ecdh_auto( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_str_plain_SSL_CTX_set_ecdh_auto_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_3_cryptography_has_set_ecdh_auto );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_4_cryptography_has_rsa_r_pkcs_decoding_error( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_str_plain_RSA_R_PKCS_DECODING_ERROR_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_4_cryptography_has_rsa_r_pkcs_decoding_error );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_5_cryptography_has_rsa_oaep_md( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_5_cryptography_has_rsa_oaep_md );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_6_cryptography_has_rsa_oaep_label( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_6_cryptography_has_rsa_oaep_label );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_7_cryptography_has_ssl3_method( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_99d2a9f3afa4bd958ff3177b2faaca12_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_7_cryptography_has_ssl3_method );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_8_cryptography_has_alpn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_69b906847d25decb1cda42670e7e5241_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_8_cryptography_has_alpn );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_9_cryptography_has_compression( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_f501d0e9bfb78a701032fc968ff559f6_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_9_cryptography_has_compression );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_10_cryptography_has_get_server_tmp_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_str_plain_SSL_get_server_tmp_key_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_10_cryptography_has_get_server_tmp_key );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_11_cryptography_has_102_verification_error_codes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_86c40a5c21cefd9f6af8769ff1175caf_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_11_cryptography_has_102_verification_error_codes );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_12_cryptography_has_102_verification_params( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_12_cryptography_has_102_verification_params );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_13_cryptography_has_110_verification_params( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_str_plain_X509_CHECK_FLAG_NEVER_CHECK_SUBJECT_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_13_cryptography_has_110_verification_params );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_14_cryptography_has_x509_v_flag_trusted_first( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_str_plain_X509_V_FLAG_TRUSTED_FIRST_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_14_cryptography_has_x509_v_flag_trusted_first );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_15_cryptography_has_x509_v_flag_partial_chain( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_str_plain_X509_V_FLAG_PARTIAL_CHAIN_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_15_cryptography_has_x509_v_flag_partial_chain );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_16_cryptography_has_set_cert_cb( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_str_plain_SSL_CTX_set_cert_cb_str_plain_SSL_set_cert_cb_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_16_cryptography_has_set_cert_cb );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_17_cryptography_has_ssl_st( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_29407ac2cfa5bacd5103ba17ced806aa_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_17_cryptography_has_ssl_st );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_18_cryptography_has_tls_st( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_str_plain_TLS_ST_BEFORE_str_plain_TLS_ST_OK_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_18_cryptography_has_tls_st );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_19_cryptography_has_locking_callbacks( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_str_plain_Cryptography_setup_ssl_threads_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_19_cryptography_has_locking_callbacks );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_20_cryptography_has_scrypt( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_str_plain_EVP_PBE_scrypt_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_20_cryptography_has_scrypt );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_21_cryptography_has_generic_dtls_method( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_a2ccfb1541ef6968650ac43562856e84_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_21_cryptography_has_generic_dtls_method );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_22_cryptography_has_evp_pkey_dhx( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_str_plain_EVP_PKEY_DHX_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_22_cryptography_has_evp_pkey_dhx );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_23_cryptography_has_mem_functions( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_str_plain_Cryptography_CRYPTO_set_mem_functions_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_23_cryptography_has_mem_functions );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_24_cryptography_has_sct( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_24_cryptography_has_sct );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_25_cryptography_has_x509_store_ctx_get_issuer( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_2b0156be132bced5637961a9aa48cb51_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_25_cryptography_has_x509_store_ctx_get_issuer );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_26_cryptography_has_x25519( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_str_plain_EVP_PKEY_X25519_str_plain_NID_X25519_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_26_cryptography_has_x25519 );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_27_cryptography_has_x448( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_str_plain_EVP_PKEY_X448_str_plain_NID_X448_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_27_cryptography_has_x448 );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_28_cryptography_has_ed448( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_str_plain_EVP_PKEY_ED448_str_plain_NID_ED448_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_28_cryptography_has_ed448 );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_29_cryptography_has_ed25519( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_str_plain_NID_ED25519_str_plain_EVP_PKEY_ED25519_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_29_cryptography_has_ed25519 );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_30_cryptography_has_oneshot_evp_digest_sign_verify( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_str_plain_EVP_DigestSign_str_plain_EVP_DigestVerify_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_30_cryptography_has_oneshot_evp_digest_sign_verify );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_31_cryptography_has_evp_digestfinal_xof( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_str_plain_EVP_DigestFinalXOF_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_31_cryptography_has_evp_digestfinal_xof );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_32_cryptography_has_evp_pkey_get_set_tls_encodedpoint( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_136332fc21a01754e44f9a06545f3713_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_32_cryptography_has_evp_pkey_get_set_tls_encodedpoint );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_33_cryptography_has_fips( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_str_plain_FIPS_set_mode_str_plain_FIPS_mode_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_33_cryptography_has_fips );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_34_cryptography_has_ssl_sigalgs( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_70d66b11b8b83912e7ed175ae865dfed_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_34_cryptography_has_ssl_sigalgs );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_35_cryptography_has_psk( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_e5729eb47bb2bb77d896a48e0ba4a292_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_35_cryptography_has_psk );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_36_cryptography_has_custom_ext( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_03133653ae1f779dd1ae650a3a80ba30_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_36_cryptography_has_custom_ext );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_37_cryptography_has_openssl_cleanup( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_str_plain_OPENSSL_cleanup_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_37_cryptography_has_openssl_cleanup );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_38_cryptography_has_cipher_details( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_531063e0f807f77ec21047a47441d048_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_38_cryptography_has_cipher_details );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_39_cryptography_has_tlsv13( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_9cf036427baefafa3a18cbc2378aecdb_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_39_cryptography_has_tlsv13 );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_40_cryptography_has_raw_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_8637a8e096edeccc96cf2940262bfd01_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_40_cryptography_has_raw_key );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_41_cryptography_has_evp_r_memory_limit_exceeded( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_str_plain_EVP_R_MEMORY_LIMIT_EXCEEDED_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_41_cryptography_has_evp_r_memory_limit_exceeded );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_42_cryptography_has_engine( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY( const_list_d0eb343c74fa9d778f192626e2b9d53e_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_42_cryptography_has_engine );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_10_cryptography_has_get_server_tmp_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_10_cryptography_has_get_server_tmp_key,
        const_str_plain_cryptography_has_get_server_tmp_key,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_78637fe8f7ee61445f5dca3cd65f0fe9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_11_cryptography_has_102_verification_error_codes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_11_cryptography_has_102_verification_error_codes,
        const_str_digest_0134e31627bb74f9df2edcd82a96ece3,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0021209e7d391dec15e5f26734a8853a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_12_cryptography_has_102_verification_params(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_12_cryptography_has_102_verification_params,
        const_str_plain_cryptography_has_102_verification_params,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_83ad7bbb0a7fff5ecfb9437e2f0fd530,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_13_cryptography_has_110_verification_params(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_13_cryptography_has_110_verification_params,
        const_str_plain_cryptography_has_110_verification_params,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3aa31eb2c067da63ca69d75b02cf3d58,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_14_cryptography_has_x509_v_flag_trusted_first(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_14_cryptography_has_x509_v_flag_trusted_first,
        const_str_digest_b2405d2434f1275e2b8933b43c529fbe,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_de20b533f8b9c5f98504fd806dd17d2d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_15_cryptography_has_x509_v_flag_partial_chain(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_15_cryptography_has_x509_v_flag_partial_chain,
        const_str_digest_89c6e3f07e56ca3212435467944ee8af,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a697d4b0e20051569f3c77bf599962cf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_16_cryptography_has_set_cert_cb(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_16_cryptography_has_set_cert_cb,
        const_str_plain_cryptography_has_set_cert_cb,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_be39ea9341189767c3e3a5539647461b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_17_cryptography_has_ssl_st(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_17_cryptography_has_ssl_st,
        const_str_plain_cryptography_has_ssl_st,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_521b8f802f3ea62d61ca2b796c1c2ea3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_18_cryptography_has_tls_st(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_18_cryptography_has_tls_st,
        const_str_plain_cryptography_has_tls_st,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0443a4693f04502fb5158980647e85b0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_19_cryptography_has_locking_callbacks(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_19_cryptography_has_locking_callbacks,
        const_str_plain_cryptography_has_locking_callbacks,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6c9ff7e2d940c93b88707a42003a7568,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_1_cryptography_has_ec2m(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_1_cryptography_has_ec2m,
        const_str_plain_cryptography_has_ec2m,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_23f91de0f091bd3ccb6dcc0cbc9e2df1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_20_cryptography_has_scrypt(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_20_cryptography_has_scrypt,
        const_str_plain_cryptography_has_scrypt,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_060e2eae97ae7de1a770b21a5dfe2668,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_21_cryptography_has_generic_dtls_method(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_21_cryptography_has_generic_dtls_method,
        const_str_plain_cryptography_has_generic_dtls_method,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_75755457170b184961053cc9d2256875,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_22_cryptography_has_evp_pkey_dhx(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_22_cryptography_has_evp_pkey_dhx,
        const_str_plain_cryptography_has_evp_pkey_dhx,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_448bd98495c6a19e284e04ed81ed968e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_23_cryptography_has_mem_functions(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_23_cryptography_has_mem_functions,
        const_str_plain_cryptography_has_mem_functions,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6b004f50d9994de7d61d699cb2998a3e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_24_cryptography_has_sct(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_24_cryptography_has_sct,
        const_str_plain_cryptography_has_sct,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4eadc249aafa2e7fc8410e48638bf517,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_25_cryptography_has_x509_store_ctx_get_issuer(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_25_cryptography_has_x509_store_ctx_get_issuer,
        const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_89e03f136eaa46b30b3ab1ec4cc7eee2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_26_cryptography_has_x25519(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_26_cryptography_has_x25519,
        const_str_plain_cryptography_has_x25519,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_696b218f7ead95bfdeef6f0827fac1c3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_27_cryptography_has_x448(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_27_cryptography_has_x448,
        const_str_plain_cryptography_has_x448,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8ecc226d11abc29d7d085e966733c2e7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_28_cryptography_has_ed448(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_28_cryptography_has_ed448,
        const_str_plain_cryptography_has_ed448,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_05c653b88c655551a498cd633147486d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_29_cryptography_has_ed25519(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_29_cryptography_has_ed25519,
        const_str_plain_cryptography_has_ed25519,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_18cb8d97292dc62952cbb48ad28f3045,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_2_cryptography_has_ec_1_0_2(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_2_cryptography_has_ec_1_0_2,
        const_str_plain_cryptography_has_ec_1_0_2,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_89e93be3602cefb4aeb30e92b64d058e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_30_cryptography_has_oneshot_evp_digest_sign_verify(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_30_cryptography_has_oneshot_evp_digest_sign_verify,
        const_str_digest_5e36ac0615fb0e6445b1e014cca7bd54,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ccb31eae0763f43768593217f24d3961,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_31_cryptography_has_evp_digestfinal_xof(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_31_cryptography_has_evp_digestfinal_xof,
        const_str_plain_cryptography_has_evp_digestfinal_xof,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_701bb64da6b53a1eaf29caad6139b746,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_32_cryptography_has_evp_pkey_get_set_tls_encodedpoint(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_32_cryptography_has_evp_pkey_get_set_tls_encodedpoint,
        const_str_digest_38eba4904dfc59e8c0458109674fe900,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_50e7c73066078db670e65c0a8b093ed9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_33_cryptography_has_fips(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_33_cryptography_has_fips,
        const_str_plain_cryptography_has_fips,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0c7ba432fa2e418e8b6591d3d0b177e8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_34_cryptography_has_ssl_sigalgs(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_34_cryptography_has_ssl_sigalgs,
        const_str_plain_cryptography_has_ssl_sigalgs,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a4424bcfeaae9d3c69622197b0283515,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_35_cryptography_has_psk(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_35_cryptography_has_psk,
        const_str_plain_cryptography_has_psk,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0ffa104eece41bcec4454d39f67456fd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_36_cryptography_has_custom_ext(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_36_cryptography_has_custom_ext,
        const_str_plain_cryptography_has_custom_ext,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ea0b67019330a00ef9ee0862d41609b1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_37_cryptography_has_openssl_cleanup(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_37_cryptography_has_openssl_cleanup,
        const_str_plain_cryptography_has_openssl_cleanup,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4279c004f4e0473d65bcaecb127143c6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_38_cryptography_has_cipher_details(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_38_cryptography_has_cipher_details,
        const_str_plain_cryptography_has_cipher_details,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_605830a15607362ac9580d1df990b049,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_39_cryptography_has_tlsv13(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_39_cryptography_has_tlsv13,
        const_str_plain_cryptography_has_tlsv13,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_23214a8e3fdf679e23886a45743572f9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_3_cryptography_has_set_ecdh_auto(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_3_cryptography_has_set_ecdh_auto,
        const_str_plain_cryptography_has_set_ecdh_auto,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a385ecefed57f827d84aa146300948c5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_40_cryptography_has_raw_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_40_cryptography_has_raw_key,
        const_str_plain_cryptography_has_raw_key,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_181f572c920a73d986276d2b154f10a2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_41_cryptography_has_evp_r_memory_limit_exceeded(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_41_cryptography_has_evp_r_memory_limit_exceeded,
        const_str_digest_8535fc31daf81b5f04208070d851f01e,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f4a00a9d60e80684cc53bc7f0b5e7227,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_42_cryptography_has_engine(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_42_cryptography_has_engine,
        const_str_plain_cryptography_has_engine,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a486ce41cff320dfe5db08e54d8346a6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_4_cryptography_has_rsa_r_pkcs_decoding_error(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_4_cryptography_has_rsa_r_pkcs_decoding_error,
        const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fa10aaf2f811f5844344403e8bcfc74b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_5_cryptography_has_rsa_oaep_md(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_5_cryptography_has_rsa_oaep_md,
        const_str_plain_cryptography_has_rsa_oaep_md,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_629237eb63882362970c374192f1344a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_6_cryptography_has_rsa_oaep_label(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_6_cryptography_has_rsa_oaep_label,
        const_str_plain_cryptography_has_rsa_oaep_label,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_305dcaf9f6e2d67ee179b2fb5997b780,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_7_cryptography_has_ssl3_method(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_7_cryptography_has_ssl3_method,
        const_str_plain_cryptography_has_ssl3_method,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bd61e3caed60d5ed799af901bc0eb589,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_8_cryptography_has_alpn(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_8_cryptography_has_alpn,
        const_str_plain_cryptography_has_alpn,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5b0eb7bd769bc3de106b20d6df3d107d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_9_cryptography_has_compression(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_9_cryptography_has_compression,
        const_str_plain_cryptography_has_compression,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b5ddc229b17840b7cf9b107a0ef9e5bf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cryptography$hazmat$bindings$openssl$_conditional =
{
    PyModuleDef_HEAD_INIT,
    "cryptography.hazmat.bindings.openssl._conditional",
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

MOD_INIT_DECL( cryptography$hazmat$bindings$openssl$_conditional )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_cryptography$hazmat$bindings$openssl$_conditional );
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
    puts("cryptography.hazmat.bindings.openssl._conditional: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.bindings.openssl._conditional: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.bindings.openssl._conditional: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcryptography$hazmat$bindings$openssl$_conditional" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cryptography$hazmat$bindings$openssl$_conditional = Py_InitModule4(
        "cryptography.hazmat.bindings.openssl._conditional",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_cryptography$hazmat$bindings$openssl$_conditional = PyModule_Create( &mdef_cryptography$hazmat$bindings$openssl$_conditional );
#endif

    moduledict_cryptography$hazmat$bindings$openssl$_conditional = MODULE_DICT( module_cryptography$hazmat$bindings$openssl$_conditional );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_cryptography$hazmat$bindings$openssl$_conditional,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$bindings$openssl$_conditional,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$bindings$openssl$_conditional,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_cryptography$hazmat$bindings$openssl$_conditional );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_6c6405718530cbdfc8da1bb69c050727, module_cryptography$hazmat$bindings$openssl$_conditional );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_2452a9f29901e383eedeebe556ad37f7;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_7899e04c61e679344a45988ca746bae2;
        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyImport_ImportModule("__future__");
        assert( !(tmp_assign_source_3 == NULL) );
        assert( tmp_import_from_1__module == NULL );
        Py_INCREF( tmp_assign_source_3 );
        tmp_import_from_1__module = tmp_assign_source_3;
    }
    // Frame without reuse.
    frame_2452a9f29901e383eedeebe556ad37f7 = MAKE_MODULE_FRAME( codeobj_2452a9f29901e383eedeebe556ad37f7, module_cryptography$hazmat$bindings$openssl$_conditional );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_2452a9f29901e383eedeebe556ad37f7 );
    assert( Py_REFCNT( frame_2452a9f29901e383eedeebe556ad37f7 ) == 2 );

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_division );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2452a9f29901e383eedeebe556ad37f7 );
#endif
    popFrameStack();

    assertFrameObject( frame_2452a9f29901e383eedeebe556ad37f7 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2452a9f29901e383eedeebe556ad37f7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2452a9f29901e383eedeebe556ad37f7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2452a9f29901e383eedeebe556ad37f7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2452a9f29901e383eedeebe556ad37f7, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_1_cryptography_has_ec2m(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ec2m, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_2_cryptography_has_ec_1_0_2(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ec_1_0_2, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_3_cryptography_has_set_ecdh_auto(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_set_ecdh_auto, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_4_cryptography_has_rsa_r_pkcs_decoding_error(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_5_cryptography_has_rsa_oaep_md(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_rsa_oaep_md, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_6_cryptography_has_rsa_oaep_label(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_rsa_oaep_label, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_7_cryptography_has_ssl3_method(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl3_method, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_8_cryptography_has_alpn(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_alpn, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_9_cryptography_has_compression(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_compression, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_10_cryptography_has_get_server_tmp_key(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_get_server_tmp_key, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_11_cryptography_has_102_verification_error_codes(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_0134e31627bb74f9df2edcd82a96ece3, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_12_cryptography_has_102_verification_params(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_102_verification_params, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_13_cryptography_has_110_verification_params(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_110_verification_params, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_14_cryptography_has_x509_v_flag_trusted_first(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_b2405d2434f1275e2b8933b43c529fbe, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_15_cryptography_has_x509_v_flag_partial_chain(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_89c6e3f07e56ca3212435467944ee8af, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_16_cryptography_has_set_cert_cb(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_set_cert_cb, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_17_cryptography_has_ssl_st(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl_st, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_18_cryptography_has_tls_st(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_tls_st, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_19_cryptography_has_locking_callbacks(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_locking_callbacks, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_20_cryptography_has_scrypt(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_scrypt, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_21_cryptography_has_generic_dtls_method(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_generic_dtls_method, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_22_cryptography_has_evp_pkey_dhx(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_evp_pkey_dhx, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_23_cryptography_has_mem_functions(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_mem_functions, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_24_cryptography_has_sct(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_sct, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_25_cryptography_has_x509_store_ctx_get_issuer(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_26_cryptography_has_x25519(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_x25519, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_27_cryptography_has_x448(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_x448, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_28_cryptography_has_ed448(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ed448, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_29_cryptography_has_ed25519(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ed25519, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_30_cryptography_has_oneshot_evp_digest_sign_verify(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_5e36ac0615fb0e6445b1e014cca7bd54, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_31_cryptography_has_evp_digestfinal_xof(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_evp_digestfinal_xof, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_32_cryptography_has_evp_pkey_get_set_tls_encodedpoint(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_38eba4904dfc59e8c0458109674fe900, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_33_cryptography_has_fips(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_fips, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_34_cryptography_has_ssl_sigalgs(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl_sigalgs, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_35_cryptography_has_psk(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_psk, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_36_cryptography_has_custom_ext(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_custom_ext, tmp_assign_source_42 );
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_37_cryptography_has_openssl_cleanup(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_openssl_cleanup, tmp_assign_source_43 );
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_38_cryptography_has_cipher_details(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_cipher_details, tmp_assign_source_44 );
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_39_cryptography_has_tlsv13(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_tlsv13, tmp_assign_source_45 );
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_40_cryptography_has_raw_key(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_raw_key, tmp_assign_source_46 );
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_41_cryptography_has_evp_r_memory_limit_exceeded(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_8535fc31daf81b5f04208070d851f01e, tmp_assign_source_47 );
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_42_cryptography_has_engine(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_engine, tmp_assign_source_48 );
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_dict_key_19;
        PyObject *tmp_dict_value_19;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_dict_key_20;
        PyObject *tmp_dict_value_20;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_dict_key_21;
        PyObject *tmp_dict_value_21;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_dict_key_22;
        PyObject *tmp_dict_value_22;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_dict_key_23;
        PyObject *tmp_dict_value_23;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_dict_key_24;
        PyObject *tmp_dict_value_24;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_dict_key_25;
        PyObject *tmp_dict_value_25;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_dict_key_26;
        PyObject *tmp_dict_value_26;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_dict_key_27;
        PyObject *tmp_dict_value_27;
        PyObject *tmp_mvar_value_27;
        PyObject *tmp_dict_key_28;
        PyObject *tmp_dict_value_28;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_dict_key_29;
        PyObject *tmp_dict_value_29;
        PyObject *tmp_mvar_value_29;
        PyObject *tmp_dict_key_30;
        PyObject *tmp_dict_value_30;
        PyObject *tmp_mvar_value_30;
        PyObject *tmp_dict_key_31;
        PyObject *tmp_dict_value_31;
        PyObject *tmp_mvar_value_31;
        PyObject *tmp_dict_key_32;
        PyObject *tmp_dict_value_32;
        PyObject *tmp_mvar_value_32;
        PyObject *tmp_dict_key_33;
        PyObject *tmp_dict_value_33;
        PyObject *tmp_mvar_value_33;
        PyObject *tmp_dict_key_34;
        PyObject *tmp_dict_value_34;
        PyObject *tmp_mvar_value_34;
        PyObject *tmp_dict_key_35;
        PyObject *tmp_dict_value_35;
        PyObject *tmp_mvar_value_35;
        PyObject *tmp_dict_key_36;
        PyObject *tmp_dict_value_36;
        PyObject *tmp_mvar_value_36;
        PyObject *tmp_dict_key_37;
        PyObject *tmp_dict_value_37;
        PyObject *tmp_mvar_value_37;
        PyObject *tmp_dict_key_38;
        PyObject *tmp_dict_value_38;
        PyObject *tmp_mvar_value_38;
        PyObject *tmp_dict_key_39;
        PyObject *tmp_dict_value_39;
        PyObject *tmp_mvar_value_39;
        PyObject *tmp_dict_key_40;
        PyObject *tmp_dict_value_40;
        PyObject *tmp_mvar_value_40;
        PyObject *tmp_dict_key_41;
        PyObject *tmp_dict_value_41;
        PyObject *tmp_mvar_value_41;
        PyObject *tmp_dict_key_42;
        PyObject *tmp_dict_value_42;
        PyObject *tmp_mvar_value_42;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ec2m );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_ec2m );
        }

        CHECK_OBJECT( tmp_mvar_value_1 );
        tmp_dict_value_1 = tmp_mvar_value_1;
        tmp_dict_key_1 = const_str_plain_Cryptography_HAS_EC2M;
        tmp_assign_source_49 = _PyDict_NewPresized( 42 );
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ec_1_0_2 );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_ec_1_0_2 );
        }

        CHECK_OBJECT( tmp_mvar_value_2 );
        tmp_dict_value_2 = tmp_mvar_value_2;
        tmp_dict_key_2 = const_str_plain_Cryptography_HAS_EC_1_0_2;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_set_ecdh_auto );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_set_ecdh_auto );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_dict_value_3 = tmp_mvar_value_3;
        tmp_dict_key_3 = const_str_plain_Cryptography_HAS_SET_ECDH_AUTO;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9 );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9 );
        }

        CHECK_OBJECT( tmp_mvar_value_4 );
        tmp_dict_value_4 = tmp_mvar_value_4;
        tmp_dict_key_4 = const_str_digest_f2f56e52e9bead94215489df18f9e023;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_rsa_oaep_md );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_rsa_oaep_md );
        }

        CHECK_OBJECT( tmp_mvar_value_5 );
        tmp_dict_value_5 = tmp_mvar_value_5;
        tmp_dict_key_5 = const_str_plain_Cryptography_HAS_RSA_OAEP_MD;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_rsa_oaep_label );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_rsa_oaep_label );
        }

        CHECK_OBJECT( tmp_mvar_value_6 );
        tmp_dict_value_6 = tmp_mvar_value_6;
        tmp_dict_key_6 = const_str_plain_Cryptography_HAS_RSA_OAEP_LABEL;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl3_method );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl3_method );
        }

        CHECK_OBJECT( tmp_mvar_value_7 );
        tmp_dict_value_7 = tmp_mvar_value_7;
        tmp_dict_key_7 = const_str_plain_Cryptography_HAS_SSL3_METHOD;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_alpn );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_alpn );
        }

        CHECK_OBJECT( tmp_mvar_value_8 );
        tmp_dict_value_8 = tmp_mvar_value_8;
        tmp_dict_key_8 = const_str_plain_Cryptography_HAS_ALPN;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_compression );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_compression );
        }

        CHECK_OBJECT( tmp_mvar_value_9 );
        tmp_dict_value_9 = tmp_mvar_value_9;
        tmp_dict_key_9 = const_str_plain_Cryptography_HAS_COMPRESSION;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_9, tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_get_server_tmp_key );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_get_server_tmp_key );
        }

        CHECK_OBJECT( tmp_mvar_value_10 );
        tmp_dict_value_10 = tmp_mvar_value_10;
        tmp_dict_key_10 = const_str_plain_Cryptography_HAS_GET_SERVER_TMP_KEY;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_10, tmp_dict_value_10 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_0134e31627bb74f9df2edcd82a96ece3 );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_0134e31627bb74f9df2edcd82a96ece3 );
        }

        CHECK_OBJECT( tmp_mvar_value_11 );
        tmp_dict_value_11 = tmp_mvar_value_11;
        tmp_dict_key_11 = const_str_digest_2fcc949fb99081eda00ddcfc8aa01f9a;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_11, tmp_dict_value_11 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_102_verification_params );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_102_verification_params );
        }

        CHECK_OBJECT( tmp_mvar_value_12 );
        tmp_dict_value_12 = tmp_mvar_value_12;
        tmp_dict_key_12 = const_str_plain_Cryptography_HAS_102_VERIFICATION_PARAMS;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_12, tmp_dict_value_12 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_110_verification_params );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_110_verification_params );
        }

        CHECK_OBJECT( tmp_mvar_value_13 );
        tmp_dict_value_13 = tmp_mvar_value_13;
        tmp_dict_key_13 = const_str_plain_Cryptography_HAS_110_VERIFICATION_PARAMS;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_13, tmp_dict_value_13 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_b2405d2434f1275e2b8933b43c529fbe );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_b2405d2434f1275e2b8933b43c529fbe );
        }

        CHECK_OBJECT( tmp_mvar_value_14 );
        tmp_dict_value_14 = tmp_mvar_value_14;
        tmp_dict_key_14 = const_str_digest_0a25da58d8b65f965de99956a1b5aad7;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_14, tmp_dict_value_14 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_89c6e3f07e56ca3212435467944ee8af );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_89c6e3f07e56ca3212435467944ee8af );
        }

        CHECK_OBJECT( tmp_mvar_value_15 );
        tmp_dict_value_15 = tmp_mvar_value_15;
        tmp_dict_key_15 = const_str_digest_96e83fdb049b186bfc982a4b37cdf168;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_15, tmp_dict_value_15 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_set_cert_cb );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_set_cert_cb );
        }

        CHECK_OBJECT( tmp_mvar_value_16 );
        tmp_dict_value_16 = tmp_mvar_value_16;
        tmp_dict_key_16 = const_str_plain_Cryptography_HAS_SET_CERT_CB;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_16, tmp_dict_value_16 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl_st );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl_st );
        }

        CHECK_OBJECT( tmp_mvar_value_17 );
        tmp_dict_value_17 = tmp_mvar_value_17;
        tmp_dict_key_17 = const_str_plain_Cryptography_HAS_SSL_ST;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_17, tmp_dict_value_17 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_tls_st );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_tls_st );
        }

        CHECK_OBJECT( tmp_mvar_value_18 );
        tmp_dict_value_18 = tmp_mvar_value_18;
        tmp_dict_key_18 = const_str_plain_Cryptography_HAS_TLS_ST;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_18, tmp_dict_value_18 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_locking_callbacks );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_locking_callbacks );
        }

        CHECK_OBJECT( tmp_mvar_value_19 );
        tmp_dict_value_19 = tmp_mvar_value_19;
        tmp_dict_key_19 = const_str_plain_Cryptography_HAS_LOCKING_CALLBACKS;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_19, tmp_dict_value_19 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_scrypt );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_scrypt );
        }

        CHECK_OBJECT( tmp_mvar_value_20 );
        tmp_dict_value_20 = tmp_mvar_value_20;
        tmp_dict_key_20 = const_str_plain_Cryptography_HAS_SCRYPT;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_20, tmp_dict_value_20 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_generic_dtls_method );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_generic_dtls_method );
        }

        CHECK_OBJECT( tmp_mvar_value_21 );
        tmp_dict_value_21 = tmp_mvar_value_21;
        tmp_dict_key_21 = const_str_plain_Cryptography_HAS_GENERIC_DTLS_METHOD;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_21, tmp_dict_value_21 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_evp_pkey_dhx );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_evp_pkey_dhx );
        }

        CHECK_OBJECT( tmp_mvar_value_22 );
        tmp_dict_value_22 = tmp_mvar_value_22;
        tmp_dict_key_22 = const_str_plain_Cryptography_HAS_EVP_PKEY_DHX;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_22, tmp_dict_value_22 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_mem_functions );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_mem_functions );
        }

        CHECK_OBJECT( tmp_mvar_value_23 );
        tmp_dict_value_23 = tmp_mvar_value_23;
        tmp_dict_key_23 = const_str_plain_Cryptography_HAS_MEM_FUNCTIONS;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_23, tmp_dict_value_23 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_sct );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_sct );
        }

        CHECK_OBJECT( tmp_mvar_value_24 );
        tmp_dict_value_24 = tmp_mvar_value_24;
        tmp_dict_key_24 = const_str_plain_Cryptography_HAS_SCT;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_24, tmp_dict_value_24 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33 );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33 );
        }

        CHECK_OBJECT( tmp_mvar_value_25 );
        tmp_dict_value_25 = tmp_mvar_value_25;
        tmp_dict_key_25 = const_str_digest_d2c4bd506cf66a4d1c7adfe4f312872c;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_25, tmp_dict_value_25 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_x25519 );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_x25519 );
        }

        CHECK_OBJECT( tmp_mvar_value_26 );
        tmp_dict_value_26 = tmp_mvar_value_26;
        tmp_dict_key_26 = const_str_plain_Cryptography_HAS_X25519;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_26, tmp_dict_value_26 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_x448 );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_x448 );
        }

        CHECK_OBJECT( tmp_mvar_value_27 );
        tmp_dict_value_27 = tmp_mvar_value_27;
        tmp_dict_key_27 = const_str_plain_Cryptography_HAS_X448;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_27, tmp_dict_value_27 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ed448 );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_ed448 );
        }

        CHECK_OBJECT( tmp_mvar_value_28 );
        tmp_dict_value_28 = tmp_mvar_value_28;
        tmp_dict_key_28 = const_str_plain_Cryptography_HAS_ED448;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_28, tmp_dict_value_28 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ed25519 );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_ed25519 );
        }

        CHECK_OBJECT( tmp_mvar_value_29 );
        tmp_dict_value_29 = tmp_mvar_value_29;
        tmp_dict_key_29 = const_str_plain_Cryptography_HAS_ED25519;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_29, tmp_dict_value_29 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_5e36ac0615fb0e6445b1e014cca7bd54 );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_5e36ac0615fb0e6445b1e014cca7bd54 );
        }

        CHECK_OBJECT( tmp_mvar_value_30 );
        tmp_dict_value_30 = tmp_mvar_value_30;
        tmp_dict_key_30 = const_str_digest_08906fb95f8ef4a836f252aa7b12b1cf;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_30, tmp_dict_value_30 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_38eba4904dfc59e8c0458109674fe900 );

        if (unlikely( tmp_mvar_value_31 == NULL ))
        {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_38eba4904dfc59e8c0458109674fe900 );
        }

        CHECK_OBJECT( tmp_mvar_value_31 );
        tmp_dict_value_31 = tmp_mvar_value_31;
        tmp_dict_key_31 = const_str_digest_c8d4ed7f56a6990e5028c35f4876f90c;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_31, tmp_dict_value_31 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_fips );

        if (unlikely( tmp_mvar_value_32 == NULL ))
        {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_fips );
        }

        CHECK_OBJECT( tmp_mvar_value_32 );
        tmp_dict_value_32 = tmp_mvar_value_32;
        tmp_dict_key_32 = const_str_plain_Cryptography_HAS_FIPS;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_32, tmp_dict_value_32 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl_sigalgs );

        if (unlikely( tmp_mvar_value_33 == NULL ))
        {
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl_sigalgs );
        }

        CHECK_OBJECT( tmp_mvar_value_33 );
        tmp_dict_value_33 = tmp_mvar_value_33;
        tmp_dict_key_33 = const_str_plain_Cryptography_HAS_SIGALGS;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_33, tmp_dict_value_33 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_psk );

        if (unlikely( tmp_mvar_value_34 == NULL ))
        {
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_psk );
        }

        CHECK_OBJECT( tmp_mvar_value_34 );
        tmp_dict_value_34 = tmp_mvar_value_34;
        tmp_dict_key_34 = const_str_plain_Cryptography_HAS_PSK;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_34, tmp_dict_value_34 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_35 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_custom_ext );

        if (unlikely( tmp_mvar_value_35 == NULL ))
        {
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_custom_ext );
        }

        CHECK_OBJECT( tmp_mvar_value_35 );
        tmp_dict_value_35 = tmp_mvar_value_35;
        tmp_dict_key_35 = const_str_plain_Cryptography_HAS_CUSTOM_EXT;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_35, tmp_dict_value_35 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_36 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_openssl_cleanup );

        if (unlikely( tmp_mvar_value_36 == NULL ))
        {
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_openssl_cleanup );
        }

        CHECK_OBJECT( tmp_mvar_value_36 );
        tmp_dict_value_36 = tmp_mvar_value_36;
        tmp_dict_key_36 = const_str_plain_Cryptography_HAS_OPENSSL_CLEANUP;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_36, tmp_dict_value_36 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_37 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_cipher_details );

        if (unlikely( tmp_mvar_value_37 == NULL ))
        {
            tmp_mvar_value_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_cipher_details );
        }

        CHECK_OBJECT( tmp_mvar_value_37 );
        tmp_dict_value_37 = tmp_mvar_value_37;
        tmp_dict_key_37 = const_str_plain_Cryptography_HAS_CIPHER_DETAILS;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_37, tmp_dict_value_37 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_38 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_tlsv13 );

        if (unlikely( tmp_mvar_value_38 == NULL ))
        {
            tmp_mvar_value_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_tlsv13 );
        }

        CHECK_OBJECT( tmp_mvar_value_38 );
        tmp_dict_value_38 = tmp_mvar_value_38;
        tmp_dict_key_38 = const_str_plain_Cryptography_HAS_TLSv1_3;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_38, tmp_dict_value_38 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_39 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_raw_key );

        if (unlikely( tmp_mvar_value_39 == NULL ))
        {
            tmp_mvar_value_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_raw_key );
        }

        CHECK_OBJECT( tmp_mvar_value_39 );
        tmp_dict_value_39 = tmp_mvar_value_39;
        tmp_dict_key_39 = const_str_plain_Cryptography_HAS_RAW_KEY;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_39, tmp_dict_value_39 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_40 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_evp_digestfinal_xof );

        if (unlikely( tmp_mvar_value_40 == NULL ))
        {
            tmp_mvar_value_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_evp_digestfinal_xof );
        }

        CHECK_OBJECT( tmp_mvar_value_40 );
        tmp_dict_value_40 = tmp_mvar_value_40;
        tmp_dict_key_40 = const_str_plain_Cryptography_HAS_EVP_DIGESTFINAL_XOF;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_40, tmp_dict_value_40 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_41 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_8535fc31daf81b5f04208070d851f01e );

        if (unlikely( tmp_mvar_value_41 == NULL ))
        {
            tmp_mvar_value_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_8535fc31daf81b5f04208070d851f01e );
        }

        CHECK_OBJECT( tmp_mvar_value_41 );
        tmp_dict_value_41 = tmp_mvar_value_41;
        tmp_dict_key_41 = const_str_digest_5ebdc304a856f17bec9566811cc3653b;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_41, tmp_dict_value_41 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_42 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_engine );

        if (unlikely( tmp_mvar_value_42 == NULL ))
        {
            tmp_mvar_value_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_engine );
        }

        CHECK_OBJECT( tmp_mvar_value_42 );
        tmp_dict_value_42 = tmp_mvar_value_42;
        tmp_dict_key_42 = const_str_plain_Cryptography_HAS_ENGINE;
        tmp_res = PyDict_SetItem( tmp_assign_source_49, tmp_dict_key_42, tmp_dict_value_42 );
        assert( !(tmp_res != 0) );
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_CONDITIONAL_NAMES, tmp_assign_source_49 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_cryptography$hazmat$bindings$openssl$_conditional );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
