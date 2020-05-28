/* Generated code for Python module 'cryptography.hazmat.backends.openssl.rsa'
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

/* The "_module_cryptography$hazmat$backends$openssl$rsa" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$backends$openssl$rsa;
PyDictObject *moduledict_cryptography$hazmat$backends$openssl$rsa;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain__salt_length;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_private_bytes;
static PyObject *const_tuple_fa080cb81ae95a632e3813332243b607_tuple;
extern PyObject *const_str_plain_data;
static PyObject *const_str_plain_UNSUPPORTED_PADDING;
extern PyObject *const_str_plain_type;
extern PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
extern PyObject *const_str_plain_EVP_PKEY_CTX_new;
static PyObject *const_str_plain_crypt;
extern PyObject *const_str_plain_iqmp;
extern PyObject *const_str_plain_UNSUPPORTED_HASH;
extern PyObject *const_tuple_d38d0a393082ae0bfc8342fb83a4f614_tuple;
extern PyObject *const_str_plain_OAEP;
extern PyObject *const_tuple_str_digest_ed7f195a5784878081b7f2b567a68557_tuple;
static PyObject *const_str_plain_RSA_get0_factors;
extern PyObject *const_str_plain_evp_md;
extern PyObject *const_str_plain_init;
extern PyObject *const_str_plain_memmove;
extern PyObject *const_tuple_str_plain_self_str_plain_plaintext_str_plain_padding_tuple;
extern PyObject *const_str_plain_verify;
extern PyObject *const_str_plain_salt;
extern PyObject *const_str_plain_backend;
static PyObject *const_tuple_c6ce9c7ee6a4083dcedc9755b6b4cec0_tuple;
static PyObject *const_str_plain_EVP_PKEY_CTX_set_rsa_padding;
extern PyObject *const_tuple_str_plain_self_str_plain_padding_str_plain_algorithm_tuple;
extern PyObject *const_str_digest_426349c7e201b358f2086eb3f7fb6f47;
static PyObject *const_str_plain_EVP_PKEY_CTX_set_signature_md;
extern PyObject *const_str_digest_626b18d63126fb4fc2b4b00829f745cc;
static PyObject *const_str_plain__rsa_cdata;
extern PyObject *const_tuple_6865be46b14daf3853c114a4440f3999_tuple;
extern PyObject *const_tuple_d7cd3dd1f0c1b3c745f9dc0754b00ddb_tuple;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_EVP_PKEY_decrypt_init;
static PyObject *const_str_digest_72073d8325d2e95fe43e7fcdd9af6584;
extern PyObject *const_str_plain__evp_md_non_null_from_algorithm;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_signature;
extern PyObject *const_str_digest_ed7f195a5784878081b7f2b567a68557;
extern PyObject *const_str_plain_new;
static PyObject *const_str_plain__rsa_sig_sign;
extern PyObject *const_str_plain_OPENSSL_malloc;
extern PyObject *const_str_plain__backend;
extern PyObject *const_str_plain_RSAPrivateKeyWithSerialization;
static PyObject *const_str_plain_pss;
static PyObject *const_str_plain_pkey_ctx;
extern PyObject *const_str_plain_reason;
extern PyObject *const_str_plain_algorithm;
static PyObject *const_str_plain_UNSUPPORTED_MGF;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_plain_format;
static PyObject *const_str_plain_EVP_PKEY_sign;
static PyObject *const_str_plain_EVP_PKEY_CTX_set_rsa_pss_saltlen;
static PyObject *const_str_plain_RSA_get0_crt_params;
extern PyObject *const_str_plain__public_key;
extern PyObject *const_str_plain__mgf;
static PyObject *const_str_plain_RSA_R_OAEP_DECODING_ERROR;
static PyObject *const_str_digest_d0927d6863daca8d65f20add6616c473;
extern PyObject *const_str_plain__calculate_digest_and_algorithm;
static PyObject *const_str_plain__enc_dec_rsa;
static PyObject *const_str_digest_6c44573c8d035e93ec74c18ee09caeff;
extern PyObject *const_str_plain__private_key;
static PyObject *const_str_digest_a5ed813245efbd20efda0edcee3465dc;
static PyObject *const_str_plain_RSA_R_DATA_TOO_LARGE_FOR_MODULUS;
extern PyObject *const_tuple_str_plain_utils_tuple;
extern PyObject *const_str_plain_sign;
extern PyObject *const_str_plain__private_key_bytes;
static PyObject *const_str_plain_RSA_PKCS1_PSS_PADDING;
static PyObject *const_str_plain_EVP_PKEY_decrypt;
static PyObject *const_str_plain__RSASignatureContext;
extern PyObject *const_str_plain_rsa_cdata;
static PyObject *const_str_plain_buf_size;
extern PyObject *const_str_plain_gc;
extern PyObject *const_str_plain_RSAPublicKeyWithSerialization;
extern PyObject *const_str_digest_82e5b7f1075745a8638e06059354d03c;
static PyObject *const_str_plain_RSA_PKCS1_PADDING;
static PyObject *const_str_plain_EVP_PKEY_CTX_set_rsa_mgf1_md;
extern PyObject *const_str_digest_9db3cdd3cd765463b4eec6754eb8e087;
extern PyObject *const_str_plain_rsa_padding_supported;
extern PyObject *const_str_plain_buf;
static PyObject *const_str_plain__rsa_sig_setup;
static PyObject *const_str_digest_5a38396234f15fc715f8675baa06bc2b;
extern PyObject *const_tuple_c7ec265320af4c45beec923a8df09399_tuple;
static PyObject *const_tuple_e932c0d88f566fdc564e9c0f22e7393f_tuple;
extern PyObject *const_str_plain_RSA_R_PKCS_DECODING_ERROR;
extern PyObject *const_str_plain_Cryptography_HAS_RSA_OAEP_MD;
extern PyObject *const_str_plain_NULL;
extern PyObject *const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple;
static PyObject *const_tuple_f0a5ee3979d443120441bacd1bbf5e08_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_errors;
extern PyObject *const_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_tuple_str_digest_496388af417742534c869e89560f4859_tuple;
extern PyObject *const_str_plain_update;
extern PyObject *const_str_plain_res;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain__rsa_sig_verify;
extern PyObject *const_int_pos_1;
extern PyObject *const_tuple_str_plain_self_str_plain_e_str_plain_n_tuple;
extern PyObject *const_str_plain_encrypt;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_RSAPublicNumbers;
static PyObject *const_tuple_cf4f691584747fde4f8639de585c382c_tuple;
extern PyObject *const_str_plain_BN_num_bits;
static PyObject *const_tuple_bd8ac3c11993be881f5f804ae2482e97_tuple;
extern PyObject *const_str_plain_encryption_algorithm;
extern PyObject *const_str_plain_RSA_free;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain_mgf1_md;
extern PyObject *const_str_plain_AsymmetricPadding;
static PyObject *const_str_plain_EVP_PKEY_sign_init;
static PyObject *const_tuple_4680538ceda116494c7d984b8703d55b_tuple;
extern PyObject *const_str_plain__key_size;
static PyObject *const_str_plain__RSAVerificationContext;
extern PyObject *const_str_plain_InvalidSignature;
extern PyObject *const_tuple_str_plain_hashes_tuple;
extern PyObject *const_tuple_9758f710ce98b1c0cfd42dd10befe3cb_tuple;
extern PyObject *const_str_plain__algorithm;
static PyObject *const_str_plain_key_size_bytes;
extern PyObject *const_str_digest_f2f56e52e9bead94215489df18f9e023;
extern PyObject *const_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md;
extern PyObject *const_str_plain_hash_algorithm;
static PyObject *const_str_plain__enc_dec_rsa_pkey_ctx;
extern PyObject *const_str_plain_utils;
extern PyObject *const_str_plain__Reasons;
extern PyObject *const_str_digest_ab6f05b42e1f3b7330c1f4fe1ba86e66;
extern PyObject *const_str_plain_RSAPrivateNumbers;
extern PyObject *const_str_plain_read_only_property;
static PyObject *const_str_plain_EVP_PKEY_encrypt;
static PyObject *const_str_plain_RSA_PKCS1_OAEP_PADDING;
extern PyObject *const_str_plain__hash_ctx;
static PyObject *const_str_plain_EVP_PKEY_encrypt_init;
extern PyObject *const_str_plain_ciphertext;
extern PyObject *const_str_plain_EVP_PKEY_CTX_free;
extern PyObject *const_str_plain_PSS;
extern PyObject *const_float_8_0;
extern PyObject *const_str_plain_lib;
extern PyObject *const_str_plain_EVP_PKEY_size;
extern PyObject *const_str_plain__evp_pkey;
static PyObject *const_str_plain__handle_rsa_enc_dec_error;
static PyObject *const_str_plain_EVP_PKEY_verify_init;
extern PyObject *const_str_plain__warn_sign_verify_deprecated;
extern PyObject *const_str_plain__signature;
extern PyObject *const_str_digest_97cd6fd5c8579a7068d86fbfd40e2f84;
extern PyObject *const_str_plain_RSA_blinding_on;
static PyObject *const_tuple_54f79cc12dea7ea95bb2b4af8842afcf_tuple;
extern PyObject *const_str_plain_UnsupportedAlgorithm;
static PyObject *const_str_plain__padding;
static PyObject *const_str_plain_init_func;
static PyObject *const_tuple_2caf7fa8e8ca4cea38fa9a1c92ff2fb6_tuple;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_decrypt;
extern PyObject *const_str_plain_dmp1;
extern PyObject *const_str_plain__consume_errors;
extern PyObject *const_str_plain_MGF1;
extern PyObject *const_str_plain_signer;
static PyObject *const_str_digest_f086882416c7bbe45258f2eebea24494;
extern PyObject *const_str_plain_buflen;
static PyObject *const_tuple_99a492340d27a0e2a7192ecb7608f52c_tuple;
extern PyObject *const_str_plain_RSA_R_DIGEST_TOO_BIG_FOR_RSA_KEY;
extern PyObject *const_str_plain_AsymmetricVerificationContext;
extern PyObject *const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple;
extern PyObject *const_str_plain_n;
static PyObject *const_str_plain_decoding_errors;
static PyObject *const_str_plain_RSA_get0_key;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain__RSAPublicKey;
static PyObject *const_str_digest_4853130ac3abffc32389ed03acb3f886;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_register_interface;
static PyObject *const_str_plain_oaep_md;
static PyObject *const_tuple_6ba236d280ea2410fbb441c9b56a5aca_tuple;
extern PyObject *const_str_plain_ctx;
extern PyObject *const_str_plain_buffer;
extern PyObject *const_str_plain_key_size;
static PyObject *const_tuple_f9b19eb9efb27f3d2ef60f3e31e3451c_tuple;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_q;
extern PyObject *const_str_plain_public_key;
extern PyObject *const_str_plain_private_numbers;
extern PyObject *const_str_digest_496388af417742534c869e89560f4859;
extern PyObject *const_str_plain__check_bytes;
extern PyObject *const_str_plain_Hash;
extern PyObject *const_str_plain_rsa;
static PyObject *const_str_digest_81faa8b1e56081138ca37aade85d4851;
extern PyObject *const_str_plain_dmq1;
extern PyObject *const_str_plain_padding;
extern PyObject *const_str_plain_plaintext;
static PyObject *const_str_digest_6ae284ffb14dd0f3d5834d728b2a2d11;
extern PyObject *const_str_plain_finalize;
static PyObject *const_str_plain_RSAPublicKey_dup;
extern PyObject *const_str_plain_evp_pkey;
extern PyObject *const_str_plain_cryptography;
static PyObject *const_tuple_9b60361a0fe15e5983052b2a753f2609_tuple;
extern PyObject *const_str_plain_digest_size;
extern PyObject *const_str_plain_ceil;
extern PyObject *const_str_plain_openssl_assert;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_ERR_LIB_RSA;
static PyObject *const_tuple_f7d52da993a9ca49ad2e18373869bfe9_tuple;
extern PyObject *const_str_plain_public_numbers;
static PyObject *const_tuple_ccdccbd9a4e8f15f0a95f1ae188dcbd4_tuple;
static PyObject *const_str_digest_6053ae34cacb5f3719c5f5a589bf12fb;
extern PyObject *const_str_plain__check_not_prehashed;
extern PyObject *const_str_plain_PKCS1v15;
extern PyObject *const_str_plain__public_key_bytes;
static PyObject *const_str_digest_990d5f714aca7bf00226709211c3c991;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_calculate_max_pss_salt_length;
static PyObject *const_str_plain_EVP_PKEY_verify;
extern PyObject *const_str_digest_81f1b0dfcc7a862e6940580ec4cc42d3;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain__rsa_cdata_to_evp_pkey;
extern PyObject *const_str_plain_outlen;
static PyObject *const_str_digest_18373e025d014684a4a63b5c2496b777;
extern PyObject *const_str_plain_math;
extern PyObject *const_str_plain_AsymmetricSignatureContext;
extern PyObject *const_str_plain_hashes;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_private_key;
static PyObject *const_tuple_c8f31359161ad7548eb4b90a35051198_tuple;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_digest_ab9b2f5b99442fa296cac0d8ff686f4b;
extern PyObject *const_tuple_str_plain__key_size_tuple;
extern PyObject *const_str_plain_public_bytes;
extern PyObject *const_str_plain_verifier;
static PyObject *const_str_digest_02b9af73b54a89303fd51d64eedf10ac;
static PyObject *const_str_plain_labelptr;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain__bn_to_int;
static PyObject *const_tuple_145c5e0758bfbdb50a7dcf6ef101cbc1_tuple;
static PyObject *const_str_plain__get_rsa_pss_salt_length;
static PyObject *const_str_plain_RSA_R_DATA_TOO_LARGE_FOR_KEY_SIZE;
static PyObject *const_str_digest_88d629665c18fa7e147c9ed13d7dbcd3;
extern PyObject *const_str_plain__ffi;
extern PyObject *const_str_plain_MAX_LENGTH;
extern PyObject *const_str_plain__label;
extern PyObject *const_str_plain__lib;
static PyObject *const_str_plain_RSA_R_BLOCK_TYPE_IS_NOT_02;
static PyObject *const_str_plain_RSA_R_BLOCK_TYPE_IS_NOT_01;
static PyObject *const_str_plain__rsa_sig_determine_padding;
static PyObject *const_str_plain_padding_enum;
extern PyObject *const_str_plain__RSAPrivateKey;
static PyObject *const_str_plain_pkey_size;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_fa080cb81ae95a632e3813332243b607_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_fa080cb81ae95a632e3813332243b607_tuple, 0, const_str_plain_AsymmetricPadding ); Py_INCREF( const_str_plain_AsymmetricPadding );
    PyTuple_SET_ITEM( const_tuple_fa080cb81ae95a632e3813332243b607_tuple, 1, const_str_plain_MGF1 ); Py_INCREF( const_str_plain_MGF1 );
    PyTuple_SET_ITEM( const_tuple_fa080cb81ae95a632e3813332243b607_tuple, 2, const_str_plain_OAEP ); Py_INCREF( const_str_plain_OAEP );
    PyTuple_SET_ITEM( const_tuple_fa080cb81ae95a632e3813332243b607_tuple, 3, const_str_plain_PKCS1v15 ); Py_INCREF( const_str_plain_PKCS1v15 );
    PyTuple_SET_ITEM( const_tuple_fa080cb81ae95a632e3813332243b607_tuple, 4, const_str_plain_PSS ); Py_INCREF( const_str_plain_PSS );
    PyTuple_SET_ITEM( const_tuple_fa080cb81ae95a632e3813332243b607_tuple, 5, const_str_plain_calculate_max_pss_salt_length ); Py_INCREF( const_str_plain_calculate_max_pss_salt_length );
    const_str_plain_UNSUPPORTED_PADDING = UNSTREAM_STRING( &constant_bin[ 527860 ], 19, 1 );
    const_str_plain_crypt = UNSTREAM_STRING( &constant_bin[ 8399 ], 5, 1 );
    const_str_plain_RSA_get0_factors = UNSTREAM_STRING( &constant_bin[ 551974 ], 16, 1 );
    const_tuple_c6ce9c7ee6a4083dcedc9755b6b4cec0_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_c6ce9c7ee6a4083dcedc9755b6b4cec0_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c6ce9c7ee6a4083dcedc9755b6b4cec0_tuple, 1, const_str_plain_ciphertext ); Py_INCREF( const_str_plain_ciphertext );
    PyTuple_SET_ITEM( const_tuple_c6ce9c7ee6a4083dcedc9755b6b4cec0_tuple, 2, const_str_plain_padding ); Py_INCREF( const_str_plain_padding );
    const_str_plain_key_size_bytes = UNSTREAM_STRING( &constant_bin[ 545801 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_c6ce9c7ee6a4083dcedc9755b6b4cec0_tuple, 3, const_str_plain_key_size_bytes ); Py_INCREF( const_str_plain_key_size_bytes );
    const_str_plain_EVP_PKEY_CTX_set_rsa_padding = UNSTREAM_STRING( &constant_bin[ 551990 ], 28, 1 );
    const_str_plain_EVP_PKEY_CTX_set_signature_md = UNSTREAM_STRING( &constant_bin[ 552018 ], 29, 1 );
    const_str_plain__rsa_cdata = UNSTREAM_STRING( &constant_bin[ 552047 ], 10, 1 );
    const_str_plain_EVP_PKEY_decrypt_init = UNSTREAM_STRING( &constant_bin[ 552057 ], 21, 1 );
    const_str_digest_72073d8325d2e95fe43e7fcdd9af6584 = UNSTREAM_STRING( &constant_bin[ 552078 ], 36, 0 );
    const_str_plain__rsa_sig_sign = UNSTREAM_STRING( &constant_bin[ 552114 ], 13, 1 );
    const_str_plain_pss = UNSTREAM_STRING( &constant_bin[ 102148 ], 3, 1 );
    const_str_plain_pkey_ctx = UNSTREAM_STRING( &constant_bin[ 534307 ], 8, 1 );
    const_str_plain_UNSUPPORTED_MGF = UNSTREAM_STRING( &constant_bin[ 527917 ], 15, 1 );
    const_str_plain_EVP_PKEY_sign = UNSTREAM_STRING( &constant_bin[ 552127 ], 13, 1 );
    const_str_plain_EVP_PKEY_CTX_set_rsa_pss_saltlen = UNSTREAM_STRING( &constant_bin[ 552140 ], 32, 1 );
    const_str_plain_RSA_get0_crt_params = UNSTREAM_STRING( &constant_bin[ 552172 ], 19, 1 );
    const_str_plain_RSA_R_OAEP_DECODING_ERROR = UNSTREAM_STRING( &constant_bin[ 552191 ], 25, 1 );
    const_str_digest_d0927d6863daca8d65f20add6616c473 = UNSTREAM_STRING( &constant_bin[ 552216 ], 39, 0 );
    const_str_plain__enc_dec_rsa = UNSTREAM_STRING( &constant_bin[ 552255 ], 12, 1 );
    const_str_digest_6c44573c8d035e93ec74c18ee09caeff = UNSTREAM_STRING( &constant_bin[ 552267 ], 44, 0 );
    const_str_digest_a5ed813245efbd20efda0edcee3465dc = UNSTREAM_STRING( &constant_bin[ 552311 ], 49, 0 );
    const_str_plain_RSA_R_DATA_TOO_LARGE_FOR_MODULUS = UNSTREAM_STRING( &constant_bin[ 552360 ], 32, 1 );
    const_str_plain_RSA_PKCS1_PSS_PADDING = UNSTREAM_STRING( &constant_bin[ 552392 ], 21, 1 );
    const_str_plain_EVP_PKEY_decrypt = UNSTREAM_STRING( &constant_bin[ 552057 ], 16, 1 );
    const_str_plain__RSASignatureContext = UNSTREAM_STRING( &constant_bin[ 552413 ], 20, 1 );
    const_str_plain_buf_size = UNSTREAM_STRING( &constant_bin[ 552433 ], 8, 1 );
    const_str_plain_RSA_PKCS1_PADDING = UNSTREAM_STRING( &constant_bin[ 552441 ], 17, 1 );
    const_str_plain_EVP_PKEY_CTX_set_rsa_mgf1_md = UNSTREAM_STRING( &constant_bin[ 552458 ], 28, 1 );
    const_str_plain__rsa_sig_setup = UNSTREAM_STRING( &constant_bin[ 552486 ], 14, 1 );
    const_str_digest_5a38396234f15fc715f8675baa06bc2b = UNSTREAM_STRING( &constant_bin[ 552500 ], 49, 0 );
    const_tuple_e932c0d88f566fdc564e9c0f22e7393f_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_e932c0d88f566fdc564e9c0f22e7393f_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_e932c0d88f566fdc564e9c0f22e7393f_tuple, 1, const_str_plain_dmq1 ); Py_INCREF( const_str_plain_dmq1 );
    PyTuple_SET_ITEM( const_tuple_e932c0d88f566fdc564e9c0f22e7393f_tuple, 2, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    PyTuple_SET_ITEM( const_tuple_e932c0d88f566fdc564e9c0f22e7393f_tuple, 3, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_e932c0d88f566fdc564e9c0f22e7393f_tuple, 4, const_str_plain_dmp1 ); Py_INCREF( const_str_plain_dmp1 );
    PyTuple_SET_ITEM( const_tuple_e932c0d88f566fdc564e9c0f22e7393f_tuple, 5, const_str_plain_iqmp ); Py_INCREF( const_str_plain_iqmp );
    PyTuple_SET_ITEM( const_tuple_e932c0d88f566fdc564e9c0f22e7393f_tuple, 6, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_e932c0d88f566fdc564e9c0f22e7393f_tuple, 7, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_e932c0d88f566fdc564e9c0f22e7393f_tuple, 8, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    const_tuple_f0a5ee3979d443120441bacd1bbf5e08_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_f0a5ee3979d443120441bacd1bbf5e08_tuple, 0, const_str_plain_backend ); Py_INCREF( const_str_plain_backend );
    PyTuple_SET_ITEM( const_tuple_f0a5ee3979d443120441bacd1bbf5e08_tuple, 1, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_f0a5ee3979d443120441bacd1bbf5e08_tuple, 2, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    const_str_plain_padding_enum = UNSTREAM_STRING( &constant_bin[ 552549 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_f0a5ee3979d443120441bacd1bbf5e08_tuple, 3, const_str_plain_padding_enum ); Py_INCREF( const_str_plain_padding_enum );
    PyTuple_SET_ITEM( const_tuple_f0a5ee3979d443120441bacd1bbf5e08_tuple, 4, const_str_plain_padding ); Py_INCREF( const_str_plain_padding );
    const_str_plain_labelptr = UNSTREAM_STRING( &constant_bin[ 552561 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_f0a5ee3979d443120441bacd1bbf5e08_tuple, 5, const_str_plain_labelptr ); Py_INCREF( const_str_plain_labelptr );
    PyTuple_SET_ITEM( const_tuple_f0a5ee3979d443120441bacd1bbf5e08_tuple, 6, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_f0a5ee3979d443120441bacd1bbf5e08_tuple, 7, const_str_plain_buf_size ); Py_INCREF( const_str_plain_buf_size );
    PyTuple_SET_ITEM( const_tuple_f0a5ee3979d443120441bacd1bbf5e08_tuple, 8, const_str_plain_buf ); Py_INCREF( const_str_plain_buf );
    PyTuple_SET_ITEM( const_tuple_f0a5ee3979d443120441bacd1bbf5e08_tuple, 9, const_str_plain_pkey_ctx ); Py_INCREF( const_str_plain_pkey_ctx );
    const_str_plain_mgf1_md = UNSTREAM_STRING( &constant_bin[ 552479 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_f0a5ee3979d443120441bacd1bbf5e08_tuple, 10, const_str_plain_mgf1_md ); Py_INCREF( const_str_plain_mgf1_md );
    PyTuple_SET_ITEM( const_tuple_f0a5ee3979d443120441bacd1bbf5e08_tuple, 11, const_str_plain_outlen ); Py_INCREF( const_str_plain_outlen );
    PyTuple_SET_ITEM( const_tuple_f0a5ee3979d443120441bacd1bbf5e08_tuple, 12, const_str_plain_init ); Py_INCREF( const_str_plain_init );
    PyTuple_SET_ITEM( const_tuple_f0a5ee3979d443120441bacd1bbf5e08_tuple, 13, const_str_plain_crypt ); Py_INCREF( const_str_plain_crypt );
    const_str_plain_oaep_md = UNSTREAM_STRING( &constant_bin[ 552569 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_f0a5ee3979d443120441bacd1bbf5e08_tuple, 14, const_str_plain_oaep_md ); Py_INCREF( const_str_plain_oaep_md );
    const_str_plain__rsa_sig_verify = UNSTREAM_STRING( &constant_bin[ 552576 ], 15, 1 );
    const_tuple_cf4f691584747fde4f8639de585c382c_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_cf4f691584747fde4f8639de585c382c_tuple, 0, const_str_plain_backend ); Py_INCREF( const_str_plain_backend );
    PyTuple_SET_ITEM( const_tuple_cf4f691584747fde4f8639de585c382c_tuple, 1, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_cf4f691584747fde4f8639de585c382c_tuple, 2, const_str_plain_errors ); Py_INCREF( const_str_plain_errors );
    const_str_plain_decoding_errors = UNSTREAM_STRING( &constant_bin[ 552591 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_cf4f691584747fde4f8639de585c382c_tuple, 3, const_str_plain_decoding_errors ); Py_INCREF( const_str_plain_decoding_errors );
    const_tuple_bd8ac3c11993be881f5f804ae2482e97_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_bd8ac3c11993be881f5f804ae2482e97_tuple, 0, const_str_plain_backend ); Py_INCREF( const_str_plain_backend );
    PyTuple_SET_ITEM( const_tuple_bd8ac3c11993be881f5f804ae2482e97_tuple, 1, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_bd8ac3c11993be881f5f804ae2482e97_tuple, 2, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_bd8ac3c11993be881f5f804ae2482e97_tuple, 3, const_str_plain_padding ); Py_INCREF( const_str_plain_padding );
    PyTuple_SET_ITEM( const_tuple_bd8ac3c11993be881f5f804ae2482e97_tuple, 4, const_str_plain_padding_enum ); Py_INCREF( const_str_plain_padding_enum );
    const_str_plain_EVP_PKEY_sign_init = UNSTREAM_STRING( &constant_bin[ 552606 ], 18, 1 );
    const_tuple_4680538ceda116494c7d984b8703d55b_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_4680538ceda116494c7d984b8703d55b_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_4680538ceda116494c7d984b8703d55b_tuple, 1, const_str_plain_backend ); Py_INCREF( const_str_plain_backend );
    PyTuple_SET_ITEM( const_tuple_4680538ceda116494c7d984b8703d55b_tuple, 2, const_str_plain_private_key ); Py_INCREF( const_str_plain_private_key );
    PyTuple_SET_ITEM( const_tuple_4680538ceda116494c7d984b8703d55b_tuple, 3, const_str_plain_padding ); Py_INCREF( const_str_plain_padding );
    PyTuple_SET_ITEM( const_tuple_4680538ceda116494c7d984b8703d55b_tuple, 4, const_str_plain_algorithm ); Py_INCREF( const_str_plain_algorithm );
    const_str_plain__RSAVerificationContext = UNSTREAM_STRING( &constant_bin[ 552624 ], 23, 1 );
    const_str_plain__enc_dec_rsa_pkey_ctx = UNSTREAM_STRING( &constant_bin[ 552647 ], 21, 1 );
    const_str_plain_EVP_PKEY_encrypt = UNSTREAM_STRING( &constant_bin[ 552668 ], 16, 1 );
    const_str_plain_RSA_PKCS1_OAEP_PADDING = UNSTREAM_STRING( &constant_bin[ 552684 ], 22, 1 );
    const_str_plain_EVP_PKEY_encrypt_init = UNSTREAM_STRING( &constant_bin[ 552706 ], 21, 1 );
    const_str_plain__handle_rsa_enc_dec_error = UNSTREAM_STRING( &constant_bin[ 552727 ], 25, 1 );
    const_str_plain_EVP_PKEY_verify_init = UNSTREAM_STRING( &constant_bin[ 552752 ], 20, 1 );
    const_tuple_54f79cc12dea7ea95bb2b4af8842afcf_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_54f79cc12dea7ea95bb2b4af8842afcf_tuple, 0, const_str_plain_backend ); Py_INCREF( const_str_plain_backend );
    PyTuple_SET_ITEM( const_tuple_54f79cc12dea7ea95bb2b4af8842afcf_tuple, 1, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_54f79cc12dea7ea95bb2b4af8842afcf_tuple, 2, const_str_plain_padding ); Py_INCREF( const_str_plain_padding );
    PyTuple_SET_ITEM( const_tuple_54f79cc12dea7ea95bb2b4af8842afcf_tuple, 3, const_str_plain_algorithm ); Py_INCREF( const_str_plain_algorithm );
    const_str_plain_pkey_size = UNSTREAM_STRING( &constant_bin[ 552772 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_54f79cc12dea7ea95bb2b4af8842afcf_tuple, 4, const_str_plain_pkey_size ); Py_INCREF( const_str_plain_pkey_size );
    PyTuple_SET_ITEM( const_tuple_54f79cc12dea7ea95bb2b4af8842afcf_tuple, 5, const_str_plain_padding_enum ); Py_INCREF( const_str_plain_padding_enum );
    const_str_plain__padding = UNSTREAM_STRING( &constant_bin[ 542442 ], 8, 1 );
    const_str_plain_init_func = UNSTREAM_STRING( &constant_bin[ 552781 ], 9, 1 );
    const_tuple_2caf7fa8e8ca4cea38fa9a1c92ff2fb6_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_2caf7fa8e8ca4cea38fa9a1c92ff2fb6_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_2caf7fa8e8ca4cea38fa9a1c92ff2fb6_tuple, 1, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_2caf7fa8e8ca4cea38fa9a1c92ff2fb6_tuple, 2, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_2caf7fa8e8ca4cea38fa9a1c92ff2fb6_tuple, 3, const_str_plain_evp_pkey ); Py_INCREF( const_str_plain_evp_pkey );
    const_str_digest_f086882416c7bbe45258f2eebea24494 = UNSTREAM_STRING( &constant_bin[ 552790 ], 18, 0 );
    const_tuple_99a492340d27a0e2a7192ecb7608f52c_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_99a492340d27a0e2a7192ecb7608f52c_tuple, 0, const_str_plain_RSAPrivateKeyWithSerialization ); Py_INCREF( const_str_plain_RSAPrivateKeyWithSerialization );
    PyTuple_SET_ITEM( const_tuple_99a492340d27a0e2a7192ecb7608f52c_tuple, 1, const_str_plain_RSAPublicKeyWithSerialization ); Py_INCREF( const_str_plain_RSAPublicKeyWithSerialization );
    const_str_plain_RSA_get0_key = UNSTREAM_STRING( &constant_bin[ 552808 ], 12, 1 );
    const_str_digest_4853130ac3abffc32389ed03acb3f886 = UNSTREAM_STRING( &constant_bin[ 552820 ], 68, 0 );
    const_tuple_6ba236d280ea2410fbb441c9b56a5aca_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_6ba236d280ea2410fbb441c9b56a5aca_tuple, 0, const_str_plain_backend ); Py_INCREF( const_str_plain_backend );
    PyTuple_SET_ITEM( const_tuple_6ba236d280ea2410fbb441c9b56a5aca_tuple, 1, const_str_plain_padding ); Py_INCREF( const_str_plain_padding );
    PyTuple_SET_ITEM( const_tuple_6ba236d280ea2410fbb441c9b56a5aca_tuple, 2, const_str_plain_algorithm ); Py_INCREF( const_str_plain_algorithm );
    PyTuple_SET_ITEM( const_tuple_6ba236d280ea2410fbb441c9b56a5aca_tuple, 3, const_str_plain_public_key ); Py_INCREF( const_str_plain_public_key );
    PyTuple_SET_ITEM( const_tuple_6ba236d280ea2410fbb441c9b56a5aca_tuple, 4, const_str_plain_signature ); Py_INCREF( const_str_plain_signature );
    PyTuple_SET_ITEM( const_tuple_6ba236d280ea2410fbb441c9b56a5aca_tuple, 5, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_6ba236d280ea2410fbb441c9b56a5aca_tuple, 6, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_6ba236d280ea2410fbb441c9b56a5aca_tuple, 7, const_str_plain_pkey_ctx ); Py_INCREF( const_str_plain_pkey_ctx );
    const_tuple_f9b19eb9efb27f3d2ef60f3e31e3451c_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_f9b19eb9efb27f3d2ef60f3e31e3451c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_f9b19eb9efb27f3d2ef60f3e31e3451c_tuple, 1, const_str_plain_backend ); Py_INCREF( const_str_plain_backend );
    PyTuple_SET_ITEM( const_tuple_f9b19eb9efb27f3d2ef60f3e31e3451c_tuple, 2, const_str_plain_rsa_cdata ); Py_INCREF( const_str_plain_rsa_cdata );
    PyTuple_SET_ITEM( const_tuple_f9b19eb9efb27f3d2ef60f3e31e3451c_tuple, 3, const_str_plain_evp_pkey ); Py_INCREF( const_str_plain_evp_pkey );
    PyTuple_SET_ITEM( const_tuple_f9b19eb9efb27f3d2ef60f3e31e3451c_tuple, 4, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    const_str_digest_81faa8b1e56081138ca37aade85d4851 = UNSTREAM_STRING( &constant_bin[ 552888 ], 64, 0 );
    const_str_digest_6ae284ffb14dd0f3d5834d728b2a2d11 = UNSTREAM_STRING( &constant_bin[ 552952 ], 71, 0 );
    const_str_plain_RSAPublicKey_dup = UNSTREAM_STRING( &constant_bin[ 553023 ], 16, 1 );
    const_tuple_9b60361a0fe15e5983052b2a753f2609_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_9b60361a0fe15e5983052b2a753f2609_tuple, 0, const_str_plain_backend ); Py_INCREF( const_str_plain_backend );
    PyTuple_SET_ITEM( const_tuple_9b60361a0fe15e5983052b2a753f2609_tuple, 1, const_str_plain_padding ); Py_INCREF( const_str_plain_padding );
    PyTuple_SET_ITEM( const_tuple_9b60361a0fe15e5983052b2a753f2609_tuple, 2, const_str_plain_algorithm ); Py_INCREF( const_str_plain_algorithm );
    PyTuple_SET_ITEM( const_tuple_9b60361a0fe15e5983052b2a753f2609_tuple, 3, const_str_plain_private_key ); Py_INCREF( const_str_plain_private_key );
    PyTuple_SET_ITEM( const_tuple_9b60361a0fe15e5983052b2a753f2609_tuple, 4, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_9b60361a0fe15e5983052b2a753f2609_tuple, 5, const_str_plain_errors ); Py_INCREF( const_str_plain_errors );
    PyTuple_SET_ITEM( const_tuple_9b60361a0fe15e5983052b2a753f2609_tuple, 6, const_str_plain_buf ); Py_INCREF( const_str_plain_buf );
    PyTuple_SET_ITEM( const_tuple_9b60361a0fe15e5983052b2a753f2609_tuple, 7, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_9b60361a0fe15e5983052b2a753f2609_tuple, 8, const_str_plain_buflen ); Py_INCREF( const_str_plain_buflen );
    PyTuple_SET_ITEM( const_tuple_9b60361a0fe15e5983052b2a753f2609_tuple, 9, const_str_plain_reason ); Py_INCREF( const_str_plain_reason );
    PyTuple_SET_ITEM( const_tuple_9b60361a0fe15e5983052b2a753f2609_tuple, 10, const_str_plain_pkey_ctx ); Py_INCREF( const_str_plain_pkey_ctx );
    const_tuple_f7d52da993a9ca49ad2e18373869bfe9_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_f7d52da993a9ca49ad2e18373869bfe9_tuple, 0, const_str_plain_AsymmetricSignatureContext ); Py_INCREF( const_str_plain_AsymmetricSignatureContext );
    PyTuple_SET_ITEM( const_tuple_f7d52da993a9ca49ad2e18373869bfe9_tuple, 1, const_str_plain_AsymmetricVerificationContext ); Py_INCREF( const_str_plain_AsymmetricVerificationContext );
    PyTuple_SET_ITEM( const_tuple_f7d52da993a9ca49ad2e18373869bfe9_tuple, 2, const_str_plain_rsa ); Py_INCREF( const_str_plain_rsa );
    const_tuple_ccdccbd9a4e8f15f0a95f1ae188dcbd4_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_ccdccbd9a4e8f15f0a95f1ae188dcbd4_tuple, 0, const_str_plain_backend ); Py_INCREF( const_str_plain_backend );
    PyTuple_SET_ITEM( const_tuple_ccdccbd9a4e8f15f0a95f1ae188dcbd4_tuple, 1, const_str_plain_padding ); Py_INCREF( const_str_plain_padding );
    PyTuple_SET_ITEM( const_tuple_ccdccbd9a4e8f15f0a95f1ae188dcbd4_tuple, 2, const_str_plain_algorithm ); Py_INCREF( const_str_plain_algorithm );
    PyTuple_SET_ITEM( const_tuple_ccdccbd9a4e8f15f0a95f1ae188dcbd4_tuple, 3, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_ccdccbd9a4e8f15f0a95f1ae188dcbd4_tuple, 4, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_ccdccbd9a4e8f15f0a95f1ae188dcbd4_tuple, 5, const_str_plain_init_func ); Py_INCREF( const_str_plain_init_func );
    PyTuple_SET_ITEM( const_tuple_ccdccbd9a4e8f15f0a95f1ae188dcbd4_tuple, 6, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_ccdccbd9a4e8f15f0a95f1ae188dcbd4_tuple, 7, const_str_plain_padding_enum ); Py_INCREF( const_str_plain_padding_enum );
    PyTuple_SET_ITEM( const_tuple_ccdccbd9a4e8f15f0a95f1ae188dcbd4_tuple, 8, const_str_plain_pkey_ctx ); Py_INCREF( const_str_plain_pkey_ctx );
    PyTuple_SET_ITEM( const_tuple_ccdccbd9a4e8f15f0a95f1ae188dcbd4_tuple, 9, const_str_plain_mgf1_md ); Py_INCREF( const_str_plain_mgf1_md );
    PyTuple_SET_ITEM( const_tuple_ccdccbd9a4e8f15f0a95f1ae188dcbd4_tuple, 10, const_str_plain_evp_md ); Py_INCREF( const_str_plain_evp_md );
    const_str_digest_6053ae34cacb5f3719c5f5a589bf12fb = UNSTREAM_STRING( &constant_bin[ 553039 ], 52, 0 );
    const_str_digest_990d5f714aca7bf00226709211c3c991 = UNSTREAM_STRING( &constant_bin[ 553091 ], 76, 0 );
    const_str_plain_EVP_PKEY_verify = UNSTREAM_STRING( &constant_bin[ 552752 ], 15, 1 );
    const_str_digest_18373e025d014684a4a63b5c2496b777 = UNSTREAM_STRING( &constant_bin[ 553167 ], 39, 0 );
    const_tuple_c8f31359161ad7548eb4b90a35051198_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_c8f31359161ad7548eb4b90a35051198_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c8f31359161ad7548eb4b90a35051198_tuple, 1, const_str_plain_backend ); Py_INCREF( const_str_plain_backend );
    PyTuple_SET_ITEM( const_tuple_c8f31359161ad7548eb4b90a35051198_tuple, 2, const_str_plain_public_key ); Py_INCREF( const_str_plain_public_key );
    PyTuple_SET_ITEM( const_tuple_c8f31359161ad7548eb4b90a35051198_tuple, 3, const_str_plain_signature ); Py_INCREF( const_str_plain_signature );
    PyTuple_SET_ITEM( const_tuple_c8f31359161ad7548eb4b90a35051198_tuple, 4, const_str_plain_padding ); Py_INCREF( const_str_plain_padding );
    PyTuple_SET_ITEM( const_tuple_c8f31359161ad7548eb4b90a35051198_tuple, 5, const_str_plain_algorithm ); Py_INCREF( const_str_plain_algorithm );
    const_str_digest_02b9af73b54a89303fd51d64eedf10ac = UNSTREAM_STRING( &constant_bin[ 553206 ], 48, 0 );
    const_tuple_145c5e0758bfbdb50a7dcf6ef101cbc1_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_145c5e0758bfbdb50a7dcf6ef101cbc1_tuple, 0, const_str_plain_pss ); Py_INCREF( const_str_plain_pss );
    PyTuple_SET_ITEM( const_tuple_145c5e0758bfbdb50a7dcf6ef101cbc1_tuple, 1, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_145c5e0758bfbdb50a7dcf6ef101cbc1_tuple, 2, const_str_plain_hash_algorithm ); Py_INCREF( const_str_plain_hash_algorithm );
    PyTuple_SET_ITEM( const_tuple_145c5e0758bfbdb50a7dcf6ef101cbc1_tuple, 3, const_str_plain_salt ); Py_INCREF( const_str_plain_salt );
    const_str_plain__get_rsa_pss_salt_length = UNSTREAM_STRING( &constant_bin[ 553254 ], 24, 1 );
    const_str_plain_RSA_R_DATA_TOO_LARGE_FOR_KEY_SIZE = UNSTREAM_STRING( &constant_bin[ 553278 ], 33, 1 );
    const_str_digest_88d629665c18fa7e147c9ed13d7dbcd3 = UNSTREAM_STRING( &constant_bin[ 553311 ], 80, 0 );
    const_str_plain_RSA_R_BLOCK_TYPE_IS_NOT_02 = UNSTREAM_STRING( &constant_bin[ 553391 ], 26, 1 );
    const_str_plain_RSA_R_BLOCK_TYPE_IS_NOT_01 = UNSTREAM_STRING( &constant_bin[ 553417 ], 26, 1 );
    const_str_plain__rsa_sig_determine_padding = UNSTREAM_STRING( &constant_bin[ 553443 ], 26, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$backends$openssl$rsa( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_e5b17702a3d91744c314064e4a44cdd4;
static PyCodeObject *codeobj_417cc5ffd2084ef5d39715f400756402;
static PyCodeObject *codeobj_65fa36b044c590d20a1655f9e7caeee8;
static PyCodeObject *codeobj_8e782dfdbe078cb40a78d901917edc19;
static PyCodeObject *codeobj_94869d310e3c0005006be16b7ebed635;
static PyCodeObject *codeobj_9b7cf94cd30727957df7562b9f08d00e;
static PyCodeObject *codeobj_e00af7a3f4df66d52c7b2103317a1446;
static PyCodeObject *codeobj_da62b15b380a9c6f502eb590e193408b;
static PyCodeObject *codeobj_d3a6183e67993e43aeb70c615f8d3774;
static PyCodeObject *codeobj_aabc2602d7d65d8cb912833716a20af9;
static PyCodeObject *codeobj_7113251a7a8c7badfe741f661c528b0c;
static PyCodeObject *codeobj_0ff37599e6c719bda4ddd438200d4226;
static PyCodeObject *codeobj_7ed2038eb663bb2e8d72b14b45e6f93a;
static PyCodeObject *codeobj_ed7213390c84d949873b88fe0c1d4f87;
static PyCodeObject *codeobj_b118c1c4cf6a1050c14ab160f233aeda;
static PyCodeObject *codeobj_ef703c8520b743ff56ec8cfc2182316f;
static PyCodeObject *codeobj_94dda864d3740dfb755f245d18251a2c;
static PyCodeObject *codeobj_7d881810fcc4b11d5843a1eaced7a164;
static PyCodeObject *codeobj_908dcab9570c65f5d9f8e16a268a3269;
static PyCodeObject *codeobj_0cd773cf8ff26a5cef5a74a736f07148;
static PyCodeObject *codeobj_203b05aabd52431826899733b1392223;
static PyCodeObject *codeobj_56620d6e312f596c1672d7d6b5a978d2;
static PyCodeObject *codeobj_4ec4a7fad4ae197af3dbbbf72811371f;
static PyCodeObject *codeobj_db3ca06f8fed18a3c5fa9eff73e0b85d;
static PyCodeObject *codeobj_23b01085215828ad6bb32a88881dd6ad;
static PyCodeObject *codeobj_ba9af55975d848b309ca02d9bf50f129;
static PyCodeObject *codeobj_82564fc177efccbc370f77f719410b6a;
static PyCodeObject *codeobj_345185089f99bd5709d2f73c73a21694;
static PyCodeObject *codeobj_34835762160b83ed7c6a72fd07edba1a;
static PyCodeObject *codeobj_5a11116a1573660592abbac598f1985a;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_990d5f714aca7bf00226709211c3c991;
    codeobj_e5b17702a3d91744c314064e4a44cdd4 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_5a38396234f15fc715f8675baa06bc2b, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_417cc5ffd2084ef5d39715f400756402 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__RSAPrivateKey, 333, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_65fa36b044c590d20a1655f9e7caeee8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__RSAPublicKey, 422, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8e782dfdbe078cb40a78d901917edc19 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 277, const_tuple_4680538ceda116494c7d984b8703d55b_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_94869d310e3c0005006be16b7ebed635 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 304, const_tuple_c8f31359161ad7548eb4b90a35051198_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9b7cf94cd30727957df7562b9f08d00e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 334, const_tuple_f9b19eb9efb27f3d2ef60f3e31e3451c_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e00af7a3f4df66d52c7b2103317a1446 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 423, const_tuple_f9b19eb9efb27f3d2ef60f3e31e3451c_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_da62b15b380a9c6f502eb590e193408b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__enc_dec_rsa, 38, const_tuple_bd8ac3c11993be881f5f804ae2482e97_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d3a6183e67993e43aeb70c615f8d3774 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__enc_dec_rsa_pkey_ctx, 71, const_tuple_f0a5ee3979d443120441bacd1bbf5e08_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_aabc2602d7d65d8cb912833716a20af9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_rsa_pss_salt_length, 29, const_tuple_145c5e0758bfbdb50a7dcf6ef101cbc1_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7113251a7a8c7badfe741f661c528b0c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__handle_rsa_enc_dec_error, 127, const_tuple_cf4f691584747fde4f8639de585c382c_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0ff37599e6c719bda4ddd438200d4226 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__rsa_sig_determine_padding, 156, const_tuple_54f79cc12dea7ea95bb2b4af8842afcf_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7ed2038eb663bb2e8d72b14b45e6f93a = MAKE_CODEOBJ( module_filename_obj, const_str_plain__rsa_sig_setup, 188, const_tuple_ccdccbd9a4e8f15f0a95f1ae188dcbd4_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ed7213390c84d949873b88fe0c1d4f87 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__rsa_sig_sign, 221, const_tuple_9b60361a0fe15e5983052b2a753f2609_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b118c1c4cf6a1050c14ab160f233aeda = MAKE_CODEOBJ( module_filename_obj, const_str_plain__rsa_sig_verify, 258, const_tuple_6ba236d280ea2410fbb441c9b56a5aca_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ef703c8520b743ff56ec8cfc2182316f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decrypt, 354, const_tuple_c6ce9c7ee6a4083dcedc9755b6b4cec0_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_94dda864d3740dfb755f245d18251a2c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encrypt, 447, const_tuple_str_plain_self_str_plain_plaintext_str_plain_padding_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7d881810fcc4b11d5843a1eaced7a164 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_finalize, 292, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_908dcab9570c65f5d9f8e16a268a3269 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_private_bytes, 405, const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0cd773cf8ff26a5cef5a74a736f07148 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_private_numbers, 370, const_tuple_e932c0d88f566fdc564e9c0f22e7393f_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_203b05aabd52431826899733b1392223 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_public_bytes, 463, const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_56620d6e312f596c1672d7d6b5a978d2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_public_key, 361, const_tuple_2caf7fa8e8ca4cea38fa9a1c92ff2fb6_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4ec4a7fad4ae197af3dbbbf72811371f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_public_numbers, 450, const_tuple_str_plain_self_str_plain_e_str_plain_n_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_db3ca06f8fed18a3c5fa9eff73e0b85d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sign, 414, const_tuple_c7ec265320af4c45beec923a8df09399_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_23b01085215828ad6bb32a88881dd6ad = MAKE_CODEOBJ( module_filename_obj, const_str_plain_signer, 349, const_tuple_str_plain_self_str_plain_padding_str_plain_algorithm_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ba9af55975d848b309ca02d9bf50f129 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_update, 289, const_tuple_str_plain_self_str_plain_data_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_82564fc177efccbc370f77f719410b6a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_update, 318, const_tuple_str_plain_self_str_plain_data_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_345185089f99bd5709d2f73c73a21694 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_verifier, 438, const_tuple_d7cd3dd1f0c1b3c745f9dc0754b00ddb_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_34835762160b83ed7c6a72fd07edba1a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_verify, 321, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5a11116a1573660592abbac598f1985a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_verify, 472, const_tuple_d38d0a393082ae0bfc8342fb83a4f614_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_10_update(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_11_finalize(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_12___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_13_update(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_14_verify(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_15___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_16_signer(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_17_decrypt(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_18_public_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_19_private_numbers(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_1__get_rsa_pss_salt_length(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_20_private_bytes(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_21_sign(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_22___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_23_verifier(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_24_encrypt(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_25_public_numbers(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_26_public_bytes(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_27_verify(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_2__enc_dec_rsa(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_3__enc_dec_rsa_pkey_ctx(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_4__handle_rsa_enc_dec_error(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_5__rsa_sig_determine_padding(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_6__rsa_sig_setup(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_7__rsa_sig_sign(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_8__rsa_sig_verify(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_9___init__(  );


// The module function definitions.
static PyObject *impl_cryptography$hazmat$backends$openssl$rsa$$$function_1__get_rsa_pss_salt_length( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pss = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    PyObject *par_hash_algorithm = python_pars[ 2 ];
    PyObject *var_salt = NULL;
    struct Nuitka_FrameObject *frame_aabc2602d7d65d8cb912833716a20af9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_aabc2602d7d65d8cb912833716a20af9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_aabc2602d7d65d8cb912833716a20af9, codeobj_aabc2602d7d65d8cb912833716a20af9, module_cryptography$hazmat$backends$openssl$rsa, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_aabc2602d7d65d8cb912833716a20af9 = cache_frame_aabc2602d7d65d8cb912833716a20af9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_aabc2602d7d65d8cb912833716a20af9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_aabc2602d7d65d8cb912833716a20af9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_pss );
        tmp_source_name_1 = par_pss;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__salt_length );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_salt == NULL );
        var_salt = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( var_salt );
        tmp_compexpr_left_1 = var_salt;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_MGF1 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MGF1 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "MGF1" );
            exception_tb = NULL;

            exception_lineno = 32;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_MAX_LENGTH );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_right_1 );
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
        CHECK_OBJECT( var_salt );
        tmp_compexpr_left_2 = var_salt;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_PSS );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PSS );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PSS" );
            exception_tb = NULL;

            exception_lineno = 32;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_MAX_LENGTH );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_right_2 );
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_calculate_max_pss_salt_length );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_calculate_max_pss_salt_length );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "calculate_max_pss_salt_length" );
                exception_tb = NULL;

                exception_lineno = 33;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_3;
            CHECK_OBJECT( par_key );
            tmp_args_element_name_1 = par_key;
            CHECK_OBJECT( par_hash_algorithm );
            tmp_args_element_name_2 = par_hash_algorithm;
            frame_aabc2602d7d65d8cb912833716a20af9->m_frame.f_lineno = 33;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 33;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        CHECK_OBJECT( var_salt );
        tmp_return_value = var_salt;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aabc2602d7d65d8cb912833716a20af9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_aabc2602d7d65d8cb912833716a20af9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aabc2602d7d65d8cb912833716a20af9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aabc2602d7d65d8cb912833716a20af9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aabc2602d7d65d8cb912833716a20af9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aabc2602d7d65d8cb912833716a20af9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_aabc2602d7d65d8cb912833716a20af9,
        type_description_1,
        par_pss,
        par_key,
        par_hash_algorithm,
        var_salt
    );


    // Release cached frame.
    if ( frame_aabc2602d7d65d8cb912833716a20af9 == cache_frame_aabc2602d7d65d8cb912833716a20af9 )
    {
        Py_DECREF( frame_aabc2602d7d65d8cb912833716a20af9 );
    }
    cache_frame_aabc2602d7d65d8cb912833716a20af9 = NULL;

    assertFrameObject( frame_aabc2602d7d65d8cb912833716a20af9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_1__get_rsa_pss_salt_length );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_hash_algorithm );
    Py_DECREF( par_hash_algorithm );
    par_hash_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_pss );
    Py_DECREF( par_pss );
    par_pss = NULL;

    CHECK_OBJECT( (PyObject *)var_salt );
    Py_DECREF( var_salt );
    var_salt = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

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

    CHECK_OBJECT( (PyObject *)par_hash_algorithm );
    Py_DECREF( par_hash_algorithm );
    par_hash_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_pss );
    Py_DECREF( par_pss );
    par_pss = NULL;

    Py_XDECREF( var_salt );
    var_salt = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_1__get_rsa_pss_salt_length );
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


static PyObject *impl_cryptography$hazmat$backends$openssl$rsa$$$function_2__enc_dec_rsa( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    PyObject *par_data = python_pars[ 2 ];
    PyObject *par_padding = python_pars[ 3 ];
    PyObject *var_padding_enum = NULL;
    struct Nuitka_FrameObject *frame_da62b15b380a9c6f502eb590e193408b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_da62b15b380a9c6f502eb590e193408b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_da62b15b380a9c6f502eb590e193408b, codeobj_da62b15b380a9c6f502eb590e193408b, module_cryptography$hazmat$backends$openssl$rsa, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_da62b15b380a9c6f502eb590e193408b = cache_frame_da62b15b380a9c6f502eb590e193408b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_da62b15b380a9c6f502eb590e193408b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_da62b15b380a9c6f502eb590e193408b ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_padding );
        tmp_isinstance_inst_1 = par_padding;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_AsymmetricPadding );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AsymmetricPadding );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "AsymmetricPadding" );
            exception_tb = NULL;

            exception_lineno = 39;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "ooooo";
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
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_a5ed813245efbd20efda0edcee3465dc;
            frame_da62b15b380a9c6f502eb590e193408b->m_frame.f_lineno = 40;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 40;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_padding );
        tmp_isinstance_inst_2 = par_padding;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_PKCS1v15 );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PKCS1v15 );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PKCS1v15" );
            exception_tb = NULL;

            exception_lineno = 42;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_2 = tmp_mvar_value_2;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_1 = "ooooo";
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
            PyObject *tmp_source_name_1;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_backend );
            tmp_source_name_2 = par_backend;
            tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__lib );
            if ( tmp_source_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 43;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_RSA_PKCS1_PADDING );
            Py_DECREF( tmp_source_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 43;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_padding_enum == NULL );
            var_padding_enum = tmp_assign_source_1;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_isinstance_inst_3;
            PyObject *tmp_isinstance_cls_3;
            PyObject *tmp_mvar_value_3;
            CHECK_OBJECT( par_padding );
            tmp_isinstance_inst_3 = par_padding;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_OAEP );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OAEP );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "OAEP" );
                exception_tb = NULL;

                exception_lineno = 44;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_isinstance_cls_3 = tmp_mvar_value_3;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 44;
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
                PyObject *tmp_assign_source_2;
                PyObject *tmp_source_name_3;
                PyObject *tmp_source_name_4;
                CHECK_OBJECT( par_backend );
                tmp_source_name_4 = par_backend;
                tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__lib );
                if ( tmp_source_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 45;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_RSA_PKCS1_OAEP_PADDING );
                Py_DECREF( tmp_source_name_3 );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 45;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_padding_enum == NULL );
                var_padding_enum = tmp_assign_source_2;
            }
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_operand_name_2;
                PyObject *tmp_isinstance_inst_4;
                PyObject *tmp_isinstance_cls_4;
                PyObject *tmp_source_name_5;
                PyObject *tmp_mvar_value_4;
                CHECK_OBJECT( par_padding );
                tmp_source_name_5 = par_padding;
                tmp_isinstance_inst_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__mgf );
                if ( tmp_isinstance_inst_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 47;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_MGF1 );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MGF1 );
                }

                if ( tmp_mvar_value_4 == NULL )
                {
                    Py_DECREF( tmp_isinstance_inst_4 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "MGF1" );
                    exception_tb = NULL;

                    exception_lineno = 47;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_isinstance_cls_4 = tmp_mvar_value_4;
                tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_4, tmp_isinstance_cls_4 );
                Py_DECREF( tmp_isinstance_inst_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 47;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 47;
                    type_description_1 = "ooooo";
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
                    PyObject *tmp_raise_type_2;
                    PyObject *tmp_called_name_1;
                    PyObject *tmp_mvar_value_5;
                    PyObject *tmp_args_element_name_1;
                    PyObject *tmp_args_element_name_2;
                    PyObject *tmp_source_name_6;
                    PyObject *tmp_mvar_value_6;
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm );

                    if (unlikely( tmp_mvar_value_5 == NULL ))
                    {
                        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm );
                    }

                    if ( tmp_mvar_value_5 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "UnsupportedAlgorithm" );
                        exception_tb = NULL;

                        exception_lineno = 48;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_1 = tmp_mvar_value_5;
                    tmp_args_element_name_1 = const_str_digest_d0927d6863daca8d65f20add6616c473;
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__Reasons );

                    if (unlikely( tmp_mvar_value_6 == NULL ))
                    {
                        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__Reasons );
                    }

                    if ( tmp_mvar_value_6 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_Reasons" );
                        exception_tb = NULL;

                        exception_lineno = 50;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_6 = tmp_mvar_value_6;
                    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_UNSUPPORTED_MGF );
                    if ( tmp_args_element_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 50;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_da62b15b380a9c6f502eb590e193408b->m_frame.f_lineno = 48;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_2 );
                    if ( tmp_raise_type_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 48;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    exception_type = tmp_raise_type_2;
                    exception_lineno = 48;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_4:;
            }
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_operand_name_3;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_args_element_name_3;
                CHECK_OBJECT( par_backend );
                tmp_called_instance_1 = par_backend;
                CHECK_OBJECT( par_padding );
                tmp_args_element_name_3 = par_padding;
                frame_da62b15b380a9c6f502eb590e193408b->m_frame.f_lineno = 53;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_operand_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_rsa_padding_supported, call_args );
                }

                if ( tmp_operand_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 53;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
                Py_DECREF( tmp_operand_name_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 53;
                    type_description_1 = "ooooo";
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
                    PyObject *tmp_raise_type_3;
                    PyObject *tmp_called_name_2;
                    PyObject *tmp_mvar_value_7;
                    PyObject *tmp_args_element_name_4;
                    PyObject *tmp_args_element_name_5;
                    PyObject *tmp_source_name_7;
                    PyObject *tmp_mvar_value_8;
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm );

                    if (unlikely( tmp_mvar_value_7 == NULL ))
                    {
                        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm );
                    }

                    if ( tmp_mvar_value_7 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "UnsupportedAlgorithm" );
                        exception_tb = NULL;

                        exception_lineno = 54;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_2 = tmp_mvar_value_7;
                    tmp_args_element_name_4 = const_str_digest_88d629665c18fa7e147c9ed13d7dbcd3;
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__Reasons );

                    if (unlikely( tmp_mvar_value_8 == NULL ))
                    {
                        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__Reasons );
                    }

                    if ( tmp_mvar_value_8 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_Reasons" );
                        exception_tb = NULL;

                        exception_lineno = 57;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_7 = tmp_mvar_value_8;
                    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_UNSUPPORTED_PADDING );
                    if ( tmp_args_element_name_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 57;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_da62b15b380a9c6f502eb590e193408b->m_frame.f_lineno = 54;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_5 );
                    if ( tmp_raise_type_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 54;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    exception_type = tmp_raise_type_3;
                    exception_lineno = 54;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_5:;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_raise_type_4;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_9;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_8;
                PyObject *tmp_args_element_name_7;
                PyObject *tmp_source_name_9;
                PyObject *tmp_args_element_name_8;
                PyObject *tmp_source_name_10;
                PyObject *tmp_mvar_value_10;
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm );

                if (unlikely( tmp_mvar_value_9 == NULL ))
                {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm );
                }

                if ( tmp_mvar_value_9 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "UnsupportedAlgorithm" );
                    exception_tb = NULL;

                    exception_lineno = 61;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_9;
                tmp_source_name_8 = const_str_digest_72073d8325d2e95fe43e7fcdd9af6584;
                tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_format );
                assert( !(tmp_called_name_4 == NULL) );
                CHECK_OBJECT( par_padding );
                tmp_source_name_9 = par_padding;
                tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_name );
                if ( tmp_args_element_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_4 );

                    exception_lineno = 63;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                frame_da62b15b380a9c6f502eb590e193408b->m_frame.f_lineno = 62;
                {
                    PyObject *call_args[] = { tmp_args_element_name_7 };
                    tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_element_name_7 );
                if ( tmp_args_element_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 62;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__Reasons );

                if (unlikely( tmp_mvar_value_10 == NULL ))
                {
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__Reasons );
                }

                if ( tmp_mvar_value_10 == NULL )
                {
                    Py_DECREF( tmp_args_element_name_6 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "_Reasons" );
                    exception_tb = NULL;

                    exception_lineno = 65;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_10 = tmp_mvar_value_10;
                tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_UNSUPPORTED_PADDING );
                if ( tmp_args_element_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_6 );

                    exception_lineno = 65;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                frame_da62b15b380a9c6f502eb590e193408b->m_frame.f_lineno = 61;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_8 };
                    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_args_element_name_6 );
                Py_DECREF( tmp_args_element_name_8 );
                if ( tmp_raise_type_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 61;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_4;
                exception_lineno = 61;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            branch_end_3:;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__enc_dec_rsa_pkey_ctx );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__enc_dec_rsa_pkey_ctx );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_enc_dec_rsa_pkey_ctx" );
            exception_tb = NULL;

            exception_lineno = 68;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_11;
        CHECK_OBJECT( par_backend );
        tmp_args_element_name_9 = par_backend;
        CHECK_OBJECT( par_key );
        tmp_args_element_name_10 = par_key;
        CHECK_OBJECT( par_data );
        tmp_args_element_name_11 = par_data;
        if ( var_padding_enum == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "padding_enum" );
            exception_tb = NULL;

            exception_lineno = 68;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_12 = var_padding_enum;
        CHECK_OBJECT( par_padding );
        tmp_args_element_name_13 = par_padding;
        frame_da62b15b380a9c6f502eb590e193408b->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_5, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_da62b15b380a9c6f502eb590e193408b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_da62b15b380a9c6f502eb590e193408b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_da62b15b380a9c6f502eb590e193408b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_da62b15b380a9c6f502eb590e193408b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_da62b15b380a9c6f502eb590e193408b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_da62b15b380a9c6f502eb590e193408b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_da62b15b380a9c6f502eb590e193408b,
        type_description_1,
        par_backend,
        par_key,
        par_data,
        par_padding,
        var_padding_enum
    );


    // Release cached frame.
    if ( frame_da62b15b380a9c6f502eb590e193408b == cache_frame_da62b15b380a9c6f502eb590e193408b )
    {
        Py_DECREF( frame_da62b15b380a9c6f502eb590e193408b );
    }
    cache_frame_da62b15b380a9c6f502eb590e193408b = NULL;

    assertFrameObject( frame_da62b15b380a9c6f502eb590e193408b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_2__enc_dec_rsa );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    Py_XDECREF( var_padding_enum );
    var_padding_enum = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

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

    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    Py_XDECREF( var_padding_enum );
    var_padding_enum = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_2__enc_dec_rsa );
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


static PyObject *impl_cryptography$hazmat$backends$openssl$rsa$$$function_3__enc_dec_rsa_pkey_ctx( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    PyObject *par_data = python_pars[ 2 ];
    PyObject *par_padding_enum = python_pars[ 3 ];
    PyObject *par_padding = python_pars[ 4 ];
    PyObject *var_labelptr = NULL;
    PyObject *var_res = NULL;
    PyObject *var_buf_size = NULL;
    PyObject *var_buf = NULL;
    PyObject *var_pkey_ctx = NULL;
    PyObject *var_mgf1_md = NULL;
    PyObject *var_outlen = NULL;
    PyObject *var_init = NULL;
    PyObject *var_crypt = NULL;
    PyObject *var_oaep_md = NULL;
    struct Nuitka_FrameObject *frame_d3a6183e67993e43aeb70c615f8d3774;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d3a6183e67993e43aeb70c615f8d3774 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d3a6183e67993e43aeb70c615f8d3774, codeobj_d3a6183e67993e43aeb70c615f8d3774, module_cryptography$hazmat$backends$openssl$rsa, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d3a6183e67993e43aeb70c615f8d3774 = cache_frame_d3a6183e67993e43aeb70c615f8d3774;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d3a6183e67993e43aeb70c615f8d3774 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d3a6183e67993e43aeb70c615f8d3774 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_key );
        tmp_isinstance_inst_1 = par_key;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__RSAPublicKey );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__RSAPublicKey );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_RSAPublicKey" );
            exception_tb = NULL;

            exception_lineno = 72;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooo";
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
            PyObject *tmp_source_name_1;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_backend );
            tmp_source_name_2 = par_backend;
            tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__lib );
            if ( tmp_source_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_EVP_PKEY_encrypt_init );
            Py_DECREF( tmp_source_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_init == NULL );
            var_init = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( par_backend );
            tmp_source_name_4 = par_backend;
            tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__lib );
            if ( tmp_source_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 74;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_EVP_PKEY_encrypt );
            Py_DECREF( tmp_source_name_3 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 74;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_crypt == NULL );
            var_crypt = tmp_assign_source_2;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_source_name_5;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( par_backend );
            tmp_source_name_6 = par_backend;
            tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__lib );
            if ( tmp_source_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_EVP_PKEY_decrypt_init );
            Py_DECREF( tmp_source_name_5 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_init == NULL );
            var_init = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_source_name_7;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( par_backend );
            tmp_source_name_8 = par_backend;
            tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__lib );
            if ( tmp_source_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_EVP_PKEY_decrypt );
            Py_DECREF( tmp_source_name_7 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_crypt == NULL );
            var_crypt = tmp_assign_source_4;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_9;
        PyObject *tmp_source_name_10;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_11;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_12;
        PyObject *tmp_source_name_13;
        CHECK_OBJECT( par_backend );
        tmp_source_name_10 = par_backend;
        tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__lib );
        if ( tmp_source_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_EVP_PKEY_CTX_new );
        Py_DECREF( tmp_source_name_9 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_key );
        tmp_source_name_11 = par_key;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__evp_pkey );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 80;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_backend );
        tmp_source_name_13 = par_backend;
        tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__ffi );
        if ( tmp_source_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 80;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_NULL );
        Py_DECREF( tmp_source_name_12 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 80;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d3a6183e67993e43aeb70c615f8d3774->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_pkey_ctx == NULL );
        var_pkey_ctx = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_14;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_15;
        PyObject *tmp_source_name_16;
        CHECK_OBJECT( par_backend );
        tmp_source_name_14 = par_backend;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_openssl_assert );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_pkey_ctx );
        tmp_compexpr_left_1 = var_pkey_ctx;
        CHECK_OBJECT( par_backend );
        tmp_source_name_16 = par_backend;
        tmp_source_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__ffi );
        if ( tmp_source_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 82;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_NULL );
        Py_DECREF( tmp_source_name_15 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 82;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 82;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d3a6183e67993e43aeb70c615f8d3774->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_17;
        PyObject *tmp_source_name_18;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_19;
        PyObject *tmp_source_name_20;
        CHECK_OBJECT( par_backend );
        tmp_source_name_18 = par_backend;
        tmp_source_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain__ffi );
        if ( tmp_source_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_gc );
        Py_DECREF( tmp_source_name_17 );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_pkey_ctx );
        tmp_args_element_name_4 = var_pkey_ctx;
        CHECK_OBJECT( par_backend );
        tmp_source_name_20 = par_backend;
        tmp_source_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__lib );
        if ( tmp_source_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 83;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_EVP_PKEY_CTX_free );
        Py_DECREF( tmp_source_name_19 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 83;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d3a6183e67993e43aeb70c615f8d3774->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_pkey_ctx;
            assert( old != NULL );
            var_pkey_ctx = tmp_assign_source_6;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( var_init );
        tmp_called_name_4 = var_init;
        CHECK_OBJECT( var_pkey_ctx );
        tmp_args_element_name_6 = var_pkey_ctx;
        frame_d3a6183e67993e43aeb70c615f8d3774->m_frame.f_lineno = 84;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_res == NULL );
        var_res = tmp_assign_source_7;
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_21;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_backend );
        tmp_source_name_21 = par_backend;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_openssl_assert );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_res );
        tmp_compexpr_left_2 = var_res;
        tmp_compexpr_right_2 = const_int_pos_1;
        tmp_args_element_name_7 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 85;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d3a6183e67993e43aeb70c615f8d3774->m_frame.f_lineno = 85;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_22;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT( par_backend );
        tmp_source_name_22 = par_backend;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain__lib );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_pkey_ctx );
        tmp_args_element_name_8 = var_pkey_ctx;
        CHECK_OBJECT( par_padding_enum );
        tmp_args_element_name_9 = par_padding_enum;
        frame_d3a6183e67993e43aeb70c615f8d3774->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_8 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_EVP_PKEY_CTX_set_rsa_padding, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_res;
            assert( old != NULL );
            var_res = tmp_assign_source_8;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_23;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_backend );
        tmp_source_name_23 = par_backend;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_openssl_assert );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_res );
        tmp_compexpr_left_3 = var_res;
        tmp_compexpr_right_3 = const_int_0;
        tmp_args_element_name_10 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 88;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d3a6183e67993e43aeb70c615f8d3774->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_24;
        PyObject *tmp_source_name_25;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_source_name_26;
        CHECK_OBJECT( par_backend );
        tmp_source_name_25 = par_backend;
        tmp_source_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain__lib );
        if ( tmp_source_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_EVP_PKEY_size );
        Py_DECREF( tmp_source_name_24 );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_key );
        tmp_source_name_26 = par_key;
        tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain__evp_pkey );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 89;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d3a6183e67993e43aeb70c615f8d3774->m_frame.f_lineno = 89;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_buf_size == NULL );
        var_buf_size = tmp_assign_source_9;
    }
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_27;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( par_backend );
        tmp_source_name_27 = par_backend;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_openssl_assert );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_buf_size );
        tmp_compexpr_left_4 = var_buf_size;
        tmp_compexpr_right_4 = const_int_0;
        tmp_args_element_name_12 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );

            exception_lineno = 90;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d3a6183e67993e43aeb70c615f8d3774->m_frame.f_lineno = 90;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_4 );
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_source_name_28;
        PyObject *tmp_source_name_29;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_padding );
        tmp_isinstance_inst_2 = par_padding;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_OAEP );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OAEP );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "OAEP" );
            exception_tb = NULL;

            exception_lineno = 92;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_2 = tmp_mvar_value_2;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "ooooooooooooooo";
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
        CHECK_OBJECT( par_backend );
        tmp_source_name_29 = par_backend;
        tmp_source_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain__lib );
        if ( tmp_source_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_Cryptography_HAS_RSA_OAEP_MD );
        Py_DECREF( tmp_source_name_28 );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 93;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_9;
            PyObject *tmp_source_name_30;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_source_name_31;
            PyObject *tmp_source_name_32;
            CHECK_OBJECT( par_backend );
            tmp_source_name_30 = par_backend;
            tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain__evp_md_non_null_from_algorithm );
            if ( tmp_called_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 95;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_padding );
            tmp_source_name_32 = par_padding;
            tmp_source_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain__mgf );
            if ( tmp_source_name_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_9 );

                exception_lineno = 96;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain__algorithm );
            Py_DECREF( tmp_source_name_31 );
            if ( tmp_args_element_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_9 );

                exception_lineno = 96;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_d3a6183e67993e43aeb70c615f8d3774->m_frame.f_lineno = 95;
            {
                PyObject *call_args[] = { tmp_args_element_name_13 };
                tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
            }

            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_13 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 95;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_mgf1_md == NULL );
            var_mgf1_md = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_33;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_args_element_name_15;
            CHECK_OBJECT( par_backend );
            tmp_source_name_33 = par_backend;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain__lib );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 97;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_pkey_ctx );
            tmp_args_element_name_14 = var_pkey_ctx;
            CHECK_OBJECT( var_mgf1_md );
            tmp_args_element_name_15 = var_mgf1_md;
            frame_d3a6183e67993e43aeb70c615f8d3774->m_frame.f_lineno = 97;
            {
                PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
                tmp_assign_source_11 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_EVP_PKEY_CTX_set_rsa_mgf1_md, call_args );
            }

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 97;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_res;
                assert( old != NULL );
                var_res = tmp_assign_source_11;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_called_name_10;
            PyObject *tmp_source_name_34;
            PyObject *tmp_call_result_5;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( par_backend );
            tmp_source_name_34 = par_backend;
            tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_openssl_assert );
            if ( tmp_called_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_res );
            tmp_compexpr_left_5 = var_res;
            tmp_compexpr_right_5 = const_int_0;
            tmp_args_element_name_16 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_args_element_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_10 );

                exception_lineno = 98;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_d3a6183e67993e43aeb70c615f8d3774->m_frame.f_lineno = 98;
            {
                PyObject *call_args[] = { tmp_args_element_name_16 };
                tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
            }

            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_element_name_16 );
            if ( tmp_call_result_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_5 );
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_name_11;
            PyObject *tmp_source_name_35;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_source_name_36;
            CHECK_OBJECT( par_backend );
            tmp_source_name_35 = par_backend;
            tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain__evp_md_non_null_from_algorithm );
            if ( tmp_called_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 99;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_padding );
            tmp_source_name_36 = par_padding;
            tmp_args_element_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain__algorithm );
            if ( tmp_args_element_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_11 );

                exception_lineno = 99;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_d3a6183e67993e43aeb70c615f8d3774->m_frame.f_lineno = 99;
            {
                PyObject *call_args[] = { tmp_args_element_name_17 };
                tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
            }

            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_args_element_name_17 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 99;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_oaep_md == NULL );
            var_oaep_md = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_37;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_args_element_name_19;
            CHECK_OBJECT( par_backend );
            tmp_source_name_37 = par_backend;
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain__lib );
            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 100;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_pkey_ctx );
            tmp_args_element_name_18 = var_pkey_ctx;
            CHECK_OBJECT( var_oaep_md );
            tmp_args_element_name_19 = var_oaep_md;
            frame_d3a6183e67993e43aeb70c615f8d3774->m_frame.f_lineno = 100;
            {
                PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19 };
                tmp_assign_source_13 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md, call_args );
            }

            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 100;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_res;
                assert( old != NULL );
                var_res = tmp_assign_source_13;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_called_name_12;
            PyObject *tmp_source_name_38;
            PyObject *tmp_call_result_6;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            CHECK_OBJECT( par_backend );
            tmp_source_name_38 = par_backend;
            tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_openssl_assert );
            if ( tmp_called_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_res );
            tmp_compexpr_left_6 = var_res;
            tmp_compexpr_right_6 = const_int_0;
            tmp_args_element_name_20 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            if ( tmp_args_element_name_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_12 );

                exception_lineno = 101;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_d3a6183e67993e43aeb70c615f8d3774->m_frame.f_lineno = 101;
            {
                PyObject *call_args[] = { tmp_args_element_name_20 };
                tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
            }

            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_args_element_name_20 );
            if ( tmp_call_result_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_6 );
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        PyObject *tmp_mvar_value_3;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_source_name_39;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_40;
        CHECK_OBJECT( par_padding );
        tmp_isinstance_inst_3 = par_padding;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_OAEP );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OAEP );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "OAEP" );
            exception_tb = NULL;

            exception_lineno = 104;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_3 = tmp_mvar_value_3;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;
            type_description_1 = "ooooooooooooooo";
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
        CHECK_OBJECT( par_padding );
        tmp_source_name_39 = par_padding;
        tmp_compexpr_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain__label );
        if ( tmp_compexpr_left_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_7 = Py_None;
        tmp_and_left_value_3 = ( tmp_compexpr_left_7 != tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_7 );
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
        CHECK_OBJECT( par_padding );
        tmp_source_name_40 = par_padding;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain__label );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_8 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_compexpr_left_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_8 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        Py_DECREF( tmp_compexpr_left_8 );
        assert( !(tmp_res == -1) );
        tmp_and_right_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_2 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_and_right_value_2 = tmp_and_left_value_3;
        and_end_3:;
        tmp_condition_result_3 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_3 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_name_13;
            PyObject *tmp_source_name_41;
            PyObject *tmp_source_name_42;
            PyObject *tmp_args_element_name_21;
            PyObject *tmp_len_arg_2;
            PyObject *tmp_source_name_43;
            CHECK_OBJECT( par_backend );
            tmp_source_name_42 = par_backend;
            tmp_source_name_41 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain__lib );
            if ( tmp_source_name_41 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 110;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_OPENSSL_malloc );
            Py_DECREF( tmp_source_name_41 );
            if ( tmp_called_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 110;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_padding );
            tmp_source_name_43 = par_padding;
            tmp_len_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain__label );
            if ( tmp_len_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_13 );

                exception_lineno = 110;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_21 = BUILTIN_LEN( tmp_len_arg_2 );
            Py_DECREF( tmp_len_arg_2 );
            if ( tmp_args_element_name_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_13 );

                exception_lineno = 110;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_d3a6183e67993e43aeb70c615f8d3774->m_frame.f_lineno = 110;
            {
                PyObject *call_args[] = { tmp_args_element_name_21 };
                tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
            }

            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_args_element_name_21 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 110;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_labelptr == NULL );
            var_labelptr = tmp_assign_source_14;
        }
        {
            PyObject *tmp_called_name_14;
            PyObject *tmp_source_name_44;
            PyObject *tmp_call_result_7;
            PyObject *tmp_args_element_name_22;
            PyObject *tmp_compexpr_left_9;
            PyObject *tmp_compexpr_right_9;
            PyObject *tmp_source_name_45;
            PyObject *tmp_source_name_46;
            CHECK_OBJECT( par_backend );
            tmp_source_name_44 = par_backend;
            tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_openssl_assert );
            if ( tmp_called_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 111;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_labelptr );
            tmp_compexpr_left_9 = var_labelptr;
            CHECK_OBJECT( par_backend );
            tmp_source_name_46 = par_backend;
            tmp_source_name_45 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain__ffi );
            if ( tmp_source_name_45 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_14 );

                exception_lineno = 111;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_9 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_NULL );
            Py_DECREF( tmp_source_name_45 );
            if ( tmp_compexpr_right_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_14 );

                exception_lineno = 111;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_22 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
            Py_DECREF( tmp_compexpr_right_9 );
            if ( tmp_args_element_name_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_14 );

                exception_lineno = 111;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_d3a6183e67993e43aeb70c615f8d3774->m_frame.f_lineno = 111;
            {
                PyObject *call_args[] = { tmp_args_element_name_22 };
                tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
            }

            Py_DECREF( tmp_called_name_14 );
            Py_DECREF( tmp_args_element_name_22 );
            if ( tmp_call_result_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 111;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_7 );
        }
        {
            PyObject *tmp_called_name_15;
            PyObject *tmp_source_name_47;
            PyObject *tmp_source_name_48;
            PyObject *tmp_call_result_8;
            PyObject *tmp_args_element_name_23;
            PyObject *tmp_args_element_name_24;
            PyObject *tmp_source_name_49;
            PyObject *tmp_args_element_name_25;
            PyObject *tmp_len_arg_3;
            PyObject *tmp_source_name_50;
            CHECK_OBJECT( par_backend );
            tmp_source_name_48 = par_backend;
            tmp_source_name_47 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain__ffi );
            if ( tmp_source_name_47 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 112;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_memmove );
            Py_DECREF( tmp_source_name_47 );
            if ( tmp_called_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 112;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_labelptr );
            tmp_args_element_name_23 = var_labelptr;
            CHECK_OBJECT( par_padding );
            tmp_source_name_49 = par_padding;
            tmp_args_element_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain__label );
            if ( tmp_args_element_name_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_15 );

                exception_lineno = 112;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_padding );
            tmp_source_name_50 = par_padding;
            tmp_len_arg_3 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain__label );
            if ( tmp_len_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_15 );
                Py_DECREF( tmp_args_element_name_24 );

                exception_lineno = 112;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_25 = BUILTIN_LEN( tmp_len_arg_3 );
            Py_DECREF( tmp_len_arg_3 );
            if ( tmp_args_element_name_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_15 );
                Py_DECREF( tmp_args_element_name_24 );

                exception_lineno = 112;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_d3a6183e67993e43aeb70c615f8d3774->m_frame.f_lineno = 112;
            {
                PyObject *call_args[] = { tmp_args_element_name_23, tmp_args_element_name_24, tmp_args_element_name_25 };
                tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_15, call_args );
            }

            Py_DECREF( tmp_called_name_15 );
            Py_DECREF( tmp_args_element_name_24 );
            Py_DECREF( tmp_args_element_name_25 );
            if ( tmp_call_result_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 112;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_8 );
        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_name_16;
            PyObject *tmp_source_name_51;
            PyObject *tmp_source_name_52;
            PyObject *tmp_args_element_name_26;
            PyObject *tmp_args_element_name_27;
            PyObject *tmp_args_element_name_28;
            PyObject *tmp_len_arg_4;
            PyObject *tmp_source_name_53;
            CHECK_OBJECT( par_backend );
            tmp_source_name_52 = par_backend;
            tmp_source_name_51 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain__lib );
            if ( tmp_source_name_51 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 113;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label );
            Py_DECREF( tmp_source_name_51 );
            if ( tmp_called_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 113;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_pkey_ctx );
            tmp_args_element_name_26 = var_pkey_ctx;
            CHECK_OBJECT( var_labelptr );
            tmp_args_element_name_27 = var_labelptr;
            CHECK_OBJECT( par_padding );
            tmp_source_name_53 = par_padding;
            tmp_len_arg_4 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain__label );
            if ( tmp_len_arg_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_16 );

                exception_lineno = 114;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_28 = BUILTIN_LEN( tmp_len_arg_4 );
            Py_DECREF( tmp_len_arg_4 );
            if ( tmp_args_element_name_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_16 );

                exception_lineno = 114;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_d3a6183e67993e43aeb70c615f8d3774->m_frame.f_lineno = 113;
            {
                PyObject *call_args[] = { tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28 };
                tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_16, call_args );
            }

            Py_DECREF( tmp_called_name_16 );
            Py_DECREF( tmp_args_element_name_28 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 113;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_res;
                assert( old != NULL );
                var_res = tmp_assign_source_15;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_called_name_17;
            PyObject *tmp_source_name_54;
            PyObject *tmp_call_result_9;
            PyObject *tmp_args_element_name_29;
            PyObject *tmp_compexpr_left_10;
            PyObject *tmp_compexpr_right_10;
            CHECK_OBJECT( par_backend );
            tmp_source_name_54 = par_backend;
            tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_54, const_str_plain_openssl_assert );
            if ( tmp_called_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 116;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_res );
            tmp_compexpr_left_10 = var_res;
            tmp_compexpr_right_10 = const_int_pos_1;
            tmp_args_element_name_29 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
            if ( tmp_args_element_name_29 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_17 );

                exception_lineno = 116;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_d3a6183e67993e43aeb70c615f8d3774->m_frame.f_lineno = 116;
            {
                PyObject *call_args[] = { tmp_args_element_name_29 };
                tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
            }

            Py_DECREF( tmp_called_name_17 );
            Py_DECREF( tmp_args_element_name_29 );
            if ( tmp_call_result_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 116;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_9 );
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_source_name_55;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_args_element_name_31;
        CHECK_OBJECT( par_backend );
        tmp_source_name_55 = par_backend;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_55, const_str_plain__ffi );
        if ( tmp_called_instance_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_30 = const_str_digest_496388af417742534c869e89560f4859;
        CHECK_OBJECT( var_buf_size );
        tmp_args_element_name_31 = var_buf_size;
        frame_d3a6183e67993e43aeb70c615f8d3774->m_frame.f_lineno = 118;
        {
            PyObject *call_args[] = { tmp_args_element_name_30, tmp_args_element_name_31 };
            tmp_assign_source_16 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_new, call_args );
        }

        Py_DECREF( tmp_called_instance_4 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_outlen == NULL );
        var_outlen = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_source_name_56;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_args_element_name_33;
        CHECK_OBJECT( par_backend );
        tmp_source_name_56 = par_backend;
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_56, const_str_plain__ffi );
        if ( tmp_called_instance_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_32 = const_str_digest_81f1b0dfcc7a862e6940580ec4cc42d3;
        CHECK_OBJECT( var_buf_size );
        tmp_args_element_name_33 = var_buf_size;
        frame_d3a6183e67993e43aeb70c615f8d3774->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = { tmp_args_element_name_32, tmp_args_element_name_33 };
            tmp_assign_source_17 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_new, call_args );
        }

        Py_DECREF( tmp_called_instance_5 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_buf == NULL );
        var_buf = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_18;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_args_element_name_36;
        PyObject *tmp_args_element_name_37;
        PyObject *tmp_args_element_name_38;
        PyObject *tmp_len_arg_5;
        CHECK_OBJECT( var_crypt );
        tmp_called_name_18 = var_crypt;
        CHECK_OBJECT( var_pkey_ctx );
        tmp_args_element_name_34 = var_pkey_ctx;
        CHECK_OBJECT( var_buf );
        tmp_args_element_name_35 = var_buf;
        CHECK_OBJECT( var_outlen );
        tmp_args_element_name_36 = var_outlen;
        CHECK_OBJECT( par_data );
        tmp_args_element_name_37 = par_data;
        CHECK_OBJECT( par_data );
        tmp_len_arg_5 = par_data;
        tmp_args_element_name_38 = BUILTIN_LEN( tmp_len_arg_5 );
        if ( tmp_args_element_name_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d3a6183e67993e43aeb70c615f8d3774->m_frame.f_lineno = 120;
        {
            PyObject *call_args[] = { tmp_args_element_name_34, tmp_args_element_name_35, tmp_args_element_name_36, tmp_args_element_name_37, tmp_args_element_name_38 };
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_18, call_args );
        }

        Py_DECREF( tmp_args_element_name_38 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_res;
            var_res = tmp_assign_source_18;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        CHECK_OBJECT( var_res );
        tmp_compexpr_left_11 = var_res;
        tmp_compexpr_right_11 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_INT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 121;
            type_description_1 = "ooooooooooooooo";
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
            PyObject *tmp_called_name_19;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_call_result_10;
            PyObject *tmp_args_element_name_39;
            PyObject *tmp_args_element_name_40;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__handle_rsa_enc_dec_error );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__handle_rsa_enc_dec_error );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_handle_rsa_enc_dec_error" );
                exception_tb = NULL;

                exception_lineno = 122;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_19 = tmp_mvar_value_4;
            CHECK_OBJECT( par_backend );
            tmp_args_element_name_39 = par_backend;
            CHECK_OBJECT( par_key );
            tmp_args_element_name_40 = par_key;
            frame_d3a6183e67993e43aeb70c615f8d3774->m_frame.f_lineno = 122;
            {
                PyObject *call_args[] = { tmp_args_element_name_39, tmp_args_element_name_40 };
                tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_19, call_args );
            }

            if ( tmp_call_result_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 122;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_10 );
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_slice_source_1;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_source_name_57;
        PyObject *tmp_args_element_name_41;
        PyObject *tmp_slice_upper_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_backend );
        tmp_source_name_57 = par_backend;
        tmp_called_instance_6 = LOOKUP_ATTRIBUTE( tmp_source_name_57, const_str_plain__ffi );
        if ( tmp_called_instance_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_buf );
        tmp_args_element_name_41 = var_buf;
        frame_d3a6183e67993e43aeb70c615f8d3774->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = { tmp_args_element_name_41 };
            tmp_slice_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_buffer, call_args );
        }

        Py_DECREF( tmp_called_instance_6 );
        if ( tmp_slice_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_outlen );
        tmp_subscribed_name_1 = var_outlen;
        tmp_subscript_name_1 = const_int_0;
        tmp_slice_upper_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_slice_upper_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_slice_source_1 );

            exception_lineno = 124;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
        Py_DECREF( tmp_slice_source_1 );
        Py_DECREF( tmp_slice_upper_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d3a6183e67993e43aeb70c615f8d3774 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d3a6183e67993e43aeb70c615f8d3774 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d3a6183e67993e43aeb70c615f8d3774 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d3a6183e67993e43aeb70c615f8d3774, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d3a6183e67993e43aeb70c615f8d3774->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d3a6183e67993e43aeb70c615f8d3774, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d3a6183e67993e43aeb70c615f8d3774,
        type_description_1,
        par_backend,
        par_key,
        par_data,
        par_padding_enum,
        par_padding,
        var_labelptr,
        var_res,
        var_buf_size,
        var_buf,
        var_pkey_ctx,
        var_mgf1_md,
        var_outlen,
        var_init,
        var_crypt,
        var_oaep_md
    );


    // Release cached frame.
    if ( frame_d3a6183e67993e43aeb70c615f8d3774 == cache_frame_d3a6183e67993e43aeb70c615f8d3774 )
    {
        Py_DECREF( frame_d3a6183e67993e43aeb70c615f8d3774 );
    }
    cache_frame_d3a6183e67993e43aeb70c615f8d3774 = NULL;

    assertFrameObject( frame_d3a6183e67993e43aeb70c615f8d3774 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_3__enc_dec_rsa_pkey_ctx );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_labelptr );
    var_labelptr = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)var_buf_size );
    Py_DECREF( var_buf_size );
    var_buf_size = NULL;

    CHECK_OBJECT( (PyObject *)var_buf );
    Py_DECREF( var_buf );
    var_buf = NULL;

    CHECK_OBJECT( (PyObject *)par_padding_enum );
    Py_DECREF( par_padding_enum );
    par_padding_enum = NULL;

    CHECK_OBJECT( (PyObject *)var_pkey_ctx );
    Py_DECREF( var_pkey_ctx );
    var_pkey_ctx = NULL;

    Py_XDECREF( var_mgf1_md );
    var_mgf1_md = NULL;

    CHECK_OBJECT( (PyObject *)var_outlen );
    Py_DECREF( var_outlen );
    var_outlen = NULL;

    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    CHECK_OBJECT( (PyObject *)var_init );
    Py_DECREF( var_init );
    var_init = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)var_crypt );
    Py_DECREF( var_crypt );
    var_crypt = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    Py_XDECREF( var_oaep_md );
    var_oaep_md = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

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

    Py_XDECREF( var_labelptr );
    var_labelptr = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_buf_size );
    var_buf_size = NULL;

    Py_XDECREF( var_buf );
    var_buf = NULL;

    CHECK_OBJECT( (PyObject *)par_padding_enum );
    Py_DECREF( par_padding_enum );
    par_padding_enum = NULL;

    Py_XDECREF( var_pkey_ctx );
    var_pkey_ctx = NULL;

    Py_XDECREF( var_mgf1_md );
    var_mgf1_md = NULL;

    Py_XDECREF( var_outlen );
    var_outlen = NULL;

    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    Py_XDECREF( var_init );
    var_init = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    Py_XDECREF( var_crypt );
    var_crypt = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    Py_XDECREF( var_oaep_md );
    var_oaep_md = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_3__enc_dec_rsa_pkey_ctx );
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


static PyObject *impl_cryptography$hazmat$backends$openssl$rsa$$$function_4__handle_rsa_enc_dec_error( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    PyObject *var_errors = NULL;
    PyObject *var_decoding_errors = NULL;
    struct Nuitka_FrameObject *frame_7113251a7a8c7badfe741f661c528b0c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7113251a7a8c7badfe741f661c528b0c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7113251a7a8c7badfe741f661c528b0c, codeobj_7113251a7a8c7badfe741f661c528b0c, module_cryptography$hazmat$backends$openssl$rsa, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7113251a7a8c7badfe741f661c528b0c = cache_frame_7113251a7a8c7badfe741f661c528b0c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7113251a7a8c7badfe741f661c528b0c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7113251a7a8c7badfe741f661c528b0c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_backend );
        tmp_called_instance_1 = par_backend;
        frame_7113251a7a8c7badfe741f661c528b0c->m_frame.f_lineno = 128;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__consume_errors );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_errors == NULL );
        var_errors = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_backend );
        tmp_called_instance_2 = par_backend;
        CHECK_OBJECT( var_errors );
        tmp_args_element_name_1 = var_errors;
        frame_7113251a7a8c7badfe741f661c528b0c->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_openssl_assert, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_backend );
        tmp_source_name_1 = par_backend;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_openssl_assert );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_errors );
        tmp_subscribed_name_1 = var_errors;
        tmp_subscript_name_1 = const_int_0;
        tmp_source_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 130;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_lib );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 130;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_backend );
        tmp_source_name_4 = par_backend;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__lib );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 130;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ERR_LIB_RSA );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 130;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 130;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_7113251a7a8c7badfe741f661c528b0c->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_key );
        tmp_isinstance_inst_1 = par_key;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__RSAPublicKey );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__RSAPublicKey );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_RSAPublicKey" );
            exception_tb = NULL;

            exception_lineno = 131;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_6;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_source_name_7;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( par_backend );
            tmp_source_name_5 = par_backend;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_openssl_assert );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 132;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_errors );
            tmp_subscribed_name_2 = var_errors;
            tmp_subscript_name_2 = const_int_0;
            tmp_source_name_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
            if ( tmp_source_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 133;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_reason );
            Py_DECREF( tmp_source_name_6 );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 133;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_backend );
            tmp_source_name_8 = par_backend;
            tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__lib );
            if ( tmp_source_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_compexpr_left_2 );

                exception_lineno = 133;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_RSA_R_DATA_TOO_LARGE_FOR_KEY_SIZE );
            Py_DECREF( tmp_source_name_7 );
            if ( tmp_compexpr_right_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_compexpr_left_2 );

                exception_lineno = 133;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_3 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 133;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_7113251a7a8c7badfe741f661c528b0c->m_frame.f_lineno = 132;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 132;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_6ae284ffb14dd0f3d5834d728b2a2d11;
            frame_7113251a7a8c7badfe741f661c528b0c->m_frame.f_lineno = 135;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 135;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_list_element_1;
            PyObject *tmp_source_name_9;
            PyObject *tmp_source_name_10;
            PyObject *tmp_source_name_11;
            PyObject *tmp_source_name_12;
            PyObject *tmp_source_name_13;
            PyObject *tmp_source_name_14;
            PyObject *tmp_source_name_15;
            PyObject *tmp_source_name_16;
            CHECK_OBJECT( par_backend );
            tmp_source_name_10 = par_backend;
            tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__lib );
            if ( tmp_source_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 141;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_RSA_R_BLOCK_TYPE_IS_NOT_01 );
            Py_DECREF( tmp_source_name_9 );
            if ( tmp_list_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 141;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = PyList_New( 4 );
            PyList_SET_ITEM( tmp_assign_source_2, 0, tmp_list_element_1 );
            CHECK_OBJECT( par_backend );
            tmp_source_name_12 = par_backend;
            tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__lib );
            if ( tmp_source_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_2 );

                exception_lineno = 142;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_RSA_R_BLOCK_TYPE_IS_NOT_02 );
            Py_DECREF( tmp_source_name_11 );
            if ( tmp_list_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_2 );

                exception_lineno = 142;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            PyList_SET_ITEM( tmp_assign_source_2, 1, tmp_list_element_1 );
            CHECK_OBJECT( par_backend );
            tmp_source_name_14 = par_backend;
            tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__lib );
            if ( tmp_source_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_2 );

                exception_lineno = 143;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_RSA_R_OAEP_DECODING_ERROR );
            Py_DECREF( tmp_source_name_13 );
            if ( tmp_list_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_2 );

                exception_lineno = 143;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            PyList_SET_ITEM( tmp_assign_source_2, 2, tmp_list_element_1 );
            CHECK_OBJECT( par_backend );
            tmp_source_name_16 = par_backend;
            tmp_source_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__lib );
            if ( tmp_source_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_2 );

                exception_lineno = 147;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_RSA_R_DATA_TOO_LARGE_FOR_MODULUS );
            Py_DECREF( tmp_source_name_15 );
            if ( tmp_list_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_2 );

                exception_lineno = 147;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            PyList_SET_ITEM( tmp_assign_source_2, 3, tmp_list_element_1 );
            assert( var_decoding_errors == NULL );
            var_decoding_errors = tmp_assign_source_2;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_source_name_17;
            PyObject *tmp_source_name_18;
            PyObject *tmp_attribute_value_1;
            int tmp_truth_name_1;
            CHECK_OBJECT( par_backend );
            tmp_source_name_18 = par_backend;
            tmp_source_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain__lib );
            if ( tmp_source_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 149;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_digest_f2f56e52e9bead94215489df18f9e023 );
            Py_DECREF( tmp_source_name_17 );
            if ( tmp_attribute_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 149;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_1 );

                exception_lineno = 149;
                type_description_1 = "oooo";
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
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_19;
                PyObject *tmp_call_result_4;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_source_name_20;
                PyObject *tmp_source_name_21;
                CHECK_OBJECT( var_decoding_errors );
                tmp_source_name_19 = var_decoding_errors;
                tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_append );
                if ( tmp_called_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 150;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_backend );
                tmp_source_name_21 = par_backend;
                tmp_source_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain__lib );
                if ( tmp_source_name_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );

                    exception_lineno = 150;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_RSA_R_PKCS_DECODING_ERROR );
                Py_DECREF( tmp_source_name_20 );
                if ( tmp_args_element_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );

                    exception_lineno = 150;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                frame_7113251a7a8c7badfe741f661c528b0c->m_frame.f_lineno = 150;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4 };
                    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_element_name_4 );
                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 150;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            branch_no_2:;
        }
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_22;
            PyObject *tmp_call_result_5;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_23;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( par_backend );
            tmp_source_name_22 = par_backend;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_openssl_assert );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 152;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_errors );
            tmp_subscribed_name_3 = var_errors;
            tmp_subscript_name_3 = const_int_0;
            tmp_source_name_23 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
            if ( tmp_source_name_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 152;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_reason );
            Py_DECREF( tmp_source_name_23 );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 152;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_decoding_errors );
            tmp_compexpr_right_3 = var_decoding_errors;
            tmp_res = PySequence_Contains( tmp_compexpr_right_3, tmp_compexpr_left_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 152;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_5 = ( tmp_res == 1 ) ? Py_True : Py_False;
            frame_7113251a7a8c7badfe741f661c528b0c->m_frame.f_lineno = 152;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            if ( tmp_call_result_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 152;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_5 );
        }
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_f086882416c7bbe45258f2eebea24494;
            frame_7113251a7a8c7badfe741f661c528b0c->m_frame.f_lineno = 153;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 153;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7113251a7a8c7badfe741f661c528b0c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7113251a7a8c7badfe741f661c528b0c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7113251a7a8c7badfe741f661c528b0c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7113251a7a8c7badfe741f661c528b0c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7113251a7a8c7badfe741f661c528b0c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7113251a7a8c7badfe741f661c528b0c,
        type_description_1,
        par_backend,
        par_key,
        var_errors,
        var_decoding_errors
    );


    // Release cached frame.
    if ( frame_7113251a7a8c7badfe741f661c528b0c == cache_frame_7113251a7a8c7badfe741f661c528b0c )
    {
        Py_DECREF( frame_7113251a7a8c7badfe741f661c528b0c );
    }
    cache_frame_7113251a7a8c7badfe741f661c528b0c = NULL;

    assertFrameObject( frame_7113251a7a8c7badfe741f661c528b0c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_4__handle_rsa_enc_dec_error );
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

    Py_XDECREF( var_errors );
    var_errors = NULL;

    Py_XDECREF( var_decoding_errors );
    var_decoding_errors = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_4__handle_rsa_enc_dec_error );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_cryptography$hazmat$backends$openssl$rsa$$$function_5__rsa_sig_determine_padding( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    PyObject *par_padding = python_pars[ 2 ];
    PyObject *par_algorithm = python_pars[ 3 ];
    PyObject *var_pkey_size = NULL;
    PyObject *var_padding_enum = NULL;
    struct Nuitka_FrameObject *frame_0ff37599e6c719bda4ddd438200d4226;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0ff37599e6c719bda4ddd438200d4226 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0ff37599e6c719bda4ddd438200d4226, codeobj_0ff37599e6c719bda4ddd438200d4226, module_cryptography$hazmat$backends$openssl$rsa, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0ff37599e6c719bda4ddd438200d4226 = cache_frame_0ff37599e6c719bda4ddd438200d4226;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0ff37599e6c719bda4ddd438200d4226 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0ff37599e6c719bda4ddd438200d4226 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_padding );
        tmp_isinstance_inst_1 = par_padding;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_AsymmetricPadding );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AsymmetricPadding );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "AsymmetricPadding" );
            exception_tb = NULL;

            exception_lineno = 157;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 157;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 157;
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
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_18373e025d014684a4a63b5c2496b777;
            frame_0ff37599e6c719bda4ddd438200d4226->m_frame.f_lineno = 158;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 158;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_backend );
        tmp_source_name_2 = par_backend;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__lib );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_EVP_PKEY_size );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_key );
        tmp_source_name_3 = par_key;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__evp_pkey );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 160;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_0ff37599e6c719bda4ddd438200d4226->m_frame.f_lineno = 160;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_pkey_size == NULL );
        var_pkey_size = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_backend );
        tmp_source_name_4 = par_backend;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_openssl_assert );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_pkey_size );
        tmp_compexpr_left_1 = var_pkey_size;
        tmp_compexpr_right_1 = const_int_0;
        tmp_args_element_name_2 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 161;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_0ff37599e6c719bda4ddd438200d4226->m_frame.f_lineno = 161;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_padding );
        tmp_isinstance_inst_2 = par_padding;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_PKCS1v15 );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PKCS1v15 );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PKCS1v15" );
            exception_tb = NULL;

            exception_lineno = 163;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_2 = tmp_mvar_value_2;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
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
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( par_backend );
            tmp_source_name_6 = par_backend;
            tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__lib );
            if ( tmp_source_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 164;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_RSA_PKCS1_PADDING );
            Py_DECREF( tmp_source_name_5 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 164;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_padding_enum == NULL );
            var_padding_enum = tmp_assign_source_2;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_isinstance_inst_3;
            PyObject *tmp_isinstance_cls_3;
            PyObject *tmp_mvar_value_3;
            CHECK_OBJECT( par_padding );
            tmp_isinstance_inst_3 = par_padding;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_PSS );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PSS );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "PSS" );
                exception_tb = NULL;

                exception_lineno = 165;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_isinstance_cls_3 = tmp_mvar_value_3;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 165;
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
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_operand_name_2;
                PyObject *tmp_isinstance_inst_4;
                PyObject *tmp_isinstance_cls_4;
                PyObject *tmp_source_name_7;
                PyObject *tmp_mvar_value_4;
                CHECK_OBJECT( par_padding );
                tmp_source_name_7 = par_padding;
                tmp_isinstance_inst_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__mgf );
                if ( tmp_isinstance_inst_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 166;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_MGF1 );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MGF1 );
                }

                if ( tmp_mvar_value_4 == NULL )
                {
                    Py_DECREF( tmp_isinstance_inst_4 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "MGF1" );
                    exception_tb = NULL;

                    exception_lineno = 166;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_isinstance_cls_4 = tmp_mvar_value_4;
                tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_4, tmp_isinstance_cls_4 );
                Py_DECREF( tmp_isinstance_inst_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 166;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 166;
                    type_description_1 = "oooooo";
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
                    PyObject *tmp_raise_type_2;
                    PyObject *tmp_called_name_3;
                    PyObject *tmp_mvar_value_5;
                    PyObject *tmp_args_element_name_3;
                    PyObject *tmp_args_element_name_4;
                    PyObject *tmp_source_name_8;
                    PyObject *tmp_mvar_value_6;
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm );

                    if (unlikely( tmp_mvar_value_5 == NULL ))
                    {
                        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm );
                    }

                    if ( tmp_mvar_value_5 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "UnsupportedAlgorithm" );
                        exception_tb = NULL;

                        exception_lineno = 167;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_3 = tmp_mvar_value_5;
                    tmp_args_element_name_3 = const_str_digest_d0927d6863daca8d65f20add6616c473;
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__Reasons );

                    if (unlikely( tmp_mvar_value_6 == NULL ))
                    {
                        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__Reasons );
                    }

                    if ( tmp_mvar_value_6 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_Reasons" );
                        exception_tb = NULL;

                        exception_lineno = 169;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_8 = tmp_mvar_value_6;
                    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_UNSUPPORTED_MGF );
                    if ( tmp_args_element_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 169;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_0ff37599e6c719bda4ddd438200d4226->m_frame.f_lineno = 167;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_4 );
                    if ( tmp_raise_type_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 167;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    exception_type = tmp_raise_type_2;
                    exception_lineno = 167;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_4:;
            }
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_2;
                PyObject *tmp_compexpr_right_2;
                PyObject *tmp_left_name_1;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_1;
                PyObject *tmp_source_name_9;
                PyObject *tmp_right_name_2;
                CHECK_OBJECT( var_pkey_size );
                tmp_left_name_2 = var_pkey_size;
                CHECK_OBJECT( par_algorithm );
                tmp_source_name_9 = par_algorithm;
                tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_digest_size );
                if ( tmp_right_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 174;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_left_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 174;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_2 = const_int_pos_2;
                tmp_compexpr_left_2 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_2 );
                Py_DECREF( tmp_left_name_1 );
                if ( tmp_compexpr_left_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 174;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_2 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
                Py_DECREF( tmp_compexpr_left_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 174;
                    type_description_1 = "oooooo";
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
                    PyObject *tmp_raise_type_3;
                    PyObject *tmp_make_exception_arg_2;
                    tmp_make_exception_arg_2 = const_str_digest_4853130ac3abffc32389ed03acb3f886;
                    frame_0ff37599e6c719bda4ddd438200d4226->m_frame.f_lineno = 175;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_2 };
                        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_3 == NULL) );
                    exception_type = tmp_raise_type_3;
                    exception_lineno = 175;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_5:;
            }
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_source_name_10;
                PyObject *tmp_source_name_11;
                CHECK_OBJECT( par_backend );
                tmp_source_name_11 = par_backend;
                tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__lib );
                if ( tmp_source_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 178;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_RSA_PKCS1_PSS_PADDING );
                Py_DECREF( tmp_source_name_10 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 178;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_padding_enum == NULL );
                var_padding_enum = tmp_assign_source_3;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_raise_type_4;
                PyObject *tmp_called_name_4;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_called_name_5;
                PyObject *tmp_source_name_12;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_source_name_13;
                PyObject *tmp_args_element_name_7;
                PyObject *tmp_source_name_14;
                PyObject *tmp_mvar_value_8;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm );
                }

                if ( tmp_mvar_value_7 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "UnsupportedAlgorithm" );
                    exception_tb = NULL;

                    exception_lineno = 180;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_4 = tmp_mvar_value_7;
                tmp_source_name_12 = const_str_digest_72073d8325d2e95fe43e7fcdd9af6584;
                tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_format );
                assert( !(tmp_called_name_5 == NULL) );
                CHECK_OBJECT( par_padding );
                tmp_source_name_13 = par_padding;
                tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_name );
                if ( tmp_args_element_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_5 );

                    exception_lineno = 181;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                frame_0ff37599e6c719bda4ddd438200d4226->m_frame.f_lineno = 181;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6 };
                    tmp_args_element_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
                }

                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_args_element_name_6 );
                if ( tmp_args_element_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 181;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__Reasons );

                if (unlikely( tmp_mvar_value_8 == NULL ))
                {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__Reasons );
                }

                if ( tmp_mvar_value_8 == NULL )
                {
                    Py_DECREF( tmp_args_element_name_5 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "_Reasons" );
                    exception_tb = NULL;

                    exception_lineno = 182;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_14 = tmp_mvar_value_8;
                tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_UNSUPPORTED_PADDING );
                if ( tmp_args_element_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_5 );

                    exception_lineno = 182;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                frame_0ff37599e6c719bda4ddd438200d4226->m_frame.f_lineno = 180;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_7 };
                    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_args_element_name_5 );
                Py_DECREF( tmp_args_element_name_7 );
                if ( tmp_raise_type_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 180;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_4;
                exception_lineno = 180;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            branch_end_3:;
        }
        branch_end_2:;
    }
    if ( var_padding_enum == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "padding_enum" );
        exception_tb = NULL;

        exception_lineno = 185;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_padding_enum;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ff37599e6c719bda4ddd438200d4226 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ff37599e6c719bda4ddd438200d4226 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ff37599e6c719bda4ddd438200d4226 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0ff37599e6c719bda4ddd438200d4226, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0ff37599e6c719bda4ddd438200d4226->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0ff37599e6c719bda4ddd438200d4226, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0ff37599e6c719bda4ddd438200d4226,
        type_description_1,
        par_backend,
        par_key,
        par_padding,
        par_algorithm,
        var_pkey_size,
        var_padding_enum
    );


    // Release cached frame.
    if ( frame_0ff37599e6c719bda4ddd438200d4226 == cache_frame_0ff37599e6c719bda4ddd438200d4226 )
    {
        Py_DECREF( frame_0ff37599e6c719bda4ddd438200d4226 );
    }
    cache_frame_0ff37599e6c719bda4ddd438200d4226 = NULL;

    assertFrameObject( frame_0ff37599e6c719bda4ddd438200d4226 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_5__rsa_sig_determine_padding );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_pkey_size );
    Py_DECREF( var_pkey_size );
    var_pkey_size = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    Py_XDECREF( var_padding_enum );
    var_padding_enum = NULL;

    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

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

    Py_XDECREF( var_pkey_size );
    var_pkey_size = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    Py_XDECREF( var_padding_enum );
    var_padding_enum = NULL;

    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_5__rsa_sig_determine_padding );
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


static PyObject *impl_cryptography$hazmat$backends$openssl$rsa$$$function_6__rsa_sig_setup( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[ 0 ];
    PyObject *par_padding = python_pars[ 1 ];
    PyObject *par_algorithm = python_pars[ 2 ];
    PyObject *par_key = python_pars[ 3 ];
    PyObject *par_data = python_pars[ 4 ];
    PyObject *par_init_func = python_pars[ 5 ];
    PyObject *var_res = NULL;
    PyObject *var_padding_enum = NULL;
    PyObject *var_pkey_ctx = NULL;
    PyObject *var_mgf1_md = NULL;
    PyObject *var_evp_md = NULL;
    struct Nuitka_FrameObject *frame_7ed2038eb663bb2e8d72b14b45e6f93a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7ed2038eb663bb2e8d72b14b45e6f93a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7ed2038eb663bb2e8d72b14b45e6f93a, codeobj_7ed2038eb663bb2e8d72b14b45e6f93a, module_cryptography$hazmat$backends$openssl$rsa, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7ed2038eb663bb2e8d72b14b45e6f93a = cache_frame_7ed2038eb663bb2e8d72b14b45e6f93a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7ed2038eb663bb2e8d72b14b45e6f93a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7ed2038eb663bb2e8d72b14b45e6f93a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__rsa_sig_determine_padding );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__rsa_sig_determine_padding );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_rsa_sig_determine_padding" );
            exception_tb = NULL;

            exception_lineno = 189;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_backend );
        tmp_args_element_name_1 = par_backend;
        CHECK_OBJECT( par_key );
        tmp_args_element_name_2 = par_key;
        CHECK_OBJECT( par_padding );
        tmp_args_element_name_3 = par_padding;
        CHECK_OBJECT( par_algorithm );
        tmp_args_element_name_4 = par_algorithm;
        frame_7ed2038eb663bb2e8d72b14b45e6f93a->m_frame.f_lineno = 189;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_padding_enum == NULL );
        var_padding_enum = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT( par_backend );
        tmp_called_instance_1 = par_backend;
        CHECK_OBJECT( par_algorithm );
        tmp_args_element_name_5 = par_algorithm;
        frame_7ed2038eb663bb2e8d72b14b45e6f93a->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__evp_md_non_null_from_algorithm, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 190;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_evp_md == NULL );
        var_evp_md = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( par_backend );
        tmp_source_name_2 = par_backend;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__lib );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 191;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_EVP_PKEY_CTX_new );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 191;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_key );
        tmp_source_name_3 = par_key;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__evp_pkey );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 191;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_backend );
        tmp_source_name_5 = par_backend;
        tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__ffi );
        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 191;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_NULL );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 191;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7ed2038eb663bb2e8d72b14b45e6f93a->m_frame.f_lineno = 191;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 191;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_pkey_ctx == NULL );
        var_pkey_ctx = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT( par_backend );
        tmp_source_name_6 = par_backend;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_openssl_assert );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_pkey_ctx );
        tmp_compexpr_left_1 = var_pkey_ctx;
        CHECK_OBJECT( par_backend );
        tmp_source_name_8 = par_backend;
        tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__ffi );
        if ( tmp_source_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 192;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_NULL );
        Py_DECREF( tmp_source_name_7 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 192;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_8 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 192;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7ed2038eb663bb2e8d72b14b45e6f93a->m_frame.f_lineno = 192;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_9;
        PyObject *tmp_source_name_10;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_source_name_11;
        PyObject *tmp_source_name_12;
        CHECK_OBJECT( par_backend );
        tmp_source_name_10 = par_backend;
        tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__ffi );
        if ( tmp_source_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_gc );
        Py_DECREF( tmp_source_name_9 );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_pkey_ctx );
        tmp_args_element_name_9 = var_pkey_ctx;
        CHECK_OBJECT( par_backend );
        tmp_source_name_12 = par_backend;
        tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__lib );
        if ( tmp_source_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 193;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_EVP_PKEY_CTX_free );
        Py_DECREF( tmp_source_name_11 );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 193;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7ed2038eb663bb2e8d72b14b45e6f93a->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_pkey_ctx;
            assert( old != NULL );
            var_pkey_ctx = tmp_assign_source_4;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_11;
        CHECK_OBJECT( par_init_func );
        tmp_called_name_5 = par_init_func;
        CHECK_OBJECT( var_pkey_ctx );
        tmp_args_element_name_11 = var_pkey_ctx;
        frame_7ed2038eb663bb2e8d72b14b45e6f93a->m_frame.f_lineno = 194;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_res == NULL );
        var_res = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_13;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_backend );
        tmp_source_name_13 = par_backend;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_openssl_assert );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_res );
        tmp_compexpr_left_2 = var_res;
        tmp_compexpr_right_2 = const_int_pos_1;
        tmp_args_element_name_12 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 195;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7ed2038eb663bb2e8d72b14b45e6f93a->m_frame.f_lineno = 195;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_14;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        CHECK_OBJECT( par_backend );
        tmp_source_name_14 = par_backend;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__lib );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 196;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_pkey_ctx );
        tmp_args_element_name_13 = var_pkey_ctx;
        CHECK_OBJECT( var_evp_md );
        tmp_args_element_name_14 = var_evp_md;
        frame_7ed2038eb663bb2e8d72b14b45e6f93a->m_frame.f_lineno = 196;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_EVP_PKEY_CTX_set_signature_md, call_args );
        }

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 196;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_res;
            assert( old != NULL );
            var_res = tmp_assign_source_6;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_res );
        tmp_compexpr_left_3 = var_res;
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_1 = "ooooooooooo";
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
            PyObject *tmp_called_instance_3;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT( par_backend );
            tmp_called_instance_3 = par_backend;
            frame_7ed2038eb663bb2e8d72b14b45e6f93a->m_frame.f_lineno = 198;
            tmp_call_result_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain__consume_errors );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 198;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_called_name_8;
            PyObject *tmp_source_name_15;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_source_name_16;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_source_name_17;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "UnsupportedAlgorithm" );
                exception_tb = NULL;

                exception_lineno = 199;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_7 = tmp_mvar_value_2;
            tmp_source_name_15 = const_str_digest_6053ae34cacb5f3719c5f5a589bf12fb;
            tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_format );
            assert( !(tmp_called_name_8 == NULL) );
            CHECK_OBJECT( par_algorithm );
            tmp_source_name_16 = par_algorithm;
            tmp_args_element_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_name );
            if ( tmp_args_element_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_8 );

                exception_lineno = 201;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_7ed2038eb663bb2e8d72b14b45e6f93a->m_frame.f_lineno = 200;
            {
                PyObject *call_args[] = { tmp_args_element_name_16 };
                tmp_args_element_name_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_16 );
            if ( tmp_args_element_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__Reasons );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__Reasons );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_args_element_name_15 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_Reasons" );
                exception_tb = NULL;

                exception_lineno = 203;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_17 = tmp_mvar_value_3;
            tmp_args_element_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_UNSUPPORTED_HASH );
            if ( tmp_args_element_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_15 );

                exception_lineno = 203;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_7ed2038eb663bb2e8d72b14b45e6f93a->m_frame.f_lineno = 199;
            {
                PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_17 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_args_element_name_15 );
            Py_DECREF( tmp_args_element_name_17 );
            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 199;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 199;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_source_name_18;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        CHECK_OBJECT( par_backend );
        tmp_source_name_18 = par_backend;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain__lib );
        if ( tmp_called_instance_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 205;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_pkey_ctx );
        tmp_args_element_name_18 = var_pkey_ctx;
        CHECK_OBJECT( var_padding_enum );
        tmp_args_element_name_19 = var_padding_enum;
        frame_7ed2038eb663bb2e8d72b14b45e6f93a->m_frame.f_lineno = 205;
        {
            PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19 };
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_EVP_PKEY_CTX_set_rsa_padding, call_args );
        }

        Py_DECREF( tmp_called_instance_4 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 205;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_res;
            assert( old != NULL );
            var_res = tmp_assign_source_7;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_19;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( par_backend );
        tmp_source_name_19 = par_backend;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_openssl_assert );
        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_res );
        tmp_compexpr_left_4 = var_res;
        tmp_compexpr_right_4 = const_int_0;
        tmp_args_element_name_20 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_args_element_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );

            exception_lineno = 206;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7ed2038eb663bb2e8d72b14b45e6f93a->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = { tmp_args_element_name_20 };
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_20 );
        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_4 );
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_4;
        CHECK_OBJECT( par_padding );
        tmp_isinstance_inst_1 = par_padding;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_PSS );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PSS );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PSS" );
            exception_tb = NULL;

            exception_lineno = 207;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_4;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;
            type_description_1 = "ooooooooooo";
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
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_name_10;
            PyObject *tmp_source_name_20;
            PyObject *tmp_source_name_21;
            PyObject *tmp_args_element_name_21;
            PyObject *tmp_args_element_name_22;
            PyObject *tmp_called_name_11;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_23;
            PyObject *tmp_args_element_name_24;
            PyObject *tmp_args_element_name_25;
            CHECK_OBJECT( par_backend );
            tmp_source_name_21 = par_backend;
            tmp_source_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain__lib );
            if ( tmp_source_name_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 208;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_EVP_PKEY_CTX_set_rsa_pss_saltlen );
            Py_DECREF( tmp_source_name_20 );
            if ( tmp_called_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 208;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_pkey_ctx );
            tmp_args_element_name_21 = var_pkey_ctx;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__get_rsa_pss_salt_length );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_rsa_pss_salt_length );
            }

            if ( tmp_mvar_value_5 == NULL )
            {
                Py_DECREF( tmp_called_name_10 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_get_rsa_pss_salt_length" );
                exception_tb = NULL;

                exception_lineno = 209;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_11 = tmp_mvar_value_5;
            CHECK_OBJECT( par_padding );
            tmp_args_element_name_23 = par_padding;
            CHECK_OBJECT( par_key );
            tmp_args_element_name_24 = par_key;
            CHECK_OBJECT( par_algorithm );
            tmp_args_element_name_25 = par_algorithm;
            frame_7ed2038eb663bb2e8d72b14b45e6f93a->m_frame.f_lineno = 209;
            {
                PyObject *call_args[] = { tmp_args_element_name_23, tmp_args_element_name_24, tmp_args_element_name_25 };
                tmp_args_element_name_22 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_11, call_args );
            }

            if ( tmp_args_element_name_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_10 );

                exception_lineno = 209;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_7ed2038eb663bb2e8d72b14b45e6f93a->m_frame.f_lineno = 208;
            {
                PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22 };
                tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
            }

            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_element_name_22 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 208;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_res;
                assert( old != NULL );
                var_res = tmp_assign_source_8;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_called_name_12;
            PyObject *tmp_source_name_22;
            PyObject *tmp_call_result_5;
            PyObject *tmp_args_element_name_26;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( par_backend );
            tmp_source_name_22 = par_backend;
            tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_openssl_assert );
            if ( tmp_called_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 211;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_res );
            tmp_compexpr_left_5 = var_res;
            tmp_compexpr_right_5 = const_int_0;
            tmp_args_element_name_26 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_args_element_name_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_12 );

                exception_lineno = 211;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_7ed2038eb663bb2e8d72b14b45e6f93a->m_frame.f_lineno = 211;
            {
                PyObject *call_args[] = { tmp_args_element_name_26 };
                tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
            }

            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_args_element_name_26 );
            if ( tmp_call_result_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 211;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_5 );
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_name_13;
            PyObject *tmp_source_name_23;
            PyObject *tmp_args_element_name_27;
            PyObject *tmp_source_name_24;
            PyObject *tmp_source_name_25;
            CHECK_OBJECT( par_backend );
            tmp_source_name_23 = par_backend;
            tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain__evp_md_non_null_from_algorithm );
            if ( tmp_called_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 213;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_padding );
            tmp_source_name_25 = par_padding;
            tmp_source_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain__mgf );
            if ( tmp_source_name_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_13 );

                exception_lineno = 214;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain__algorithm );
            Py_DECREF( tmp_source_name_24 );
            if ( tmp_args_element_name_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_13 );

                exception_lineno = 214;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_7ed2038eb663bb2e8d72b14b45e6f93a->m_frame.f_lineno = 213;
            {
                PyObject *call_args[] = { tmp_args_element_name_27 };
                tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
            }

            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_args_element_name_27 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 213;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_mgf1_md == NULL );
            var_mgf1_md = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_source_name_26;
            PyObject *tmp_args_element_name_28;
            PyObject *tmp_args_element_name_29;
            CHECK_OBJECT( par_backend );
            tmp_source_name_26 = par_backend;
            tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain__lib );
            if ( tmp_called_instance_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 215;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_pkey_ctx );
            tmp_args_element_name_28 = var_pkey_ctx;
            CHECK_OBJECT( var_mgf1_md );
            tmp_args_element_name_29 = var_mgf1_md;
            frame_7ed2038eb663bb2e8d72b14b45e6f93a->m_frame.f_lineno = 215;
            {
                PyObject *call_args[] = { tmp_args_element_name_28, tmp_args_element_name_29 };
                tmp_assign_source_10 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_EVP_PKEY_CTX_set_rsa_mgf1_md, call_args );
            }

            Py_DECREF( tmp_called_instance_5 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 215;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_res;
                assert( old != NULL );
                var_res = tmp_assign_source_10;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_called_name_14;
            PyObject *tmp_source_name_27;
            PyObject *tmp_call_result_6;
            PyObject *tmp_args_element_name_30;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            CHECK_OBJECT( par_backend );
            tmp_source_name_27 = par_backend;
            tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_openssl_assert );
            if ( tmp_called_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 216;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_res );
            tmp_compexpr_left_6 = var_res;
            tmp_compexpr_right_6 = const_int_0;
            tmp_args_element_name_30 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            if ( tmp_args_element_name_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_14 );

                exception_lineno = 216;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_7ed2038eb663bb2e8d72b14b45e6f93a->m_frame.f_lineno = 216;
            {
                PyObject *call_args[] = { tmp_args_element_name_30 };
                tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
            }

            Py_DECREF( tmp_called_name_14 );
            Py_DECREF( tmp_args_element_name_30 );
            if ( tmp_call_result_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 216;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_6 );
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ed2038eb663bb2e8d72b14b45e6f93a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ed2038eb663bb2e8d72b14b45e6f93a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7ed2038eb663bb2e8d72b14b45e6f93a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7ed2038eb663bb2e8d72b14b45e6f93a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7ed2038eb663bb2e8d72b14b45e6f93a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7ed2038eb663bb2e8d72b14b45e6f93a,
        type_description_1,
        par_backend,
        par_padding,
        par_algorithm,
        par_key,
        par_data,
        par_init_func,
        var_res,
        var_padding_enum,
        var_pkey_ctx,
        var_mgf1_md,
        var_evp_md
    );


    // Release cached frame.
    if ( frame_7ed2038eb663bb2e8d72b14b45e6f93a == cache_frame_7ed2038eb663bb2e8d72b14b45e6f93a )
    {
        Py_DECREF( frame_7ed2038eb663bb2e8d72b14b45e6f93a );
    }
    cache_frame_7ed2038eb663bb2e8d72b14b45e6f93a = NULL;

    assertFrameObject( frame_7ed2038eb663bb2e8d72b14b45e6f93a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_pkey_ctx );
    tmp_return_value = var_pkey_ctx;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_6__rsa_sig_setup );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)var_padding_enum );
    Py_DECREF( var_padding_enum );
    var_padding_enum = NULL;

    CHECK_OBJECT( (PyObject *)var_pkey_ctx );
    Py_DECREF( var_pkey_ctx );
    var_pkey_ctx = NULL;

    Py_XDECREF( var_mgf1_md );
    var_mgf1_md = NULL;

    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)var_evp_md );
    Py_DECREF( var_evp_md );
    var_evp_md = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_init_func );
    Py_DECREF( par_init_func );
    par_init_func = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

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

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    Py_XDECREF( var_padding_enum );
    var_padding_enum = NULL;

    Py_XDECREF( var_pkey_ctx );
    var_pkey_ctx = NULL;

    Py_XDECREF( var_mgf1_md );
    var_mgf1_md = NULL;

    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    Py_XDECREF( var_evp_md );
    var_evp_md = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_init_func );
    Py_DECREF( par_init_func );
    par_init_func = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_6__rsa_sig_setup );
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


static PyObject *impl_cryptography$hazmat$backends$openssl$rsa$$$function_7__rsa_sig_sign( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[ 0 ];
    PyObject *par_padding = python_pars[ 1 ];
    PyObject *par_algorithm = python_pars[ 2 ];
    PyObject *par_private_key = python_pars[ 3 ];
    PyObject *par_data = python_pars[ 4 ];
    PyObject *var_errors = NULL;
    PyObject *var_buf = NULL;
    PyObject *var_res = NULL;
    PyObject *var_buflen = NULL;
    PyObject *var_reason = NULL;
    PyObject *var_pkey_ctx = NULL;
    struct Nuitka_FrameObject *frame_ed7213390c84d949873b88fe0c1d4f87;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ed7213390c84d949873b88fe0c1d4f87 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ed7213390c84d949873b88fe0c1d4f87, codeobj_ed7213390c84d949873b88fe0c1d4f87, module_cryptography$hazmat$backends$openssl$rsa, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ed7213390c84d949873b88fe0c1d4f87 = cache_frame_ed7213390c84d949873b88fe0c1d4f87;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ed7213390c84d949873b88fe0c1d4f87 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ed7213390c84d949873b88fe0c1d4f87 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__rsa_sig_setup );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__rsa_sig_setup );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_rsa_sig_setup" );
            exception_tb = NULL;

            exception_lineno = 222;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_backend );
        tmp_args_element_name_1 = par_backend;
        CHECK_OBJECT( par_padding );
        tmp_args_element_name_2 = par_padding;
        CHECK_OBJECT( par_algorithm );
        tmp_args_element_name_3 = par_algorithm;
        CHECK_OBJECT( par_private_key );
        tmp_args_element_name_4 = par_private_key;
        CHECK_OBJECT( par_data );
        tmp_args_element_name_5 = par_data;
        CHECK_OBJECT( par_backend );
        tmp_source_name_2 = par_backend;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__lib );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_EVP_PKEY_sign_init );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ed7213390c84d949873b88fe0c1d4f87->m_frame.f_lineno = 222;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 222;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_pkey_ctx == NULL );
        var_pkey_ctx = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_backend );
        tmp_source_name_3 = par_backend;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__ffi );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ed7213390c84d949873b88fe0c1d4f87->m_frame.f_lineno = 226;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_new, &PyTuple_GET_ITEM( const_tuple_str_digest_496388af417742534c869e89560f4859_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_buflen == NULL );
        var_buflen = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_source_name_6;
        PyObject *tmp_source_name_7;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_backend );
        tmp_source_name_5 = par_backend;
        tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__lib );
        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_EVP_PKEY_sign );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_pkey_ctx );
        tmp_args_element_name_7 = var_pkey_ctx;
        CHECK_OBJECT( par_backend );
        tmp_source_name_7 = par_backend;
        tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__ffi );
        if ( tmp_source_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 229;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_NULL );
        Py_DECREF( tmp_source_name_6 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 229;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_buflen );
        tmp_args_element_name_9 = var_buflen;
        CHECK_OBJECT( par_data );
        tmp_args_element_name_10 = par_data;
        CHECK_OBJECT( par_data );
        tmp_len_arg_1 = par_data;
        tmp_args_element_name_11 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_8 );

            exception_lineno = 232;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ed7213390c84d949873b88fe0c1d4f87->m_frame.f_lineno = 227;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_res == NULL );
        var_res = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_8;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_backend );
        tmp_source_name_8 = par_backend;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_openssl_assert );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_res );
        tmp_compexpr_left_1 = var_res;
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_args_element_name_12 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 234;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ed7213390c84d949873b88fe0c1d4f87->m_frame.f_lineno = 234;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_9;
        PyObject *tmp_source_name_10;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_backend );
        tmp_source_name_10 = par_backend;
        tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__ffi );
        if ( tmp_source_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_new );
        Py_DECREF( tmp_source_name_9 );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_13 = const_str_digest_81f1b0dfcc7a862e6940580ec4cc42d3;
        CHECK_OBJECT( var_buflen );
        tmp_subscribed_name_1 = var_buflen;
        tmp_subscript_name_1 = const_int_0;
        tmp_args_element_name_14 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_args_element_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 235;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ed7213390c84d949873b88fe0c1d4f87->m_frame.f_lineno = 235;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_14 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_buf == NULL );
        var_buf = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_11;
        PyObject *tmp_source_name_12;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( par_backend );
        tmp_source_name_12 = par_backend;
        tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__lib );
        if ( tmp_source_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_EVP_PKEY_sign );
        Py_DECREF( tmp_source_name_11 );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_pkey_ctx );
        tmp_args_element_name_15 = var_pkey_ctx;
        CHECK_OBJECT( var_buf );
        tmp_args_element_name_16 = var_buf;
        CHECK_OBJECT( var_buflen );
        tmp_args_element_name_17 = var_buflen;
        CHECK_OBJECT( par_data );
        tmp_args_element_name_18 = par_data;
        CHECK_OBJECT( par_data );
        tmp_len_arg_2 = par_data;
        tmp_args_element_name_19 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_args_element_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 237;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ed7213390c84d949873b88fe0c1d4f87->m_frame.f_lineno = 236;
        {
            PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_19 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_res;
            assert( old != NULL );
            var_res = tmp_assign_source_5;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_res );
        tmp_compexpr_left_2 = var_res;
        tmp_compexpr_right_2 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_INT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;
            type_description_1 = "ooooooooooo";
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_instance_2;
            CHECK_OBJECT( par_backend );
            tmp_called_instance_2 = par_backend;
            frame_ed7213390c84d949873b88fe0c1d4f87->m_frame.f_lineno = 239;
            tmp_assign_source_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain__consume_errors );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 239;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_errors == NULL );
            var_errors = tmp_assign_source_6;
        }
        {
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_13;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_14;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_source_name_15;
            PyObject *tmp_source_name_16;
            CHECK_OBJECT( par_backend );
            tmp_source_name_13 = par_backend;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_openssl_assert );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 240;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_errors );
            tmp_subscribed_name_2 = var_errors;
            tmp_subscript_name_2 = const_int_0;
            tmp_source_name_14 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
            if ( tmp_source_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 240;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_lib );
            Py_DECREF( tmp_source_name_14 );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 240;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_backend );
            tmp_source_name_16 = par_backend;
            tmp_source_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__lib );
            if ( tmp_source_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );
                Py_DECREF( tmp_compexpr_left_3 );

                exception_lineno = 240;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_ERR_LIB_RSA );
            Py_DECREF( tmp_source_name_15 );
            if ( tmp_compexpr_right_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );
                Py_DECREF( tmp_compexpr_left_3 );

                exception_lineno = 240;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_20 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            Py_DECREF( tmp_compexpr_right_3 );
            if ( tmp_args_element_name_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 240;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_ed7213390c84d949873b88fe0c1d4f87->m_frame.f_lineno = 240;
            {
                PyObject *call_args[] = { tmp_args_element_name_20 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_20 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 240;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_source_name_17;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_source_name_18;
            PyObject *tmp_source_name_19;
            CHECK_OBJECT( var_errors );
            tmp_subscribed_name_3 = var_errors;
            tmp_subscript_name_3 = const_int_0;
            tmp_source_name_17 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
            if ( tmp_source_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 242;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_reason );
            Py_DECREF( tmp_source_name_17 );
            if ( tmp_compexpr_left_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 242;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_backend );
            tmp_source_name_19 = par_backend;
            tmp_source_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain__lib );
            if ( tmp_source_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_4 );

                exception_lineno = 243;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_RSA_R_DATA_TOO_LARGE_FOR_KEY_SIZE );
            Py_DECREF( tmp_source_name_18 );
            if ( tmp_compexpr_right_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_4 );

                exception_lineno = 243;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_left_4 );
            Py_DECREF( tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 242;
                type_description_1 = "ooooooooooo";
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
                PyObject *tmp_assign_source_7;
                tmp_assign_source_7 = const_str_digest_81faa8b1e56081138ca37aade85d4851;
                assert( var_reason == NULL );
                Py_INCREF( tmp_assign_source_7 );
                var_reason = tmp_assign_source_7;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_called_name_7;
                PyObject *tmp_source_name_20;
                PyObject *tmp_call_result_3;
                PyObject *tmp_args_element_name_21;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                PyObject *tmp_source_name_21;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_subscript_name_4;
                PyObject *tmp_source_name_22;
                PyObject *tmp_source_name_23;
                CHECK_OBJECT( par_backend );
                tmp_source_name_20 = par_backend;
                tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_openssl_assert );
                if ( tmp_called_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 248;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_errors );
                tmp_subscribed_name_4 = var_errors;
                tmp_subscript_name_4 = const_int_0;
                tmp_source_name_21 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
                if ( tmp_source_name_21 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_7 );

                    exception_lineno = 249;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_reason );
                Py_DECREF( tmp_source_name_21 );
                if ( tmp_compexpr_left_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_7 );

                    exception_lineno = 249;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_backend );
                tmp_source_name_23 = par_backend;
                tmp_source_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain__lib );
                if ( tmp_source_name_22 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_7 );
                    Py_DECREF( tmp_compexpr_left_5 );

                    exception_lineno = 250;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_RSA_R_DIGEST_TOO_BIG_FOR_RSA_KEY );
                Py_DECREF( tmp_source_name_22 );
                if ( tmp_compexpr_right_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_7 );
                    Py_DECREF( tmp_compexpr_left_5 );

                    exception_lineno = 250;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_21 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                Py_DECREF( tmp_compexpr_left_5 );
                Py_DECREF( tmp_compexpr_right_5 );
                if ( tmp_args_element_name_21 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_7 );

                    exception_lineno = 249;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_ed7213390c84d949873b88fe0c1d4f87->m_frame.f_lineno = 248;
                {
                    PyObject *call_args[] = { tmp_args_element_name_21 };
                    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
                }

                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_args_element_name_21 );
                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 248;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_3 );
            }
            {
                PyObject *tmp_assign_source_8;
                tmp_assign_source_8 = const_str_digest_02b9af73b54a89303fd51d64eedf10ac;
                assert( var_reason == NULL );
                Py_INCREF( tmp_assign_source_8 );
                var_reason = tmp_assign_source_8;
            }
            branch_end_2:;
        }
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            CHECK_OBJECT( var_reason );
            tmp_make_exception_arg_1 = var_reason;
            frame_ed7213390c84d949873b88fe0c1d4f87->m_frame.f_lineno = 253;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 253;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        Py_ssize_t tmp_sliceslicedel_index_lower_1;
        Py_ssize_t tmp_slice_index_upper_1;
        PyObject *tmp_slice_source_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_source_name_24;
        PyObject *tmp_args_element_name_22;
        tmp_sliceslicedel_index_lower_1 = 0;
        tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
        CHECK_OBJECT( par_backend );
        tmp_source_name_24 = par_backend;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain__ffi );
        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 255;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_buf );
        tmp_args_element_name_22 = var_buf;
        frame_ed7213390c84d949873b88fe0c1d4f87->m_frame.f_lineno = 255;
        {
            PyObject *call_args[] = { tmp_args_element_name_22 };
            tmp_slice_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_buffer, call_args );
        }

        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_slice_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 255;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
        Py_DECREF( tmp_slice_source_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 255;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed7213390c84d949873b88fe0c1d4f87 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed7213390c84d949873b88fe0c1d4f87 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed7213390c84d949873b88fe0c1d4f87 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ed7213390c84d949873b88fe0c1d4f87, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ed7213390c84d949873b88fe0c1d4f87->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ed7213390c84d949873b88fe0c1d4f87, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ed7213390c84d949873b88fe0c1d4f87,
        type_description_1,
        par_backend,
        par_padding,
        par_algorithm,
        par_private_key,
        par_data,
        var_errors,
        var_buf,
        var_res,
        var_buflen,
        var_reason,
        var_pkey_ctx
    );


    // Release cached frame.
    if ( frame_ed7213390c84d949873b88fe0c1d4f87 == cache_frame_ed7213390c84d949873b88fe0c1d4f87 )
    {
        Py_DECREF( frame_ed7213390c84d949873b88fe0c1d4f87 );
    }
    cache_frame_ed7213390c84d949873b88fe0c1d4f87 = NULL;

    assertFrameObject( frame_ed7213390c84d949873b88fe0c1d4f87 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_7__rsa_sig_sign );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_private_key );
    Py_DECREF( par_private_key );
    par_private_key = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)var_buf );
    Py_DECREF( var_buf );
    var_buf = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)var_buflen );
    Py_DECREF( var_buflen );
    var_buflen = NULL;

    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    CHECK_OBJECT( (PyObject *)var_pkey_ctx );
    Py_DECREF( var_pkey_ctx );
    var_pkey_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

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

    CHECK_OBJECT( (PyObject *)par_private_key );
    Py_DECREF( par_private_key );
    par_private_key = NULL;

    Py_XDECREF( var_errors );
    var_errors = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    Py_XDECREF( var_buf );
    var_buf = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_buflen );
    var_buflen = NULL;

    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    Py_XDECREF( var_reason );
    var_reason = NULL;

    Py_XDECREF( var_pkey_ctx );
    var_pkey_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_7__rsa_sig_sign );
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


static PyObject *impl_cryptography$hazmat$backends$openssl$rsa$$$function_8__rsa_sig_verify( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[ 0 ];
    PyObject *par_padding = python_pars[ 1 ];
    PyObject *par_algorithm = python_pars[ 2 ];
    PyObject *par_public_key = python_pars[ 3 ];
    PyObject *par_signature = python_pars[ 4 ];
    PyObject *par_data = python_pars[ 5 ];
    PyObject *var_res = NULL;
    PyObject *var_pkey_ctx = NULL;
    struct Nuitka_FrameObject *frame_b118c1c4cf6a1050c14ab160f233aeda;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b118c1c4cf6a1050c14ab160f233aeda = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b118c1c4cf6a1050c14ab160f233aeda, codeobj_b118c1c4cf6a1050c14ab160f233aeda, module_cryptography$hazmat$backends$openssl$rsa, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b118c1c4cf6a1050c14ab160f233aeda = cache_frame_b118c1c4cf6a1050c14ab160f233aeda;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b118c1c4cf6a1050c14ab160f233aeda );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b118c1c4cf6a1050c14ab160f233aeda ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__rsa_sig_setup );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__rsa_sig_setup );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_rsa_sig_setup" );
            exception_tb = NULL;

            exception_lineno = 259;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_backend );
        tmp_args_element_name_1 = par_backend;
        CHECK_OBJECT( par_padding );
        tmp_args_element_name_2 = par_padding;
        CHECK_OBJECT( par_algorithm );
        tmp_args_element_name_3 = par_algorithm;
        CHECK_OBJECT( par_public_key );
        tmp_args_element_name_4 = par_public_key;
        CHECK_OBJECT( par_data );
        tmp_args_element_name_5 = par_data;
        CHECK_OBJECT( par_backend );
        tmp_source_name_2 = par_backend;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__lib );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 261;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_EVP_PKEY_verify_init );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 261;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_b118c1c4cf6a1050c14ab160f233aeda->m_frame.f_lineno = 259;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 259;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_pkey_ctx == NULL );
        var_pkey_ctx = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( par_backend );
        tmp_source_name_4 = par_backend;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__lib );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_EVP_PKEY_verify );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_pkey_ctx );
        tmp_args_element_name_7 = var_pkey_ctx;
        CHECK_OBJECT( par_signature );
        tmp_args_element_name_8 = par_signature;
        CHECK_OBJECT( par_signature );
        tmp_len_arg_1 = par_signature;
        tmp_args_element_name_9 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 264;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_data );
        tmp_args_element_name_10 = par_data;
        CHECK_OBJECT( par_data );
        tmp_len_arg_2 = par_data;
        tmp_args_element_name_11 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_9 );

            exception_lineno = 264;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_b118c1c4cf6a1050c14ab160f233aeda->m_frame.f_lineno = 263;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_9 );
        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_res == NULL );
        var_res = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_backend );
        tmp_source_name_5 = par_backend;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_openssl_assert );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_res );
        tmp_compexpr_left_1 = var_res;
        tmp_compexpr_right_1 = const_int_0;
        tmp_args_element_name_12 = RICH_COMPARE_GTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 269;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_b118c1c4cf6a1050c14ab160f233aeda->m_frame.f_lineno = 269;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_res );
        tmp_compexpr_left_2 = var_res;
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( par_backend );
            tmp_called_instance_1 = par_backend;
            frame_b118c1c4cf6a1050c14ab160f233aeda->m_frame.f_lineno = 271;
            tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__consume_errors );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 271;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_InvalidSignature );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidSignature );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "InvalidSignature" );
                exception_tb = NULL;

                exception_lineno = 272;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_2;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 272;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b118c1c4cf6a1050c14ab160f233aeda );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b118c1c4cf6a1050c14ab160f233aeda );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b118c1c4cf6a1050c14ab160f233aeda, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b118c1c4cf6a1050c14ab160f233aeda->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b118c1c4cf6a1050c14ab160f233aeda, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b118c1c4cf6a1050c14ab160f233aeda,
        type_description_1,
        par_backend,
        par_padding,
        par_algorithm,
        par_public_key,
        par_signature,
        par_data,
        var_res,
        var_pkey_ctx
    );


    // Release cached frame.
    if ( frame_b118c1c4cf6a1050c14ab160f233aeda == cache_frame_b118c1c4cf6a1050c14ab160f233aeda )
    {
        Py_DECREF( frame_b118c1c4cf6a1050c14ab160f233aeda );
    }
    cache_frame_b118c1c4cf6a1050c14ab160f233aeda = NULL;

    assertFrameObject( frame_b118c1c4cf6a1050c14ab160f233aeda );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_8__rsa_sig_verify );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_public_key );
    Py_DECREF( par_public_key );
    par_public_key = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)var_pkey_ctx );
    Py_DECREF( var_pkey_ctx );
    var_pkey_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

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

    CHECK_OBJECT( (PyObject *)par_public_key );
    Py_DECREF( par_public_key );
    par_public_key = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_pkey_ctx );
    var_pkey_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_8__rsa_sig_verify );
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


static PyObject *impl_cryptography$hazmat$backends$openssl$rsa$$$function_9___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_backend = python_pars[ 1 ];
    PyObject *par_private_key = python_pars[ 2 ];
    PyObject *par_padding = python_pars[ 3 ];
    PyObject *par_algorithm = python_pars[ 4 ];
    struct Nuitka_FrameObject *frame_8e782dfdbe078cb40a78d901917edc19;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8e782dfdbe078cb40a78d901917edc19 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8e782dfdbe078cb40a78d901917edc19, codeobj_8e782dfdbe078cb40a78d901917edc19, module_cryptography$hazmat$backends$openssl$rsa, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8e782dfdbe078cb40a78d901917edc19 = cache_frame_8e782dfdbe078cb40a78d901917edc19;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8e782dfdbe078cb40a78d901917edc19 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8e782dfdbe078cb40a78d901917edc19 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_backend );
        tmp_assattr_name_1 = par_backend;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__backend, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 278;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_private_key );
        tmp_assattr_name_2 = par_private_key;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__private_key, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 279;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__rsa_sig_determine_padding );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__rsa_sig_determine_padding );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_rsa_sig_determine_padding" );
            exception_tb = NULL;

            exception_lineno = 284;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_backend );
        tmp_args_element_name_1 = par_backend;
        CHECK_OBJECT( par_private_key );
        tmp_args_element_name_2 = par_private_key;
        CHECK_OBJECT( par_padding );
        tmp_args_element_name_3 = par_padding;
        CHECK_OBJECT( par_algorithm );
        tmp_args_element_name_4 = par_algorithm;
        frame_8e782dfdbe078cb40a78d901917edc19->m_frame.f_lineno = 284;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 284;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_padding );
        tmp_assattr_name_3 = par_padding;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__padding, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 285;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_algorithm );
        tmp_assattr_name_4 = par_algorithm;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__algorithm, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 286;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_3;
        PyObject *tmp_assattr_target_5;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_hashes );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "hashes" );
            exception_tb = NULL;

            exception_lineno = 287;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Hash );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 287;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__algorithm );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 287;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__backend );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 287;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_8e782dfdbe078cb40a78d901917edc19->m_frame.f_lineno = 287;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assattr_name_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assattr_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 287;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__hash_ctx, tmp_assattr_name_5 );
        Py_DECREF( tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 287;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8e782dfdbe078cb40a78d901917edc19 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8e782dfdbe078cb40a78d901917edc19 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8e782dfdbe078cb40a78d901917edc19, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8e782dfdbe078cb40a78d901917edc19->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8e782dfdbe078cb40a78d901917edc19, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8e782dfdbe078cb40a78d901917edc19,
        type_description_1,
        par_self,
        par_backend,
        par_private_key,
        par_padding,
        par_algorithm
    );


    // Release cached frame.
    if ( frame_8e782dfdbe078cb40a78d901917edc19 == cache_frame_8e782dfdbe078cb40a78d901917edc19 )
    {
        Py_DECREF( frame_8e782dfdbe078cb40a78d901917edc19 );
    }
    cache_frame_8e782dfdbe078cb40a78d901917edc19 = NULL;

    assertFrameObject( frame_8e782dfdbe078cb40a78d901917edc19 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_9___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_private_key );
    Py_DECREF( par_private_key );
    par_private_key = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

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

    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_private_key );
    Py_DECREF( par_private_key );
    par_private_key = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_9___init__ );
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


static PyObject *impl_cryptography$hazmat$backends$openssl$rsa$$$function_10_update( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_ba9af55975d848b309ca02d9bf50f129;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ba9af55975d848b309ca02d9bf50f129 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ba9af55975d848b309ca02d9bf50f129, codeobj_ba9af55975d848b309ca02d9bf50f129, module_cryptography$hazmat$backends$openssl$rsa, sizeof(void *)+sizeof(void *) );
    frame_ba9af55975d848b309ca02d9bf50f129 = cache_frame_ba9af55975d848b309ca02d9bf50f129;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ba9af55975d848b309ca02d9bf50f129 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ba9af55975d848b309ca02d9bf50f129 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__hash_ctx );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 290;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_data );
        tmp_args_element_name_1 = par_data;
        frame_ba9af55975d848b309ca02d9bf50f129->m_frame.f_lineno = 290;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_update, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 290;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ba9af55975d848b309ca02d9bf50f129 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ba9af55975d848b309ca02d9bf50f129 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ba9af55975d848b309ca02d9bf50f129, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ba9af55975d848b309ca02d9bf50f129->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ba9af55975d848b309ca02d9bf50f129, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ba9af55975d848b309ca02d9bf50f129,
        type_description_1,
        par_self,
        par_data
    );


    // Release cached frame.
    if ( frame_ba9af55975d848b309ca02d9bf50f129 == cache_frame_ba9af55975d848b309ca02d9bf50f129 )
    {
        Py_DECREF( frame_ba9af55975d848b309ca02d9bf50f129 );
    }
    cache_frame_ba9af55975d848b309ca02d9bf50f129 = NULL;

    assertFrameObject( frame_ba9af55975d848b309ca02d9bf50f129 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_10_update );
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

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_10_update );
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


static PyObject *impl_cryptography$hazmat$backends$openssl$rsa$$$function_11_finalize( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_7d881810fcc4b11d5843a1eaced7a164;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7d881810fcc4b11d5843a1eaced7a164 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7d881810fcc4b11d5843a1eaced7a164, codeobj_7d881810fcc4b11d5843a1eaced7a164, module_cryptography$hazmat$backends$openssl$rsa, sizeof(void *) );
    frame_7d881810fcc4b11d5843a1eaced7a164 = cache_frame_7d881810fcc4b11d5843a1eaced7a164;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7d881810fcc4b11d5843a1eaced7a164 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7d881810fcc4b11d5843a1eaced7a164 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__rsa_sig_sign );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__rsa_sig_sign );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_rsa_sig_sign" );
            exception_tb = NULL;

            exception_lineno = 293;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__backend );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 294;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__padding );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 295;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__algorithm );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 296;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__private_key );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 297;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__hash_ctx );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 298;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7d881810fcc4b11d5843a1eaced7a164->m_frame.f_lineno = 298;
        tmp_args_element_name_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_finalize );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 298;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7d881810fcc4b11d5843a1eaced7a164->m_frame.f_lineno = 293;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 293;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7d881810fcc4b11d5843a1eaced7a164 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7d881810fcc4b11d5843a1eaced7a164 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7d881810fcc4b11d5843a1eaced7a164 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7d881810fcc4b11d5843a1eaced7a164, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7d881810fcc4b11d5843a1eaced7a164->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7d881810fcc4b11d5843a1eaced7a164, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7d881810fcc4b11d5843a1eaced7a164,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_7d881810fcc4b11d5843a1eaced7a164 == cache_frame_7d881810fcc4b11d5843a1eaced7a164 )
    {
        Py_DECREF( frame_7d881810fcc4b11d5843a1eaced7a164 );
    }
    cache_frame_7d881810fcc4b11d5843a1eaced7a164 = NULL;

    assertFrameObject( frame_7d881810fcc4b11d5843a1eaced7a164 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_11_finalize );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_11_finalize );
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


static PyObject *impl_cryptography$hazmat$backends$openssl$rsa$$$function_12___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_backend = python_pars[ 1 ];
    PyObject *par_public_key = python_pars[ 2 ];
    PyObject *par_signature = python_pars[ 3 ];
    PyObject *par_padding = python_pars[ 4 ];
    PyObject *par_algorithm = python_pars[ 5 ];
    struct Nuitka_FrameObject *frame_94869d310e3c0005006be16b7ebed635;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_94869d310e3c0005006be16b7ebed635 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_94869d310e3c0005006be16b7ebed635, codeobj_94869d310e3c0005006be16b7ebed635, module_cryptography$hazmat$backends$openssl$rsa, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_94869d310e3c0005006be16b7ebed635 = cache_frame_94869d310e3c0005006be16b7ebed635;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_94869d310e3c0005006be16b7ebed635 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_94869d310e3c0005006be16b7ebed635 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_backend );
        tmp_assattr_name_1 = par_backend;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__backend, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 305;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_public_key );
        tmp_assattr_name_2 = par_public_key;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__public_key, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 306;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_signature );
        tmp_assattr_name_3 = par_signature;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__signature, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 307;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_padding );
        tmp_assattr_name_4 = par_padding;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__padding, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 308;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__rsa_sig_determine_padding );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__rsa_sig_determine_padding );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_rsa_sig_determine_padding" );
            exception_tb = NULL;

            exception_lineno = 312;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_backend );
        tmp_args_element_name_1 = par_backend;
        CHECK_OBJECT( par_public_key );
        tmp_args_element_name_2 = par_public_key;
        CHECK_OBJECT( par_padding );
        tmp_args_element_name_3 = par_padding;
        CHECK_OBJECT( par_algorithm );
        tmp_args_element_name_4 = par_algorithm;
        frame_94869d310e3c0005006be16b7ebed635->m_frame.f_lineno = 312;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT( par_algorithm );
        tmp_assattr_name_5 = par_algorithm;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__algorithm, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_3;
        PyObject *tmp_assattr_target_6;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_hashes );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "hashes" );
            exception_tb = NULL;

            exception_lineno = 316;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Hash );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 316;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__algorithm );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 316;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__backend );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 316;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_94869d310e3c0005006be16b7ebed635->m_frame.f_lineno = 316;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assattr_name_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assattr_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 316;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain__hash_ctx, tmp_assattr_name_6 );
        Py_DECREF( tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 316;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94869d310e3c0005006be16b7ebed635 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94869d310e3c0005006be16b7ebed635 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_94869d310e3c0005006be16b7ebed635, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_94869d310e3c0005006be16b7ebed635->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_94869d310e3c0005006be16b7ebed635, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_94869d310e3c0005006be16b7ebed635,
        type_description_1,
        par_self,
        par_backend,
        par_public_key,
        par_signature,
        par_padding,
        par_algorithm
    );


    // Release cached frame.
    if ( frame_94869d310e3c0005006be16b7ebed635 == cache_frame_94869d310e3c0005006be16b7ebed635 )
    {
        Py_DECREF( frame_94869d310e3c0005006be16b7ebed635 );
    }
    cache_frame_94869d310e3c0005006be16b7ebed635 = NULL;

    assertFrameObject( frame_94869d310e3c0005006be16b7ebed635 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_12___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_public_key );
    Py_DECREF( par_public_key );
    par_public_key = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

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

    CHECK_OBJECT( (PyObject *)par_public_key );
    Py_DECREF( par_public_key );
    par_public_key = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_12___init__ );
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


static PyObject *impl_cryptography$hazmat$backends$openssl$rsa$$$function_13_update( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_82564fc177efccbc370f77f719410b6a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_82564fc177efccbc370f77f719410b6a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_82564fc177efccbc370f77f719410b6a, codeobj_82564fc177efccbc370f77f719410b6a, module_cryptography$hazmat$backends$openssl$rsa, sizeof(void *)+sizeof(void *) );
    frame_82564fc177efccbc370f77f719410b6a = cache_frame_82564fc177efccbc370f77f719410b6a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_82564fc177efccbc370f77f719410b6a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_82564fc177efccbc370f77f719410b6a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__hash_ctx );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 319;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_data );
        tmp_args_element_name_1 = par_data;
        frame_82564fc177efccbc370f77f719410b6a->m_frame.f_lineno = 319;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_update, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 319;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_82564fc177efccbc370f77f719410b6a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_82564fc177efccbc370f77f719410b6a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_82564fc177efccbc370f77f719410b6a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_82564fc177efccbc370f77f719410b6a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_82564fc177efccbc370f77f719410b6a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_82564fc177efccbc370f77f719410b6a,
        type_description_1,
        par_self,
        par_data
    );


    // Release cached frame.
    if ( frame_82564fc177efccbc370f77f719410b6a == cache_frame_82564fc177efccbc370f77f719410b6a )
    {
        Py_DECREF( frame_82564fc177efccbc370f77f719410b6a );
    }
    cache_frame_82564fc177efccbc370f77f719410b6a = NULL;

    assertFrameObject( frame_82564fc177efccbc370f77f719410b6a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_13_update );
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

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_13_update );
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


static PyObject *impl_cryptography$hazmat$backends$openssl$rsa$$$function_14_verify( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_34835762160b83ed7c6a72fd07edba1a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_34835762160b83ed7c6a72fd07edba1a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_34835762160b83ed7c6a72fd07edba1a, codeobj_34835762160b83ed7c6a72fd07edba1a, module_cryptography$hazmat$backends$openssl$rsa, sizeof(void *) );
    frame_34835762160b83ed7c6a72fd07edba1a = cache_frame_34835762160b83ed7c6a72fd07edba1a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_34835762160b83ed7c6a72fd07edba1a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_34835762160b83ed7c6a72fd07edba1a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_6;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__rsa_sig_verify );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__rsa_sig_verify );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_rsa_sig_verify" );
            exception_tb = NULL;

            exception_lineno = 322;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__backend );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 323;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__padding );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 324;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__algorithm );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 325;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__public_key );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 326;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__signature );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 327;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__hash_ctx );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 328;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_34835762160b83ed7c6a72fd07edba1a->m_frame.f_lineno = 328;
        tmp_args_element_name_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_finalize );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 328;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_34835762160b83ed7c6a72fd07edba1a->m_frame.f_lineno = 322;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 322;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_34835762160b83ed7c6a72fd07edba1a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_34835762160b83ed7c6a72fd07edba1a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_34835762160b83ed7c6a72fd07edba1a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_34835762160b83ed7c6a72fd07edba1a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_34835762160b83ed7c6a72fd07edba1a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_34835762160b83ed7c6a72fd07edba1a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_34835762160b83ed7c6a72fd07edba1a,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_34835762160b83ed7c6a72fd07edba1a == cache_frame_34835762160b83ed7c6a72fd07edba1a )
    {
        Py_DECREF( frame_34835762160b83ed7c6a72fd07edba1a );
    }
    cache_frame_34835762160b83ed7c6a72fd07edba1a = NULL;

    assertFrameObject( frame_34835762160b83ed7c6a72fd07edba1a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_14_verify );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_14_verify );
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


static PyObject *impl_cryptography$hazmat$backends$openssl$rsa$$$function_15___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_backend = python_pars[ 1 ];
    PyObject *par_rsa_cdata = python_pars[ 2 ];
    PyObject *par_evp_pkey = python_pars[ 3 ];
    PyObject *var_n = NULL;
    struct Nuitka_FrameObject *frame_9b7cf94cd30727957df7562b9f08d00e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9b7cf94cd30727957df7562b9f08d00e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9b7cf94cd30727957df7562b9f08d00e, codeobj_9b7cf94cd30727957df7562b9f08d00e, module_cryptography$hazmat$backends$openssl$rsa, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9b7cf94cd30727957df7562b9f08d00e = cache_frame_9b7cf94cd30727957df7562b9f08d00e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9b7cf94cd30727957df7562b9f08d00e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9b7cf94cd30727957df7562b9f08d00e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_backend );
        tmp_assattr_name_1 = par_backend;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__backend, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 335;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_rsa_cdata );
        tmp_assattr_name_2 = par_rsa_cdata;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__rsa_cdata, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 336;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_evp_pkey );
        tmp_assattr_name_3 = par_evp_pkey;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__evp_pkey, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 337;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__backend );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_9b7cf94cd30727957df7562b9f08d00e->m_frame.f_lineno = 339;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_new, &PyTuple_GET_ITEM( const_tuple_str_digest_ed7f195a5784878081b7f2b567a68557_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_source_name_9;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_10;
        PyObject *tmp_source_name_11;
        PyObject *tmp_source_name_12;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__backend );
        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__lib );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_RSA_get0_key );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__rsa_cdata );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 341;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_args_element_name_2 = var_n;
        CHECK_OBJECT( par_self );
        tmp_source_name_9 = par_self;
        tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__backend );
        if ( tmp_source_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 341;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_8 );
        if ( tmp_source_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 341;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_NULL );
        Py_DECREF( tmp_source_name_7 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 341;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_12 = par_self;
        tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__backend );
        if ( tmp_source_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 342;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_11 );
        if ( tmp_source_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 342;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_NULL );
        Py_DECREF( tmp_source_name_10 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 342;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_9b7cf94cd30727957df7562b9f08d00e->m_frame.f_lineno = 340;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_13;
        PyObject *tmp_source_name_14;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_15;
        PyObject *tmp_source_name_16;
        PyObject *tmp_source_name_17;
        CHECK_OBJECT( par_self );
        tmp_source_name_14 = par_self;
        tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__backend );
        if ( tmp_source_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_openssl_assert );
        Py_DECREF( tmp_source_name_13 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_subscribed_name_1 = var_n;
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 344;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_17 = par_self;
        tmp_source_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain__backend );
        if ( tmp_source_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 344;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_16 );
        if ( tmp_source_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 344;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_NULL );
        Py_DECREF( tmp_source_name_15 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 344;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 344;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_9b7cf94cd30727957df7562b9f08d00e->m_frame.f_lineno = 344;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_18;
        PyObject *tmp_source_name_19;
        PyObject *tmp_source_name_20;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_20 = par_self;
        tmp_source_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__backend );
        if ( tmp_source_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 345;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain__lib );
        Py_DECREF( tmp_source_name_19 );
        if ( tmp_source_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 345;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_BN_num_bits );
        Py_DECREF( tmp_source_name_18 );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 345;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_subscribed_name_2 = var_n;
        tmp_subscript_name_2 = const_int_0;
        tmp_args_element_name_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 345;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_9b7cf94cd30727957df7562b9f08d00e->m_frame.f_lineno = 345;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assattr_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assattr_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 345;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__key_size, tmp_assattr_name_4 );
        Py_DECREF( tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 345;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9b7cf94cd30727957df7562b9f08d00e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9b7cf94cd30727957df7562b9f08d00e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9b7cf94cd30727957df7562b9f08d00e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9b7cf94cd30727957df7562b9f08d00e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9b7cf94cd30727957df7562b9f08d00e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9b7cf94cd30727957df7562b9f08d00e,
        type_description_1,
        par_self,
        par_backend,
        par_rsa_cdata,
        par_evp_pkey,
        var_n
    );


    // Release cached frame.
    if ( frame_9b7cf94cd30727957df7562b9f08d00e == cache_frame_9b7cf94cd30727957df7562b9f08d00e )
    {
        Py_DECREF( frame_9b7cf94cd30727957df7562b9f08d00e );
    }
    cache_frame_9b7cf94cd30727957df7562b9f08d00e = NULL;

    assertFrameObject( frame_9b7cf94cd30727957df7562b9f08d00e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_15___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_evp_pkey );
    Py_DECREF( par_evp_pkey );
    par_evp_pkey = NULL;

    CHECK_OBJECT( (PyObject *)par_rsa_cdata );
    Py_DECREF( par_rsa_cdata );
    par_rsa_cdata = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

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

    Py_XDECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_evp_pkey );
    Py_DECREF( par_evp_pkey );
    par_evp_pkey = NULL;

    CHECK_OBJECT( (PyObject *)par_rsa_cdata );
    Py_DECREF( par_rsa_cdata );
    par_rsa_cdata = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_15___init__ );
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


static PyObject *impl_cryptography$hazmat$backends$openssl$rsa$$$function_16_signer( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_padding = python_pars[ 1 ];
    PyObject *par_algorithm = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_23b01085215828ad6bb32a88881dd6ad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_23b01085215828ad6bb32a88881dd6ad = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_23b01085215828ad6bb32a88881dd6ad, codeobj_23b01085215828ad6bb32a88881dd6ad, module_cryptography$hazmat$backends$openssl$rsa, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_23b01085215828ad6bb32a88881dd6ad = cache_frame_23b01085215828ad6bb32a88881dd6ad;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_23b01085215828ad6bb32a88881dd6ad );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_23b01085215828ad6bb32a88881dd6ad ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__warn_sign_verify_deprecated );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__warn_sign_verify_deprecated );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_warn_sign_verify_deprecated" );
            exception_tb = NULL;

            exception_lineno = 350;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_23b01085215828ad6bb32a88881dd6ad->m_frame.f_lineno = 350;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__check_not_prehashed );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_not_prehashed );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_check_not_prehashed" );
            exception_tb = NULL;

            exception_lineno = 351;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_algorithm );
        tmp_args_element_name_1 = par_algorithm;
        frame_23b01085215828ad6bb32a88881dd6ad->m_frame.f_lineno = 351;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 351;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__RSASignatureContext );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__RSASignatureContext );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_RSASignatureContext" );
            exception_tb = NULL;

            exception_lineno = 352;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__backend );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 352;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_args_element_name_3 = par_self;
        CHECK_OBJECT( par_padding );
        tmp_args_element_name_4 = par_padding;
        CHECK_OBJECT( par_algorithm );
        tmp_args_element_name_5 = par_algorithm;
        frame_23b01085215828ad6bb32a88881dd6ad->m_frame.f_lineno = 352;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_23b01085215828ad6bb32a88881dd6ad );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_23b01085215828ad6bb32a88881dd6ad );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_23b01085215828ad6bb32a88881dd6ad );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_23b01085215828ad6bb32a88881dd6ad, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_23b01085215828ad6bb32a88881dd6ad->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_23b01085215828ad6bb32a88881dd6ad, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_23b01085215828ad6bb32a88881dd6ad,
        type_description_1,
        par_self,
        par_padding,
        par_algorithm
    );


    // Release cached frame.
    if ( frame_23b01085215828ad6bb32a88881dd6ad == cache_frame_23b01085215828ad6bb32a88881dd6ad )
    {
        Py_DECREF( frame_23b01085215828ad6bb32a88881dd6ad );
    }
    cache_frame_23b01085215828ad6bb32a88881dd6ad = NULL;

    assertFrameObject( frame_23b01085215828ad6bb32a88881dd6ad );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_16_signer );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_16_signer );
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


static PyObject *impl_cryptography$hazmat$backends$openssl$rsa$$$function_17_decrypt( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_ciphertext = python_pars[ 1 ];
    PyObject *par_padding = python_pars[ 2 ];
    PyObject *var_key_size_bytes = NULL;
    struct Nuitka_FrameObject *frame_ef703c8520b743ff56ec8cfc2182316f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ef703c8520b743ff56ec8cfc2182316f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ef703c8520b743ff56ec8cfc2182316f, codeobj_ef703c8520b743ff56ec8cfc2182316f, module_cryptography$hazmat$backends$openssl$rsa, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ef703c8520b743ff56ec8cfc2182316f = cache_frame_ef703c8520b743ff56ec8cfc2182316f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ef703c8520b743ff56ec8cfc2182316f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ef703c8520b743ff56ec8cfc2182316f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_math );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_math );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "math" );
            exception_tb = NULL;

            exception_lineno = 355;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ceil );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 355;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_key_size );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 355;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_float_8_0;
        tmp_args_element_name_1 = BINARY_OPERATION_TRUEDIV( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 355;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_ef703c8520b743ff56ec8cfc2182316f->m_frame.f_lineno = 355;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_int_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 355;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = PyNumber_Int( tmp_int_arg_1 );
        Py_DECREF( tmp_int_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 355;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_key_size_bytes == NULL );
        var_key_size_bytes = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( var_key_size_bytes );
        tmp_compexpr_left_1 = var_key_size_bytes;
        CHECK_OBJECT( par_ciphertext );
        tmp_len_arg_1 = par_ciphertext;
        tmp_compexpr_right_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 356;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 356;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_6c44573c8d035e93ec74c18ee09caeff;
            frame_ef703c8520b743ff56ec8cfc2182316f->m_frame.f_lineno = 357;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 357;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__enc_dec_rsa );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__enc_dec_rsa );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_enc_dec_rsa" );
            exception_tb = NULL;

            exception_lineno = 359;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__backend );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 359;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_args_element_name_3 = par_self;
        CHECK_OBJECT( par_ciphertext );
        tmp_args_element_name_4 = par_ciphertext;
        CHECK_OBJECT( par_padding );
        tmp_args_element_name_5 = par_padding;
        frame_ef703c8520b743ff56ec8cfc2182316f->m_frame.f_lineno = 359;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 359;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef703c8520b743ff56ec8cfc2182316f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef703c8520b743ff56ec8cfc2182316f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef703c8520b743ff56ec8cfc2182316f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ef703c8520b743ff56ec8cfc2182316f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ef703c8520b743ff56ec8cfc2182316f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ef703c8520b743ff56ec8cfc2182316f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ef703c8520b743ff56ec8cfc2182316f,
        type_description_1,
        par_self,
        par_ciphertext,
        par_padding,
        var_key_size_bytes
    );


    // Release cached frame.
    if ( frame_ef703c8520b743ff56ec8cfc2182316f == cache_frame_ef703c8520b743ff56ec8cfc2182316f )
    {
        Py_DECREF( frame_ef703c8520b743ff56ec8cfc2182316f );
    }
    cache_frame_ef703c8520b743ff56ec8cfc2182316f = NULL;

    assertFrameObject( frame_ef703c8520b743ff56ec8cfc2182316f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_17_decrypt );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_ciphertext );
    Py_DECREF( par_ciphertext );
    par_ciphertext = NULL;

    CHECK_OBJECT( (PyObject *)var_key_size_bytes );
    Py_DECREF( var_key_size_bytes );
    var_key_size_bytes = NULL;

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

    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_ciphertext );
    Py_DECREF( par_ciphertext );
    par_ciphertext = NULL;

    Py_XDECREF( var_key_size_bytes );
    var_key_size_bytes = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_17_decrypt );
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


static PyObject *impl_cryptography$hazmat$backends$openssl$rsa$$$function_18_public_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_res = NULL;
    PyObject *var_ctx = NULL;
    PyObject *var_evp_pkey = NULL;
    struct Nuitka_FrameObject *frame_56620d6e312f596c1672d7d6b5a978d2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_56620d6e312f596c1672d7d6b5a978d2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_56620d6e312f596c1672d7d6b5a978d2, codeobj_56620d6e312f596c1672d7d6b5a978d2, module_cryptography$hazmat$backends$openssl$rsa, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_56620d6e312f596c1672d7d6b5a978d2 = cache_frame_56620d6e312f596c1672d7d6b5a978d2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_56620d6e312f596c1672d7d6b5a978d2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_56620d6e312f596c1672d7d6b5a978d2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__backend );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 362;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__lib );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 362;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_RSAPublicKey_dup );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 362;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__rsa_cdata );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 362;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_56620d6e312f596c1672d7d6b5a978d2->m_frame.f_lineno = 362;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 362;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_ctx == NULL );
        var_ctx = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__backend );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 363;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_openssl_assert );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 363;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_ctx );
        tmp_compexpr_left_1 = var_ctx;
        CHECK_OBJECT( par_self );
        tmp_source_name_9 = par_self;
        tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__backend );
        if ( tmp_source_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 363;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_8 );
        if ( tmp_source_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 363;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_NULL );
        Py_DECREF( tmp_source_name_7 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 363;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 363;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_56620d6e312f596c1672d7d6b5a978d2->m_frame.f_lineno = 363;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 363;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_10;
        PyObject *tmp_source_name_11;
        PyObject *tmp_source_name_12;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_13;
        PyObject *tmp_source_name_14;
        PyObject *tmp_source_name_15;
        CHECK_OBJECT( par_self );
        tmp_source_name_12 = par_self;
        tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__backend );
        if ( tmp_source_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_11 );
        if ( tmp_source_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_gc );
        Py_DECREF( tmp_source_name_10 );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_ctx );
        tmp_args_element_name_3 = var_ctx;
        CHECK_OBJECT( par_self );
        tmp_source_name_15 = par_self;
        tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain__backend );
        if ( tmp_source_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 364;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__lib );
        Py_DECREF( tmp_source_name_14 );
        if ( tmp_source_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 364;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_RSA_free );
        Py_DECREF( tmp_source_name_13 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 364;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_56620d6e312f596c1672d7d6b5a978d2->m_frame.f_lineno = 364;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ctx;
            assert( old != NULL );
            var_ctx = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_16;
        PyObject *tmp_source_name_17;
        PyObject *tmp_source_name_18;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_19;
        PyObject *tmp_source_name_20;
        PyObject *tmp_source_name_21;
        CHECK_OBJECT( par_self );
        tmp_source_name_18 = par_self;
        tmp_source_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain__backend );
        if ( tmp_source_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 365;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain__lib );
        Py_DECREF( tmp_source_name_17 );
        if ( tmp_source_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 365;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_RSA_blinding_on );
        Py_DECREF( tmp_source_name_16 );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 365;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_ctx );
        tmp_args_element_name_5 = var_ctx;
        CHECK_OBJECT( par_self );
        tmp_source_name_21 = par_self;
        tmp_source_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain__backend );
        if ( tmp_source_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 365;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_20 );
        if ( tmp_source_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 365;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_NULL );
        Py_DECREF( tmp_source_name_19 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 365;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_56620d6e312f596c1672d7d6b5a978d2->m_frame.f_lineno = 365;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 365;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_res == NULL );
        var_res = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_22;
        PyObject *tmp_source_name_23;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_23 = par_self;
        tmp_source_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain__backend );
        if ( tmp_source_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 366;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_openssl_assert );
        Py_DECREF( tmp_source_name_22 );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 366;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_res );
        tmp_compexpr_left_2 = var_res;
        tmp_compexpr_right_2 = const_int_pos_1;
        tmp_args_element_name_7 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 366;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_56620d6e312f596c1672d7d6b5a978d2->m_frame.f_lineno = 366;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 366;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_24;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT( par_self );
        tmp_source_name_24 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain__backend );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_ctx );
        tmp_args_element_name_8 = var_ctx;
        frame_56620d6e312f596c1672d7d6b5a978d2->m_frame.f_lineno = 367;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__rsa_cdata_to_evp_pkey, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_evp_pkey == NULL );
        var_evp_pkey = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_source_name_25;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__RSAPublicKey );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__RSAPublicKey );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_RSAPublicKey" );
            exception_tb = NULL;

            exception_lineno = 368;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_25 = par_self;
        tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain__backend );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 368;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_ctx );
        tmp_args_element_name_10 = var_ctx;
        CHECK_OBJECT( var_evp_pkey );
        tmp_args_element_name_11 = var_evp_pkey;
        frame_56620d6e312f596c1672d7d6b5a978d2->m_frame.f_lineno = 368;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 368;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_56620d6e312f596c1672d7d6b5a978d2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_56620d6e312f596c1672d7d6b5a978d2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_56620d6e312f596c1672d7d6b5a978d2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_56620d6e312f596c1672d7d6b5a978d2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_56620d6e312f596c1672d7d6b5a978d2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_56620d6e312f596c1672d7d6b5a978d2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_56620d6e312f596c1672d7d6b5a978d2,
        type_description_1,
        par_self,
        var_res,
        var_ctx,
        var_evp_pkey
    );


    // Release cached frame.
    if ( frame_56620d6e312f596c1672d7d6b5a978d2 == cache_frame_56620d6e312f596c1672d7d6b5a978d2 )
    {
        Py_DECREF( frame_56620d6e312f596c1672d7d6b5a978d2 );
    }
    cache_frame_56620d6e312f596c1672d7d6b5a978d2 = NULL;

    assertFrameObject( frame_56620d6e312f596c1672d7d6b5a978d2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_18_public_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_ctx );
    Py_DECREF( var_ctx );
    var_ctx = NULL;

    CHECK_OBJECT( (PyObject *)var_evp_pkey );
    Py_DECREF( var_evp_pkey );
    var_evp_pkey = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_ctx );
    var_ctx = NULL;

    Py_XDECREF( var_evp_pkey );
    var_evp_pkey = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_18_public_key );
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


static PyObject *impl_cryptography$hazmat$backends$openssl$rsa$$$function_19_private_numbers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_dmq1 = NULL;
    PyObject *var_e = NULL;
    PyObject *var_d = NULL;
    PyObject *var_dmp1 = NULL;
    PyObject *var_iqmp = NULL;
    PyObject *var_n = NULL;
    PyObject *var_q = NULL;
    PyObject *var_p = NULL;
    struct Nuitka_FrameObject *frame_0cd773cf8ff26a5cef5a74a736f07148;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_0cd773cf8ff26a5cef5a74a736f07148 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0cd773cf8ff26a5cef5a74a736f07148, codeobj_0cd773cf8ff26a5cef5a74a736f07148, module_cryptography$hazmat$backends$openssl$rsa, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0cd773cf8ff26a5cef5a74a736f07148 = cache_frame_0cd773cf8ff26a5cef5a74a736f07148;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0cd773cf8ff26a5cef5a74a736f07148 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0cd773cf8ff26a5cef5a74a736f07148 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__backend );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 371;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 371;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 371;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_new, &PyTuple_GET_ITEM( const_tuple_str_digest_ed7f195a5784878081b7f2b567a68557_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 371;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__backend );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 372;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_new, &PyTuple_GET_ITEM( const_tuple_str_digest_ed7f195a5784878081b7f2b567a68557_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_e == NULL );
        var_e = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__backend );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 373;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 373;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 373;
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_new, &PyTuple_GET_ITEM( const_tuple_str_digest_ed7f195a5784878081b7f2b567a68557_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 373;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_d == NULL );
        var_d = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__backend );
        if ( tmp_source_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 374;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_7 );
        if ( tmp_called_instance_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 374;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 374;
        tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_new, &PyTuple_GET_ITEM( const_tuple_str_digest_ed7f195a5784878081b7f2b567a68557_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_4 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 374;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_p == NULL );
        var_p = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_source_name_9;
        PyObject *tmp_source_name_10;
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__backend );
        if ( tmp_source_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 375;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_9 );
        if ( tmp_called_instance_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 375;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 375;
        tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_new, &PyTuple_GET_ITEM( const_tuple_str_digest_ed7f195a5784878081b7f2b567a68557_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_5 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 375;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_q == NULL );
        var_q = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_source_name_11;
        PyObject *tmp_source_name_12;
        CHECK_OBJECT( par_self );
        tmp_source_name_12 = par_self;
        tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__backend );
        if ( tmp_source_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_11 );
        if ( tmp_called_instance_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 376;
        tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_new, &PyTuple_GET_ITEM( const_tuple_str_digest_ed7f195a5784878081b7f2b567a68557_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_6 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_dmp1 == NULL );
        var_dmp1 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_source_name_13;
        PyObject *tmp_source_name_14;
        CHECK_OBJECT( par_self );
        tmp_source_name_14 = par_self;
        tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__backend );
        if ( tmp_source_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_13 );
        if ( tmp_called_instance_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 377;
        tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_new, &PyTuple_GET_ITEM( const_tuple_str_digest_ed7f195a5784878081b7f2b567a68557_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_7 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_dmq1 == NULL );
        var_dmq1 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_source_name_15;
        PyObject *tmp_source_name_16;
        CHECK_OBJECT( par_self );
        tmp_source_name_16 = par_self;
        tmp_source_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__backend );
        if ( tmp_source_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_8 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_15 );
        if ( tmp_called_instance_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 378;
        tmp_assign_source_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_new, &PyTuple_GET_ITEM( const_tuple_str_digest_ed7f195a5784878081b7f2b567a68557_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_8 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_iqmp == NULL );
        var_iqmp = tmp_assign_source_8;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_17;
        PyObject *tmp_source_name_18;
        PyObject *tmp_source_name_19;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_20;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_19 = par_self;
        tmp_source_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain__backend );
        if ( tmp_source_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 379;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain__lib );
        Py_DECREF( tmp_source_name_18 );
        if ( tmp_source_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 379;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_RSA_get0_key );
        Py_DECREF( tmp_source_name_17 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 379;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_20 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__rsa_cdata );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 379;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_args_element_name_2 = var_n;
        CHECK_OBJECT( var_e );
        tmp_args_element_name_3 = var_e;
        CHECK_OBJECT( var_d );
        tmp_args_element_name_4 = var_d;
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 379;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 379;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_21;
        PyObject *tmp_source_name_22;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_23;
        PyObject *tmp_source_name_24;
        PyObject *tmp_source_name_25;
        CHECK_OBJECT( par_self );
        tmp_source_name_22 = par_self;
        tmp_source_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain__backend );
        if ( tmp_source_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 380;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_openssl_assert );
        Py_DECREF( tmp_source_name_21 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 380;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_subscribed_name_1 = var_n;
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 380;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_25 = par_self;
        tmp_source_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain__backend );
        if ( tmp_source_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 380;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_24 );
        if ( tmp_source_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 380;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_NULL );
        Py_DECREF( tmp_source_name_23 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 380;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 380;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 380;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 380;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_26;
        PyObject *tmp_source_name_27;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_source_name_28;
        PyObject *tmp_source_name_29;
        PyObject *tmp_source_name_30;
        CHECK_OBJECT( par_self );
        tmp_source_name_27 = par_self;
        tmp_source_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain__backend );
        if ( tmp_source_name_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 381;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_openssl_assert );
        Py_DECREF( tmp_source_name_26 );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 381;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_e );
        tmp_subscribed_name_2 = var_e;
        tmp_subscript_name_2 = const_int_0;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 381;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_30 = par_self;
        tmp_source_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain__backend );
        if ( tmp_source_name_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 381;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_29 );
        if ( tmp_source_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 381;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_NULL );
        Py_DECREF( tmp_source_name_28 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 381;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 381;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 381;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 381;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_31;
        PyObject *tmp_source_name_32;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_source_name_33;
        PyObject *tmp_source_name_34;
        PyObject *tmp_source_name_35;
        CHECK_OBJECT( par_self );
        tmp_source_name_32 = par_self;
        tmp_source_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain__backend );
        if ( tmp_source_name_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 382;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_openssl_assert );
        Py_DECREF( tmp_source_name_31 );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 382;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_d );
        tmp_subscribed_name_3 = var_d;
        tmp_subscript_name_3 = const_int_0;
        tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 382;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_35 = par_self;
        tmp_source_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain__backend );
        if ( tmp_source_name_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 382;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_34 );
        if ( tmp_source_name_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 382;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_NULL );
        Py_DECREF( tmp_source_name_33 );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 382;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_7 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 382;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 382;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 382;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_4 );
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_36;
        PyObject *tmp_source_name_37;
        PyObject *tmp_source_name_38;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_source_name_39;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        CHECK_OBJECT( par_self );
        tmp_source_name_38 = par_self;
        tmp_source_name_37 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain__backend );
        if ( tmp_source_name_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 383;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain__lib );
        Py_DECREF( tmp_source_name_37 );
        if ( tmp_source_name_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 383;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_RSA_get0_factors );
        Py_DECREF( tmp_source_name_36 );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 383;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_39 = par_self;
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain__rsa_cdata );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 383;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_p );
        tmp_args_element_name_9 = var_p;
        CHECK_OBJECT( var_q );
        tmp_args_element_name_10 = var_q;
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 383;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_call_result_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 383;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_5 );
    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_40;
        PyObject *tmp_source_name_41;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_source_name_42;
        PyObject *tmp_source_name_43;
        PyObject *tmp_source_name_44;
        CHECK_OBJECT( par_self );
        tmp_source_name_41 = par_self;
        tmp_source_name_40 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain__backend );
        if ( tmp_source_name_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 384;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_openssl_assert );
        Py_DECREF( tmp_source_name_40 );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 384;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_p );
        tmp_subscribed_name_4 = var_p;
        tmp_subscript_name_4 = const_int_0;
        tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 384;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_44 = par_self;
        tmp_source_name_43 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain__backend );
        if ( tmp_source_name_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_compexpr_left_4 );

            exception_lineno = 384;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_42 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_43 );
        if ( tmp_source_name_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_compexpr_left_4 );

            exception_lineno = 384;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_NULL );
        Py_DECREF( tmp_source_name_42 );
        if ( tmp_compexpr_right_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_compexpr_left_4 );

            exception_lineno = 384;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_11 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 384;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 384;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_call_result_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 384;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_6 );
    }
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_45;
        PyObject *tmp_source_name_46;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_source_name_47;
        PyObject *tmp_source_name_48;
        PyObject *tmp_source_name_49;
        CHECK_OBJECT( par_self );
        tmp_source_name_46 = par_self;
        tmp_source_name_45 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain__backend );
        if ( tmp_source_name_45 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 385;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_openssl_assert );
        Py_DECREF( tmp_source_name_45 );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 385;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_q );
        tmp_subscribed_name_5 = var_q;
        tmp_subscript_name_5 = const_int_0;
        tmp_compexpr_left_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 385;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_49 = par_self;
        tmp_source_name_48 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain__backend );
        if ( tmp_source_name_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_compexpr_left_5 );

            exception_lineno = 385;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_47 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_48 );
        if ( tmp_source_name_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_compexpr_left_5 );

            exception_lineno = 385;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_NULL );
        Py_DECREF( tmp_source_name_47 );
        if ( tmp_compexpr_right_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_compexpr_left_5 );

            exception_lineno = 385;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_12 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        Py_DECREF( tmp_compexpr_right_5 );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 385;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 385;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_call_result_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 385;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_7 );
    }
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_50;
        PyObject *tmp_source_name_51;
        PyObject *tmp_source_name_52;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_source_name_53;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        CHECK_OBJECT( par_self );
        tmp_source_name_52 = par_self;
        tmp_source_name_51 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain__backend );
        if ( tmp_source_name_51 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_50 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain__lib );
        Py_DECREF( tmp_source_name_51 );
        if ( tmp_source_name_50 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_RSA_get0_crt_params );
        Py_DECREF( tmp_source_name_50 );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_53 = par_self;
        tmp_args_element_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain__rsa_cdata );
        if ( tmp_args_element_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );

            exception_lineno = 387;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_dmp1 );
        tmp_args_element_name_14 = var_dmp1;
        CHECK_OBJECT( var_dmq1 );
        tmp_args_element_name_15 = var_dmq1;
        CHECK_OBJECT( var_iqmp );
        tmp_args_element_name_16 = var_iqmp;
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 386;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16 };
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_13 );
        if ( tmp_call_result_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_8 );
    }
    {
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_54;
        PyObject *tmp_source_name_55;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_source_name_56;
        PyObject *tmp_source_name_57;
        PyObject *tmp_source_name_58;
        CHECK_OBJECT( par_self );
        tmp_source_name_55 = par_self;
        tmp_source_name_54 = LOOKUP_ATTRIBUTE( tmp_source_name_55, const_str_plain__backend );
        if ( tmp_source_name_54 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 389;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_54, const_str_plain_openssl_assert );
        Py_DECREF( tmp_source_name_54 );
        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 389;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_dmp1 );
        tmp_subscribed_name_6 = var_dmp1;
        tmp_subscript_name_6 = const_int_0;
        tmp_compexpr_left_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 0 );
        if ( tmp_compexpr_left_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );

            exception_lineno = 389;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_58 = par_self;
        tmp_source_name_57 = LOOKUP_ATTRIBUTE( tmp_source_name_58, const_str_plain__backend );
        if ( tmp_source_name_57 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_compexpr_left_6 );

            exception_lineno = 389;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_56 = LOOKUP_ATTRIBUTE( tmp_source_name_57, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_57 );
        if ( tmp_source_name_56 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_compexpr_left_6 );

            exception_lineno = 389;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_56, const_str_plain_NULL );
        Py_DECREF( tmp_source_name_56 );
        if ( tmp_compexpr_right_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_compexpr_left_6 );

            exception_lineno = 389;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_17 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_left_6 );
        Py_DECREF( tmp_compexpr_right_6 );
        if ( tmp_args_element_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );

            exception_lineno = 389;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 389;
        {
            PyObject *call_args[] = { tmp_args_element_name_17 };
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_17 );
        if ( tmp_call_result_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 389;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_9 );
    }
    {
        PyObject *tmp_called_name_10;
        PyObject *tmp_source_name_59;
        PyObject *tmp_source_name_60;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_source_name_61;
        PyObject *tmp_source_name_62;
        PyObject *tmp_source_name_63;
        CHECK_OBJECT( par_self );
        tmp_source_name_60 = par_self;
        tmp_source_name_59 = LOOKUP_ATTRIBUTE( tmp_source_name_60, const_str_plain__backend );
        if ( tmp_source_name_59 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_59, const_str_plain_openssl_assert );
        Py_DECREF( tmp_source_name_59 );
        if ( tmp_called_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_dmq1 );
        tmp_subscribed_name_7 = var_dmq1;
        tmp_subscript_name_7 = const_int_0;
        tmp_compexpr_left_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_7, tmp_subscript_name_7, 0 );
        if ( tmp_compexpr_left_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_10 );

            exception_lineno = 390;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_63 = par_self;
        tmp_source_name_62 = LOOKUP_ATTRIBUTE( tmp_source_name_63, const_str_plain__backend );
        if ( tmp_source_name_62 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_compexpr_left_7 );

            exception_lineno = 390;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_61 = LOOKUP_ATTRIBUTE( tmp_source_name_62, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_62 );
        if ( tmp_source_name_61 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_compexpr_left_7 );

            exception_lineno = 390;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_7 = LOOKUP_ATTRIBUTE( tmp_source_name_61, const_str_plain_NULL );
        Py_DECREF( tmp_source_name_61 );
        if ( tmp_compexpr_right_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_compexpr_left_7 );

            exception_lineno = 390;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_18 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        Py_DECREF( tmp_compexpr_left_7 );
        Py_DECREF( tmp_compexpr_right_7 );
        if ( tmp_args_element_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_10 );

            exception_lineno = 390;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 390;
        {
            PyObject *call_args[] = { tmp_args_element_name_18 };
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_18 );
        if ( tmp_call_result_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_10 );
    }
    {
        PyObject *tmp_called_name_11;
        PyObject *tmp_source_name_64;
        PyObject *tmp_source_name_65;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_source_name_66;
        PyObject *tmp_source_name_67;
        PyObject *tmp_source_name_68;
        CHECK_OBJECT( par_self );
        tmp_source_name_65 = par_self;
        tmp_source_name_64 = LOOKUP_ATTRIBUTE( tmp_source_name_65, const_str_plain__backend );
        if ( tmp_source_name_64 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 391;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_64, const_str_plain_openssl_assert );
        Py_DECREF( tmp_source_name_64 );
        if ( tmp_called_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 391;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_iqmp );
        tmp_subscribed_name_8 = var_iqmp;
        tmp_subscript_name_8 = const_int_0;
        tmp_compexpr_left_8 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_8, tmp_subscript_name_8, 0 );
        if ( tmp_compexpr_left_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_11 );

            exception_lineno = 391;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_68 = par_self;
        tmp_source_name_67 = LOOKUP_ATTRIBUTE( tmp_source_name_68, const_str_plain__backend );
        if ( tmp_source_name_67 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_compexpr_left_8 );

            exception_lineno = 391;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_66 = LOOKUP_ATTRIBUTE( tmp_source_name_67, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_67 );
        if ( tmp_source_name_66 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_compexpr_left_8 );

            exception_lineno = 391;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_8 = LOOKUP_ATTRIBUTE( tmp_source_name_66, const_str_plain_NULL );
        Py_DECREF( tmp_source_name_66 );
        if ( tmp_compexpr_right_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_compexpr_left_8 );

            exception_lineno = 391;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_19 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        Py_DECREF( tmp_compexpr_left_8 );
        Py_DECREF( tmp_compexpr_right_8 );
        if ( tmp_args_element_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_11 );

            exception_lineno = 391;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 391;
        {
            PyObject *call_args[] = { tmp_args_element_name_19 };
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_args_element_name_19 );
        if ( tmp_call_result_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 391;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_11 );
    }
    {
        PyObject *tmp_called_name_12;
        PyObject *tmp_source_name_69;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_name_13;
        PyObject *tmp_source_name_70;
        PyObject *tmp_source_name_71;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_called_name_14;
        PyObject *tmp_source_name_72;
        PyObject *tmp_source_name_73;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_subscribed_name_10;
        PyObject *tmp_subscript_name_10;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_called_name_15;
        PyObject *tmp_source_name_74;
        PyObject *tmp_source_name_75;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_subscribed_name_11;
        PyObject *tmp_subscript_name_11;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_called_name_16;
        PyObject *tmp_source_name_76;
        PyObject *tmp_source_name_77;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_subscribed_name_12;
        PyObject *tmp_subscript_name_12;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_called_name_17;
        PyObject *tmp_source_name_78;
        PyObject *tmp_source_name_79;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_subscribed_name_13;
        PyObject *tmp_subscript_name_13;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_called_name_18;
        PyObject *tmp_source_name_80;
        PyObject *tmp_source_name_81;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_subscribed_name_14;
        PyObject *tmp_subscript_name_14;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_called_name_19;
        PyObject *tmp_source_name_82;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_called_name_20;
        PyObject *tmp_source_name_83;
        PyObject *tmp_source_name_84;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_subscribed_name_15;
        PyObject *tmp_subscript_name_15;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_called_name_21;
        PyObject *tmp_source_name_85;
        PyObject *tmp_source_name_86;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_subscribed_name_16;
        PyObject *tmp_subscript_name_16;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_rsa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rsa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "rsa" );
            exception_tb = NULL;

            exception_lineno = 392;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_69 = tmp_mvar_value_1;
        tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_69, const_str_plain_RSAPrivateNumbers );
        if ( tmp_called_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 392;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_71 = par_self;
        tmp_source_name_70 = LOOKUP_ATTRIBUTE( tmp_source_name_71, const_str_plain__backend );
        if ( tmp_source_name_70 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );

            exception_lineno = 393;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_70, const_str_plain__bn_to_int );
        Py_DECREF( tmp_source_name_70 );
        if ( tmp_called_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );

            exception_lineno = 393;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_p );
        tmp_subscribed_name_9 = var_p;
        tmp_subscript_name_9 = const_int_0;
        tmp_args_element_name_20 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_9, tmp_subscript_name_9, 0 );
        if ( tmp_args_element_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_called_name_13 );

            exception_lineno = 393;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 393;
        {
            PyObject *call_args[] = { tmp_args_element_name_20 };
            tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_20 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );

            exception_lineno = 393;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_p;
        tmp_kw_name_1 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_self );
        tmp_source_name_73 = par_self;
        tmp_source_name_72 = LOOKUP_ATTRIBUTE( tmp_source_name_73, const_str_plain__backend );
        if ( tmp_source_name_72 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 394;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_72, const_str_plain__bn_to_int );
        Py_DECREF( tmp_source_name_72 );
        if ( tmp_called_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 394;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_q );
        tmp_subscribed_name_10 = var_q;
        tmp_subscript_name_10 = const_int_0;
        tmp_args_element_name_21 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_10, tmp_subscript_name_10, 0 );
        if ( tmp_args_element_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_14 );

            exception_lineno = 394;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 394;
        {
            PyObject *call_args[] = { tmp_args_element_name_21 };
            tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
        }

        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_args_element_name_21 );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 394;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = const_str_plain_q;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_self );
        tmp_source_name_75 = par_self;
        tmp_source_name_74 = LOOKUP_ATTRIBUTE( tmp_source_name_75, const_str_plain__backend );
        if ( tmp_source_name_74 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 395;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_74, const_str_plain__bn_to_int );
        Py_DECREF( tmp_source_name_74 );
        if ( tmp_called_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 395;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_d );
        tmp_subscribed_name_11 = var_d;
        tmp_subscript_name_11 = const_int_0;
        tmp_args_element_name_22 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_11, tmp_subscript_name_11, 0 );
        if ( tmp_args_element_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_15 );

            exception_lineno = 395;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 395;
        {
            PyObject *call_args[] = { tmp_args_element_name_22 };
            tmp_dict_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
        }

        Py_DECREF( tmp_called_name_15 );
        Py_DECREF( tmp_args_element_name_22 );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 395;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_3 = const_str_plain_d;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_self );
        tmp_source_name_77 = par_self;
        tmp_source_name_76 = LOOKUP_ATTRIBUTE( tmp_source_name_77, const_str_plain__backend );
        if ( tmp_source_name_76 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 396;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_76, const_str_plain__bn_to_int );
        Py_DECREF( tmp_source_name_76 );
        if ( tmp_called_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 396;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_dmp1 );
        tmp_subscribed_name_12 = var_dmp1;
        tmp_subscript_name_12 = const_int_0;
        tmp_args_element_name_23 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_12, tmp_subscript_name_12, 0 );
        if ( tmp_args_element_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_16 );

            exception_lineno = 396;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 396;
        {
            PyObject *call_args[] = { tmp_args_element_name_23 };
            tmp_dict_value_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
        }

        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_args_element_name_23 );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 396;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_4 = const_str_plain_dmp1;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_self );
        tmp_source_name_79 = par_self;
        tmp_source_name_78 = LOOKUP_ATTRIBUTE( tmp_source_name_79, const_str_plain__backend );
        if ( tmp_source_name_78 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 397;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_78, const_str_plain__bn_to_int );
        Py_DECREF( tmp_source_name_78 );
        if ( tmp_called_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 397;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_dmq1 );
        tmp_subscribed_name_13 = var_dmq1;
        tmp_subscript_name_13 = const_int_0;
        tmp_args_element_name_24 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_13, tmp_subscript_name_13, 0 );
        if ( tmp_args_element_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_17 );

            exception_lineno = 397;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 397;
        {
            PyObject *call_args[] = { tmp_args_element_name_24 };
            tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
        }

        Py_DECREF( tmp_called_name_17 );
        Py_DECREF( tmp_args_element_name_24 );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 397;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_5 = const_str_plain_dmq1;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_self );
        tmp_source_name_81 = par_self;
        tmp_source_name_80 = LOOKUP_ATTRIBUTE( tmp_source_name_81, const_str_plain__backend );
        if ( tmp_source_name_80 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 398;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_80, const_str_plain__bn_to_int );
        Py_DECREF( tmp_source_name_80 );
        if ( tmp_called_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 398;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_iqmp );
        tmp_subscribed_name_14 = var_iqmp;
        tmp_subscript_name_14 = const_int_0;
        tmp_args_element_name_25 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_14, tmp_subscript_name_14, 0 );
        if ( tmp_args_element_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_18 );

            exception_lineno = 398;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 398;
        {
            PyObject *call_args[] = { tmp_args_element_name_25 };
            tmp_dict_value_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
        }

        Py_DECREF( tmp_called_name_18 );
        Py_DECREF( tmp_args_element_name_25 );
        if ( tmp_dict_value_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 398;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_6 = const_str_plain_iqmp;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_rsa );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rsa );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "rsa" );
            exception_tb = NULL;

            exception_lineno = 399;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_82 = tmp_mvar_value_2;
        tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_82, const_str_plain_RSAPublicNumbers );
        if ( tmp_called_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 399;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_84 = par_self;
        tmp_source_name_83 = LOOKUP_ATTRIBUTE( tmp_source_name_84, const_str_plain__backend );
        if ( tmp_source_name_83 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_19 );

            exception_lineno = 400;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_83, const_str_plain__bn_to_int );
        Py_DECREF( tmp_source_name_83 );
        if ( tmp_called_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_19 );

            exception_lineno = 400;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_e );
        tmp_subscribed_name_15 = var_e;
        tmp_subscript_name_15 = const_int_0;
        tmp_args_element_name_26 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_15, tmp_subscript_name_15, 0 );
        if ( tmp_args_element_name_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_19 );
            Py_DECREF( tmp_called_name_20 );

            exception_lineno = 400;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 400;
        {
            PyObject *call_args[] = { tmp_args_element_name_26 };
            tmp_dict_value_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
        }

        Py_DECREF( tmp_called_name_20 );
        Py_DECREF( tmp_args_element_name_26 );
        if ( tmp_dict_value_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_19 );

            exception_lineno = 400;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_8 = const_str_plain_e;
        tmp_kw_name_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_8, tmp_dict_value_8 );
        Py_DECREF( tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_self );
        tmp_source_name_86 = par_self;
        tmp_source_name_85 = LOOKUP_ATTRIBUTE( tmp_source_name_86, const_str_plain__backend );
        if ( tmp_source_name_85 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_19 );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 401;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_85, const_str_plain__bn_to_int );
        Py_DECREF( tmp_source_name_85 );
        if ( tmp_called_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_19 );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 401;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_subscribed_name_16 = var_n;
        tmp_subscript_name_16 = const_int_0;
        tmp_args_element_name_27 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_16, tmp_subscript_name_16, 0 );
        if ( tmp_args_element_name_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_19 );
            Py_DECREF( tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_21 );

            exception_lineno = 401;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 401;
        {
            PyObject *call_args[] = { tmp_args_element_name_27 };
            tmp_dict_value_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
        }

        Py_DECREF( tmp_called_name_21 );
        Py_DECREF( tmp_args_element_name_27 );
        if ( tmp_dict_value_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_19 );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 401;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_9 = const_str_plain_n;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_9, tmp_dict_value_9 );
        Py_DECREF( tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 399;
        tmp_dict_value_7 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_19, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_dict_value_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 399;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_7 = const_str_plain_public_numbers;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame.f_lineno = 392;
        tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_12, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 392;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0cd773cf8ff26a5cef5a74a736f07148 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0cd773cf8ff26a5cef5a74a736f07148 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0cd773cf8ff26a5cef5a74a736f07148 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0cd773cf8ff26a5cef5a74a736f07148, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0cd773cf8ff26a5cef5a74a736f07148->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0cd773cf8ff26a5cef5a74a736f07148, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0cd773cf8ff26a5cef5a74a736f07148,
        type_description_1,
        par_self,
        var_dmq1,
        var_e,
        var_d,
        var_dmp1,
        var_iqmp,
        var_n,
        var_q,
        var_p
    );


    // Release cached frame.
    if ( frame_0cd773cf8ff26a5cef5a74a736f07148 == cache_frame_0cd773cf8ff26a5cef5a74a736f07148 )
    {
        Py_DECREF( frame_0cd773cf8ff26a5cef5a74a736f07148 );
    }
    cache_frame_0cd773cf8ff26a5cef5a74a736f07148 = NULL;

    assertFrameObject( frame_0cd773cf8ff26a5cef5a74a736f07148 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_19_private_numbers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_dmq1 );
    Py_DECREF( var_dmq1 );
    var_dmq1 = NULL;

    CHECK_OBJECT( (PyObject *)var_e );
    Py_DECREF( var_e );
    var_e = NULL;

    CHECK_OBJECT( (PyObject *)var_d );
    Py_DECREF( var_d );
    var_d = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_dmp1 );
    Py_DECREF( var_dmp1 );
    var_dmp1 = NULL;

    CHECK_OBJECT( (PyObject *)var_iqmp );
    Py_DECREF( var_iqmp );
    var_iqmp = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_q );
    Py_DECREF( var_q );
    var_q = NULL;

    CHECK_OBJECT( (PyObject *)var_p );
    Py_DECREF( var_p );
    var_p = NULL;

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

    Py_XDECREF( var_dmq1 );
    var_dmq1 = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_dmp1 );
    var_dmp1 = NULL;

    Py_XDECREF( var_iqmp );
    var_iqmp = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_q );
    var_q = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_19_private_numbers );
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


static PyObject *impl_cryptography$hazmat$backends$openssl$rsa$$$function_20_private_bytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_encoding = python_pars[ 1 ];
    PyObject *par_format = python_pars[ 2 ];
    PyObject *par_encryption_algorithm = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_908dcab9570c65f5d9f8e16a268a3269;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_908dcab9570c65f5d9f8e16a268a3269 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_908dcab9570c65f5d9f8e16a268a3269, codeobj_908dcab9570c65f5d9f8e16a268a3269, module_cryptography$hazmat$backends$openssl$rsa, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_908dcab9570c65f5d9f8e16a268a3269 = cache_frame_908dcab9570c65f5d9f8e16a268a3269;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_908dcab9570c65f5d9f8e16a268a3269 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_908dcab9570c65f5d9f8e16a268a3269 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__backend );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__private_key_bytes );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_encoding );
        tmp_args_element_name_1 = par_encoding;
        CHECK_OBJECT( par_format );
        tmp_args_element_name_2 = par_format;
        CHECK_OBJECT( par_encryption_algorithm );
        tmp_args_element_name_3 = par_encryption_algorithm;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__evp_pkey );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 410;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__rsa_cdata );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 411;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_908dcab9570c65f5d9f8e16a268a3269->m_frame.f_lineno = 406;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_908dcab9570c65f5d9f8e16a268a3269 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_908dcab9570c65f5d9f8e16a268a3269 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_908dcab9570c65f5d9f8e16a268a3269 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_908dcab9570c65f5d9f8e16a268a3269, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_908dcab9570c65f5d9f8e16a268a3269->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_908dcab9570c65f5d9f8e16a268a3269, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_908dcab9570c65f5d9f8e16a268a3269,
        type_description_1,
        par_self,
        par_encoding,
        par_format,
        par_encryption_algorithm
    );


    // Release cached frame.
    if ( frame_908dcab9570c65f5d9f8e16a268a3269 == cache_frame_908dcab9570c65f5d9f8e16a268a3269 )
    {
        Py_DECREF( frame_908dcab9570c65f5d9f8e16a268a3269 );
    }
    cache_frame_908dcab9570c65f5d9f8e16a268a3269 = NULL;

    assertFrameObject( frame_908dcab9570c65f5d9f8e16a268a3269 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_20_private_bytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_encryption_algorithm );
    Py_DECREF( par_encryption_algorithm );
    par_encryption_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

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

    CHECK_OBJECT( (PyObject *)par_encryption_algorithm );
    Py_DECREF( par_encryption_algorithm );
    par_encryption_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_20_private_bytes );
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


static PyObject *impl_cryptography$hazmat$backends$openssl$rsa$$$function_21_sign( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *par_padding = python_pars[ 2 ];
    PyObject *par_algorithm = python_pars[ 3 ];
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_db3ca06f8fed18a3c5fa9eff73e0b85d;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_db3ca06f8fed18a3c5fa9eff73e0b85d = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_db3ca06f8fed18a3c5fa9eff73e0b85d, codeobj_db3ca06f8fed18a3c5fa9eff73e0b85d, module_cryptography$hazmat$backends$openssl$rsa, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_db3ca06f8fed18a3c5fa9eff73e0b85d = cache_frame_db3ca06f8fed18a3c5fa9eff73e0b85d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_db3ca06f8fed18a3c5fa9eff73e0b85d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_db3ca06f8fed18a3c5fa9eff73e0b85d ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__calculate_digest_and_algorithm );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__calculate_digest_and_algorithm );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_calculate_digest_and_algorithm" );
            exception_tb = NULL;

            exception_lineno = 415;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__backend );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_data );
        tmp_args_element_name_2 = par_data;
        CHECK_OBJECT( par_algorithm );
        tmp_args_element_name_3 = par_algorithm;
        frame_db3ca06f8fed18a3c5fa9eff73e0b85d->m_frame.f_lineno = 415;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 415;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 415;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
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


            type_description_1 = "oooo";
            exception_lineno = 415;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


            type_description_1 = "oooo";
            exception_lineno = 415;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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
                    exception_lineno = 415;
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

            type_description_1 = "oooo";
            exception_lineno = 415;
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
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_data;
            assert( old != NULL );
            par_data = tmp_assign_source_4;
            Py_INCREF( par_data );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_algorithm;
            assert( old != NULL );
            par_algorithm = tmp_assign_source_5;
            Py_INCREF( par_algorithm );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__rsa_sig_sign );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__rsa_sig_sign );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_rsa_sig_sign" );
            exception_tb = NULL;

            exception_lineno = 418;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__backend );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_padding );
        tmp_args_element_name_5 = par_padding;
        CHECK_OBJECT( par_algorithm );
        tmp_args_element_name_6 = par_algorithm;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_7 = par_self;
        CHECK_OBJECT( par_data );
        tmp_args_element_name_8 = par_data;
        frame_db3ca06f8fed18a3c5fa9eff73e0b85d->m_frame.f_lineno = 418;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_db3ca06f8fed18a3c5fa9eff73e0b85d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_db3ca06f8fed18a3c5fa9eff73e0b85d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_db3ca06f8fed18a3c5fa9eff73e0b85d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_db3ca06f8fed18a3c5fa9eff73e0b85d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_db3ca06f8fed18a3c5fa9eff73e0b85d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_db3ca06f8fed18a3c5fa9eff73e0b85d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_db3ca06f8fed18a3c5fa9eff73e0b85d,
        type_description_1,
        par_self,
        par_data,
        par_padding,
        par_algorithm
    );


    // Release cached frame.
    if ( frame_db3ca06f8fed18a3c5fa9eff73e0b85d == cache_frame_db3ca06f8fed18a3c5fa9eff73e0b85d )
    {
        Py_DECREF( frame_db3ca06f8fed18a3c5fa9eff73e0b85d );
    }
    cache_frame_db3ca06f8fed18a3c5fa9eff73e0b85d = NULL;

    assertFrameObject( frame_db3ca06f8fed18a3c5fa9eff73e0b85d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_21_sign );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_21_sign );
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


static PyObject *impl_cryptography$hazmat$backends$openssl$rsa$$$function_22___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_backend = python_pars[ 1 ];
    PyObject *par_rsa_cdata = python_pars[ 2 ];
    PyObject *par_evp_pkey = python_pars[ 3 ];
    PyObject *var_n = NULL;
    struct Nuitka_FrameObject *frame_e00af7a3f4df66d52c7b2103317a1446;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e00af7a3f4df66d52c7b2103317a1446 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e00af7a3f4df66d52c7b2103317a1446, codeobj_e00af7a3f4df66d52c7b2103317a1446, module_cryptography$hazmat$backends$openssl$rsa, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e00af7a3f4df66d52c7b2103317a1446 = cache_frame_e00af7a3f4df66d52c7b2103317a1446;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e00af7a3f4df66d52c7b2103317a1446 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e00af7a3f4df66d52c7b2103317a1446 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_backend );
        tmp_assattr_name_1 = par_backend;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__backend, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 424;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_rsa_cdata );
        tmp_assattr_name_2 = par_rsa_cdata;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__rsa_cdata, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 425;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_evp_pkey );
        tmp_assattr_name_3 = par_evp_pkey;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__evp_pkey, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 426;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__backend );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 428;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 428;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_e00af7a3f4df66d52c7b2103317a1446->m_frame.f_lineno = 428;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_new, &PyTuple_GET_ITEM( const_tuple_str_digest_ed7f195a5784878081b7f2b567a68557_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 428;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_source_name_9;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_10;
        PyObject *tmp_source_name_11;
        PyObject *tmp_source_name_12;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__backend );
        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 429;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__lib );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 429;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_RSA_get0_key );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 429;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__rsa_cdata );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 430;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_args_element_name_2 = var_n;
        CHECK_OBJECT( par_self );
        tmp_source_name_9 = par_self;
        tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__backend );
        if ( tmp_source_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 430;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_8 );
        if ( tmp_source_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 430;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_NULL );
        Py_DECREF( tmp_source_name_7 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 430;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_12 = par_self;
        tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__backend );
        if ( tmp_source_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 431;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_11 );
        if ( tmp_source_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 431;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_NULL );
        Py_DECREF( tmp_source_name_10 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 431;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_e00af7a3f4df66d52c7b2103317a1446->m_frame.f_lineno = 429;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 429;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_13;
        PyObject *tmp_source_name_14;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_15;
        PyObject *tmp_source_name_16;
        PyObject *tmp_source_name_17;
        CHECK_OBJECT( par_self );
        tmp_source_name_14 = par_self;
        tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__backend );
        if ( tmp_source_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 433;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_openssl_assert );
        Py_DECREF( tmp_source_name_13 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 433;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_subscribed_name_1 = var_n;
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 433;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_17 = par_self;
        tmp_source_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain__backend );
        if ( tmp_source_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 433;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_16 );
        if ( tmp_source_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 433;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_NULL );
        Py_DECREF( tmp_source_name_15 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 433;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 433;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_e00af7a3f4df66d52c7b2103317a1446->m_frame.f_lineno = 433;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 433;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_18;
        PyObject *tmp_source_name_19;
        PyObject *tmp_source_name_20;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_20 = par_self;
        tmp_source_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__backend );
        if ( tmp_source_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 434;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain__lib );
        Py_DECREF( tmp_source_name_19 );
        if ( tmp_source_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 434;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_BN_num_bits );
        Py_DECREF( tmp_source_name_18 );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 434;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_subscribed_name_2 = var_n;
        tmp_subscript_name_2 = const_int_0;
        tmp_args_element_name_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 434;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_e00af7a3f4df66d52c7b2103317a1446->m_frame.f_lineno = 434;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assattr_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assattr_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 434;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__key_size, tmp_assattr_name_4 );
        Py_DECREF( tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 434;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e00af7a3f4df66d52c7b2103317a1446 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e00af7a3f4df66d52c7b2103317a1446 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e00af7a3f4df66d52c7b2103317a1446, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e00af7a3f4df66d52c7b2103317a1446->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e00af7a3f4df66d52c7b2103317a1446, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e00af7a3f4df66d52c7b2103317a1446,
        type_description_1,
        par_self,
        par_backend,
        par_rsa_cdata,
        par_evp_pkey,
        var_n
    );


    // Release cached frame.
    if ( frame_e00af7a3f4df66d52c7b2103317a1446 == cache_frame_e00af7a3f4df66d52c7b2103317a1446 )
    {
        Py_DECREF( frame_e00af7a3f4df66d52c7b2103317a1446 );
    }
    cache_frame_e00af7a3f4df66d52c7b2103317a1446 = NULL;

    assertFrameObject( frame_e00af7a3f4df66d52c7b2103317a1446 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_22___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_evp_pkey );
    Py_DECREF( par_evp_pkey );
    par_evp_pkey = NULL;

    CHECK_OBJECT( (PyObject *)par_rsa_cdata );
    Py_DECREF( par_rsa_cdata );
    par_rsa_cdata = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

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

    Py_XDECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_evp_pkey );
    Py_DECREF( par_evp_pkey );
    par_evp_pkey = NULL;

    CHECK_OBJECT( (PyObject *)par_rsa_cdata );
    Py_DECREF( par_rsa_cdata );
    par_rsa_cdata = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_22___init__ );
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


static PyObject *impl_cryptography$hazmat$backends$openssl$rsa$$$function_23_verifier( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_signature = python_pars[ 1 ];
    PyObject *par_padding = python_pars[ 2 ];
    PyObject *par_algorithm = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_345185089f99bd5709d2f73c73a21694;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_345185089f99bd5709d2f73c73a21694 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_345185089f99bd5709d2f73c73a21694, codeobj_345185089f99bd5709d2f73c73a21694, module_cryptography$hazmat$backends$openssl$rsa, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_345185089f99bd5709d2f73c73a21694 = cache_frame_345185089f99bd5709d2f73c73a21694;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_345185089f99bd5709d2f73c73a21694 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_345185089f99bd5709d2f73c73a21694 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__warn_sign_verify_deprecated );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__warn_sign_verify_deprecated );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_warn_sign_verify_deprecated" );
            exception_tb = NULL;

            exception_lineno = 439;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_345185089f99bd5709d2f73c73a21694->m_frame.f_lineno = 439;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 439;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_utils );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "utils" );
            exception_tb = NULL;

            exception_lineno = 440;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        tmp_args_element_name_1 = const_str_plain_signature;
        CHECK_OBJECT( par_signature );
        tmp_args_element_name_2 = par_signature;
        frame_345185089f99bd5709d2f73c73a21694->m_frame.f_lineno = 440;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__check_bytes, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 440;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__check_not_prehashed );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_not_prehashed );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_check_not_prehashed" );
            exception_tb = NULL;

            exception_lineno = 442;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( par_algorithm );
        tmp_args_element_name_3 = par_algorithm;
        frame_345185089f99bd5709d2f73c73a21694->m_frame.f_lineno = 442;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 442;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__RSAVerificationContext );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__RSAVerificationContext );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_RSAVerificationContext" );
            exception_tb = NULL;

            exception_lineno = 443;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__backend );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_args_element_name_5 = par_self;
        CHECK_OBJECT( par_signature );
        tmp_args_element_name_6 = par_signature;
        CHECK_OBJECT( par_padding );
        tmp_args_element_name_7 = par_padding;
        CHECK_OBJECT( par_algorithm );
        tmp_args_element_name_8 = par_algorithm;
        frame_345185089f99bd5709d2f73c73a21694->m_frame.f_lineno = 443;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 443;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_345185089f99bd5709d2f73c73a21694 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_345185089f99bd5709d2f73c73a21694 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_345185089f99bd5709d2f73c73a21694 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_345185089f99bd5709d2f73c73a21694, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_345185089f99bd5709d2f73c73a21694->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_345185089f99bd5709d2f73c73a21694, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_345185089f99bd5709d2f73c73a21694,
        type_description_1,
        par_self,
        par_signature,
        par_padding,
        par_algorithm
    );


    // Release cached frame.
    if ( frame_345185089f99bd5709d2f73c73a21694 == cache_frame_345185089f99bd5709d2f73c73a21694 )
    {
        Py_DECREF( frame_345185089f99bd5709d2f73c73a21694 );
    }
    cache_frame_345185089f99bd5709d2f73c73a21694 = NULL;

    assertFrameObject( frame_345185089f99bd5709d2f73c73a21694 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_23_verifier );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;

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

    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_23_verifier );
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


static PyObject *impl_cryptography$hazmat$backends$openssl$rsa$$$function_24_encrypt( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_plaintext = python_pars[ 1 ];
    PyObject *par_padding = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_94dda864d3740dfb755f245d18251a2c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_94dda864d3740dfb755f245d18251a2c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_94dda864d3740dfb755f245d18251a2c, codeobj_94dda864d3740dfb755f245d18251a2c, module_cryptography$hazmat$backends$openssl$rsa, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_94dda864d3740dfb755f245d18251a2c = cache_frame_94dda864d3740dfb755f245d18251a2c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_94dda864d3740dfb755f245d18251a2c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_94dda864d3740dfb755f245d18251a2c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__enc_dec_rsa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__enc_dec_rsa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_enc_dec_rsa" );
            exception_tb = NULL;

            exception_lineno = 448;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__backend );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 448;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_args_element_name_2 = par_self;
        CHECK_OBJECT( par_plaintext );
        tmp_args_element_name_3 = par_plaintext;
        CHECK_OBJECT( par_padding );
        tmp_args_element_name_4 = par_padding;
        frame_94dda864d3740dfb755f245d18251a2c->m_frame.f_lineno = 448;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 448;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94dda864d3740dfb755f245d18251a2c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_94dda864d3740dfb755f245d18251a2c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94dda864d3740dfb755f245d18251a2c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_94dda864d3740dfb755f245d18251a2c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_94dda864d3740dfb755f245d18251a2c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_94dda864d3740dfb755f245d18251a2c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_94dda864d3740dfb755f245d18251a2c,
        type_description_1,
        par_self,
        par_plaintext,
        par_padding
    );


    // Release cached frame.
    if ( frame_94dda864d3740dfb755f245d18251a2c == cache_frame_94dda864d3740dfb755f245d18251a2c )
    {
        Py_DECREF( frame_94dda864d3740dfb755f245d18251a2c );
    }
    cache_frame_94dda864d3740dfb755f245d18251a2c = NULL;

    assertFrameObject( frame_94dda864d3740dfb755f245d18251a2c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_24_encrypt );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_plaintext );
    Py_DECREF( par_plaintext );
    par_plaintext = NULL;

    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

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

    CHECK_OBJECT( (PyObject *)par_plaintext );
    Py_DECREF( par_plaintext );
    par_plaintext = NULL;

    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_24_encrypt );
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


static PyObject *impl_cryptography$hazmat$backends$openssl$rsa$$$function_25_public_numbers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_e = NULL;
    PyObject *var_n = NULL;
    struct Nuitka_FrameObject *frame_4ec4a7fad4ae197af3dbbbf72811371f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4ec4a7fad4ae197af3dbbbf72811371f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4ec4a7fad4ae197af3dbbbf72811371f, codeobj_4ec4a7fad4ae197af3dbbbf72811371f, module_cryptography$hazmat$backends$openssl$rsa, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4ec4a7fad4ae197af3dbbbf72811371f = cache_frame_4ec4a7fad4ae197af3dbbbf72811371f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4ec4a7fad4ae197af3dbbbf72811371f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4ec4a7fad4ae197af3dbbbf72811371f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__backend );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 451;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 451;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_4ec4a7fad4ae197af3dbbbf72811371f->m_frame.f_lineno = 451;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_new, &PyTuple_GET_ITEM( const_tuple_str_digest_ed7f195a5784878081b7f2b567a68557_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 451;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__backend );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 452;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 452;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_4ec4a7fad4ae197af3dbbbf72811371f->m_frame.f_lineno = 452;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_new, &PyTuple_GET_ITEM( const_tuple_str_digest_ed7f195a5784878081b7f2b567a68557_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 452;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_e == NULL );
        var_e = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_source_name_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_8;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_9;
        PyObject *tmp_source_name_10;
        PyObject *tmp_source_name_11;
        CHECK_OBJECT( par_self );
        tmp_source_name_7 = par_self;
        tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__backend );
        if ( tmp_source_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 453;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__lib );
        Py_DECREF( tmp_source_name_6 );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 453;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_RSA_get0_key );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 453;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__rsa_cdata );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 454;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_args_element_name_2 = var_n;
        CHECK_OBJECT( var_e );
        tmp_args_element_name_3 = var_e;
        CHECK_OBJECT( par_self );
        tmp_source_name_11 = par_self;
        tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__backend );
        if ( tmp_source_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 454;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_10 );
        if ( tmp_source_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 454;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_NULL );
        Py_DECREF( tmp_source_name_9 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 454;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_4ec4a7fad4ae197af3dbbbf72811371f->m_frame.f_lineno = 453;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 453;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_12;
        PyObject *tmp_source_name_13;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_14;
        PyObject *tmp_source_name_15;
        PyObject *tmp_source_name_16;
        CHECK_OBJECT( par_self );
        tmp_source_name_13 = par_self;
        tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__backend );
        if ( tmp_source_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 456;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_openssl_assert );
        Py_DECREF( tmp_source_name_12 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 456;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_subscribed_name_1 = var_n;
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 456;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_16 = par_self;
        tmp_source_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__backend );
        if ( tmp_source_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 456;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_15 );
        if ( tmp_source_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 456;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_NULL );
        Py_DECREF( tmp_source_name_14 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 456;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 456;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_4ec4a7fad4ae197af3dbbbf72811371f->m_frame.f_lineno = 456;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 456;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_17;
        PyObject *tmp_source_name_18;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_source_name_19;
        PyObject *tmp_source_name_20;
        PyObject *tmp_source_name_21;
        CHECK_OBJECT( par_self );
        tmp_source_name_18 = par_self;
        tmp_source_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain__backend );
        if ( tmp_source_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 457;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_openssl_assert );
        Py_DECREF( tmp_source_name_17 );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 457;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_e );
        tmp_subscribed_name_2 = var_e;
        tmp_subscript_name_2 = const_int_0;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 457;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_21 = par_self;
        tmp_source_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain__backend );
        if ( tmp_source_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 457;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__ffi );
        Py_DECREF( tmp_source_name_20 );
        if ( tmp_source_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 457;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_NULL );
        Py_DECREF( tmp_source_name_19 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 457;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 457;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_4ec4a7fad4ae197af3dbbbf72811371f->m_frame.f_lineno = 457;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 457;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_22;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_23;
        PyObject *tmp_source_name_24;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_25;
        PyObject *tmp_source_name_26;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_rsa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rsa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "rsa" );
            exception_tb = NULL;

            exception_lineno = 458;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_22 = tmp_mvar_value_1;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_RSAPublicNumbers );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 458;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_24 = par_self;
        tmp_source_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain__backend );
        if ( tmp_source_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 459;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain__bn_to_int );
        Py_DECREF( tmp_source_name_23 );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 459;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_e );
        tmp_subscribed_name_3 = var_e;
        tmp_subscript_name_3 = const_int_0;
        tmp_args_element_name_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 459;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_4ec4a7fad4ae197af3dbbbf72811371f->m_frame.f_lineno = 459;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 459;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_e;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_self );
        tmp_source_name_26 = par_self;
        tmp_source_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain__backend );
        if ( tmp_source_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 460;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain__bn_to_int );
        Py_DECREF( tmp_source_name_25 );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 460;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_subscribed_name_4 = var_n;
        tmp_subscript_name_4 = const_int_0;
        tmp_args_element_name_8 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 460;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_4ec4a7fad4ae197af3dbbbf72811371f->m_frame.f_lineno = 460;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 460;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = const_str_plain_n;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_4ec4a7fad4ae197af3dbbbf72811371f->m_frame.f_lineno = 458;
        tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 458;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ec4a7fad4ae197af3dbbbf72811371f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ec4a7fad4ae197af3dbbbf72811371f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ec4a7fad4ae197af3dbbbf72811371f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4ec4a7fad4ae197af3dbbbf72811371f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4ec4a7fad4ae197af3dbbbf72811371f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4ec4a7fad4ae197af3dbbbf72811371f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4ec4a7fad4ae197af3dbbbf72811371f,
        type_description_1,
        par_self,
        var_e,
        var_n
    );


    // Release cached frame.
    if ( frame_4ec4a7fad4ae197af3dbbbf72811371f == cache_frame_4ec4a7fad4ae197af3dbbbf72811371f )
    {
        Py_DECREF( frame_4ec4a7fad4ae197af3dbbbf72811371f );
    }
    cache_frame_4ec4a7fad4ae197af3dbbbf72811371f = NULL;

    assertFrameObject( frame_4ec4a7fad4ae197af3dbbbf72811371f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_25_public_numbers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_e );
    Py_DECREF( var_e );
    var_e = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

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

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_25_public_numbers );
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


static PyObject *impl_cryptography$hazmat$backends$openssl$rsa$$$function_26_public_bytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_encoding = python_pars[ 1 ];
    PyObject *par_format = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_203b05aabd52431826899733b1392223;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_203b05aabd52431826899733b1392223 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_203b05aabd52431826899733b1392223, codeobj_203b05aabd52431826899733b1392223, module_cryptography$hazmat$backends$openssl$rsa, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_203b05aabd52431826899733b1392223 = cache_frame_203b05aabd52431826899733b1392223;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_203b05aabd52431826899733b1392223 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_203b05aabd52431826899733b1392223 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__backend );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 464;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__public_key_bytes );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 464;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_encoding );
        tmp_args_element_name_1 = par_encoding;
        CHECK_OBJECT( par_format );
        tmp_args_element_name_2 = par_format;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_3 = par_self;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__evp_pkey );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 468;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__rsa_cdata );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 469;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_203b05aabd52431826899733b1392223->m_frame.f_lineno = 464;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 464;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_203b05aabd52431826899733b1392223 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_203b05aabd52431826899733b1392223 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_203b05aabd52431826899733b1392223 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_203b05aabd52431826899733b1392223, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_203b05aabd52431826899733b1392223->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_203b05aabd52431826899733b1392223, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_203b05aabd52431826899733b1392223,
        type_description_1,
        par_self,
        par_encoding,
        par_format
    );


    // Release cached frame.
    if ( frame_203b05aabd52431826899733b1392223 == cache_frame_203b05aabd52431826899733b1392223 )
    {
        Py_DECREF( frame_203b05aabd52431826899733b1392223 );
    }
    cache_frame_203b05aabd52431826899733b1392223 = NULL;

    assertFrameObject( frame_203b05aabd52431826899733b1392223 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_26_public_bytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

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

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_26_public_bytes );
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


static PyObject *impl_cryptography$hazmat$backends$openssl$rsa$$$function_27_verify( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_signature = python_pars[ 1 ];
    PyObject *par_data = python_pars[ 2 ];
    PyObject *par_padding = python_pars[ 3 ];
    PyObject *par_algorithm = python_pars[ 4 ];
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_5a11116a1573660592abbac598f1985a;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5a11116a1573660592abbac598f1985a = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5a11116a1573660592abbac598f1985a, codeobj_5a11116a1573660592abbac598f1985a, module_cryptography$hazmat$backends$openssl$rsa, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5a11116a1573660592abbac598f1985a = cache_frame_5a11116a1573660592abbac598f1985a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5a11116a1573660592abbac598f1985a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5a11116a1573660592abbac598f1985a ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__calculate_digest_and_algorithm );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__calculate_digest_and_algorithm );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_calculate_digest_and_algorithm" );
            exception_tb = NULL;

            exception_lineno = 473;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__backend );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 474;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_data );
        tmp_args_element_name_2 = par_data;
        CHECK_OBJECT( par_algorithm );
        tmp_args_element_name_3 = par_algorithm;
        frame_5a11116a1573660592abbac598f1985a->m_frame.f_lineno = 473;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 473;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 473;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
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
            exception_lineno = 473;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1 );
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
            exception_lineno = 473;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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
                    exception_lineno = 473;
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
            exception_lineno = 473;
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
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_data;
            assert( old != NULL );
            par_data = tmp_assign_source_4;
            Py_INCREF( par_data );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_algorithm;
            assert( old != NULL );
            par_algorithm = tmp_assign_source_5;
            Py_INCREF( par_algorithm );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__rsa_sig_verify );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__rsa_sig_verify );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_rsa_sig_verify" );
            exception_tb = NULL;

            exception_lineno = 476;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__backend );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 477;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_padding );
        tmp_args_element_name_5 = par_padding;
        CHECK_OBJECT( par_algorithm );
        tmp_args_element_name_6 = par_algorithm;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_7 = par_self;
        CHECK_OBJECT( par_signature );
        tmp_args_element_name_8 = par_signature;
        CHECK_OBJECT( par_data );
        tmp_args_element_name_9 = par_data;
        frame_5a11116a1573660592abbac598f1985a->m_frame.f_lineno = 476;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 476;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a11116a1573660592abbac598f1985a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a11116a1573660592abbac598f1985a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a11116a1573660592abbac598f1985a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5a11116a1573660592abbac598f1985a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5a11116a1573660592abbac598f1985a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5a11116a1573660592abbac598f1985a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5a11116a1573660592abbac598f1985a,
        type_description_1,
        par_self,
        par_signature,
        par_data,
        par_padding,
        par_algorithm
    );


    // Release cached frame.
    if ( frame_5a11116a1573660592abbac598f1985a == cache_frame_5a11116a1573660592abbac598f1985a )
    {
        Py_DECREF( frame_5a11116a1573660592abbac598f1985a );
    }
    cache_frame_5a11116a1573660592abbac598f1985a = NULL;

    assertFrameObject( frame_5a11116a1573660592abbac598f1985a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_27_verify );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;

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

    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa$$$function_27_verify );
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



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_10_update(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$rsa$$$function_10_update,
        const_str_plain_update,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ba9af55975d848b309ca02d9bf50f129,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$rsa,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_11_finalize(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$rsa$$$function_11_finalize,
        const_str_plain_finalize,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7d881810fcc4b11d5843a1eaced7a164,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$rsa,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_12___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$rsa$$$function_12___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_94869d310e3c0005006be16b7ebed635,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$rsa,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_13_update(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$rsa$$$function_13_update,
        const_str_plain_update,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_82564fc177efccbc370f77f719410b6a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$rsa,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_14_verify(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$rsa$$$function_14_verify,
        const_str_plain_verify,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_34835762160b83ed7c6a72fd07edba1a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$rsa,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_15___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$rsa$$$function_15___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9b7cf94cd30727957df7562b9f08d00e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$rsa,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_16_signer(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$rsa$$$function_16_signer,
        const_str_plain_signer,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_23b01085215828ad6bb32a88881dd6ad,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$rsa,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_17_decrypt(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$rsa$$$function_17_decrypt,
        const_str_plain_decrypt,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ef703c8520b743ff56ec8cfc2182316f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$rsa,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_18_public_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$rsa$$$function_18_public_key,
        const_str_plain_public_key,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_56620d6e312f596c1672d7d6b5a978d2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$rsa,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_19_private_numbers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$rsa$$$function_19_private_numbers,
        const_str_plain_private_numbers,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0cd773cf8ff26a5cef5a74a736f07148,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$rsa,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_1__get_rsa_pss_salt_length(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$rsa$$$function_1__get_rsa_pss_salt_length,
        const_str_plain__get_rsa_pss_salt_length,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_aabc2602d7d65d8cb912833716a20af9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$rsa,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_20_private_bytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$rsa$$$function_20_private_bytes,
        const_str_plain_private_bytes,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_908dcab9570c65f5d9f8e16a268a3269,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$rsa,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_21_sign(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$rsa$$$function_21_sign,
        const_str_plain_sign,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_db3ca06f8fed18a3c5fa9eff73e0b85d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$rsa,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_22___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$rsa$$$function_22___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e00af7a3f4df66d52c7b2103317a1446,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$rsa,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_23_verifier(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$rsa$$$function_23_verifier,
        const_str_plain_verifier,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_345185089f99bd5709d2f73c73a21694,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$rsa,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_24_encrypt(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$rsa$$$function_24_encrypt,
        const_str_plain_encrypt,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_94dda864d3740dfb755f245d18251a2c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$rsa,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_25_public_numbers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$rsa$$$function_25_public_numbers,
        const_str_plain_public_numbers,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4ec4a7fad4ae197af3dbbbf72811371f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$rsa,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_26_public_bytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$rsa$$$function_26_public_bytes,
        const_str_plain_public_bytes,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_203b05aabd52431826899733b1392223,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$rsa,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_27_verify(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$rsa$$$function_27_verify,
        const_str_plain_verify,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5a11116a1573660592abbac598f1985a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$rsa,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_2__enc_dec_rsa(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$rsa$$$function_2__enc_dec_rsa,
        const_str_plain__enc_dec_rsa,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_da62b15b380a9c6f502eb590e193408b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$rsa,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_3__enc_dec_rsa_pkey_ctx(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$rsa$$$function_3__enc_dec_rsa_pkey_ctx,
        const_str_plain__enc_dec_rsa_pkey_ctx,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d3a6183e67993e43aeb70c615f8d3774,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$rsa,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_4__handle_rsa_enc_dec_error(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$rsa$$$function_4__handle_rsa_enc_dec_error,
        const_str_plain__handle_rsa_enc_dec_error,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7113251a7a8c7badfe741f661c528b0c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$rsa,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_5__rsa_sig_determine_padding(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$rsa$$$function_5__rsa_sig_determine_padding,
        const_str_plain__rsa_sig_determine_padding,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0ff37599e6c719bda4ddd438200d4226,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$rsa,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_6__rsa_sig_setup(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$rsa$$$function_6__rsa_sig_setup,
        const_str_plain__rsa_sig_setup,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7ed2038eb663bb2e8d72b14b45e6f93a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$rsa,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_7__rsa_sig_sign(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$rsa$$$function_7__rsa_sig_sign,
        const_str_plain__rsa_sig_sign,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ed7213390c84d949873b88fe0c1d4f87,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$rsa,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_8__rsa_sig_verify(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$rsa$$$function_8__rsa_sig_verify,
        const_str_plain__rsa_sig_verify,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b118c1c4cf6a1050c14ab160f233aeda,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$rsa,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_9___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$rsa$$$function_9___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8e782dfdbe078cb40a78d901917edc19,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$rsa,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cryptography$hazmat$backends$openssl$rsa =
{
    PyModuleDef_HEAD_INIT,
    "cryptography.hazmat.backends.openssl.rsa",
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

MOD_INIT_DECL( cryptography$hazmat$backends$openssl$rsa )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_cryptography$hazmat$backends$openssl$rsa );
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
    puts("cryptography.hazmat.backends.openssl.rsa: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.backends.openssl.rsa: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.backends.openssl.rsa: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcryptography$hazmat$backends$openssl$rsa" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cryptography$hazmat$backends$openssl$rsa = Py_InitModule4(
        "cryptography.hazmat.backends.openssl.rsa",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_cryptography$hazmat$backends$openssl$rsa = PyModule_Create( &mdef_cryptography$hazmat$backends$openssl$rsa );
#endif

    moduledict_cryptography$hazmat$backends$openssl$rsa = MODULE_DICT( module_cryptography$hazmat$backends$openssl$rsa );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_cryptography$hazmat$backends$openssl$rsa,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$backends$openssl$rsa,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$backends$openssl$rsa,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_cryptography$hazmat$backends$openssl$rsa );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_ab6f05b42e1f3b7330c1f4fe1ba86e66, module_cryptography$hazmat$backends$openssl$rsa );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
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
    PyObject *tmp_class_creation_4__class = NULL;
    PyObject *tmp_class_creation_4__class_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    PyObject *tmp_locals_cryptography$hazmat$backends$openssl$rsa_276_key___init__ = NULL;
    PyObject *tmp_locals_cryptography$hazmat$backends$openssl$rsa_276_key_finalize = NULL;
    PyObject *tmp_locals_cryptography$hazmat$backends$openssl$rsa_276_key_update = NULL;
    PyObject *tmp_locals_cryptography$hazmat$backends$openssl$rsa_303_key___init__ = NULL;
    PyObject *tmp_locals_cryptography$hazmat$backends$openssl$rsa_303_key_update = NULL;
    PyObject *tmp_locals_cryptography$hazmat$backends$openssl$rsa_303_key_verify = NULL;
    struct Nuitka_FrameObject *frame_e5b17702a3d91744c314064e4a44cdd4;
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
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    int tmp_res;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *locals_cryptography$hazmat$backends$openssl$rsa_333 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_417cc5ffd2084ef5d39715f400756402_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_417cc5ffd2084ef5d39715f400756402_2 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *locals_cryptography$hazmat$backends$openssl$rsa_422 = NULL;
    struct Nuitka_FrameObject *frame_65fa36b044c590d20a1655f9e7caeee8_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_65fa36b044c590d20a1655f9e7caeee8_3 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_990d5f714aca7bf00226709211c3c991;
        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
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
    frame_e5b17702a3d91744c314064e4a44cdd4 = MAKE_MODULE_FRAME( codeobj_e5b17702a3d91744c314064e4a44cdd4, module_cryptography$hazmat$backends$openssl$rsa );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_e5b17702a3d91744c314064e4a44cdd4 );
    assert( Py_REFCNT( frame_e5b17702a3d91744c314064e4a44cdd4 ) == 2 );

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
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
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
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_math;
        tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$rsa;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_e5b17702a3d91744c314064e4a44cdd4->m_frame.f_lineno = 7;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        assert( !(tmp_assign_source_7 == NULL) );
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_math, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_cryptography;
        tmp_globals_name_2 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$rsa;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_utils_tuple;
        tmp_level_name_2 = const_int_0;
        frame_e5b17702a3d91744c314064e4a44cdd4->m_frame.f_lineno = 9;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_utils );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_utils, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_82e5b7f1075745a8638e06059354d03c;
        tmp_globals_name_3 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$rsa;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_9758f710ce98b1c0cfd42dd10befe3cb_tuple;
        tmp_level_name_3 = const_int_0;
        frame_e5b17702a3d91744c314064e4a44cdd4->m_frame.f_lineno = 10;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_InvalidSignature );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_InvalidSignature, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_UnsupportedAlgorithm );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain__Reasons );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__Reasons, tmp_assign_source_12 );
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_626b18d63126fb4fc2b4b00829f745cc;
        tmp_globals_name_4 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$rsa;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_6865be46b14daf3853c114a4440f3999_tuple;
        tmp_level_name_4 = const_int_0;
        frame_e5b17702a3d91744c314064e4a44cdd4->m_frame.f_lineno = 13;
        tmp_assign_source_13 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_8 = tmp_import_from_3__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain__calculate_digest_and_algorithm );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__calculate_digest_and_algorithm, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_9 = tmp_import_from_3__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain__check_not_prehashed );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__check_not_prehashed, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_10 = tmp_import_from_3__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain__warn_sign_verify_deprecated );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__warn_sign_verify_deprecated, tmp_assign_source_16 );
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
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_9db3cdd3cd765463b4eec6754eb8e087;
        tmp_globals_name_5 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$rsa;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_hashes_tuple;
        tmp_level_name_5 = const_int_0;
        frame_e5b17702a3d91744c314064e4a44cdd4->m_frame.f_lineno = 17;
        tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_hashes );
        Py_DECREF( tmp_import_name_from_11 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_hashes, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_426349c7e201b358f2086eb3f7fb6f47;
        tmp_globals_name_6 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$rsa;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_f7d52da993a9ca49ad2e18373869bfe9_tuple;
        tmp_level_name_6 = const_int_0;
        frame_e5b17702a3d91744c314064e4a44cdd4->m_frame.f_lineno = 18;
        tmp_assign_source_18 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_4__module == NULL );
        tmp_import_from_4__module = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_12 = tmp_import_from_4__module;
        tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_AsymmetricSignatureContext );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_AsymmetricSignatureContext, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_13 = tmp_import_from_4__module;
        tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_AsymmetricVerificationContext );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_AsymmetricVerificationContext, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_14 = tmp_import_from_4__module;
        tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_rsa );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_rsa, tmp_assign_source_21 );
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
        PyObject *tmp_assign_source_22;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_digest_ab9b2f5b99442fa296cac0d8ff686f4b;
        tmp_globals_name_7 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$rsa;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_fa080cb81ae95a632e3813332243b607_tuple;
        tmp_level_name_7 = const_int_0;
        frame_e5b17702a3d91744c314064e4a44cdd4->m_frame.f_lineno = 21;
        tmp_assign_source_22 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_5__module == NULL );
        tmp_import_from_5__module = tmp_assign_source_22;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_15 = tmp_import_from_5__module;
        tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_AsymmetricPadding );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_AsymmetricPadding, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_16 = tmp_import_from_5__module;
        tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_MGF1 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_MGF1, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_17 = tmp_import_from_5__module;
        tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_OAEP );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_OAEP, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_18 = tmp_import_from_5__module;
        tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_PKCS1v15 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_PKCS1v15, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_19 = tmp_import_from_5__module;
        tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_PSS );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_PSS, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_20 = tmp_import_from_5__module;
        tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_calculate_max_pss_salt_length );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_calculate_max_pss_salt_length, tmp_assign_source_28 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_digest_97cd6fd5c8579a7068d86fbfd40e2f84;
        tmp_globals_name_8 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$rsa;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_99a492340d27a0e2a7192ecb7608f52c_tuple;
        tmp_level_name_8 = const_int_0;
        frame_e5b17702a3d91744c314064e4a44cdd4->m_frame.f_lineno = 24;
        tmp_assign_source_29 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_6__module == NULL );
        tmp_import_from_6__module = tmp_assign_source_29;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_21 = tmp_import_from_6__module;
        tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_RSAPrivateKeyWithSerialization );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_RSAPrivateKeyWithSerialization, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_22 = tmp_import_from_6__module;
        tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_RSAPublicKeyWithSerialization );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_RSAPublicKeyWithSerialization, tmp_assign_source_31 );
    }
    goto try_end_6;
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_6__module );
    Py_DECREF( tmp_import_from_6__module );
    tmp_import_from_6__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_6__module );
    Py_DECREF( tmp_import_from_6__module );
    tmp_import_from_6__module = NULL;

    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_1__get_rsa_pss_salt_length(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__get_rsa_pss_salt_length, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_2__enc_dec_rsa(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__enc_dec_rsa, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_3__enc_dec_rsa_pkey_ctx(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__enc_dec_rsa_pkey_ctx, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_4__handle_rsa_enc_dec_error(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__handle_rsa_enc_dec_error, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_5__rsa_sig_determine_padding(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__rsa_sig_determine_padding, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_6__rsa_sig_setup(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__rsa_sig_setup, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_7__rsa_sig_sign(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__rsa_sig_sign, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_8__rsa_sig_verify(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__rsa_sig_verify, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        {
            PyObject *tmp_assign_source_41;
            tmp_assign_source_41 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_9___init__(  );



            assert( tmp_locals_cryptography$hazmat$backends$openssl$rsa_276_key___init__ == NULL );
            tmp_locals_cryptography$hazmat$backends$openssl$rsa_276_key___init__ = tmp_assign_source_41;
        }
        {
            PyObject *tmp_assign_source_42;
            tmp_assign_source_42 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_10_update(  );



            assert( tmp_locals_cryptography$hazmat$backends$openssl$rsa_276_key_update == NULL );
            tmp_locals_cryptography$hazmat$backends$openssl$rsa_276_key_update = tmp_assign_source_42;
        }
        {
            PyObject *tmp_assign_source_43;
            tmp_assign_source_43 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_11_finalize(  );



            assert( tmp_locals_cryptography$hazmat$backends$openssl$rsa_276_key_finalize == NULL );
            tmp_locals_cryptography$hazmat$backends$openssl$rsa_276_key_finalize = tmp_assign_source_43;
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
            tmp_dict_value_1 = const_str_digest_ab6f05b42e1f3b7330c1f4fe1ba86e66;
            tmp_dict_key_1 = const_str_plain___module__;
            tmp_assign_source_40 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem( tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_cryptography$hazmat$backends$openssl$rsa_276_key___init__ );
            tmp_dict_value_2 = tmp_locals_cryptography$hazmat$backends$openssl$rsa_276_key___init__;
            tmp_dict_key_2 = const_str_plain___init__;
            tmp_res = PyDict_SetItem( tmp_assign_source_40, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_cryptography$hazmat$backends$openssl$rsa_276_key_update );
            tmp_dict_value_3 = tmp_locals_cryptography$hazmat$backends$openssl$rsa_276_key_update;
            tmp_dict_key_3 = const_str_plain_update;
            tmp_res = PyDict_SetItem( tmp_assign_source_40, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_cryptography$hazmat$backends$openssl$rsa_276_key_finalize );
            tmp_dict_value_4 = tmp_locals_cryptography$hazmat$backends$openssl$rsa_276_key_finalize;
            tmp_dict_key_4 = const_str_plain_finalize;
            tmp_res = PyDict_SetItem( tmp_assign_source_40, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            goto try_return_handler_7;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT( (PyObject *)tmp_locals_cryptography$hazmat$backends$openssl$rsa_276_key___init__ );
        Py_DECREF( tmp_locals_cryptography$hazmat$backends$openssl$rsa_276_key___init__ );
        tmp_locals_cryptography$hazmat$backends$openssl$rsa_276_key___init__ = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_cryptography$hazmat$backends$openssl$rsa_276_key_update );
        Py_DECREF( tmp_locals_cryptography$hazmat$backends$openssl$rsa_276_key_update );
        tmp_locals_cryptography$hazmat$backends$openssl$rsa_276_key_update = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_cryptography$hazmat$backends$openssl$rsa_276_key_finalize );
        Py_DECREF( tmp_locals_cryptography$hazmat$backends$openssl$rsa_276_key_finalize );
        tmp_locals_cryptography$hazmat$backends$openssl$rsa_276_key_finalize = NULL;

        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa );
        return MOD_RETURN_VALUE( NULL );
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_40;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
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


            exception_lineno = 276;

            goto try_except_handler_8;
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
        tmp_assign_source_44 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;

            goto try_except_handler_8;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_44 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_44 );
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain__RSASignatureContext;
        tmp_args_element_name_2 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_e5b17702a3d91744c314064e4a44cdd4->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_45 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;

            goto try_except_handler_8;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_utils );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
            exception_tb = NULL;

            exception_lineno = 275;

            goto try_except_handler_8;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_register_interface );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;

            goto try_except_handler_8;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_AsymmetricSignatureContext );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AsymmetricSignatureContext );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "AsymmetricSignatureContext" );
            exception_tb = NULL;

            exception_lineno = 275;

            goto try_except_handler_8;
        }

        tmp_args_element_name_4 = tmp_mvar_value_2;
        frame_e5b17702a3d91744c314064e4a44cdd4->m_frame.f_lineno = 275;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_called_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;

            goto try_except_handler_8;
        }
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_args_element_name_5 = tmp_class_creation_1__class;
        frame_e5b17702a3d91744c314064e4a44cdd4->m_frame.f_lineno = 275;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;

            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_class_creation_1__class;
            assert( old != NULL );
            tmp_class_creation_1__class = tmp_assign_source_46;
            Py_DECREF( old );
        }

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

    Py_XDECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    {
        PyObject *tmp_assign_source_47;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_47 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__RSASignatureContext, tmp_assign_source_47 );
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
        PyObject *tmp_assign_source_48;
        {
            PyObject *tmp_assign_source_49;
            tmp_assign_source_49 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_12___init__(  );



            assert( tmp_locals_cryptography$hazmat$backends$openssl$rsa_303_key___init__ == NULL );
            tmp_locals_cryptography$hazmat$backends$openssl$rsa_303_key___init__ = tmp_assign_source_49;
        }
        {
            PyObject *tmp_assign_source_50;
            tmp_assign_source_50 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_13_update(  );



            assert( tmp_locals_cryptography$hazmat$backends$openssl$rsa_303_key_update == NULL );
            tmp_locals_cryptography$hazmat$backends$openssl$rsa_303_key_update = tmp_assign_source_50;
        }
        {
            PyObject *tmp_assign_source_51;
            tmp_assign_source_51 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_14_verify(  );



            assert( tmp_locals_cryptography$hazmat$backends$openssl$rsa_303_key_verify == NULL );
            tmp_locals_cryptography$hazmat$backends$openssl$rsa_303_key_verify = tmp_assign_source_51;
        }
        // Tried code:
        {
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_dict_value_5 = const_str_digest_ab6f05b42e1f3b7330c1f4fe1ba86e66;
            tmp_dict_key_5 = const_str_plain___module__;
            tmp_assign_source_48 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem( tmp_assign_source_48, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_cryptography$hazmat$backends$openssl$rsa_303_key___init__ );
            tmp_dict_value_6 = tmp_locals_cryptography$hazmat$backends$openssl$rsa_303_key___init__;
            tmp_dict_key_6 = const_str_plain___init__;
            tmp_res = PyDict_SetItem( tmp_assign_source_48, tmp_dict_key_6, tmp_dict_value_6 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_cryptography$hazmat$backends$openssl$rsa_303_key_update );
            tmp_dict_value_7 = tmp_locals_cryptography$hazmat$backends$openssl$rsa_303_key_update;
            tmp_dict_key_7 = const_str_plain_update;
            tmp_res = PyDict_SetItem( tmp_assign_source_48, tmp_dict_key_7, tmp_dict_value_7 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_cryptography$hazmat$backends$openssl$rsa_303_key_verify );
            tmp_dict_value_8 = tmp_locals_cryptography$hazmat$backends$openssl$rsa_303_key_verify;
            tmp_dict_key_8 = const_str_plain_verify;
            tmp_res = PyDict_SetItem( tmp_assign_source_48, tmp_dict_key_8, tmp_dict_value_8 );
            assert( !(tmp_res != 0) );
            goto try_return_handler_9;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT( (PyObject *)tmp_locals_cryptography$hazmat$backends$openssl$rsa_303_key___init__ );
        Py_DECREF( tmp_locals_cryptography$hazmat$backends$openssl$rsa_303_key___init__ );
        tmp_locals_cryptography$hazmat$backends$openssl$rsa_303_key___init__ = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_cryptography$hazmat$backends$openssl$rsa_303_key_update );
        Py_DECREF( tmp_locals_cryptography$hazmat$backends$openssl$rsa_303_key_update );
        tmp_locals_cryptography$hazmat$backends$openssl$rsa_303_key_update = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_cryptography$hazmat$backends$openssl$rsa_303_key_verify );
        Py_DECREF( tmp_locals_cryptography$hazmat$backends$openssl$rsa_303_key_verify );
        tmp_locals_cryptography$hazmat$backends$openssl$rsa_303_key_verify = NULL;

        goto outline_result_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa );
        return MOD_RETURN_VALUE( NULL );
        outline_result_2:;
        assert( tmp_class_creation_2__class_dict == NULL );
        tmp_class_creation_2__class_dict = tmp_assign_source_48;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_52;
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


            exception_lineno = 303;

            goto try_except_handler_10;
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
        tmp_assign_source_52 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_assign_source_52 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 303;

            goto try_except_handler_10;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_52 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_52 );
        condexpr_end_2:;
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_called_name_4 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_6 = const_str_plain__RSAVerificationContext;
        tmp_args_element_name_7 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_2__class_dict );
        tmp_args_element_name_8 = tmp_class_creation_2__class_dict;
        frame_e5b17702a3d91744c314064e4a44cdd4->m_frame.f_lineno = 303;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_assign_source_53 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_53 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 303;

            goto try_except_handler_10;
        }
        assert( tmp_class_creation_2__class == NULL );
        tmp_class_creation_2__class = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_name_5;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_10;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_utils );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
            exception_tb = NULL;

            exception_lineno = 302;

            goto try_except_handler_10;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_register_interface );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;

            goto try_except_handler_10;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_AsymmetricVerificationContext );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AsymmetricVerificationContext );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "AsymmetricVerificationContext" );
            exception_tb = NULL;

            exception_lineno = 302;

            goto try_except_handler_10;
        }

        tmp_args_element_name_9 = tmp_mvar_value_4;
        frame_e5b17702a3d91744c314064e4a44cdd4->m_frame.f_lineno = 302;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_called_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;

            goto try_except_handler_10;
        }
        CHECK_OBJECT( tmp_class_creation_2__class );
        tmp_args_element_name_10 = tmp_class_creation_2__class;
        frame_e5b17702a3d91744c314064e4a44cdd4->m_frame.f_lineno = 302;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_assign_source_54 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        if ( tmp_assign_source_54 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;

            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_class_creation_2__class;
            assert( old != NULL );
            tmp_class_creation_2__class = tmp_assign_source_54;
            Py_DECREF( old );
        }

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

    Py_XDECREF( tmp_class_creation_2__class );
    tmp_class_creation_2__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    {
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT( tmp_class_creation_2__class );
        tmp_assign_source_55 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__RSAVerificationContext, tmp_assign_source_55 );
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

    // Tried code:
    {
        PyObject *tmp_assign_source_56;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_cryptography$hazmat$backends$openssl$rsa_333 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_ab6f05b42e1f3b7330c1f4fe1ba86e66;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$backends$openssl$rsa_333, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_15___init__(  );



        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$backends$openssl$rsa_333, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_417cc5ffd2084ef5d39715f400756402_2, codeobj_417cc5ffd2084ef5d39715f400756402, module_cryptography$hazmat$backends$openssl$rsa, 0 );
        frame_417cc5ffd2084ef5d39715f400756402_2 = cache_frame_417cc5ffd2084ef5d39715f400756402_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_417cc5ffd2084ef5d39715f400756402_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_417cc5ffd2084ef5d39715f400756402_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_5;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_utils );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
                exception_tb = NULL;

                exception_lineno = 347;

                goto frame_exception_exit_2;
            }

            tmp_called_instance_1 = tmp_mvar_value_5;
            frame_417cc5ffd2084ef5d39715f400756402_2->m_frame.f_lineno = 347;
            tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_read_only_property, &PyTuple_GET_ITEM( const_tuple_str_plain__key_size_tuple, 0 ) );

            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 347;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem( locals_cryptography$hazmat$backends$openssl$rsa_333, const_str_plain_key_size, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 347;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_417cc5ffd2084ef5d39715f400756402_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_417cc5ffd2084ef5d39715f400756402_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_417cc5ffd2084ef5d39715f400756402_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_417cc5ffd2084ef5d39715f400756402_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_417cc5ffd2084ef5d39715f400756402_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_417cc5ffd2084ef5d39715f400756402_2,
            type_description_2
        );


        // Release cached frame.
        if ( frame_417cc5ffd2084ef5d39715f400756402_2 == cache_frame_417cc5ffd2084ef5d39715f400756402_2 )
        {
            Py_DECREF( frame_417cc5ffd2084ef5d39715f400756402_2 );
        }
        cache_frame_417cc5ffd2084ef5d39715f400756402_2 = NULL;

        assertFrameObject( frame_417cc5ffd2084ef5d39715f400756402_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_12;
        skip_nested_handling_1:;
        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_16_signer(  );



        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$backends$openssl$rsa_333, const_str_plain_signer, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_17_decrypt(  );



        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$backends$openssl$rsa_333, const_str_plain_decrypt, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_18_public_key(  );



        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$backends$openssl$rsa_333, const_str_plain_public_key, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_19_private_numbers(  );



        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$backends$openssl$rsa_333, const_str_plain_private_numbers, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_20_private_bytes(  );



        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$backends$openssl$rsa_333, const_str_plain_private_bytes, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_21_sign(  );



        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$backends$openssl$rsa_333, const_str_plain_sign, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_assign_source_56 = locals_cryptography$hazmat$backends$openssl$rsa_333;
        Py_INCREF( tmp_assign_source_56 );
        goto try_return_handler_12;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF( locals_cryptography$hazmat$backends$openssl$rsa_333 );
        locals_cryptography$hazmat$backends$openssl$rsa_333 = NULL;
        goto outline_result_3;
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

        Py_DECREF( locals_cryptography$hazmat$backends$openssl$rsa_333 );
        locals_cryptography$hazmat$backends$openssl$rsa_333 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 333;
        goto try_except_handler_11;
        outline_result_3:;
        assert( tmp_class_creation_3__class_dict == NULL );
        tmp_class_creation_3__class_dict = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
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


            exception_lineno = 333;

            goto try_except_handler_11;
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
        tmp_assign_source_57 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_assign_source_57 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 333;

            goto try_except_handler_11;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_assign_source_57 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_57 );
        condexpr_end_3:;
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_called_name_7 = tmp_class_creation_3__metaclass;
        tmp_args_element_name_11 = const_str_plain__RSAPrivateKey;
        tmp_args_element_name_12 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_3__class_dict );
        tmp_args_element_name_13 = tmp_class_creation_3__class_dict;
        frame_e5b17702a3d91744c314064e4a44cdd4->m_frame.f_lineno = 333;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
            tmp_assign_source_58 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
        }

        if ( tmp_assign_source_58 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 333;

            goto try_except_handler_11;
        }
        assert( tmp_class_creation_3__class == NULL );
        tmp_class_creation_3__class = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_name_8;
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_15;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_utils );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
            exception_tb = NULL;

            exception_lineno = 332;

            goto try_except_handler_11;
        }

        tmp_source_name_3 = tmp_mvar_value_6;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_register_interface );
        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 332;

            goto try_except_handler_11;
        }
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_RSAPrivateKeyWithSerialization );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RSAPrivateKeyWithSerialization );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_called_name_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "RSAPrivateKeyWithSerialization" );
            exception_tb = NULL;

            exception_lineno = 332;

            goto try_except_handler_11;
        }

        tmp_args_element_name_14 = tmp_mvar_value_7;
        frame_e5b17702a3d91744c314064e4a44cdd4->m_frame.f_lineno = 332;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_called_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_called_name_9 );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 332;

            goto try_except_handler_11;
        }
        CHECK_OBJECT( tmp_class_creation_3__class );
        tmp_args_element_name_15 = tmp_class_creation_3__class;
        frame_e5b17702a3d91744c314064e4a44cdd4->m_frame.f_lineno = 332;
        {
            PyObject *call_args[] = { tmp_args_element_name_15 };
            tmp_assign_source_59 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        if ( tmp_assign_source_59 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 332;

            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_class_creation_3__class;
            assert( old != NULL );
            tmp_class_creation_3__class = tmp_assign_source_59;
            Py_DECREF( old );
        }

    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_3__class );
    tmp_class_creation_3__class = NULL;

    Py_XDECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    {
        PyObject *tmp_assign_source_60;
        CHECK_OBJECT( tmp_class_creation_3__class );
        tmp_assign_source_60 = tmp_class_creation_3__class;
        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__RSAPrivateKey, tmp_assign_source_60 );
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
        PyObject *tmp_assign_source_61;
        {
            PyObject *tmp_set_locals_2;
            tmp_set_locals_2 = PyDict_New();
            locals_cryptography$hazmat$backends$openssl$rsa_422 = tmp_set_locals_2;
        }
        tmp_dictset_value = const_str_digest_ab6f05b42e1f3b7330c1f4fe1ba86e66;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$backends$openssl$rsa_422, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_22___init__(  );



        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$backends$openssl$rsa_422, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_65fa36b044c590d20a1655f9e7caeee8_3, codeobj_65fa36b044c590d20a1655f9e7caeee8, module_cryptography$hazmat$backends$openssl$rsa, 0 );
        frame_65fa36b044c590d20a1655f9e7caeee8_3 = cache_frame_65fa36b044c590d20a1655f9e7caeee8_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_65fa36b044c590d20a1655f9e7caeee8_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_65fa36b044c590d20a1655f9e7caeee8_3 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_8;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_utils );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
                exception_tb = NULL;

                exception_lineno = 436;

                goto frame_exception_exit_3;
            }

            tmp_called_instance_2 = tmp_mvar_value_8;
            frame_65fa36b044c590d20a1655f9e7caeee8_3->m_frame.f_lineno = 436;
            tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_read_only_property, &PyTuple_GET_ITEM( const_tuple_str_plain__key_size_tuple, 0 ) );

            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 436;

                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem( locals_cryptography$hazmat$backends$openssl$rsa_422, const_str_plain_key_size, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 436;

                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_65fa36b044c590d20a1655f9e7caeee8_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_65fa36b044c590d20a1655f9e7caeee8_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_65fa36b044c590d20a1655f9e7caeee8_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_65fa36b044c590d20a1655f9e7caeee8_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_65fa36b044c590d20a1655f9e7caeee8_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_65fa36b044c590d20a1655f9e7caeee8_3,
            type_description_2
        );


        // Release cached frame.
        if ( frame_65fa36b044c590d20a1655f9e7caeee8_3 == cache_frame_65fa36b044c590d20a1655f9e7caeee8_3 )
        {
            Py_DECREF( frame_65fa36b044c590d20a1655f9e7caeee8_3 );
        }
        cache_frame_65fa36b044c590d20a1655f9e7caeee8_3 = NULL;

        assertFrameObject( frame_65fa36b044c590d20a1655f9e7caeee8_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_14;
        skip_nested_handling_2:;
        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_23_verifier(  );



        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$backends$openssl$rsa_422, const_str_plain_verifier, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_24_encrypt(  );



        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$backends$openssl$rsa_422, const_str_plain_encrypt, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_25_public_numbers(  );



        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$backends$openssl$rsa_422, const_str_plain_public_numbers, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_26_public_bytes(  );



        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$backends$openssl$rsa_422, const_str_plain_public_bytes, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$rsa$$$function_27_verify(  );



        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$backends$openssl$rsa_422, const_str_plain_verify, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_assign_source_61 = locals_cryptography$hazmat$backends$openssl$rsa_422;
        Py_INCREF( tmp_assign_source_61 );
        goto try_return_handler_14;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF( locals_cryptography$hazmat$backends$openssl$rsa_422 );
        locals_cryptography$hazmat$backends$openssl$rsa_422 = NULL;
        goto outline_result_4;
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

        Py_DECREF( locals_cryptography$hazmat$backends$openssl$rsa_422 );
        locals_cryptography$hazmat$backends$openssl$rsa_422 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$rsa );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 422;
        goto try_except_handler_13;
        outline_result_4:;
        assert( tmp_class_creation_4__class_dict == NULL );
        tmp_class_creation_4__class_dict = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
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


            exception_lineno = 422;

            goto try_except_handler_13;
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
        tmp_assign_source_62 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
        if ( tmp_assign_source_62 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 422;

            goto try_except_handler_13;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_assign_source_62 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_62 );
        condexpr_end_4:;
        assert( tmp_class_creation_4__metaclass == NULL );
        tmp_class_creation_4__metaclass = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_name_10;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_args_element_name_18;
        CHECK_OBJECT( tmp_class_creation_4__metaclass );
        tmp_called_name_10 = tmp_class_creation_4__metaclass;
        tmp_args_element_name_16 = const_str_plain__RSAPublicKey;
        tmp_args_element_name_17 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_4__class_dict );
        tmp_args_element_name_18 = tmp_class_creation_4__class_dict;
        frame_e5b17702a3d91744c314064e4a44cdd4->m_frame.f_lineno = 422;
        {
            PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18 };
            tmp_assign_source_63 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
        }

        if ( tmp_assign_source_63 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 422;

            goto try_except_handler_13;
        }
        assert( tmp_class_creation_4__class == NULL );
        tmp_class_creation_4__class = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_called_name_11;
        PyObject *tmp_called_name_12;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_20;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_utils );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
            exception_tb = NULL;

            exception_lineno = 421;

            goto try_except_handler_13;
        }

        tmp_source_name_4 = tmp_mvar_value_9;
        tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_register_interface );
        if ( tmp_called_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 421;

            goto try_except_handler_13;
        }
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain_RSAPublicKeyWithSerialization );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RSAPublicKeyWithSerialization );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_called_name_12 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "RSAPublicKeyWithSerialization" );
            exception_tb = NULL;

            exception_lineno = 421;

            goto try_except_handler_13;
        }

        tmp_args_element_name_19 = tmp_mvar_value_10;
        frame_e5b17702a3d91744c314064e4a44cdd4->m_frame.f_lineno = 421;
        {
            PyObject *call_args[] = { tmp_args_element_name_19 };
            tmp_called_name_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
        }

        Py_DECREF( tmp_called_name_12 );
        if ( tmp_called_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 421;

            goto try_except_handler_13;
        }
        CHECK_OBJECT( tmp_class_creation_4__class );
        tmp_args_element_name_20 = tmp_class_creation_4__class;
        frame_e5b17702a3d91744c314064e4a44cdd4->m_frame.f_lineno = 421;
        {
            PyObject *call_args[] = { tmp_args_element_name_20 };
            tmp_assign_source_64 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        Py_DECREF( tmp_called_name_11 );
        if ( tmp_assign_source_64 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 421;

            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_class_creation_4__class;
            assert( old != NULL );
            tmp_class_creation_4__class = tmp_assign_source_64;
            Py_DECREF( old );
        }

    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_4__class );
    tmp_class_creation_4__class = NULL;

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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e5b17702a3d91744c314064e4a44cdd4 );
#endif
    popFrameStack();

    assertFrameObject( frame_e5b17702a3d91744c314064e4a44cdd4 );

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e5b17702a3d91744c314064e4a44cdd4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e5b17702a3d91744c314064e4a44cdd4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e5b17702a3d91744c314064e4a44cdd4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e5b17702a3d91744c314064e4a44cdd4, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;
    {
        PyObject *tmp_assign_source_65;
        CHECK_OBJECT( tmp_class_creation_4__class );
        tmp_assign_source_65 = tmp_class_creation_4__class;
        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain__RSAPublicKey, tmp_assign_source_65 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class );
    Py_DECREF( tmp_class_creation_4__class );
    tmp_class_creation_4__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_dict );
    Py_DECREF( tmp_class_creation_4__class_dict );
    tmp_class_creation_4__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$rsa, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_cryptography$hazmat$backends$openssl$rsa );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
