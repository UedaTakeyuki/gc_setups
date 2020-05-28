/* Generated code for Python module 'cryptography.hazmat.primitives.ciphers.algorithms'
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

/* The "_module_cryptography$hazmat$primitives$ciphers$algorithms" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$primitives$ciphers$algorithms;
PyDictObject *moduledict_cryptography$hazmat$primitives$ciphers$algorithms;

/* The declarations of module constants used, if any. */
extern PyObject *const_tuple_str_plain__nonce_tuple;
static PyObject *const_tuple_str_plain_BlockCipherAlgorithm_str_plain_CipherAlgorithm_tuple;
extern PyObject *const_int_pos_512;
static PyObject *const_int_pos_104;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_ChaCha20;
extern PyObject *const_str_plain_property;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_int_pos_72;
static PyObject *const_str_plain_3DES;
static PyObject *const_frozenset_fe00a4f6ab944081e21008a0f74293d2;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_block_size;
static PyObject *const_str_plain_key_sizes;
extern PyObject *const_str_plain_BlockCipherAlgorithm;
extern PyObject *const_str_plain_self;
extern PyObject *const_int_pos_96;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_789bf429fa0712ee6c4aa5a826d663b8;
static PyObject *const_tuple_str_plain_algorithm_str_plain_key_tuple;
extern PyObject *const_str_plain_algorithm;
extern PyObject *const_int_pos_192;
static PyObject *const_frozenset_aece287703bf6a0e8bbd4620f66d4fcd;
extern PyObject *const_str_plain_format;
extern PyObject *const_int_pos_64;
extern PyObject *const_str_plain_read_only_property;
extern PyObject *const_int_pos_128;
extern PyObject *const_tuple_str_plain_utils_tuple;
extern PyObject *const_int_pos_80;
static PyObject *const_str_plain_camellia;
static PyObject *const_int_pos_88;
extern PyObject *const_str_plain_TripleDES;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_Blowfish;
extern PyObject *const_int_pos_16;
extern PyObject *const_str_plain_AES;
static PyObject *const_str_digest_789e8123a1ec29236b087e04298663cb;
static PyObject *const_tuple_str_plain_self_str_plain_key_str_plain_nonce_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_IDEA;
extern PyObject *const_str_plain_CAST5;
extern PyObject *const_str_plain___module__;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_tuple_str_plain_ModeWithNonce_tuple;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_utils;
static PyObject *const_frozenset_966142b12d0c43c757208299c957e27b;
extern PyObject *const_int_pos_256;
static PyObject *const_frozenset_d970c1dd3abca9b60e7fe6fefb4a91d1;
extern PyObject *const_tuple_str_plain_self_str_plain_key_tuple;
static PyObject *const_str_digest_e15ea585011e5d8a0cd2a7118ea65863;
static PyObject *const_frozenset_cf609eb9051a7250c9a68e22cef7d49d;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_SEED;
static PyObject *const_str_digest_0e36af67a67936242fbfb4935bc69ee8;
extern PyObject *const_str_plain_ARC4;
extern PyObject *const_int_pos_120;
extern PyObject *const_str_plain_nonce;
static PyObject *const_str_plain_RC4;
extern PyObject *const_str_plain_register_interface;
extern PyObject *const_str_plain_key_size;
static PyObject *const_str_plain__verify_key_size;
extern PyObject *const_str_plain_cryptography;
extern PyObject *const_int_pos_160;
static PyObject *const_frozenset_b37166fd9df1977e2d8b975a0483e7cb;
extern PyObject *const_str_plain_ModeWithNonce;
static PyObject *const_frozenset_1abd2c5dc48294c2b53ccf2b12c895e9;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_int_pos_112;
extern PyObject *const_int_pos_56;
extern PyObject *const_str_digest_87335604a4a83d266089f9a1aef4f588;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_int_0;
extern PyObject *const_str_digest_9af74ab7ec8186e2f6a1218dfc2da4e5;
extern PyObject *const_str_plain_Camellia;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain__nonce;
extern PyObject *const_str_plain__check_byteslike;
extern PyObject *const_str_plain_CipherAlgorithm;
static PyObject *const_frozenset_6fd33e8d75e9cb199acea43a44f90987;
extern PyObject *const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_int_pos_40;
extern PyObject *const_int_pos_48;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_plain_BlockCipherAlgorithm_str_plain_CipherAlgorithm_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_BlockCipherAlgorithm_str_plain_CipherAlgorithm_tuple, 0, const_str_plain_BlockCipherAlgorithm ); Py_INCREF( const_str_plain_BlockCipherAlgorithm );
    PyTuple_SET_ITEM( const_tuple_str_plain_BlockCipherAlgorithm_str_plain_CipherAlgorithm_tuple, 1, const_str_plain_CipherAlgorithm ); Py_INCREF( const_str_plain_CipherAlgorithm );
    const_int_pos_104 = PyInt_FromLong( 104l );
    const_int_pos_72 = PyInt_FromLong( 72l );
    const_str_plain_3DES = UNSTREAM_STRING( &constant_bin[ 570196 ], 4, 0 );
    const_frozenset_fe00a4f6ab944081e21008a0f74293d2 = PyFrozenSet_New( NULL );
    PySet_Add( const_frozenset_fe00a4f6ab944081e21008a0f74293d2, const_int_pos_64 );
    PySet_Add( const_frozenset_fe00a4f6ab944081e21008a0f74293d2, const_int_pos_80 );
    PySet_Add( const_frozenset_fe00a4f6ab944081e21008a0f74293d2, const_int_pos_40 );
    PySet_Add( const_frozenset_fe00a4f6ab944081e21008a0f74293d2, const_int_pos_96 );
    PySet_Add( const_frozenset_fe00a4f6ab944081e21008a0f74293d2, const_int_pos_128 );
    PySet_Add( const_frozenset_fe00a4f6ab944081e21008a0f74293d2, const_int_pos_112 );
    PySet_Add( const_frozenset_fe00a4f6ab944081e21008a0f74293d2, const_int_pos_48 );
    PySet_Add( const_frozenset_fe00a4f6ab944081e21008a0f74293d2, const_int_pos_72 );
    PySet_Add( const_frozenset_fe00a4f6ab944081e21008a0f74293d2, const_int_pos_120 );
    PySet_Add( const_frozenset_fe00a4f6ab944081e21008a0f74293d2, const_int_pos_56 );
    const_int_pos_88 = PyInt_FromLong( 88l );
    PySet_Add( const_frozenset_fe00a4f6ab944081e21008a0f74293d2, const_int_pos_88 );
    PySet_Add( const_frozenset_fe00a4f6ab944081e21008a0f74293d2, const_int_pos_104 );
    assert( PySet_Size( const_frozenset_fe00a4f6ab944081e21008a0f74293d2 ) == 12 );
    const_str_plain_key_sizes = UNSTREAM_STRING( &constant_bin[ 570200 ], 9, 1 );
    const_str_digest_789bf429fa0712ee6c4aa5a826d663b8 = UNSTREAM_STRING( &constant_bin[ 570209 ], 85, 0 );
    const_tuple_str_plain_algorithm_str_plain_key_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_algorithm_str_plain_key_tuple, 0, const_str_plain_algorithm ); Py_INCREF( const_str_plain_algorithm );
    PyTuple_SET_ITEM( const_tuple_str_plain_algorithm_str_plain_key_tuple, 1, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    const_frozenset_aece287703bf6a0e8bbd4620f66d4fcd = PyFrozenSet_New( NULL );
    PySet_Add( const_frozenset_aece287703bf6a0e8bbd4620f66d4fcd, const_int_pos_256 );
    assert( PySet_Size( const_frozenset_aece287703bf6a0e8bbd4620f66d4fcd ) == 1 );
    const_str_plain_camellia = UNSTREAM_STRING( &constant_bin[ 570294 ], 8, 1 );
    const_str_digest_789e8123a1ec29236b087e04298663cb = UNSTREAM_STRING( &constant_bin[ 570302 ], 33, 0 );
    const_tuple_str_plain_self_str_plain_key_str_plain_nonce_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_key_str_plain_nonce_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_key_str_plain_nonce_tuple, 1, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_key_str_plain_nonce_tuple, 2, const_str_plain_nonce ); Py_INCREF( const_str_plain_nonce );
    const_tuple_str_plain_ModeWithNonce_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ModeWithNonce_tuple, 0, const_str_plain_ModeWithNonce ); Py_INCREF( const_str_plain_ModeWithNonce );
    const_frozenset_966142b12d0c43c757208299c957e27b = PyFrozenSet_New( NULL );
    PySet_Add( const_frozenset_966142b12d0c43c757208299c957e27b, const_int_pos_128 );
    PySet_Add( const_frozenset_966142b12d0c43c757208299c957e27b, const_int_pos_192 );
    PySet_Add( const_frozenset_966142b12d0c43c757208299c957e27b, const_int_pos_256 );
    assert( PySet_Size( const_frozenset_966142b12d0c43c757208299c957e27b ) == 3 );
    const_frozenset_d970c1dd3abca9b60e7fe6fefb4a91d1 = PyFrozenSet_New( NULL );
    PySet_Add( const_frozenset_d970c1dd3abca9b60e7fe6fefb4a91d1, const_int_pos_64 );
    PySet_Add( const_frozenset_d970c1dd3abca9b60e7fe6fefb4a91d1, const_int_pos_128 );
    PySet_Add( const_frozenset_d970c1dd3abca9b60e7fe6fefb4a91d1, const_int_pos_192 );
    assert( PySet_Size( const_frozenset_d970c1dd3abca9b60e7fe6fefb4a91d1 ) == 3 );
    const_str_digest_e15ea585011e5d8a0cd2a7118ea65863 = UNSTREAM_STRING( &constant_bin[ 570335 ], 29, 0 );
    const_frozenset_cf609eb9051a7250c9a68e22cef7d49d = PyFrozenSet_New( NULL );
    PySet_Add( const_frozenset_cf609eb9051a7250c9a68e22cef7d49d, const_int_pos_128 );
    assert( PySet_Size( const_frozenset_cf609eb9051a7250c9a68e22cef7d49d ) == 1 );
    const_str_digest_0e36af67a67936242fbfb4935bc69ee8 = UNSTREAM_STRING( &constant_bin[ 570364 ], 58, 0 );
    const_str_plain_RC4 = UNSTREAM_STRING( &constant_bin[ 570422 ], 3, 1 );
    const_str_plain__verify_key_size = UNSTREAM_STRING( &constant_bin[ 570425 ], 16, 1 );
    const_frozenset_b37166fd9df1977e2d8b975a0483e7cb = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 570441 ], 270 );
    const_frozenset_1abd2c5dc48294c2b53ccf2b12c895e9 = PyFrozenSet_New( NULL );
    PySet_Add( const_frozenset_1abd2c5dc48294c2b53ccf2b12c895e9, const_int_pos_128 );
    PySet_Add( const_frozenset_1abd2c5dc48294c2b53ccf2b12c895e9, const_int_pos_160 );
    PySet_Add( const_frozenset_1abd2c5dc48294c2b53ccf2b12c895e9, const_int_pos_40 );
    PySet_Add( const_frozenset_1abd2c5dc48294c2b53ccf2b12c895e9, const_int_pos_64 );
    PySet_Add( const_frozenset_1abd2c5dc48294c2b53ccf2b12c895e9, const_int_pos_192 );
    PySet_Add( const_frozenset_1abd2c5dc48294c2b53ccf2b12c895e9, const_int_pos_256 );
    PySet_Add( const_frozenset_1abd2c5dc48294c2b53ccf2b12c895e9, const_int_pos_80 );
    PySet_Add( const_frozenset_1abd2c5dc48294c2b53ccf2b12c895e9, const_int_pos_56 );
    assert( PySet_Size( const_frozenset_1abd2c5dc48294c2b53ccf2b12c895e9 ) == 8 );
    const_frozenset_6fd33e8d75e9cb199acea43a44f90987 = PyFrozenSet_New( NULL );
    PySet_Add( const_frozenset_6fd33e8d75e9cb199acea43a44f90987, const_int_pos_128 );
    PySet_Add( const_frozenset_6fd33e8d75e9cb199acea43a44f90987, const_int_pos_192 );
    PySet_Add( const_frozenset_6fd33e8d75e9cb199acea43a44f90987, const_int_pos_256 );
    PySet_Add( const_frozenset_6fd33e8d75e9cb199acea43a44f90987, const_int_pos_512 );
    assert( PySet_Size( const_frozenset_6fd33e8d75e9cb199acea43a44f90987 ) == 4 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$primitives$ciphers$algorithms( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_0bd56cb1b106c37dbd02b0fd7e80aaab;
static PyCodeObject *codeobj_437fa179bcd8cc21d48a235f32488b05;
static PyCodeObject *codeobj_c63008cdd9cec6c82cfa0fee1592e9a7;
static PyCodeObject *codeobj_f22af0c102b58cb249ea0811537b04a5;
static PyCodeObject *codeobj_65c6a69f6b33c529e247092a17adacb4;
static PyCodeObject *codeobj_e85ae3a1c24f96ba70101d17011d6fdf;
static PyCodeObject *codeobj_045b0051ee762edcc83ad130b79982b8;
static PyCodeObject *codeobj_4461c9be09264eefc22eb5188e92e8e9;
static PyCodeObject *codeobj_3dcf63a550a4e1ba285e6e7570b4a0db;
static PyCodeObject *codeobj_4f147a2b397a53cac005845ace5baec5;
static PyCodeObject *codeobj_c3691b6b9d137504efdacfcefd58ae9e;
static PyCodeObject *codeobj_ca99392671c69c30ebad5b1d0074f7ed;
static PyCodeObject *codeobj_9e38bc7a13a7b9583032c05e0a3f57ef;
static PyCodeObject *codeobj_b58c75a3ce2f9ac29de5c96760ecb20c;
static PyCodeObject *codeobj_b87f10fadb0a19f980a270dc26d85695;
static PyCodeObject *codeobj_1b2fce8914b20de8316acca04c38eb2b;
static PyCodeObject *codeobj_c003c6a0bb3532ae038fe2085b9b8f29;
static PyCodeObject *codeobj_d7ba8221531bbd20bed2584674c8731d;
static PyCodeObject *codeobj_6387037250ee7af5cc2415a480a0c191;
static PyCodeObject *codeobj_2319c8ac406220244be822e66af16fc2;
static PyCodeObject *codeobj_8a2fd62fbd6667ec7bd16ac7252cc307;
static PyCodeObject *codeobj_b265f6dabcd57eaf97cf9be06197a428;
static PyCodeObject *codeobj_0e328e8677287244a54f098876991915;
static PyCodeObject *codeobj_9bb503abe38a805e692486066be9f82d;
static PyCodeObject *codeobj_e6e387819aaae44c47d7117e6021584b;
static PyCodeObject *codeobj_c714f1f2748f44554ff5b2d96240c1a6;
static PyCodeObject *codeobj_4e5e3209924d2b6d24d6d190571928ba;
static PyCodeObject *codeobj_b96fb94158504113127e1e7c118c59a1;
static PyCodeObject *codeobj_ff588180df8067ccead61676b0464bd2;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_789bf429fa0712ee6c4aa5a826d663b8;
    codeobj_0bd56cb1b106c37dbd02b0fd7e80aaab = MAKE_CODEOBJ( module_filename_obj, const_str_digest_0e36af67a67936242fbfb4935bc69ee8, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_437fa179bcd8cc21d48a235f32488b05 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_AES, 28, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c63008cdd9cec6c82cfa0fee1592e9a7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ARC4, 107, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f22af0c102b58cb249ea0811537b04a5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Blowfish, 78, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_65c6a69f6b33c529e247092a17adacb4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_CAST5, 93, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e85ae3a1c24f96ba70101d17011d6fdf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Camellia, 44, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_045b0051ee762edcc83ad130b79982b8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ChaCha20, 150, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4461c9be09264eefc22eb5188e92e8e9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_IDEA, 120, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3dcf63a550a4e1ba285e6e7570b4a0db = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SEED, 135, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4f147a2b397a53cac005845ace5baec5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_TripleDES, 59, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c3691b6b9d137504efdacfcefd58ae9e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 34, const_tuple_str_plain_self_str_plain_key_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ca99392671c69c30ebad5b1d0074f7ed = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 49, const_tuple_str_plain_self_str_plain_key_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9e38bc7a13a7b9583032c05e0a3f57ef = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 64, const_tuple_str_plain_self_str_plain_key_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b58c75a3ce2f9ac29de5c96760ecb20c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 83, const_tuple_str_plain_self_str_plain_key_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b87f10fadb0a19f980a270dc26d85695 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 98, const_tuple_str_plain_self_str_plain_key_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1b2fce8914b20de8316acca04c38eb2b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 111, const_tuple_str_plain_self_str_plain_key_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c003c6a0bb3532ae038fe2085b9b8f29 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 125, const_tuple_str_plain_self_str_plain_key_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d7ba8221531bbd20bed2584674c8731d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 140, const_tuple_str_plain_self_str_plain_key_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6387037250ee7af5cc2415a480a0c191 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 154, const_tuple_str_plain_self_str_plain_key_str_plain_nonce_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2319c8ac406220244be822e66af16fc2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__verify_key_size, 14, const_tuple_str_plain_algorithm_str_plain_key_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8a2fd62fbd6667ec7bd16ac7252cc307 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_key_size, 37, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b265f6dabcd57eaf97cf9be06197a428 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_key_size, 52, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0e328e8677287244a54f098876991915 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_key_size, 71, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9bb503abe38a805e692486066be9f82d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_key_size, 86, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e6e387819aaae44c47d7117e6021584b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_key_size, 101, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c714f1f2748f44554ff5b2d96240c1a6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_key_size, 114, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4e5e3209924d2b6d24d6d190571928ba = MAKE_CODEOBJ( module_filename_obj, const_str_plain_key_size, 128, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b96fb94158504113127e1e7c118c59a1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_key_size, 143, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ff588180df8067ccead61676b0464bd2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_key_size, 165, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_10___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_11_key_size(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_12___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_13_key_size(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_14___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_15_key_size(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_16___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_17_key_size(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_18___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_19_key_size(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_1__verify_key_size(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_2___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_3_key_size(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_4___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_5_key_size(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_6___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_7_key_size(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_8___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_9_key_size(  );


// The module function definitions.
static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_1__verify_key_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_algorithm = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_2319c8ac406220244be822e66af16fc2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_2319c8ac406220244be822e66af16fc2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2319c8ac406220244be822e66af16fc2, codeobj_2319c8ac406220244be822e66af16fc2, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *)+sizeof(void *) );
    frame_2319c8ac406220244be822e66af16fc2 = cache_frame_2319c8ac406220244be822e66af16fc2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2319c8ac406220244be822e66af16fc2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2319c8ac406220244be822e66af16fc2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "utils" );
            exception_tb = NULL;

            exception_lineno = 16;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        tmp_args_element_name_1 = const_str_plain_key;
        CHECK_OBJECT( par_key );
        tmp_args_element_name_2 = par_key;
        frame_2319c8ac406220244be822e66af16fc2->m_frame.f_lineno = 16;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__check_byteslike, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_key );
        tmp_len_arg_1 = par_key;
        tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_8;
        tmp_compexpr_left_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_algorithm );
        tmp_source_name_1 = par_algorithm;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_key_sizes );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 19;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "oo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_left_name_2;
            PyObject *tmp_len_arg_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_3;
            tmp_source_name_2 = const_str_digest_e15ea585011e5d8a0cd2a7118ea65863;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_format );
            assert( !(tmp_called_name_1 == NULL) );
            CHECK_OBJECT( par_key );
            tmp_len_arg_2 = par_key;
            tmp_left_name_2 = BUILTIN_LEN( tmp_len_arg_2 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 21;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_int_pos_8;
            tmp_args_element_name_3 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 21;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_algorithm );
            tmp_source_name_3 = par_algorithm;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_name );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_3 );

                exception_lineno = 21;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_2319c8ac406220244be822e66af16fc2->m_frame.f_lineno = 20;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 20;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_2319c8ac406220244be822e66af16fc2->m_frame.f_lineno = 20;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 20;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2319c8ac406220244be822e66af16fc2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2319c8ac406220244be822e66af16fc2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2319c8ac406220244be822e66af16fc2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2319c8ac406220244be822e66af16fc2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2319c8ac406220244be822e66af16fc2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2319c8ac406220244be822e66af16fc2,
        type_description_1,
        par_algorithm,
        par_key
    );


    // Release cached frame.
    if ( frame_2319c8ac406220244be822e66af16fc2 == cache_frame_2319c8ac406220244be822e66af16fc2 )
    {
        Py_DECREF( frame_2319c8ac406220244be822e66af16fc2 );
    }
    cache_frame_2319c8ac406220244be822e66af16fc2 = NULL;

    assertFrameObject( frame_2319c8ac406220244be822e66af16fc2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_key );
    tmp_return_value = par_key;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_1__verify_key_size );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

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

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_1__verify_key_size );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_2___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_c3691b6b9d137504efdacfcefd58ae9e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_c3691b6b9d137504efdacfcefd58ae9e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c3691b6b9d137504efdacfcefd58ae9e, codeobj_c3691b6b9d137504efdacfcefd58ae9e, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *)+sizeof(void *) );
    frame_c3691b6b9d137504efdacfcefd58ae9e = cache_frame_c3691b6b9d137504efdacfcefd58ae9e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c3691b6b9d137504efdacfcefd58ae9e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c3691b6b9d137504efdacfcefd58ae9e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain__verify_key_size );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_key_size );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_verify_key_size" );
            exception_tb = NULL;

            exception_lineno = 35;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT( par_key );
        tmp_args_element_name_2 = par_key;
        frame_c3691b6b9d137504efdacfcefd58ae9e->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_key, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c3691b6b9d137504efdacfcefd58ae9e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c3691b6b9d137504efdacfcefd58ae9e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c3691b6b9d137504efdacfcefd58ae9e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c3691b6b9d137504efdacfcefd58ae9e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c3691b6b9d137504efdacfcefd58ae9e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c3691b6b9d137504efdacfcefd58ae9e,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame.
    if ( frame_c3691b6b9d137504efdacfcefd58ae9e == cache_frame_c3691b6b9d137504efdacfcefd58ae9e )
    {
        Py_DECREF( frame_c3691b6b9d137504efdacfcefd58ae9e );
    }
    cache_frame_c3691b6b9d137504efdacfcefd58ae9e = NULL;

    assertFrameObject( frame_c3691b6b9d137504efdacfcefd58ae9e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_2___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_2___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_3_key_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_8a2fd62fbd6667ec7bd16ac7252cc307;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8a2fd62fbd6667ec7bd16ac7252cc307 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8a2fd62fbd6667ec7bd16ac7252cc307, codeobj_8a2fd62fbd6667ec7bd16ac7252cc307, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *) );
    frame_8a2fd62fbd6667ec7bd16ac7252cc307 = cache_frame_8a2fd62fbd6667ec7bd16ac7252cc307;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8a2fd62fbd6667ec7bd16ac7252cc307 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8a2fd62fbd6667ec7bd16ac7252cc307 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_key );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_8;
        tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8a2fd62fbd6667ec7bd16ac7252cc307 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8a2fd62fbd6667ec7bd16ac7252cc307 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8a2fd62fbd6667ec7bd16ac7252cc307 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8a2fd62fbd6667ec7bd16ac7252cc307, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8a2fd62fbd6667ec7bd16ac7252cc307->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8a2fd62fbd6667ec7bd16ac7252cc307, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8a2fd62fbd6667ec7bd16ac7252cc307,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_8a2fd62fbd6667ec7bd16ac7252cc307 == cache_frame_8a2fd62fbd6667ec7bd16ac7252cc307 )
    {
        Py_DECREF( frame_8a2fd62fbd6667ec7bd16ac7252cc307 );
    }
    cache_frame_8a2fd62fbd6667ec7bd16ac7252cc307 = NULL;

    assertFrameObject( frame_8a2fd62fbd6667ec7bd16ac7252cc307 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_3_key_size );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_3_key_size );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_4___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_ca99392671c69c30ebad5b1d0074f7ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_ca99392671c69c30ebad5b1d0074f7ed = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ca99392671c69c30ebad5b1d0074f7ed, codeobj_ca99392671c69c30ebad5b1d0074f7ed, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *)+sizeof(void *) );
    frame_ca99392671c69c30ebad5b1d0074f7ed = cache_frame_ca99392671c69c30ebad5b1d0074f7ed;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ca99392671c69c30ebad5b1d0074f7ed );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ca99392671c69c30ebad5b1d0074f7ed ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain__verify_key_size );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_key_size );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_verify_key_size" );
            exception_tb = NULL;

            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT( par_key );
        tmp_args_element_name_2 = par_key;
        frame_ca99392671c69c30ebad5b1d0074f7ed->m_frame.f_lineno = 50;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_key, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ca99392671c69c30ebad5b1d0074f7ed );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ca99392671c69c30ebad5b1d0074f7ed );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ca99392671c69c30ebad5b1d0074f7ed, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ca99392671c69c30ebad5b1d0074f7ed->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ca99392671c69c30ebad5b1d0074f7ed, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ca99392671c69c30ebad5b1d0074f7ed,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame.
    if ( frame_ca99392671c69c30ebad5b1d0074f7ed == cache_frame_ca99392671c69c30ebad5b1d0074f7ed )
    {
        Py_DECREF( frame_ca99392671c69c30ebad5b1d0074f7ed );
    }
    cache_frame_ca99392671c69c30ebad5b1d0074f7ed = NULL;

    assertFrameObject( frame_ca99392671c69c30ebad5b1d0074f7ed );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_4___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_4___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_5_key_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_b265f6dabcd57eaf97cf9be06197a428;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b265f6dabcd57eaf97cf9be06197a428 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b265f6dabcd57eaf97cf9be06197a428, codeobj_b265f6dabcd57eaf97cf9be06197a428, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *) );
    frame_b265f6dabcd57eaf97cf9be06197a428 = cache_frame_b265f6dabcd57eaf97cf9be06197a428;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b265f6dabcd57eaf97cf9be06197a428 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b265f6dabcd57eaf97cf9be06197a428 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_key );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_8;
        tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b265f6dabcd57eaf97cf9be06197a428 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b265f6dabcd57eaf97cf9be06197a428 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b265f6dabcd57eaf97cf9be06197a428 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b265f6dabcd57eaf97cf9be06197a428, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b265f6dabcd57eaf97cf9be06197a428->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b265f6dabcd57eaf97cf9be06197a428, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b265f6dabcd57eaf97cf9be06197a428,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_b265f6dabcd57eaf97cf9be06197a428 == cache_frame_b265f6dabcd57eaf97cf9be06197a428 )
    {
        Py_DECREF( frame_b265f6dabcd57eaf97cf9be06197a428 );
    }
    cache_frame_b265f6dabcd57eaf97cf9be06197a428 = NULL;

    assertFrameObject( frame_b265f6dabcd57eaf97cf9be06197a428 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_5_key_size );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_5_key_size );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_6___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_9e38bc7a13a7b9583032c05e0a3f57ef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_9e38bc7a13a7b9583032c05e0a3f57ef = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9e38bc7a13a7b9583032c05e0a3f57ef, codeobj_9e38bc7a13a7b9583032c05e0a3f57ef, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *)+sizeof(void *) );
    frame_9e38bc7a13a7b9583032c05e0a3f57ef = cache_frame_9e38bc7a13a7b9583032c05e0a3f57ef;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9e38bc7a13a7b9583032c05e0a3f57ef );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9e38bc7a13a7b9583032c05e0a3f57ef ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_key );
        tmp_len_arg_1 = par_key;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_8;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        assert( !(tmp_res == -1) );
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( par_key );
            tmp_left_name_1 = par_key;
            CHECK_OBJECT( par_key );
            tmp_left_name_2 = par_key;
            CHECK_OBJECT( par_key );
            tmp_right_name_2 = par_key;
            tmp_right_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = tmp_left_name_1;
            par_key = tmp_assign_source_1;

        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_len_arg_2;
            CHECK_OBJECT( par_key );
            tmp_len_arg_2 = par_key;
            tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_2 );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 67;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = const_int_pos_16;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            assert( !(tmp_res == -1) );
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
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                Py_ssize_t tmp_sliceslicedel_index_lower_1;
                Py_ssize_t tmp_slice_index_upper_1;
                PyObject *tmp_slice_source_1;
                CHECK_OBJECT( par_key );
                tmp_left_name_3 = par_key;
                tmp_sliceslicedel_index_lower_1 = 0;
                tmp_slice_index_upper_1 = 8;
                CHECK_OBJECT( par_key );
                tmp_slice_source_1 = par_key;
                tmp_right_name_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
                if ( tmp_right_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 68;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 68;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_2 = tmp_left_name_3;
                par_key = tmp_assign_source_2;

            }
            branch_no_2:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain__verify_key_size );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_key_size );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_verify_key_size" );
            exception_tb = NULL;

            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_1 = par_self;
        if ( par_key == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "key" );
            exception_tb = NULL;

            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = par_key;
        frame_9e38bc7a13a7b9583032c05e0a3f57ef->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_key, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e38bc7a13a7b9583032c05e0a3f57ef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e38bc7a13a7b9583032c05e0a3f57ef );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9e38bc7a13a7b9583032c05e0a3f57ef, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9e38bc7a13a7b9583032c05e0a3f57ef->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9e38bc7a13a7b9583032c05e0a3f57ef, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9e38bc7a13a7b9583032c05e0a3f57ef,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame.
    if ( frame_9e38bc7a13a7b9583032c05e0a3f57ef == cache_frame_9e38bc7a13a7b9583032c05e0a3f57ef )
    {
        Py_DECREF( frame_9e38bc7a13a7b9583032c05e0a3f57ef );
    }
    cache_frame_9e38bc7a13a7b9583032c05e0a3f57ef = NULL;

    assertFrameObject( frame_9e38bc7a13a7b9583032c05e0a3f57ef );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_6___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key );
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key );
    par_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_6___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_7_key_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_0e328e8677287244a54f098876991915;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0e328e8677287244a54f098876991915 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0e328e8677287244a54f098876991915, codeobj_0e328e8677287244a54f098876991915, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *) );
    frame_0e328e8677287244a54f098876991915 = cache_frame_0e328e8677287244a54f098876991915;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0e328e8677287244a54f098876991915 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0e328e8677287244a54f098876991915 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_key );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_8;
        tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0e328e8677287244a54f098876991915 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0e328e8677287244a54f098876991915 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0e328e8677287244a54f098876991915 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0e328e8677287244a54f098876991915, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0e328e8677287244a54f098876991915->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0e328e8677287244a54f098876991915, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0e328e8677287244a54f098876991915,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_0e328e8677287244a54f098876991915 == cache_frame_0e328e8677287244a54f098876991915 )
    {
        Py_DECREF( frame_0e328e8677287244a54f098876991915 );
    }
    cache_frame_0e328e8677287244a54f098876991915 = NULL;

    assertFrameObject( frame_0e328e8677287244a54f098876991915 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_7_key_size );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_7_key_size );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_8___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_b58c75a3ce2f9ac29de5c96760ecb20c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b58c75a3ce2f9ac29de5c96760ecb20c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b58c75a3ce2f9ac29de5c96760ecb20c, codeobj_b58c75a3ce2f9ac29de5c96760ecb20c, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *)+sizeof(void *) );
    frame_b58c75a3ce2f9ac29de5c96760ecb20c = cache_frame_b58c75a3ce2f9ac29de5c96760ecb20c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b58c75a3ce2f9ac29de5c96760ecb20c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b58c75a3ce2f9ac29de5c96760ecb20c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain__verify_key_size );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_key_size );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_verify_key_size" );
            exception_tb = NULL;

            exception_lineno = 84;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT( par_key );
        tmp_args_element_name_2 = par_key;
        frame_b58c75a3ce2f9ac29de5c96760ecb20c->m_frame.f_lineno = 84;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_key, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b58c75a3ce2f9ac29de5c96760ecb20c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b58c75a3ce2f9ac29de5c96760ecb20c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b58c75a3ce2f9ac29de5c96760ecb20c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b58c75a3ce2f9ac29de5c96760ecb20c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b58c75a3ce2f9ac29de5c96760ecb20c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b58c75a3ce2f9ac29de5c96760ecb20c,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame.
    if ( frame_b58c75a3ce2f9ac29de5c96760ecb20c == cache_frame_b58c75a3ce2f9ac29de5c96760ecb20c )
    {
        Py_DECREF( frame_b58c75a3ce2f9ac29de5c96760ecb20c );
    }
    cache_frame_b58c75a3ce2f9ac29de5c96760ecb20c = NULL;

    assertFrameObject( frame_b58c75a3ce2f9ac29de5c96760ecb20c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_8___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_8___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_9_key_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_9bb503abe38a805e692486066be9f82d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9bb503abe38a805e692486066be9f82d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9bb503abe38a805e692486066be9f82d, codeobj_9bb503abe38a805e692486066be9f82d, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *) );
    frame_9bb503abe38a805e692486066be9f82d = cache_frame_9bb503abe38a805e692486066be9f82d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9bb503abe38a805e692486066be9f82d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9bb503abe38a805e692486066be9f82d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_key );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_8;
        tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9bb503abe38a805e692486066be9f82d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9bb503abe38a805e692486066be9f82d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9bb503abe38a805e692486066be9f82d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9bb503abe38a805e692486066be9f82d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9bb503abe38a805e692486066be9f82d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9bb503abe38a805e692486066be9f82d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9bb503abe38a805e692486066be9f82d,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_9bb503abe38a805e692486066be9f82d == cache_frame_9bb503abe38a805e692486066be9f82d )
    {
        Py_DECREF( frame_9bb503abe38a805e692486066be9f82d );
    }
    cache_frame_9bb503abe38a805e692486066be9f82d = NULL;

    assertFrameObject( frame_9bb503abe38a805e692486066be9f82d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_9_key_size );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_9_key_size );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_10___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_b87f10fadb0a19f980a270dc26d85695;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b87f10fadb0a19f980a270dc26d85695 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b87f10fadb0a19f980a270dc26d85695, codeobj_b87f10fadb0a19f980a270dc26d85695, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *)+sizeof(void *) );
    frame_b87f10fadb0a19f980a270dc26d85695 = cache_frame_b87f10fadb0a19f980a270dc26d85695;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b87f10fadb0a19f980a270dc26d85695 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b87f10fadb0a19f980a270dc26d85695 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain__verify_key_size );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_key_size );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_verify_key_size" );
            exception_tb = NULL;

            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT( par_key );
        tmp_args_element_name_2 = par_key;
        frame_b87f10fadb0a19f980a270dc26d85695->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_key, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b87f10fadb0a19f980a270dc26d85695 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b87f10fadb0a19f980a270dc26d85695 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b87f10fadb0a19f980a270dc26d85695, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b87f10fadb0a19f980a270dc26d85695->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b87f10fadb0a19f980a270dc26d85695, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b87f10fadb0a19f980a270dc26d85695,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame.
    if ( frame_b87f10fadb0a19f980a270dc26d85695 == cache_frame_b87f10fadb0a19f980a270dc26d85695 )
    {
        Py_DECREF( frame_b87f10fadb0a19f980a270dc26d85695 );
    }
    cache_frame_b87f10fadb0a19f980a270dc26d85695 = NULL;

    assertFrameObject( frame_b87f10fadb0a19f980a270dc26d85695 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_10___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_10___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_11_key_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_e6e387819aaae44c47d7117e6021584b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e6e387819aaae44c47d7117e6021584b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e6e387819aaae44c47d7117e6021584b, codeobj_e6e387819aaae44c47d7117e6021584b, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *) );
    frame_e6e387819aaae44c47d7117e6021584b = cache_frame_e6e387819aaae44c47d7117e6021584b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e6e387819aaae44c47d7117e6021584b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e6e387819aaae44c47d7117e6021584b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_key );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_8;
        tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6e387819aaae44c47d7117e6021584b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6e387819aaae44c47d7117e6021584b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6e387819aaae44c47d7117e6021584b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e6e387819aaae44c47d7117e6021584b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e6e387819aaae44c47d7117e6021584b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e6e387819aaae44c47d7117e6021584b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e6e387819aaae44c47d7117e6021584b,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_e6e387819aaae44c47d7117e6021584b == cache_frame_e6e387819aaae44c47d7117e6021584b )
    {
        Py_DECREF( frame_e6e387819aaae44c47d7117e6021584b );
    }
    cache_frame_e6e387819aaae44c47d7117e6021584b = NULL;

    assertFrameObject( frame_e6e387819aaae44c47d7117e6021584b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_11_key_size );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_11_key_size );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_12___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_1b2fce8914b20de8316acca04c38eb2b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_1b2fce8914b20de8316acca04c38eb2b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1b2fce8914b20de8316acca04c38eb2b, codeobj_1b2fce8914b20de8316acca04c38eb2b, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *)+sizeof(void *) );
    frame_1b2fce8914b20de8316acca04c38eb2b = cache_frame_1b2fce8914b20de8316acca04c38eb2b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1b2fce8914b20de8316acca04c38eb2b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1b2fce8914b20de8316acca04c38eb2b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain__verify_key_size );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_key_size );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_verify_key_size" );
            exception_tb = NULL;

            exception_lineno = 112;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT( par_key );
        tmp_args_element_name_2 = par_key;
        frame_1b2fce8914b20de8316acca04c38eb2b->m_frame.f_lineno = 112;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_key, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1b2fce8914b20de8316acca04c38eb2b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1b2fce8914b20de8316acca04c38eb2b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1b2fce8914b20de8316acca04c38eb2b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1b2fce8914b20de8316acca04c38eb2b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1b2fce8914b20de8316acca04c38eb2b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1b2fce8914b20de8316acca04c38eb2b,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame.
    if ( frame_1b2fce8914b20de8316acca04c38eb2b == cache_frame_1b2fce8914b20de8316acca04c38eb2b )
    {
        Py_DECREF( frame_1b2fce8914b20de8316acca04c38eb2b );
    }
    cache_frame_1b2fce8914b20de8316acca04c38eb2b = NULL;

    assertFrameObject( frame_1b2fce8914b20de8316acca04c38eb2b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_12___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_12___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_13_key_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_c714f1f2748f44554ff5b2d96240c1a6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c714f1f2748f44554ff5b2d96240c1a6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c714f1f2748f44554ff5b2d96240c1a6, codeobj_c714f1f2748f44554ff5b2d96240c1a6, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *) );
    frame_c714f1f2748f44554ff5b2d96240c1a6 = cache_frame_c714f1f2748f44554ff5b2d96240c1a6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c714f1f2748f44554ff5b2d96240c1a6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c714f1f2748f44554ff5b2d96240c1a6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_key );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_8;
        tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c714f1f2748f44554ff5b2d96240c1a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c714f1f2748f44554ff5b2d96240c1a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c714f1f2748f44554ff5b2d96240c1a6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c714f1f2748f44554ff5b2d96240c1a6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c714f1f2748f44554ff5b2d96240c1a6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c714f1f2748f44554ff5b2d96240c1a6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c714f1f2748f44554ff5b2d96240c1a6,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_c714f1f2748f44554ff5b2d96240c1a6 == cache_frame_c714f1f2748f44554ff5b2d96240c1a6 )
    {
        Py_DECREF( frame_c714f1f2748f44554ff5b2d96240c1a6 );
    }
    cache_frame_c714f1f2748f44554ff5b2d96240c1a6 = NULL;

    assertFrameObject( frame_c714f1f2748f44554ff5b2d96240c1a6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_13_key_size );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_13_key_size );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_14___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_c003c6a0bb3532ae038fe2085b9b8f29;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_c003c6a0bb3532ae038fe2085b9b8f29 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c003c6a0bb3532ae038fe2085b9b8f29, codeobj_c003c6a0bb3532ae038fe2085b9b8f29, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *)+sizeof(void *) );
    frame_c003c6a0bb3532ae038fe2085b9b8f29 = cache_frame_c003c6a0bb3532ae038fe2085b9b8f29;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c003c6a0bb3532ae038fe2085b9b8f29 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c003c6a0bb3532ae038fe2085b9b8f29 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain__verify_key_size );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_key_size );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_verify_key_size" );
            exception_tb = NULL;

            exception_lineno = 126;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT( par_key );
        tmp_args_element_name_2 = par_key;
        frame_c003c6a0bb3532ae038fe2085b9b8f29->m_frame.f_lineno = 126;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_key, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c003c6a0bb3532ae038fe2085b9b8f29 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c003c6a0bb3532ae038fe2085b9b8f29 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c003c6a0bb3532ae038fe2085b9b8f29, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c003c6a0bb3532ae038fe2085b9b8f29->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c003c6a0bb3532ae038fe2085b9b8f29, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c003c6a0bb3532ae038fe2085b9b8f29,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame.
    if ( frame_c003c6a0bb3532ae038fe2085b9b8f29 == cache_frame_c003c6a0bb3532ae038fe2085b9b8f29 )
    {
        Py_DECREF( frame_c003c6a0bb3532ae038fe2085b9b8f29 );
    }
    cache_frame_c003c6a0bb3532ae038fe2085b9b8f29 = NULL;

    assertFrameObject( frame_c003c6a0bb3532ae038fe2085b9b8f29 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_14___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_14___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_15_key_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_4e5e3209924d2b6d24d6d190571928ba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4e5e3209924d2b6d24d6d190571928ba = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4e5e3209924d2b6d24d6d190571928ba, codeobj_4e5e3209924d2b6d24d6d190571928ba, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *) );
    frame_4e5e3209924d2b6d24d6d190571928ba = cache_frame_4e5e3209924d2b6d24d6d190571928ba;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4e5e3209924d2b6d24d6d190571928ba );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4e5e3209924d2b6d24d6d190571928ba ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_key );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_8;
        tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4e5e3209924d2b6d24d6d190571928ba );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4e5e3209924d2b6d24d6d190571928ba );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4e5e3209924d2b6d24d6d190571928ba );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4e5e3209924d2b6d24d6d190571928ba, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4e5e3209924d2b6d24d6d190571928ba->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4e5e3209924d2b6d24d6d190571928ba, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4e5e3209924d2b6d24d6d190571928ba,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_4e5e3209924d2b6d24d6d190571928ba == cache_frame_4e5e3209924d2b6d24d6d190571928ba )
    {
        Py_DECREF( frame_4e5e3209924d2b6d24d6d190571928ba );
    }
    cache_frame_4e5e3209924d2b6d24d6d190571928ba = NULL;

    assertFrameObject( frame_4e5e3209924d2b6d24d6d190571928ba );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_15_key_size );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_15_key_size );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_16___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_d7ba8221531bbd20bed2584674c8731d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_d7ba8221531bbd20bed2584674c8731d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d7ba8221531bbd20bed2584674c8731d, codeobj_d7ba8221531bbd20bed2584674c8731d, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *)+sizeof(void *) );
    frame_d7ba8221531bbd20bed2584674c8731d = cache_frame_d7ba8221531bbd20bed2584674c8731d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d7ba8221531bbd20bed2584674c8731d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d7ba8221531bbd20bed2584674c8731d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain__verify_key_size );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_key_size );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_verify_key_size" );
            exception_tb = NULL;

            exception_lineno = 141;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT( par_key );
        tmp_args_element_name_2 = par_key;
        frame_d7ba8221531bbd20bed2584674c8731d->m_frame.f_lineno = 141;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_key, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7ba8221531bbd20bed2584674c8731d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7ba8221531bbd20bed2584674c8731d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d7ba8221531bbd20bed2584674c8731d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d7ba8221531bbd20bed2584674c8731d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d7ba8221531bbd20bed2584674c8731d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d7ba8221531bbd20bed2584674c8731d,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame.
    if ( frame_d7ba8221531bbd20bed2584674c8731d == cache_frame_d7ba8221531bbd20bed2584674c8731d )
    {
        Py_DECREF( frame_d7ba8221531bbd20bed2584674c8731d );
    }
    cache_frame_d7ba8221531bbd20bed2584674c8731d = NULL;

    assertFrameObject( frame_d7ba8221531bbd20bed2584674c8731d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_16___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_16___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_17_key_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_b96fb94158504113127e1e7c118c59a1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b96fb94158504113127e1e7c118c59a1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b96fb94158504113127e1e7c118c59a1, codeobj_b96fb94158504113127e1e7c118c59a1, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *) );
    frame_b96fb94158504113127e1e7c118c59a1 = cache_frame_b96fb94158504113127e1e7c118c59a1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b96fb94158504113127e1e7c118c59a1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b96fb94158504113127e1e7c118c59a1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_key );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_8;
        tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b96fb94158504113127e1e7c118c59a1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b96fb94158504113127e1e7c118c59a1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b96fb94158504113127e1e7c118c59a1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b96fb94158504113127e1e7c118c59a1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b96fb94158504113127e1e7c118c59a1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b96fb94158504113127e1e7c118c59a1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b96fb94158504113127e1e7c118c59a1,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_b96fb94158504113127e1e7c118c59a1 == cache_frame_b96fb94158504113127e1e7c118c59a1 )
    {
        Py_DECREF( frame_b96fb94158504113127e1e7c118c59a1 );
    }
    cache_frame_b96fb94158504113127e1e7c118c59a1 = NULL;

    assertFrameObject( frame_b96fb94158504113127e1e7c118c59a1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_17_key_size );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_17_key_size );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_18___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    PyObject *par_nonce = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_6387037250ee7af5cc2415a480a0c191;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_6387037250ee7af5cc2415a480a0c191 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6387037250ee7af5cc2415a480a0c191, codeobj_6387037250ee7af5cc2415a480a0c191, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6387037250ee7af5cc2415a480a0c191 = cache_frame_6387037250ee7af5cc2415a480a0c191;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6387037250ee7af5cc2415a480a0c191 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6387037250ee7af5cc2415a480a0c191 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain__verify_key_size );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_key_size );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_verify_key_size" );
            exception_tb = NULL;

            exception_lineno = 155;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT( par_key );
        tmp_args_element_name_2 = par_key;
        frame_6387037250ee7af5cc2415a480a0c191->m_frame.f_lineno = 155;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_key, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

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

            exception_lineno = 156;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        tmp_args_element_name_3 = const_str_plain_nonce;
        CHECK_OBJECT( par_nonce );
        tmp_args_element_name_4 = par_nonce;
        frame_6387037250ee7af5cc2415a480a0c191->m_frame.f_lineno = 156;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__check_byteslike, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 156;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_nonce );
        tmp_len_arg_1 = par_nonce;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_16;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        assert( !(tmp_res == -1) );
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
            tmp_make_exception_arg_1 = const_str_digest_789e8123a1ec29236b087e04298663cb;
            frame_6387037250ee7af5cc2415a480a0c191->m_frame.f_lineno = 159;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 159;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_nonce );
        tmp_assattr_name_2 = par_nonce;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__nonce, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6387037250ee7af5cc2415a480a0c191 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6387037250ee7af5cc2415a480a0c191 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6387037250ee7af5cc2415a480a0c191, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6387037250ee7af5cc2415a480a0c191->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6387037250ee7af5cc2415a480a0c191, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6387037250ee7af5cc2415a480a0c191,
        type_description_1,
        par_self,
        par_key,
        par_nonce
    );


    // Release cached frame.
    if ( frame_6387037250ee7af5cc2415a480a0c191 == cache_frame_6387037250ee7af5cc2415a480a0c191 )
    {
        Py_DECREF( frame_6387037250ee7af5cc2415a480a0c191 );
    }
    cache_frame_6387037250ee7af5cc2415a480a0c191 = NULL;

    assertFrameObject( frame_6387037250ee7af5cc2415a480a0c191 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_18___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_nonce );
    Py_DECREF( par_nonce );
    par_nonce = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_nonce );
    Py_DECREF( par_nonce );
    par_nonce = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_18___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_19_key_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_ff588180df8067ccead61676b0464bd2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ff588180df8067ccead61676b0464bd2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ff588180df8067ccead61676b0464bd2, codeobj_ff588180df8067ccead61676b0464bd2, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *) );
    frame_ff588180df8067ccead61676b0464bd2 = cache_frame_ff588180df8067ccead61676b0464bd2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ff588180df8067ccead61676b0464bd2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ff588180df8067ccead61676b0464bd2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_key );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_8;
        tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ff588180df8067ccead61676b0464bd2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ff588180df8067ccead61676b0464bd2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ff588180df8067ccead61676b0464bd2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ff588180df8067ccead61676b0464bd2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ff588180df8067ccead61676b0464bd2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ff588180df8067ccead61676b0464bd2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ff588180df8067ccead61676b0464bd2,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_ff588180df8067ccead61676b0464bd2 == cache_frame_ff588180df8067ccead61676b0464bd2 )
    {
        Py_DECREF( frame_ff588180df8067ccead61676b0464bd2 );
    }
    cache_frame_ff588180df8067ccead61676b0464bd2 = NULL;

    assertFrameObject( frame_ff588180df8067ccead61676b0464bd2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_19_key_size );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_19_key_size );
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



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_10___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_10___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b87f10fadb0a19f980a270dc26d85695,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_11_key_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_11_key_size,
        const_str_plain_key_size,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e6e387819aaae44c47d7117e6021584b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_12___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_12___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1b2fce8914b20de8316acca04c38eb2b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_13_key_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_13_key_size,
        const_str_plain_key_size,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c714f1f2748f44554ff5b2d96240c1a6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_14___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_14___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c003c6a0bb3532ae038fe2085b9b8f29,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_15_key_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_15_key_size,
        const_str_plain_key_size,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4e5e3209924d2b6d24d6d190571928ba,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_16___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_16___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d7ba8221531bbd20bed2584674c8731d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_17_key_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_17_key_size,
        const_str_plain_key_size,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b96fb94158504113127e1e7c118c59a1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_18___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_18___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6387037250ee7af5cc2415a480a0c191,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_19_key_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_19_key_size,
        const_str_plain_key_size,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ff588180df8067ccead61676b0464bd2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_1__verify_key_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_1__verify_key_size,
        const_str_plain__verify_key_size,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2319c8ac406220244be822e66af16fc2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_2___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c3691b6b9d137504efdacfcefd58ae9e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_3_key_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_3_key_size,
        const_str_plain_key_size,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8a2fd62fbd6667ec7bd16ac7252cc307,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_4___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ca99392671c69c30ebad5b1d0074f7ed,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_5_key_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_5_key_size,
        const_str_plain_key_size,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b265f6dabcd57eaf97cf9be06197a428,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_6___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9e38bc7a13a7b9583032c05e0a3f57ef,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_7_key_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_7_key_size,
        const_str_plain_key_size,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0e328e8677287244a54f098876991915,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_8___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b58c75a3ce2f9ac29de5c96760ecb20c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_9_key_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_9_key_size,
        const_str_plain_key_size,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9bb503abe38a805e692486066be9f82d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cryptography$hazmat$primitives$ciphers$algorithms =
{
    PyModuleDef_HEAD_INIT,
    "cryptography.hazmat.primitives.ciphers.algorithms",
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

MOD_INIT_DECL( cryptography$hazmat$primitives$ciphers$algorithms )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_cryptography$hazmat$primitives$ciphers$algorithms );
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
    puts("cryptography.hazmat.primitives.ciphers.algorithms: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.primitives.ciphers.algorithms: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.primitives.ciphers.algorithms: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcryptography$hazmat$primitives$ciphers$algorithms" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cryptography$hazmat$primitives$ciphers$algorithms = Py_InitModule4(
        "cryptography.hazmat.primitives.ciphers.algorithms",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_cryptography$hazmat$primitives$ciphers$algorithms = PyModule_Create( &mdef_cryptography$hazmat$primitives$ciphers$algorithms );
#endif

    moduledict_cryptography$hazmat$primitives$ciphers$algorithms = MODULE_DICT( module_cryptography$hazmat$primitives$ciphers$algorithms );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_cryptography$hazmat$primitives$ciphers$algorithms,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$ciphers$algorithms,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$ciphers$algorithms,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_cryptography$hazmat$primitives$ciphers$algorithms );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_87335604a4a83d266089f9a1aef4f588, module_cryptography$hazmat$primitives$ciphers$algorithms );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
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
    PyObject *tmp_class_creation_5__class = NULL;
    PyObject *tmp_class_creation_5__class_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_6__class = NULL;
    PyObject *tmp_class_creation_6__class_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_7__class = NULL;
    PyObject *tmp_class_creation_7__class_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_8__class = NULL;
    PyObject *tmp_class_creation_8__class_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_9__class = NULL;
    PyObject *tmp_class_creation_9__class_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_0bd56cb1b106c37dbd02b0fd7e80aaab;
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
    PyObject *locals_cryptography$hazmat$primitives$ciphers$algorithms_28 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_437fa179bcd8cc21d48a235f32488b05_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_437fa179bcd8cc21d48a235f32488b05_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_cryptography$hazmat$primitives$ciphers$algorithms_44 = NULL;
    struct Nuitka_FrameObject *frame_e85ae3a1c24f96ba70101d17011d6fdf_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_e85ae3a1c24f96ba70101d17011d6fdf_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_cryptography$hazmat$primitives$ciphers$algorithms_59 = NULL;
    struct Nuitka_FrameObject *frame_4f147a2b397a53cac005845ace5baec5_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_4f147a2b397a53cac005845ace5baec5_4 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *locals_cryptography$hazmat$primitives$ciphers$algorithms_78 = NULL;
    struct Nuitka_FrameObject *frame_f22af0c102b58cb249ea0811537b04a5_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_f22af0c102b58cb249ea0811537b04a5_5 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *locals_cryptography$hazmat$primitives$ciphers$algorithms_93 = NULL;
    struct Nuitka_FrameObject *frame_65c6a69f6b33c529e247092a17adacb4_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    static struct Nuitka_FrameObject *cache_frame_65c6a69f6b33c529e247092a17adacb4_6 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_cryptography$hazmat$primitives$ciphers$algorithms_107 = NULL;
    struct Nuitka_FrameObject *frame_c63008cdd9cec6c82cfa0fee1592e9a7_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c63008cdd9cec6c82cfa0fee1592e9a7_7 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *locals_cryptography$hazmat$primitives$ciphers$algorithms_120 = NULL;
    struct Nuitka_FrameObject *frame_4461c9be09264eefc22eb5188e92e8e9_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    static struct Nuitka_FrameObject *cache_frame_4461c9be09264eefc22eb5188e92e8e9_8 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *locals_cryptography$hazmat$primitives$ciphers$algorithms_135 = NULL;
    struct Nuitka_FrameObject *frame_3dcf63a550a4e1ba285e6e7570b4a0db_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    static struct Nuitka_FrameObject *cache_frame_3dcf63a550a4e1ba285e6e7570b4a0db_9 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *locals_cryptography$hazmat$primitives$ciphers$algorithms_150 = NULL;
    struct Nuitka_FrameObject *frame_045b0051ee762edcc83ad130b79982b8_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    static struct Nuitka_FrameObject *cache_frame_045b0051ee762edcc83ad130b79982b8_10 = NULL;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_789bf429fa0712ee6c4aa5a826d663b8;
        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
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
    frame_0bd56cb1b106c37dbd02b0fd7e80aaab = MAKE_MODULE_FRAME( codeobj_0bd56cb1b106c37dbd02b0fd7e80aaab, module_cryptography$hazmat$primitives$ciphers$algorithms );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_0bd56cb1b106c37dbd02b0fd7e80aaab );
    assert( Py_REFCNT( frame_0bd56cb1b106c37dbd02b0fd7e80aaab ) == 2 );

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
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
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
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_cryptography;
        tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$ciphers$algorithms;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_utils_tuple;
        tmp_level_name_1 = const_int_0;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 7;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_utils );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_9af74ab7ec8186e2f6a1218dfc2da4e5;
        tmp_globals_name_2 = (PyObject *)moduledict_cryptography$hazmat$primitives$ciphers$algorithms;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_BlockCipherAlgorithm_str_plain_CipherAlgorithm_tuple;
        tmp_level_name_2 = const_int_0;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 8;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_BlockCipherAlgorithm );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_BlockCipherAlgorithm, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_CipherAlgorithm );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm, tmp_assign_source_10 );
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
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c;
        tmp_globals_name_3 = (PyObject *)moduledict_cryptography$hazmat$primitives$ciphers$algorithms;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_ModeWithNonce_tuple;
        tmp_level_name_3 = const_int_0;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 11;
        tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_ModeWithNonce );
        Py_DECREF( tmp_import_name_from_7 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_ModeWithNonce, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_1__verify_key_size(  );



        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain__verify_key_size, tmp_assign_source_12 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_cryptography$hazmat$primitives$ciphers$algorithms_28 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_87335604a4a83d266089f9a1aef4f588;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_28, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_plain_AES;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_28, const_str_plain_name, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_int_pos_128;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_28, const_str_plain_block_size, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_frozenset_6fd33e8d75e9cb199acea43a44f90987;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_28, const_str_plain_key_sizes, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_2___init__(  );



        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_28, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_437fa179bcd8cc21d48a235f32488b05_2, codeobj_437fa179bcd8cc21d48a235f32488b05, module_cryptography$hazmat$primitives$ciphers$algorithms, 0 );
        frame_437fa179bcd8cc21d48a235f32488b05_2 = cache_frame_437fa179bcd8cc21d48a235f32488b05_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_437fa179bcd8cc21d48a235f32488b05_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_437fa179bcd8cc21d48a235f32488b05_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            tmp_called_name_1 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_1 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_3_key_size(  );



            frame_437fa179bcd8cc21d48a235f32488b05_2->m_frame.f_lineno = 37;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 37;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_28, const_str_plain_key_size, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 37;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_437fa179bcd8cc21d48a235f32488b05_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_437fa179bcd8cc21d48a235f32488b05_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_437fa179bcd8cc21d48a235f32488b05_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_437fa179bcd8cc21d48a235f32488b05_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_437fa179bcd8cc21d48a235f32488b05_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_437fa179bcd8cc21d48a235f32488b05_2,
            type_description_2
        );


        // Release cached frame.
        if ( frame_437fa179bcd8cc21d48a235f32488b05_2 == cache_frame_437fa179bcd8cc21d48a235f32488b05_2 )
        {
            Py_DECREF( frame_437fa179bcd8cc21d48a235f32488b05_2 );
        }
        cache_frame_437fa179bcd8cc21d48a235f32488b05_2 = NULL;

        assertFrameObject( frame_437fa179bcd8cc21d48a235f32488b05_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        tmp_assign_source_13 = locals_cryptography$hazmat$primitives$ciphers$algorithms_28;
        Py_INCREF( tmp_assign_source_13 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_cryptography$hazmat$primitives$ciphers$algorithms_28 );
        locals_cryptography$hazmat$primitives$ciphers$algorithms_28 = NULL;
        goto outline_result_1;
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

        Py_DECREF( locals_cryptography$hazmat$primitives$ciphers$algorithms_28 );
        locals_cryptography$hazmat$primitives$ciphers$algorithms_28 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 28;
        goto try_except_handler_3;
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
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


            exception_lineno = 28;

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
        tmp_assign_source_14 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_14 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_14 );
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_2 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_2 = const_str_plain_AES;
        tmp_args_element_name_3 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_4 = tmp_class_creation_1__class_dict;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 28;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_3;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

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

            exception_lineno = 27;

            goto try_except_handler_3;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_register_interface );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto try_except_handler_3;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "CipherAlgorithm" );
            exception_tb = NULL;

            exception_lineno = 27;

            goto try_except_handler_3;
        }

        tmp_args_element_name_5 = tmp_mvar_value_2;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 27;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_called_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto try_except_handler_3;
        }
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_args_element_name_6 = tmp_class_creation_1__class;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 27;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_class_creation_1__class;
            assert( old != NULL );
            tmp_class_creation_1__class = tmp_assign_source_16;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_5;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

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

            exception_lineno = 26;

            goto try_except_handler_3;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_register_interface );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_BlockCipherAlgorithm );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BlockCipherAlgorithm );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "BlockCipherAlgorithm" );
            exception_tb = NULL;

            exception_lineno = 26;

            goto try_except_handler_3;
        }

        tmp_args_element_name_7 = tmp_mvar_value_4;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 26;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_called_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_args_element_name_8 = tmp_class_creation_1__class;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 26;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_class_creation_1__class;
            assert( old != NULL );
            tmp_class_creation_1__class = tmp_assign_source_17;
            Py_DECREF( old );
        }

    }
    goto try_end_3;
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

    Py_XDECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_18 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_AES, tmp_assign_source_18 );
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
        PyObject *tmp_assign_source_19;
        {
            PyObject *tmp_set_locals_2;
            tmp_set_locals_2 = PyDict_New();
            locals_cryptography$hazmat$primitives$ciphers$algorithms_44 = tmp_set_locals_2;
        }
        tmp_dictset_value = const_str_digest_87335604a4a83d266089f9a1aef4f588;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_44, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_plain_camellia;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_44, const_str_plain_name, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_int_pos_128;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_44, const_str_plain_block_size, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_frozenset_966142b12d0c43c757208299c957e27b;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_44, const_str_plain_key_sizes, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_4___init__(  );



        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_44, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_e85ae3a1c24f96ba70101d17011d6fdf_3, codeobj_e85ae3a1c24f96ba70101d17011d6fdf, module_cryptography$hazmat$primitives$ciphers$algorithms, 0 );
        frame_e85ae3a1c24f96ba70101d17011d6fdf_3 = cache_frame_e85ae3a1c24f96ba70101d17011d6fdf_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_e85ae3a1c24f96ba70101d17011d6fdf_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_e85ae3a1c24f96ba70101d17011d6fdf_3 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_element_name_9;
            tmp_called_name_7 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_9 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_5_key_size(  );



            frame_e85ae3a1c24f96ba70101d17011d6fdf_3->m_frame.f_lineno = 52;
            {
                PyObject *call_args[] = { tmp_args_element_name_9 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_args_element_name_9 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;

                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_44, const_str_plain_key_size, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;

                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_e85ae3a1c24f96ba70101d17011d6fdf_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_e85ae3a1c24f96ba70101d17011d6fdf_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_e85ae3a1c24f96ba70101d17011d6fdf_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_e85ae3a1c24f96ba70101d17011d6fdf_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_e85ae3a1c24f96ba70101d17011d6fdf_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_e85ae3a1c24f96ba70101d17011d6fdf_3,
            type_description_2
        );


        // Release cached frame.
        if ( frame_e85ae3a1c24f96ba70101d17011d6fdf_3 == cache_frame_e85ae3a1c24f96ba70101d17011d6fdf_3 )
        {
            Py_DECREF( frame_e85ae3a1c24f96ba70101d17011d6fdf_3 );
        }
        cache_frame_e85ae3a1c24f96ba70101d17011d6fdf_3 = NULL;

        assertFrameObject( frame_e85ae3a1c24f96ba70101d17011d6fdf_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        tmp_assign_source_19 = locals_cryptography$hazmat$primitives$ciphers$algorithms_44;
        Py_INCREF( tmp_assign_source_19 );
        goto try_return_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF( locals_cryptography$hazmat$primitives$ciphers$algorithms_44 );
        locals_cryptography$hazmat$primitives$ciphers$algorithms_44 = NULL;
        goto outline_result_2;
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

        Py_DECREF( locals_cryptography$hazmat$primitives$ciphers$algorithms_44 );
        locals_cryptography$hazmat$primitives$ciphers$algorithms_44 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 44;
        goto try_except_handler_5;
        outline_result_2:;
        assert( tmp_class_creation_2__class_dict == NULL );
        tmp_class_creation_2__class_dict = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
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


            exception_lineno = 44;

            goto try_except_handler_5;
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
        tmp_assign_source_20 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;

            goto try_except_handler_5;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_20 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_20 );
        condexpr_end_2:;
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_8;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_called_name_8 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_10 = const_str_plain_Camellia;
        tmp_args_element_name_11 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_2__class_dict );
        tmp_args_element_name_12 = tmp_class_creation_2__class_dict;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 44;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_8, call_args );
        }

        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;

            goto try_except_handler_5;
        }
        assert( tmp_class_creation_2__class == NULL );
        tmp_class_creation_2__class = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_name_9;
        PyObject *tmp_called_name_10;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_14;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

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

            exception_lineno = 43;

            goto try_except_handler_5;
        }

        tmp_source_name_3 = tmp_mvar_value_5;
        tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_register_interface );
        if ( tmp_called_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto try_except_handler_5;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_10 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "CipherAlgorithm" );
            exception_tb = NULL;

            exception_lineno = 43;

            goto try_except_handler_5;
        }

        tmp_args_element_name_13 = tmp_mvar_value_6;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 43;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_called_name_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_called_name_10 );
        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto try_except_handler_5;
        }
        CHECK_OBJECT( tmp_class_creation_2__class );
        tmp_args_element_name_14 = tmp_class_creation_2__class;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 43;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_called_name_9 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_class_creation_2__class;
            assert( old != NULL );
            tmp_class_creation_2__class = tmp_assign_source_22;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_11;
        PyObject *tmp_called_name_12;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_16;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
            exception_tb = NULL;

            exception_lineno = 42;

            goto try_except_handler_5;
        }

        tmp_source_name_4 = tmp_mvar_value_7;
        tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_register_interface );
        if ( tmp_called_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;

            goto try_except_handler_5;
        }
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_BlockCipherAlgorithm );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BlockCipherAlgorithm );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_called_name_12 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "BlockCipherAlgorithm" );
            exception_tb = NULL;

            exception_lineno = 42;

            goto try_except_handler_5;
        }

        tmp_args_element_name_15 = tmp_mvar_value_8;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = { tmp_args_element_name_15 };
            tmp_called_name_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
        }

        Py_DECREF( tmp_called_name_12 );
        if ( tmp_called_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;

            goto try_except_handler_5;
        }
        CHECK_OBJECT( tmp_class_creation_2__class );
        tmp_args_element_name_16 = tmp_class_creation_2__class;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = { tmp_args_element_name_16 };
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        Py_DECREF( tmp_called_name_11 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;

            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_class_creation_2__class;
            assert( old != NULL );
            tmp_class_creation_2__class = tmp_assign_source_23;
            Py_DECREF( old );
        }

    }
    goto try_end_4;
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

    Py_XDECREF( tmp_class_creation_2__class );
    tmp_class_creation_2__class = NULL;

    Py_XDECREF( tmp_class_creation_2__class_dict );
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
    try_end_4:;
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT( tmp_class_creation_2__class );
        tmp_assign_source_24 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_Camellia, tmp_assign_source_24 );
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
        PyObject *tmp_assign_source_25;
        {
            PyObject *tmp_set_locals_3;
            tmp_set_locals_3 = PyDict_New();
            locals_cryptography$hazmat$primitives$ciphers$algorithms_59 = tmp_set_locals_3;
        }
        tmp_dictset_value = const_str_digest_87335604a4a83d266089f9a1aef4f588;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_59, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_plain_3DES;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_59, const_str_plain_name, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_int_pos_64;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_59, const_str_plain_block_size, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_frozenset_d970c1dd3abca9b60e7fe6fefb4a91d1;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_59, const_str_plain_key_sizes, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_6___init__(  );



        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_59, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_4f147a2b397a53cac005845ace5baec5_4, codeobj_4f147a2b397a53cac005845ace5baec5, module_cryptography$hazmat$primitives$ciphers$algorithms, 0 );
        frame_4f147a2b397a53cac005845ace5baec5_4 = cache_frame_4f147a2b397a53cac005845ace5baec5_4;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_4f147a2b397a53cac005845ace5baec5_4 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_4f147a2b397a53cac005845ace5baec5_4 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_13;
            PyObject *tmp_args_element_name_17;
            tmp_called_name_13 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_17 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_7_key_size(  );



            frame_4f147a2b397a53cac005845ace5baec5_4->m_frame.f_lineno = 71;
            {
                PyObject *call_args[] = { tmp_args_element_name_17 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
            }

            Py_DECREF( tmp_args_element_name_17 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;

                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_59, const_str_plain_key_size, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;

                goto frame_exception_exit_4;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_4f147a2b397a53cac005845ace5baec5_4 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_4f147a2b397a53cac005845ace5baec5_4 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_4f147a2b397a53cac005845ace5baec5_4, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_4f147a2b397a53cac005845ace5baec5_4->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_4f147a2b397a53cac005845ace5baec5_4, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_4f147a2b397a53cac005845ace5baec5_4,
            type_description_2
        );


        // Release cached frame.
        if ( frame_4f147a2b397a53cac005845ace5baec5_4 == cache_frame_4f147a2b397a53cac005845ace5baec5_4 )
        {
            Py_DECREF( frame_4f147a2b397a53cac005845ace5baec5_4 );
        }
        cache_frame_4f147a2b397a53cac005845ace5baec5_4 = NULL;

        assertFrameObject( frame_4f147a2b397a53cac005845ace5baec5_4 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_8;
        skip_nested_handling_3:;
        tmp_assign_source_25 = locals_cryptography$hazmat$primitives$ciphers$algorithms_59;
        Py_INCREF( tmp_assign_source_25 );
        goto try_return_handler_8;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF( locals_cryptography$hazmat$primitives$ciphers$algorithms_59 );
        locals_cryptography$hazmat$primitives$ciphers$algorithms_59 = NULL;
        goto outline_result_3;
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

        Py_DECREF( locals_cryptography$hazmat$primitives$ciphers$algorithms_59 );
        locals_cryptography$hazmat$primitives$ciphers$algorithms_59 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_3:;
        exception_lineno = 59;
        goto try_except_handler_7;
        outline_result_3:;
        assert( tmp_class_creation_3__class_dict == NULL );
        tmp_class_creation_3__class_dict = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
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


            exception_lineno = 59;

            goto try_except_handler_7;
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
        tmp_assign_source_26 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;

            goto try_except_handler_7;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_assign_source_26 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_26 );
        condexpr_end_3:;
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_name_14;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_called_name_14 = tmp_class_creation_3__metaclass;
        tmp_args_element_name_18 = const_str_plain_TripleDES;
        tmp_args_element_name_19 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_3__class_dict );
        tmp_args_element_name_20 = tmp_class_creation_3__class_dict;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20 };
            tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_14, call_args );
        }

        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;

            goto try_except_handler_7;
        }
        assert( tmp_class_creation_3__class == NULL );
        tmp_class_creation_3__class = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_name_15;
        PyObject *tmp_called_name_16;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_22;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

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

            exception_lineno = 58;

            goto try_except_handler_7;
        }

        tmp_source_name_5 = tmp_mvar_value_9;
        tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_register_interface );
        if ( tmp_called_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_7;
        }
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_called_name_16 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "CipherAlgorithm" );
            exception_tb = NULL;

            exception_lineno = 58;

            goto try_except_handler_7;
        }

        tmp_args_element_name_21 = tmp_mvar_value_10;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = { tmp_args_element_name_21 };
            tmp_called_name_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
        }

        Py_DECREF( tmp_called_name_16 );
        if ( tmp_called_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_7;
        }
        CHECK_OBJECT( tmp_class_creation_3__class );
        tmp_args_element_name_22 = tmp_class_creation_3__class;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = { tmp_args_element_name_22 };
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
        }

        Py_DECREF( tmp_called_name_15 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_class_creation_3__class;
            assert( old != NULL );
            tmp_class_creation_3__class = tmp_assign_source_28;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_name_17;
        PyObject *tmp_called_name_18;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_24;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
            exception_tb = NULL;

            exception_lineno = 57;

            goto try_except_handler_7;
        }

        tmp_source_name_6 = tmp_mvar_value_11;
        tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_register_interface );
        if ( tmp_called_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;

            goto try_except_handler_7;
        }
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_BlockCipherAlgorithm );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BlockCipherAlgorithm );
        }

        if ( tmp_mvar_value_12 == NULL )
        {
            Py_DECREF( tmp_called_name_18 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "BlockCipherAlgorithm" );
            exception_tb = NULL;

            exception_lineno = 57;

            goto try_except_handler_7;
        }

        tmp_args_element_name_23 = tmp_mvar_value_12;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = { tmp_args_element_name_23 };
            tmp_called_name_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
        }

        Py_DECREF( tmp_called_name_18 );
        if ( tmp_called_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;

            goto try_except_handler_7;
        }
        CHECK_OBJECT( tmp_class_creation_3__class );
        tmp_args_element_name_24 = tmp_class_creation_3__class;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = { tmp_args_element_name_24 };
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
        }

        Py_DECREF( tmp_called_name_17 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;

            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_class_creation_3__class;
            assert( old != NULL );
            tmp_class_creation_3__class = tmp_assign_source_29;
            Py_DECREF( old );
        }

    }
    goto try_end_5;
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

    Py_XDECREF( tmp_class_creation_3__class );
    tmp_class_creation_3__class = NULL;

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
    try_end_5:;
    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT( tmp_class_creation_3__class );
        tmp_assign_source_30 = tmp_class_creation_3__class;
        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_TripleDES, tmp_assign_source_30 );
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
        PyObject *tmp_assign_source_31;
        {
            PyObject *tmp_set_locals_4;
            tmp_set_locals_4 = PyDict_New();
            locals_cryptography$hazmat$primitives$ciphers$algorithms_78 = tmp_set_locals_4;
        }
        tmp_dictset_value = const_str_digest_87335604a4a83d266089f9a1aef4f588;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_78, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_plain_Blowfish;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_78, const_str_plain_name, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_int_pos_64;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_78, const_str_plain_block_size, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_frozenset_b37166fd9df1977e2d8b975a0483e7cb;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_78, const_str_plain_key_sizes, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_8___init__(  );



        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_78, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_f22af0c102b58cb249ea0811537b04a5_5, codeobj_f22af0c102b58cb249ea0811537b04a5, module_cryptography$hazmat$primitives$ciphers$algorithms, 0 );
        frame_f22af0c102b58cb249ea0811537b04a5_5 = cache_frame_f22af0c102b58cb249ea0811537b04a5_5;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_f22af0c102b58cb249ea0811537b04a5_5 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_f22af0c102b58cb249ea0811537b04a5_5 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_19;
            PyObject *tmp_args_element_name_25;
            tmp_called_name_19 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_25 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_9_key_size(  );



            frame_f22af0c102b58cb249ea0811537b04a5_5->m_frame.f_lineno = 86;
            {
                PyObject *call_args[] = { tmp_args_element_name_25 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
            }

            Py_DECREF( tmp_args_element_name_25 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 86;

                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_78, const_str_plain_key_size, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 86;

                goto frame_exception_exit_5;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_f22af0c102b58cb249ea0811537b04a5_5 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_f22af0c102b58cb249ea0811537b04a5_5 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_f22af0c102b58cb249ea0811537b04a5_5, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_f22af0c102b58cb249ea0811537b04a5_5->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_f22af0c102b58cb249ea0811537b04a5_5, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_f22af0c102b58cb249ea0811537b04a5_5,
            type_description_2
        );


        // Release cached frame.
        if ( frame_f22af0c102b58cb249ea0811537b04a5_5 == cache_frame_f22af0c102b58cb249ea0811537b04a5_5 )
        {
            Py_DECREF( frame_f22af0c102b58cb249ea0811537b04a5_5 );
        }
        cache_frame_f22af0c102b58cb249ea0811537b04a5_5 = NULL;

        assertFrameObject( frame_f22af0c102b58cb249ea0811537b04a5_5 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;

        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_10;
        skip_nested_handling_4:;
        tmp_assign_source_31 = locals_cryptography$hazmat$primitives$ciphers$algorithms_78;
        Py_INCREF( tmp_assign_source_31 );
        goto try_return_handler_10;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF( locals_cryptography$hazmat$primitives$ciphers$algorithms_78 );
        locals_cryptography$hazmat$primitives$ciphers$algorithms_78 = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_cryptography$hazmat$primitives$ciphers$algorithms_78 );
        locals_cryptography$hazmat$primitives$ciphers$algorithms_78 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_4;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_4:;
        exception_lineno = 78;
        goto try_except_handler_9;
        outline_result_4:;
        assert( tmp_class_creation_4__class_dict == NULL );
        tmp_class_creation_4__class_dict = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
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


            exception_lineno = 78;

            goto try_except_handler_9;
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
        tmp_assign_source_32 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;

            goto try_except_handler_9;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_assign_source_32 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_32 );
        condexpr_end_4:;
        assert( tmp_class_creation_4__metaclass == NULL );
        tmp_class_creation_4__metaclass = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_name_20;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_args_element_name_28;
        CHECK_OBJECT( tmp_class_creation_4__metaclass );
        tmp_called_name_20 = tmp_class_creation_4__metaclass;
        tmp_args_element_name_26 = const_str_plain_Blowfish;
        tmp_args_element_name_27 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_4__class_dict );
        tmp_args_element_name_28 = tmp_class_creation_4__class_dict;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 78;
        {
            PyObject *call_args[] = { tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28 };
            tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_20, call_args );
        }

        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;

            goto try_except_handler_9;
        }
        assert( tmp_class_creation_4__class == NULL );
        tmp_class_creation_4__class = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_name_21;
        PyObject *tmp_called_name_22;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_30;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
            exception_tb = NULL;

            exception_lineno = 77;

            goto try_except_handler_9;
        }

        tmp_source_name_7 = tmp_mvar_value_13;
        tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_register_interface );
        if ( tmp_called_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;

            goto try_except_handler_9;
        }
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );
        }

        if ( tmp_mvar_value_14 == NULL )
        {
            Py_DECREF( tmp_called_name_22 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "CipherAlgorithm" );
            exception_tb = NULL;

            exception_lineno = 77;

            goto try_except_handler_9;
        }

        tmp_args_element_name_29 = tmp_mvar_value_14;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = { tmp_args_element_name_29 };
            tmp_called_name_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
        }

        Py_DECREF( tmp_called_name_22 );
        if ( tmp_called_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;

            goto try_except_handler_9;
        }
        CHECK_OBJECT( tmp_class_creation_4__class );
        tmp_args_element_name_30 = tmp_class_creation_4__class;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = { tmp_args_element_name_30 };
            tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
        }

        Py_DECREF( tmp_called_name_21 );
        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;

            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_class_creation_4__class;
            assert( old != NULL );
            tmp_class_creation_4__class = tmp_assign_source_34;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_name_23;
        PyObject *tmp_called_name_24;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_element_name_32;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
            exception_tb = NULL;

            exception_lineno = 76;

            goto try_except_handler_9;
        }

        tmp_source_name_8 = tmp_mvar_value_15;
        tmp_called_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_register_interface );
        if ( tmp_called_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_9;
        }
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_BlockCipherAlgorithm );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BlockCipherAlgorithm );
        }

        if ( tmp_mvar_value_16 == NULL )
        {
            Py_DECREF( tmp_called_name_24 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "BlockCipherAlgorithm" );
            exception_tb = NULL;

            exception_lineno = 76;

            goto try_except_handler_9;
        }

        tmp_args_element_name_31 = tmp_mvar_value_16;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = { tmp_args_element_name_31 };
            tmp_called_name_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
        }

        Py_DECREF( tmp_called_name_24 );
        if ( tmp_called_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_9;
        }
        CHECK_OBJECT( tmp_class_creation_4__class );
        tmp_args_element_name_32 = tmp_class_creation_4__class;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = { tmp_args_element_name_32 };
            tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
        }

        Py_DECREF( tmp_called_name_23 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_class_creation_4__class;
            assert( old != NULL );
            tmp_class_creation_4__class = tmp_assign_source_35;
            Py_DECREF( old );
        }

    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT( tmp_class_creation_4__class );
        tmp_assign_source_36 = tmp_class_creation_4__class;
        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_Blowfish, tmp_assign_source_36 );
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

    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        {
            PyObject *tmp_set_locals_5;
            tmp_set_locals_5 = PyDict_New();
            locals_cryptography$hazmat$primitives$ciphers$algorithms_93 = tmp_set_locals_5;
        }
        tmp_dictset_value = const_str_digest_87335604a4a83d266089f9a1aef4f588;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_93, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_plain_CAST5;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_93, const_str_plain_name, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_int_pos_64;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_93, const_str_plain_block_size, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_frozenset_fe00a4f6ab944081e21008a0f74293d2;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_93, const_str_plain_key_sizes, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_10___init__(  );



        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_93, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_65c6a69f6b33c529e247092a17adacb4_6, codeobj_65c6a69f6b33c529e247092a17adacb4, module_cryptography$hazmat$primitives$ciphers$algorithms, 0 );
        frame_65c6a69f6b33c529e247092a17adacb4_6 = cache_frame_65c6a69f6b33c529e247092a17adacb4_6;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_65c6a69f6b33c529e247092a17adacb4_6 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_65c6a69f6b33c529e247092a17adacb4_6 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_25;
            PyObject *tmp_args_element_name_33;
            tmp_called_name_25 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_33 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_11_key_size(  );



            frame_65c6a69f6b33c529e247092a17adacb4_6->m_frame.f_lineno = 101;
            {
                PyObject *call_args[] = { tmp_args_element_name_33 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
            }

            Py_DECREF( tmp_args_element_name_33 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;

                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_93, const_str_plain_key_size, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;

                goto frame_exception_exit_6;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_65c6a69f6b33c529e247092a17adacb4_6 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;

        frame_exception_exit_6:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_65c6a69f6b33c529e247092a17adacb4_6 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_65c6a69f6b33c529e247092a17adacb4_6, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_65c6a69f6b33c529e247092a17adacb4_6->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_65c6a69f6b33c529e247092a17adacb4_6, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_65c6a69f6b33c529e247092a17adacb4_6,
            type_description_2
        );


        // Release cached frame.
        if ( frame_65c6a69f6b33c529e247092a17adacb4_6 == cache_frame_65c6a69f6b33c529e247092a17adacb4_6 )
        {
            Py_DECREF( frame_65c6a69f6b33c529e247092a17adacb4_6 );
        }
        cache_frame_65c6a69f6b33c529e247092a17adacb4_6 = NULL;

        assertFrameObject( frame_65c6a69f6b33c529e247092a17adacb4_6 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;

        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_12;
        skip_nested_handling_5:;
        tmp_assign_source_37 = locals_cryptography$hazmat$primitives$ciphers$algorithms_93;
        Py_INCREF( tmp_assign_source_37 );
        goto try_return_handler_12;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF( locals_cryptography$hazmat$primitives$ciphers$algorithms_93 );
        locals_cryptography$hazmat$primitives$ciphers$algorithms_93 = NULL;
        goto outline_result_5;
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

        Py_DECREF( locals_cryptography$hazmat$primitives$ciphers$algorithms_93 );
        locals_cryptography$hazmat$primitives$ciphers$algorithms_93 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_5;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_5:;
        exception_lineno = 93;
        goto try_except_handler_11;
        outline_result_5:;
        assert( tmp_class_creation_5__class_dict == NULL );
        tmp_class_creation_5__class_dict = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        nuitka_bool tmp_condition_result_5;
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


            exception_lineno = 93;

            goto try_except_handler_11;
        }
        tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
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
        tmp_assign_source_38 = DICT_GET_ITEM( tmp_dict_name_10, tmp_key_name_10 );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;

            goto try_except_handler_11;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_assign_source_38 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_38 );
        condexpr_end_5:;
        assert( tmp_class_creation_5__metaclass == NULL );
        tmp_class_creation_5__metaclass = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_name_26;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_args_element_name_36;
        CHECK_OBJECT( tmp_class_creation_5__metaclass );
        tmp_called_name_26 = tmp_class_creation_5__metaclass;
        tmp_args_element_name_34 = const_str_plain_CAST5;
        tmp_args_element_name_35 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_5__class_dict );
        tmp_args_element_name_36 = tmp_class_creation_5__class_dict;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = { tmp_args_element_name_34, tmp_args_element_name_35, tmp_args_element_name_36 };
            tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_26, call_args );
        }

        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;

            goto try_except_handler_11;
        }
        assert( tmp_class_creation_5__class == NULL );
        tmp_class_creation_5__class = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_name_27;
        PyObject *tmp_called_name_28;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_args_element_name_37;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_args_element_name_38;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
            exception_tb = NULL;

            exception_lineno = 92;

            goto try_except_handler_11;
        }

        tmp_source_name_9 = tmp_mvar_value_17;
        tmp_called_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_register_interface );
        if ( tmp_called_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;

            goto try_except_handler_11;
        }
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );
        }

        if ( tmp_mvar_value_18 == NULL )
        {
            Py_DECREF( tmp_called_name_28 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "CipherAlgorithm" );
            exception_tb = NULL;

            exception_lineno = 92;

            goto try_except_handler_11;
        }

        tmp_args_element_name_37 = tmp_mvar_value_18;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = { tmp_args_element_name_37 };
            tmp_called_name_27 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_28, call_args );
        }

        Py_DECREF( tmp_called_name_28 );
        if ( tmp_called_name_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;

            goto try_except_handler_11;
        }
        CHECK_OBJECT( tmp_class_creation_5__class );
        tmp_args_element_name_38 = tmp_class_creation_5__class;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = { tmp_args_element_name_38 };
            tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, call_args );
        }

        Py_DECREF( tmp_called_name_27 );
        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;

            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_class_creation_5__class;
            assert( old != NULL );
            tmp_class_creation_5__class = tmp_assign_source_40;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_name_29;
        PyObject *tmp_called_name_30;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_args_element_name_39;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_args_element_name_40;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
            exception_tb = NULL;

            exception_lineno = 91;

            goto try_except_handler_11;
        }

        tmp_source_name_10 = tmp_mvar_value_19;
        tmp_called_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_register_interface );
        if ( tmp_called_name_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;

            goto try_except_handler_11;
        }
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_BlockCipherAlgorithm );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BlockCipherAlgorithm );
        }

        if ( tmp_mvar_value_20 == NULL )
        {
            Py_DECREF( tmp_called_name_30 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "BlockCipherAlgorithm" );
            exception_tb = NULL;

            exception_lineno = 91;

            goto try_except_handler_11;
        }

        tmp_args_element_name_39 = tmp_mvar_value_20;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 91;
        {
            PyObject *call_args[] = { tmp_args_element_name_39 };
            tmp_called_name_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_30, call_args );
        }

        Py_DECREF( tmp_called_name_30 );
        if ( tmp_called_name_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;

            goto try_except_handler_11;
        }
        CHECK_OBJECT( tmp_class_creation_5__class );
        tmp_args_element_name_40 = tmp_class_creation_5__class;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 91;
        {
            PyObject *call_args[] = { tmp_args_element_name_40 };
            tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_29, call_args );
        }

        Py_DECREF( tmp_called_name_29 );
        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;

            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_class_creation_5__class;
            assert( old != NULL );
            tmp_class_creation_5__class = tmp_assign_source_41;
            Py_DECREF( old );
        }

    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_5__class );
    tmp_class_creation_5__class = NULL;

    Py_XDECREF( tmp_class_creation_5__class_dict );
    tmp_class_creation_5__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    {
        PyObject *tmp_assign_source_42;
        CHECK_OBJECT( tmp_class_creation_5__class );
        tmp_assign_source_42 = tmp_class_creation_5__class;
        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_CAST5, tmp_assign_source_42 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class );
    Py_DECREF( tmp_class_creation_5__class );
    tmp_class_creation_5__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_dict );
    Py_DECREF( tmp_class_creation_5__class_dict );
    tmp_class_creation_5__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__metaclass );
    Py_DECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_43;
        {
            PyObject *tmp_set_locals_6;
            tmp_set_locals_6 = PyDict_New();
            locals_cryptography$hazmat$primitives$ciphers$algorithms_107 = tmp_set_locals_6;
        }
        tmp_dictset_value = const_str_digest_87335604a4a83d266089f9a1aef4f588;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_107, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_plain_RC4;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_107, const_str_plain_name, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_frozenset_1abd2c5dc48294c2b53ccf2b12c895e9;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_107, const_str_plain_key_sizes, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_12___init__(  );



        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_107, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_c63008cdd9cec6c82cfa0fee1592e9a7_7, codeobj_c63008cdd9cec6c82cfa0fee1592e9a7, module_cryptography$hazmat$primitives$ciphers$algorithms, 0 );
        frame_c63008cdd9cec6c82cfa0fee1592e9a7_7 = cache_frame_c63008cdd9cec6c82cfa0fee1592e9a7_7;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_c63008cdd9cec6c82cfa0fee1592e9a7_7 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_c63008cdd9cec6c82cfa0fee1592e9a7_7 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_31;
            PyObject *tmp_args_element_name_41;
            tmp_called_name_31 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_41 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_13_key_size(  );



            frame_c63008cdd9cec6c82cfa0fee1592e9a7_7->m_frame.f_lineno = 114;
            {
                PyObject *call_args[] = { tmp_args_element_name_41 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_31, call_args );
            }

            Py_DECREF( tmp_args_element_name_41 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 114;

                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_107, const_str_plain_key_size, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 114;

                goto frame_exception_exit_7;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_c63008cdd9cec6c82cfa0fee1592e9a7_7 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;

        frame_exception_exit_7:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_c63008cdd9cec6c82cfa0fee1592e9a7_7 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_c63008cdd9cec6c82cfa0fee1592e9a7_7, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_c63008cdd9cec6c82cfa0fee1592e9a7_7->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_c63008cdd9cec6c82cfa0fee1592e9a7_7, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_c63008cdd9cec6c82cfa0fee1592e9a7_7,
            type_description_2
        );


        // Release cached frame.
        if ( frame_c63008cdd9cec6c82cfa0fee1592e9a7_7 == cache_frame_c63008cdd9cec6c82cfa0fee1592e9a7_7 )
        {
            Py_DECREF( frame_c63008cdd9cec6c82cfa0fee1592e9a7_7 );
        }
        cache_frame_c63008cdd9cec6c82cfa0fee1592e9a7_7 = NULL;

        assertFrameObject( frame_c63008cdd9cec6c82cfa0fee1592e9a7_7 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;

        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_14;
        skip_nested_handling_6:;
        tmp_assign_source_43 = locals_cryptography$hazmat$primitives$ciphers$algorithms_107;
        Py_INCREF( tmp_assign_source_43 );
        goto try_return_handler_14;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF( locals_cryptography$hazmat$primitives$ciphers$algorithms_107 );
        locals_cryptography$hazmat$primitives$ciphers$algorithms_107 = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_cryptography$hazmat$primitives$ciphers$algorithms_107 );
        locals_cryptography$hazmat$primitives$ciphers$algorithms_107 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto outline_exception_6;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_6:;
        exception_lineno = 107;
        goto try_except_handler_13;
        outline_result_6:;
        assert( tmp_class_creation_6__class_dict == NULL );
        tmp_class_creation_6__class_dict = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        nuitka_bool tmp_condition_result_6;
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


            exception_lineno = 107;

            goto try_except_handler_13;
        }
        tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
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
        tmp_assign_source_44 = DICT_GET_ITEM( tmp_dict_name_12, tmp_key_name_12 );
        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;

            goto try_except_handler_13;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_assign_source_44 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_44 );
        condexpr_end_6:;
        assert( tmp_class_creation_6__metaclass == NULL );
        tmp_class_creation_6__metaclass = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_name_32;
        PyObject *tmp_args_element_name_42;
        PyObject *tmp_args_element_name_43;
        PyObject *tmp_args_element_name_44;
        CHECK_OBJECT( tmp_class_creation_6__metaclass );
        tmp_called_name_32 = tmp_class_creation_6__metaclass;
        tmp_args_element_name_42 = const_str_plain_ARC4;
        tmp_args_element_name_43 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_6__class_dict );
        tmp_args_element_name_44 = tmp_class_creation_6__class_dict;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 107;
        {
            PyObject *call_args[] = { tmp_args_element_name_42, tmp_args_element_name_43, tmp_args_element_name_44 };
            tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_32, call_args );
        }

        if ( tmp_assign_source_45 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;

            goto try_except_handler_13;
        }
        assert( tmp_class_creation_6__class == NULL );
        tmp_class_creation_6__class = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_name_33;
        PyObject *tmp_called_name_34;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_args_element_name_45;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_args_element_name_46;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
            exception_tb = NULL;

            exception_lineno = 106;

            goto try_except_handler_13;
        }

        tmp_source_name_11 = tmp_mvar_value_21;
        tmp_called_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_register_interface );
        if ( tmp_called_name_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;

            goto try_except_handler_13;
        }
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );
        }

        if ( tmp_mvar_value_22 == NULL )
        {
            Py_DECREF( tmp_called_name_34 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "CipherAlgorithm" );
            exception_tb = NULL;

            exception_lineno = 106;

            goto try_except_handler_13;
        }

        tmp_args_element_name_45 = tmp_mvar_value_22;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 106;
        {
            PyObject *call_args[] = { tmp_args_element_name_45 };
            tmp_called_name_33 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_34, call_args );
        }

        Py_DECREF( tmp_called_name_34 );
        if ( tmp_called_name_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;

            goto try_except_handler_13;
        }
        CHECK_OBJECT( tmp_class_creation_6__class );
        tmp_args_element_name_46 = tmp_class_creation_6__class;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 106;
        {
            PyObject *call_args[] = { tmp_args_element_name_46 };
            tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_33, call_args );
        }

        Py_DECREF( tmp_called_name_33 );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;

            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_class_creation_6__class;
            assert( old != NULL );
            tmp_class_creation_6__class = tmp_assign_source_46;
            Py_DECREF( old );
        }

    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_6__class );
    tmp_class_creation_6__class = NULL;

    Py_XDECREF( tmp_class_creation_6__class_dict );
    tmp_class_creation_6__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    {
        PyObject *tmp_assign_source_47;
        CHECK_OBJECT( tmp_class_creation_6__class );
        tmp_assign_source_47 = tmp_class_creation_6__class;
        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_ARC4, tmp_assign_source_47 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class );
    Py_DECREF( tmp_class_creation_6__class );
    tmp_class_creation_6__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class_dict );
    Py_DECREF( tmp_class_creation_6__class_dict );
    tmp_class_creation_6__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__metaclass );
    Py_DECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_48;
        {
            PyObject *tmp_set_locals_7;
            tmp_set_locals_7 = PyDict_New();
            locals_cryptography$hazmat$primitives$ciphers$algorithms_120 = tmp_set_locals_7;
        }
        tmp_dictset_value = const_str_digest_87335604a4a83d266089f9a1aef4f588;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_120, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_plain_IDEA;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_120, const_str_plain_name, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_int_pos_64;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_120, const_str_plain_block_size, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_frozenset_cf609eb9051a7250c9a68e22cef7d49d;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_120, const_str_plain_key_sizes, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_14___init__(  );



        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_120, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_4461c9be09264eefc22eb5188e92e8e9_8, codeobj_4461c9be09264eefc22eb5188e92e8e9, module_cryptography$hazmat$primitives$ciphers$algorithms, 0 );
        frame_4461c9be09264eefc22eb5188e92e8e9_8 = cache_frame_4461c9be09264eefc22eb5188e92e8e9_8;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_4461c9be09264eefc22eb5188e92e8e9_8 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_4461c9be09264eefc22eb5188e92e8e9_8 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_35;
            PyObject *tmp_args_element_name_47;
            tmp_called_name_35 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_47 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_15_key_size(  );



            frame_4461c9be09264eefc22eb5188e92e8e9_8->m_frame.f_lineno = 128;
            {
                PyObject *call_args[] = { tmp_args_element_name_47 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_35, call_args );
            }

            Py_DECREF( tmp_args_element_name_47 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 128;

                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_120, const_str_plain_key_size, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 128;

                goto frame_exception_exit_8;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_4461c9be09264eefc22eb5188e92e8e9_8 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;

        frame_exception_exit_8:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_4461c9be09264eefc22eb5188e92e8e9_8 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_4461c9be09264eefc22eb5188e92e8e9_8, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_4461c9be09264eefc22eb5188e92e8e9_8->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_4461c9be09264eefc22eb5188e92e8e9_8, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_4461c9be09264eefc22eb5188e92e8e9_8,
            type_description_2
        );


        // Release cached frame.
        if ( frame_4461c9be09264eefc22eb5188e92e8e9_8 == cache_frame_4461c9be09264eefc22eb5188e92e8e9_8 )
        {
            Py_DECREF( frame_4461c9be09264eefc22eb5188e92e8e9_8 );
        }
        cache_frame_4461c9be09264eefc22eb5188e92e8e9_8 = NULL;

        assertFrameObject( frame_4461c9be09264eefc22eb5188e92e8e9_8 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;

        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_16;
        skip_nested_handling_7:;
        tmp_assign_source_48 = locals_cryptography$hazmat$primitives$ciphers$algorithms_120;
        Py_INCREF( tmp_assign_source_48 );
        goto try_return_handler_16;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF( locals_cryptography$hazmat$primitives$ciphers$algorithms_120 );
        locals_cryptography$hazmat$primitives$ciphers$algorithms_120 = NULL;
        goto outline_result_7;
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

        Py_DECREF( locals_cryptography$hazmat$primitives$ciphers$algorithms_120 );
        locals_cryptography$hazmat$primitives$ciphers$algorithms_120 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_7;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_7:;
        exception_lineno = 120;
        goto try_except_handler_15;
        outline_result_7:;
        assert( tmp_class_creation_7__class_dict == NULL );
        tmp_class_creation_7__class_dict = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_key_name_13;
        PyObject *tmp_dict_name_13;
        PyObject *tmp_dict_name_14;
        PyObject *tmp_key_name_14;
        tmp_key_name_13 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_7__class_dict );
        tmp_dict_name_13 = tmp_class_creation_7__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_13, tmp_key_name_13 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;

            goto try_except_handler_15;
        }
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_7;
        }
        else
        {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT( tmp_class_creation_7__class_dict );
        tmp_dict_name_14 = tmp_class_creation_7__class_dict;
        tmp_key_name_14 = const_str_plain___metaclass__;
        tmp_assign_source_49 = DICT_GET_ITEM( tmp_dict_name_14, tmp_key_name_14 );
        if ( tmp_assign_source_49 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;

            goto try_except_handler_15;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_assign_source_49 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_49 );
        condexpr_end_7:;
        assert( tmp_class_creation_7__metaclass == NULL );
        tmp_class_creation_7__metaclass = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_name_36;
        PyObject *tmp_args_element_name_48;
        PyObject *tmp_args_element_name_49;
        PyObject *tmp_args_element_name_50;
        CHECK_OBJECT( tmp_class_creation_7__metaclass );
        tmp_called_name_36 = tmp_class_creation_7__metaclass;
        tmp_args_element_name_48 = const_str_plain_IDEA;
        tmp_args_element_name_49 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_7__class_dict );
        tmp_args_element_name_50 = tmp_class_creation_7__class_dict;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 120;
        {
            PyObject *call_args[] = { tmp_args_element_name_48, tmp_args_element_name_49, tmp_args_element_name_50 };
            tmp_assign_source_50 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_36, call_args );
        }

        if ( tmp_assign_source_50 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;

            goto try_except_handler_15;
        }
        assert( tmp_class_creation_7__class == NULL );
        tmp_class_creation_7__class = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_name_37;
        PyObject *tmp_called_name_38;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_args_element_name_51;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_args_element_name_52;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
        }

        if ( tmp_mvar_value_23 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
            exception_tb = NULL;

            exception_lineno = 119;

            goto try_except_handler_15;
        }

        tmp_source_name_12 = tmp_mvar_value_23;
        tmp_called_name_38 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_register_interface );
        if ( tmp_called_name_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;

            goto try_except_handler_15;
        }
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );
        }

        if ( tmp_mvar_value_24 == NULL )
        {
            Py_DECREF( tmp_called_name_38 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "CipherAlgorithm" );
            exception_tb = NULL;

            exception_lineno = 119;

            goto try_except_handler_15;
        }

        tmp_args_element_name_51 = tmp_mvar_value_24;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = { tmp_args_element_name_51 };
            tmp_called_name_37 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_38, call_args );
        }

        Py_DECREF( tmp_called_name_38 );
        if ( tmp_called_name_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;

            goto try_except_handler_15;
        }
        CHECK_OBJECT( tmp_class_creation_7__class );
        tmp_args_element_name_52 = tmp_class_creation_7__class;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = { tmp_args_element_name_52 };
            tmp_assign_source_51 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_37, call_args );
        }

        Py_DECREF( tmp_called_name_37 );
        if ( tmp_assign_source_51 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;

            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_class_creation_7__class;
            assert( old != NULL );
            tmp_class_creation_7__class = tmp_assign_source_51;
            Py_DECREF( old );
        }

    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_7__class );
    tmp_class_creation_7__class = NULL;

    Py_XDECREF( tmp_class_creation_7__class_dict );
    tmp_class_creation_7__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    {
        PyObject *tmp_assign_source_52;
        CHECK_OBJECT( tmp_class_creation_7__class );
        tmp_assign_source_52 = tmp_class_creation_7__class;
        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_IDEA, tmp_assign_source_52 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class );
    Py_DECREF( tmp_class_creation_7__class );
    tmp_class_creation_7__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_dict );
    Py_DECREF( tmp_class_creation_7__class_dict );
    tmp_class_creation_7__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__metaclass );
    Py_DECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        {
            PyObject *tmp_set_locals_8;
            tmp_set_locals_8 = PyDict_New();
            locals_cryptography$hazmat$primitives$ciphers$algorithms_135 = tmp_set_locals_8;
        }
        tmp_dictset_value = const_str_digest_87335604a4a83d266089f9a1aef4f588;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_135, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_plain_SEED;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_135, const_str_plain_name, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_int_pos_128;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_135, const_str_plain_block_size, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_frozenset_cf609eb9051a7250c9a68e22cef7d49d;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_135, const_str_plain_key_sizes, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_16___init__(  );



        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_135, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_3dcf63a550a4e1ba285e6e7570b4a0db_9, codeobj_3dcf63a550a4e1ba285e6e7570b4a0db, module_cryptography$hazmat$primitives$ciphers$algorithms, 0 );
        frame_3dcf63a550a4e1ba285e6e7570b4a0db_9 = cache_frame_3dcf63a550a4e1ba285e6e7570b4a0db_9;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_3dcf63a550a4e1ba285e6e7570b4a0db_9 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_3dcf63a550a4e1ba285e6e7570b4a0db_9 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_39;
            PyObject *tmp_args_element_name_53;
            tmp_called_name_39 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_53 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_17_key_size(  );



            frame_3dcf63a550a4e1ba285e6e7570b4a0db_9->m_frame.f_lineno = 143;
            {
                PyObject *call_args[] = { tmp_args_element_name_53 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_39, call_args );
            }

            Py_DECREF( tmp_args_element_name_53 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 143;

                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_135, const_str_plain_key_size, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 143;

                goto frame_exception_exit_9;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_3dcf63a550a4e1ba285e6e7570b4a0db_9 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_8;

        frame_exception_exit_9:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_3dcf63a550a4e1ba285e6e7570b4a0db_9 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_3dcf63a550a4e1ba285e6e7570b4a0db_9, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_3dcf63a550a4e1ba285e6e7570b4a0db_9->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_3dcf63a550a4e1ba285e6e7570b4a0db_9, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_3dcf63a550a4e1ba285e6e7570b4a0db_9,
            type_description_2
        );


        // Release cached frame.
        if ( frame_3dcf63a550a4e1ba285e6e7570b4a0db_9 == cache_frame_3dcf63a550a4e1ba285e6e7570b4a0db_9 )
        {
            Py_DECREF( frame_3dcf63a550a4e1ba285e6e7570b4a0db_9 );
        }
        cache_frame_3dcf63a550a4e1ba285e6e7570b4a0db_9 = NULL;

        assertFrameObject( frame_3dcf63a550a4e1ba285e6e7570b4a0db_9 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_8;

        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_18;
        skip_nested_handling_8:;
        tmp_assign_source_53 = locals_cryptography$hazmat$primitives$ciphers$algorithms_135;
        Py_INCREF( tmp_assign_source_53 );
        goto try_return_handler_18;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF( locals_cryptography$hazmat$primitives$ciphers$algorithms_135 );
        locals_cryptography$hazmat$primitives$ciphers$algorithms_135 = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_cryptography$hazmat$primitives$ciphers$algorithms_135 );
        locals_cryptography$hazmat$primitives$ciphers$algorithms_135 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_8;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_8:;
        exception_lineno = 135;
        goto try_except_handler_17;
        outline_result_8:;
        assert( tmp_class_creation_8__class_dict == NULL );
        tmp_class_creation_8__class_dict = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_key_name_15;
        PyObject *tmp_dict_name_15;
        PyObject *tmp_dict_name_16;
        PyObject *tmp_key_name_16;
        tmp_key_name_15 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_8__class_dict );
        tmp_dict_name_15 = tmp_class_creation_8__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_15, tmp_key_name_15 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;

            goto try_except_handler_17;
        }
        tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_8;
        }
        else
        {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT( tmp_class_creation_8__class_dict );
        tmp_dict_name_16 = tmp_class_creation_8__class_dict;
        tmp_key_name_16 = const_str_plain___metaclass__;
        tmp_assign_source_54 = DICT_GET_ITEM( tmp_dict_name_16, tmp_key_name_16 );
        if ( tmp_assign_source_54 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;

            goto try_except_handler_17;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_assign_source_54 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_54 );
        condexpr_end_8:;
        assert( tmp_class_creation_8__metaclass == NULL );
        tmp_class_creation_8__metaclass = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_name_40;
        PyObject *tmp_args_element_name_54;
        PyObject *tmp_args_element_name_55;
        PyObject *tmp_args_element_name_56;
        CHECK_OBJECT( tmp_class_creation_8__metaclass );
        tmp_called_name_40 = tmp_class_creation_8__metaclass;
        tmp_args_element_name_54 = const_str_plain_SEED;
        tmp_args_element_name_55 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_8__class_dict );
        tmp_args_element_name_56 = tmp_class_creation_8__class_dict;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 135;
        {
            PyObject *call_args[] = { tmp_args_element_name_54, tmp_args_element_name_55, tmp_args_element_name_56 };
            tmp_assign_source_55 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_40, call_args );
        }

        if ( tmp_assign_source_55 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;

            goto try_except_handler_17;
        }
        assert( tmp_class_creation_8__class == NULL );
        tmp_class_creation_8__class = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_name_41;
        PyObject *tmp_called_name_42;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_args_element_name_57;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_args_element_name_58;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
        }

        if ( tmp_mvar_value_25 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
            exception_tb = NULL;

            exception_lineno = 134;

            goto try_except_handler_17;
        }

        tmp_source_name_13 = tmp_mvar_value_25;
        tmp_called_name_42 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_register_interface );
        if ( tmp_called_name_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;

            goto try_except_handler_17;
        }
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );
        }

        if ( tmp_mvar_value_26 == NULL )
        {
            Py_DECREF( tmp_called_name_42 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "CipherAlgorithm" );
            exception_tb = NULL;

            exception_lineno = 134;

            goto try_except_handler_17;
        }

        tmp_args_element_name_57 = tmp_mvar_value_26;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 134;
        {
            PyObject *call_args[] = { tmp_args_element_name_57 };
            tmp_called_name_41 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_42, call_args );
        }

        Py_DECREF( tmp_called_name_42 );
        if ( tmp_called_name_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;

            goto try_except_handler_17;
        }
        CHECK_OBJECT( tmp_class_creation_8__class );
        tmp_args_element_name_58 = tmp_class_creation_8__class;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 134;
        {
            PyObject *call_args[] = { tmp_args_element_name_58 };
            tmp_assign_source_56 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_41, call_args );
        }

        Py_DECREF( tmp_called_name_41 );
        if ( tmp_assign_source_56 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;

            goto try_except_handler_17;
        }
        {
            PyObject *old = tmp_class_creation_8__class;
            assert( old != NULL );
            tmp_class_creation_8__class = tmp_assign_source_56;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_name_43;
        PyObject *tmp_called_name_44;
        PyObject *tmp_source_name_14;
        PyObject *tmp_mvar_value_27;
        PyObject *tmp_args_element_name_59;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_args_element_name_60;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
        }

        if ( tmp_mvar_value_27 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
            exception_tb = NULL;

            exception_lineno = 133;

            goto try_except_handler_17;
        }

        tmp_source_name_14 = tmp_mvar_value_27;
        tmp_called_name_44 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_register_interface );
        if ( tmp_called_name_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;

            goto try_except_handler_17;
        }
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_BlockCipherAlgorithm );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BlockCipherAlgorithm );
        }

        if ( tmp_mvar_value_28 == NULL )
        {
            Py_DECREF( tmp_called_name_44 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "BlockCipherAlgorithm" );
            exception_tb = NULL;

            exception_lineno = 133;

            goto try_except_handler_17;
        }

        tmp_args_element_name_59 = tmp_mvar_value_28;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 133;
        {
            PyObject *call_args[] = { tmp_args_element_name_59 };
            tmp_called_name_43 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_44, call_args );
        }

        Py_DECREF( tmp_called_name_44 );
        if ( tmp_called_name_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;

            goto try_except_handler_17;
        }
        CHECK_OBJECT( tmp_class_creation_8__class );
        tmp_args_element_name_60 = tmp_class_creation_8__class;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 133;
        {
            PyObject *call_args[] = { tmp_args_element_name_60 };
            tmp_assign_source_57 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_43, call_args );
        }

        Py_DECREF( tmp_called_name_43 );
        if ( tmp_assign_source_57 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;

            goto try_except_handler_17;
        }
        {
            PyObject *old = tmp_class_creation_8__class;
            assert( old != NULL );
            tmp_class_creation_8__class = tmp_assign_source_57;
            Py_DECREF( old );
        }

    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_8__class );
    tmp_class_creation_8__class = NULL;

    Py_XDECREF( tmp_class_creation_8__class_dict );
    tmp_class_creation_8__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    {
        PyObject *tmp_assign_source_58;
        CHECK_OBJECT( tmp_class_creation_8__class );
        tmp_assign_source_58 = tmp_class_creation_8__class;
        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_SEED, tmp_assign_source_58 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class );
    Py_DECREF( tmp_class_creation_8__class );
    tmp_class_creation_8__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class_dict );
    Py_DECREF( tmp_class_creation_8__class_dict );
    tmp_class_creation_8__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__metaclass );
    Py_DECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        {
            PyObject *tmp_set_locals_9;
            tmp_set_locals_9 = PyDict_New();
            locals_cryptography$hazmat$primitives$ciphers$algorithms_150 = tmp_set_locals_9;
        }
        tmp_dictset_value = const_str_digest_87335604a4a83d266089f9a1aef4f588;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_150, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_plain_ChaCha20;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_150, const_str_plain_name, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_frozenset_aece287703bf6a0e8bbd4620f66d4fcd;
        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_150, const_str_plain_key_sizes, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_18___init__(  );



        tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_150, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_045b0051ee762edcc83ad130b79982b8_10, codeobj_045b0051ee762edcc83ad130b79982b8, module_cryptography$hazmat$primitives$ciphers$algorithms, 0 );
        frame_045b0051ee762edcc83ad130b79982b8_10 = cache_frame_045b0051ee762edcc83ad130b79982b8_10;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_045b0051ee762edcc83ad130b79982b8_10 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_045b0051ee762edcc83ad130b79982b8_10 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_29;
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

            if (unlikely( tmp_mvar_value_29 == NULL ))
            {
                tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
            }

            if ( tmp_mvar_value_29 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
                exception_tb = NULL;

                exception_lineno = 163;

                goto frame_exception_exit_10;
            }

            tmp_called_instance_1 = tmp_mvar_value_29;
            frame_045b0051ee762edcc83ad130b79982b8_10->m_frame.f_lineno = 163;
            tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_read_only_property, &PyTuple_GET_ITEM( const_tuple_str_plain__nonce_tuple, 0 ) );

            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 163;

                goto frame_exception_exit_10;
            }
            tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_150, const_str_plain_nonce, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 163;

                goto frame_exception_exit_10;
            }
        }
        {
            PyObject *tmp_called_name_45;
            PyObject *tmp_args_element_name_61;
            tmp_called_name_45 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_61 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_19_key_size(  );



            frame_045b0051ee762edcc83ad130b79982b8_10->m_frame.f_lineno = 165;
            {
                PyObject *call_args[] = { tmp_args_element_name_61 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_45, call_args );
            }

            Py_DECREF( tmp_args_element_name_61 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 165;

                goto frame_exception_exit_10;
            }
            tmp_res = PyDict_SetItem( locals_cryptography$hazmat$primitives$ciphers$algorithms_150, const_str_plain_key_size, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 165;

                goto frame_exception_exit_10;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_045b0051ee762edcc83ad130b79982b8_10 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_9;

        frame_exception_exit_10:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_045b0051ee762edcc83ad130b79982b8_10 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_045b0051ee762edcc83ad130b79982b8_10, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_045b0051ee762edcc83ad130b79982b8_10->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_045b0051ee762edcc83ad130b79982b8_10, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_045b0051ee762edcc83ad130b79982b8_10,
            type_description_2
        );


        // Release cached frame.
        if ( frame_045b0051ee762edcc83ad130b79982b8_10 == cache_frame_045b0051ee762edcc83ad130b79982b8_10 )
        {
            Py_DECREF( frame_045b0051ee762edcc83ad130b79982b8_10 );
        }
        cache_frame_045b0051ee762edcc83ad130b79982b8_10 = NULL;

        assertFrameObject( frame_045b0051ee762edcc83ad130b79982b8_10 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_9;

        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_20;
        skip_nested_handling_9:;
        tmp_assign_source_59 = locals_cryptography$hazmat$primitives$ciphers$algorithms_150;
        Py_INCREF( tmp_assign_source_59 );
        goto try_return_handler_20;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_20:;
        Py_DECREF( locals_cryptography$hazmat$primitives$ciphers$algorithms_150 );
        locals_cryptography$hazmat$primitives$ciphers$algorithms_150 = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_cryptography$hazmat$primitives$ciphers$algorithms_150 );
        locals_cryptography$hazmat$primitives$ciphers$algorithms_150 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto outline_exception_9;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_9:;
        exception_lineno = 150;
        goto try_except_handler_19;
        outline_result_9:;
        assert( tmp_class_creation_9__class_dict == NULL );
        tmp_class_creation_9__class_dict = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_17;
        PyObject *tmp_dict_name_17;
        PyObject *tmp_dict_name_18;
        PyObject *tmp_key_name_18;
        tmp_key_name_17 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_9__class_dict );
        tmp_dict_name_17 = tmp_class_creation_9__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_17, tmp_key_name_17 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;

            goto try_except_handler_19;
        }
        tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_9;
        }
        else
        {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT( tmp_class_creation_9__class_dict );
        tmp_dict_name_18 = tmp_class_creation_9__class_dict;
        tmp_key_name_18 = const_str_plain___metaclass__;
        tmp_assign_source_60 = DICT_GET_ITEM( tmp_dict_name_18, tmp_key_name_18 );
        if ( tmp_assign_source_60 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;

            goto try_except_handler_19;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_assign_source_60 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_60 );
        condexpr_end_9:;
        assert( tmp_class_creation_9__metaclass == NULL );
        tmp_class_creation_9__metaclass = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_name_46;
        PyObject *tmp_args_element_name_62;
        PyObject *tmp_args_element_name_63;
        PyObject *tmp_args_element_name_64;
        CHECK_OBJECT( tmp_class_creation_9__metaclass );
        tmp_called_name_46 = tmp_class_creation_9__metaclass;
        tmp_args_element_name_62 = const_str_plain_ChaCha20;
        tmp_args_element_name_63 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_9__class_dict );
        tmp_args_element_name_64 = tmp_class_creation_9__class_dict;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = { tmp_args_element_name_62, tmp_args_element_name_63, tmp_args_element_name_64 };
            tmp_assign_source_61 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_46, call_args );
        }

        if ( tmp_assign_source_61 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;

            goto try_except_handler_19;
        }
        assert( tmp_class_creation_9__class == NULL );
        tmp_class_creation_9__class = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_name_47;
        PyObject *tmp_called_name_48;
        PyObject *tmp_source_name_15;
        PyObject *tmp_mvar_value_30;
        PyObject *tmp_args_element_name_65;
        PyObject *tmp_mvar_value_31;
        PyObject *tmp_args_element_name_66;
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
        }

        if ( tmp_mvar_value_30 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
            exception_tb = NULL;

            exception_lineno = 149;

            goto try_except_handler_19;
        }

        tmp_source_name_15 = tmp_mvar_value_30;
        tmp_called_name_48 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_register_interface );
        if ( tmp_called_name_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;

            goto try_except_handler_19;
        }
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_ModeWithNonce );

        if (unlikely( tmp_mvar_value_31 == NULL ))
        {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ModeWithNonce );
        }

        if ( tmp_mvar_value_31 == NULL )
        {
            Py_DECREF( tmp_called_name_48 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ModeWithNonce" );
            exception_tb = NULL;

            exception_lineno = 149;

            goto try_except_handler_19;
        }

        tmp_args_element_name_65 = tmp_mvar_value_31;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = { tmp_args_element_name_65 };
            tmp_called_name_47 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_48, call_args );
        }

        Py_DECREF( tmp_called_name_48 );
        if ( tmp_called_name_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;

            goto try_except_handler_19;
        }
        CHECK_OBJECT( tmp_class_creation_9__class );
        tmp_args_element_name_66 = tmp_class_creation_9__class;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = { tmp_args_element_name_66 };
            tmp_assign_source_62 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_47, call_args );
        }

        Py_DECREF( tmp_called_name_47 );
        if ( tmp_assign_source_62 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;

            goto try_except_handler_19;
        }
        {
            PyObject *old = tmp_class_creation_9__class;
            assert( old != NULL );
            tmp_class_creation_9__class = tmp_assign_source_62;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_name_49;
        PyObject *tmp_called_name_50;
        PyObject *tmp_source_name_16;
        PyObject *tmp_mvar_value_32;
        PyObject *tmp_args_element_name_67;
        PyObject *tmp_mvar_value_33;
        PyObject *tmp_args_element_name_68;
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

        if (unlikely( tmp_mvar_value_32 == NULL ))
        {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
        }

        if ( tmp_mvar_value_32 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
            exception_tb = NULL;

            exception_lineno = 148;

            goto try_except_handler_19;
        }

        tmp_source_name_16 = tmp_mvar_value_32;
        tmp_called_name_50 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_register_interface );
        if ( tmp_called_name_50 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;

            goto try_except_handler_19;
        }
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );

        if (unlikely( tmp_mvar_value_33 == NULL ))
        {
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );
        }

        if ( tmp_mvar_value_33 == NULL )
        {
            Py_DECREF( tmp_called_name_50 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "CipherAlgorithm" );
            exception_tb = NULL;

            exception_lineno = 148;

            goto try_except_handler_19;
        }

        tmp_args_element_name_67 = tmp_mvar_value_33;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = { tmp_args_element_name_67 };
            tmp_called_name_49 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_50, call_args );
        }

        Py_DECREF( tmp_called_name_50 );
        if ( tmp_called_name_49 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;

            goto try_except_handler_19;
        }
        CHECK_OBJECT( tmp_class_creation_9__class );
        tmp_args_element_name_68 = tmp_class_creation_9__class;
        frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = { tmp_args_element_name_68 };
            tmp_assign_source_63 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_49, call_args );
        }

        Py_DECREF( tmp_called_name_49 );
        if ( tmp_assign_source_63 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;

            goto try_except_handler_19;
        }
        {
            PyObject *old = tmp_class_creation_9__class;
            assert( old != NULL );
            tmp_class_creation_9__class = tmp_assign_source_63;
            Py_DECREF( old );
        }

    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_9__class );
    tmp_class_creation_9__class = NULL;

    Py_XDECREF( tmp_class_creation_9__class_dict );
    tmp_class_creation_9__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0bd56cb1b106c37dbd02b0fd7e80aaab );
#endif
    popFrameStack();

    assertFrameObject( frame_0bd56cb1b106c37dbd02b0fd7e80aaab );

    goto frame_no_exception_10;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0bd56cb1b106c37dbd02b0fd7e80aaab );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0bd56cb1b106c37dbd02b0fd7e80aaab, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0bd56cb1b106c37dbd02b0fd7e80aaab->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0bd56cb1b106c37dbd02b0fd7e80aaab, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_10:;
    {
        PyObject *tmp_assign_source_64;
        CHECK_OBJECT( tmp_class_creation_9__class );
        tmp_assign_source_64 = tmp_class_creation_9__class;
        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_ChaCha20, tmp_assign_source_64 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class );
    Py_DECREF( tmp_class_creation_9__class );
    tmp_class_creation_9__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class_dict );
    Py_DECREF( tmp_class_creation_9__class_dict );
    tmp_class_creation_9__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__metaclass );
    Py_DECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_cryptography$hazmat$primitives$ciphers$algorithms );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
