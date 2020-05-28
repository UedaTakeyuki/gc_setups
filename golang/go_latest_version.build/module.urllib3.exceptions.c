/* Generated code for Python module 'urllib3.exceptions'
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

/* The "_module_urllib3$exceptions" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$exceptions;
PyDictObject *moduledict_urllib3$exceptions;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_partial;
extern PyObject *const_str_plain_ProxyError;
static PyObject *const_str_digest_b54ef1348f0bbeb78bd78ac4903b9341;
static PyObject *const_str_plain_RequestError;
extern PyObject *const_str_plain_ConnectTimeoutError;
extern PyObject *const_str_plain_InvalidHeader;
static PyObject *const_tuple_str_plain_IncompleteRead_tuple;
extern PyObject *const_str_plain_ProxySchemeUnknown;
extern PyObject *const_str_plain_defects;
static PyObject *const_str_digest_b69643d5b773f9f5a7202cff9d2e0c72;
static PyObject *const_str_digest_e7d525c37e8e3bf1b29419172dc726f6;
extern PyObject *const_str_plain_EmptyPoolError;
extern PyObject *const_str_plain_ConnectionError;
static PyObject *const_str_digest_6b2631bb00bf77812f4e433630f72b85;
extern PyObject *const_str_plain_SPECIFIC_ERROR;
static PyObject *const_str_digest_5ac3ff452137ae9d952f65688385427b;
static PyObject *const_str_digest_1ac943b4741094a8fa467ee81285da04;
extern PyObject *const_str_plain_None;
static PyObject *const_tuple_4e5661b66775469145a3b4097a93b81e_tuple;
extern PyObject *const_str_plain_unparsed_data;
static PyObject *const_str_digest_cd49640eb7d7e15c099dacc30d0f8bde;
extern PyObject *const_str_plain___reduce__;
static PyObject *const_str_plain_httplib_IncompleteRead;
extern PyObject *const_str_plain___repr__;
extern PyObject *const_str_plain_ResponseError;
static PyObject *const_tuple_4a8ec3b34fcf1282c262cfa0596ce9cb_tuple;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_4335cb1660cb67dcbaf1b1ae306aaca9;
extern PyObject *const_str_plain_scheme;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_d3e96f948eaa41c53caaae3833d57481;
extern PyObject *const_str_plain_NewConnectionError;
extern PyObject *const_str_plain_UnrewindableBodyError;
extern PyObject *const_str_plain_reason;
static PyObject *const_str_digest_46584e2093371b92bd116a36f6fac20c;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_4bca1ec40d7badeae2d91e5b0042a9a9;
static PyObject *const_dict_5e96d7f69380d04f429d0687fe7b8668;
static PyObject *const_str_digest_5cd5167a778e9ea5a19e045e34276deb;
static PyObject *const_str_digest_072e7ebfa3d3db507d9717d1cc53e1e2;
static PyObject *const_str_digest_4221c6866c41e5ab7b77b09bf6885351;
static PyObject *const_str_digest_ffd5c59803af63cf2041e83ca8e66823;
static PyObject *const_tuple_764d719bb26347ee44cb7fb47a9b65c4_tuple;
extern PyObject *const_str_plain_SNIMissingWarning;
static PyObject *const_str_digest_50f562faa7eed1b409bdd05c97fc14f2;
static PyObject *const_str_digest_1c6dffdd7a7bcf43af16d1526d19ef10;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_d54edb257b1240e069427ea15807c309;
extern PyObject *const_str_plain_message;
extern PyObject *const_str_plain_SystemTimeWarning;
extern PyObject *const_str_plain_GENERIC_ERROR;
extern PyObject *const_str_plain_expected;
static PyObject *const_str_digest_ae47a0634b7ce883442a5d8a017f6a25;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_HTTPError;
static PyObject *const_str_digest_22d8ad82a042b8c9b6ae653eb0bbaafd;
static PyObject *const_str_digest_5ccbd7b5fba66b3158dd32970d930916;
extern PyObject *const_str_plain_MaxRetryError;
extern PyObject *const_str_plain_SecurityWarning;
extern PyObject *const_str_plain_SSLError;
extern PyObject *const_str_plain_SubjectAltNameWarning;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_Warning;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_1b17e5345caa893d267645d5296f52b9;
static PyObject *const_str_digest_0beacf6afb33b121e9545510332129fc;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_TimeoutStateError;
extern PyObject *const_str_digest_c8562bbff9d721153deb2fdd066393d0;
extern PyObject *const_str_plain_InsecurePlatformWarning;
extern PyObject *const_str_plain_HeaderParsingError;
extern PyObject *const_str_plain___init__;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_str_digest_8c0402b3f822d653c84c590d6e596566;
static PyObject *const_str_digest_0af1d92cbf25f8a036fda6803e038903;
extern PyObject *const_str_plain_retries;
static PyObject *const_str_digest_401d5766bd48277296aa1afc93f98bc4;
extern PyObject *const_str_plain_HostChangedError;
extern PyObject *const_str_plain_DependencyWarning;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain_HTTPWarning;
static PyObject *const_str_digest_d455563e1ef951148bac32f5cc949a27;
static PyObject *const_str_digest_caae7e70acce199048d0f76529b5d906;
static PyObject *const_str_digest_c85fd95998d676bb8b296c5552d11916;
extern PyObject *const_str_plain_pool;
extern PyObject *const_str_plain_TimeoutError;
static PyObject *const_str_digest_d23d849ab02a6235eb0652ac312b2323;
extern PyObject *const_str_plain_DecodeError;
static PyObject *const_str_plain_Unknown;
extern PyObject *const_str_plain_IncompleteRead;
static PyObject *const_str_digest_3cba0a880d63b7b310fd43504b18c057;
extern PyObject *const_str_plain_LocationValueError;
static PyObject *const_str_digest_7507dacd42331ff69ed33f16b17b92b8;
static PyObject *const_tuple_str_plain_self_str_plain_scheme_str_plain_message_tuple;
static PyObject *const_str_digest_7cd1672c18c257a809407a1a63fa0e88;
static PyObject *const_str_digest_b3cccf261f53b23aaf668796a6ebdda4;
extern PyObject *const_str_plain_ReadTimeoutError;
extern PyObject *const_str_digest_863f7ecfa780c39c386006d180d8b06a;
static PyObject *const_str_plain_PoolError;
static PyObject *const_str_digest_85322d4279b2ac8026a5921e77f32165;
extern PyObject *const_tuple_int_pos_3_tuple;
static PyObject *const_tuple_77dc0fb361a835683c8e9a68cc070a8e_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_pool_str_plain_message_tuple;
static PyObject *const_str_digest_cb9b95f47cda8f2821509d84e8d824e3;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_digest_906ad4a0fc873be8c0c812f03902dc29;
extern PyObject *const_str_digest_b0cc034d9177fde48a3b44ac122139d9;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_ProtocolError;
static PyObject *const_str_digest_52259094e9ef0d3b81149cff696bacc3;
extern PyObject *const_tuple_type_Exception_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_partial_str_plain_expected_tuple;
extern PyObject *const_str_plain_ClosedPoolError;
extern PyObject *const_str_plain_location;
extern PyObject *const_str_plain_ResponseNotChunked;
static PyObject *const_str_digest_0b3cbe0215684a287553275c21c89d2f;
static PyObject *const_str_digest_3ecac7959fca6b094793e5853872d936;
static PyObject *const_str_digest_664d83eb41f8cfe3a1092e98f7d92027;
extern PyObject *const_str_plain_LocationParseError;
static PyObject *const_tuple_str_plain_self_str_plain_location_str_plain_message_tuple;
static PyObject *const_str_digest_8e8ee501a73b92aaab075e946de662bf;
static PyObject *const_str_digest_28db377b4c4aaf2881b08e822881aecb;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_46b5bed5a2577b5849f26cefa58279d5;
extern PyObject *const_str_plain_BodyNotHttplibCompatible;
extern PyObject *const_str_plain_InsecureRequestWarning;
extern PyObject *const_tuple_type_AssertionError_type_ValueError_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_b54ef1348f0bbeb78bd78ac4903b9341 = UNSTREAM_STRING( &constant_bin[ 1068661 ], 59, 0 );
    const_str_plain_RequestError = UNSTREAM_STRING( &constant_bin[ 1068720 ], 12, 1 );
    const_tuple_str_plain_IncompleteRead_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_IncompleteRead_tuple, 0, const_str_plain_IncompleteRead ); Py_INCREF( const_str_plain_IncompleteRead );
    const_str_digest_b69643d5b773f9f5a7202cff9d2e0c72 = UNSTREAM_STRING( &constant_bin[ 1068732 ], 24, 0 );
    const_str_digest_e7d525c37e8e3bf1b29419172dc726f6 = UNSTREAM_STRING( &constant_bin[ 1068756 ], 199, 0 );
    const_str_digest_6b2631bb00bf77812f4e433630f72b85 = UNSTREAM_STRING( &constant_bin[ 1068955 ], 78, 0 );
    const_str_digest_5ac3ff452137ae9d952f65688385427b = UNSTREAM_STRING( &constant_bin[ 1069033 ], 67, 0 );
    const_str_digest_1ac943b4741094a8fa467ee81285da04 = UNSTREAM_STRING( &constant_bin[ 1069100 ], 56, 0 );
    const_tuple_4e5661b66775469145a3b4097a93b81e_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_4e5661b66775469145a3b4097a93b81e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_4e5661b66775469145a3b4097a93b81e_tuple, 1, const_str_plain_pool ); Py_INCREF( const_str_plain_pool );
    PyTuple_SET_ITEM( const_tuple_4e5661b66775469145a3b4097a93b81e_tuple, 2, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_4e5661b66775469145a3b4097a93b81e_tuple, 3, const_str_plain_reason ); Py_INCREF( const_str_plain_reason );
    PyTuple_SET_ITEM( const_tuple_4e5661b66775469145a3b4097a93b81e_tuple, 4, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_str_digest_cd49640eb7d7e15c099dacc30d0f8bde = UNSTREAM_STRING( &constant_bin[ 1069156 ], 268, 0 );
    const_str_plain_httplib_IncompleteRead = UNSTREAM_STRING( &constant_bin[ 1069424 ], 22, 1 );
    const_tuple_4a8ec3b34fcf1282c262cfa0596ce9cb_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_4a8ec3b34fcf1282c262cfa0596ce9cb_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_4a8ec3b34fcf1282c262cfa0596ce9cb_tuple, 1, const_str_plain_pool ); Py_INCREF( const_str_plain_pool );
    PyTuple_SET_ITEM( const_tuple_4a8ec3b34fcf1282c262cfa0596ce9cb_tuple, 2, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_4a8ec3b34fcf1282c262cfa0596ce9cb_tuple, 3, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_str_digest_4335cb1660cb67dcbaf1b1ae306aaca9 = UNSTREAM_STRING( &constant_bin[ 1069446 ], 61, 0 );
    const_str_digest_d3e96f948eaa41c53caaae3833d57481 = UNSTREAM_STRING( &constant_bin[ 1069507 ], 66, 0 );
    const_str_digest_46584e2093371b92bd116a36f6fac20c = UNSTREAM_STRING( &constant_bin[ 1069573 ], 21, 0 );
    const_str_digest_4bca1ec40d7badeae2d91e5b0042a9a9 = UNSTREAM_STRING( &constant_bin[ 1069594 ], 60, 0 );
    const_dict_5e96d7f69380d04f429d0687fe7b8668 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_5e96d7f69380d04f429d0687fe7b8668, const_str_plain___module__, const_str_digest_c8562bbff9d721153deb2fdd066393d0 );
    const_str_digest_664d83eb41f8cfe3a1092e98f7d92027 = UNSTREAM_STRING( &constant_bin[ 1069654 ], 35, 0 );
    PyDict_SetItem( const_dict_5e96d7f69380d04f429d0687fe7b8668, const_str_plain___doc__, const_str_digest_664d83eb41f8cfe3a1092e98f7d92027 );
    assert( PyDict_Size( const_dict_5e96d7f69380d04f429d0687fe7b8668 ) == 2 );
    const_str_digest_5cd5167a778e9ea5a19e045e34276deb = UNSTREAM_STRING( &constant_bin[ 1069689 ], 72, 0 );
    const_str_digest_072e7ebfa3d3db507d9717d1cc53e1e2 = UNSTREAM_STRING( &constant_bin[ 1069761 ], 192, 0 );
    const_str_digest_4221c6866c41e5ab7b77b09bf6885351 = UNSTREAM_STRING( &constant_bin[ 1069953 ], 68, 0 );
    const_str_digest_ffd5c59803af63cf2041e83ca8e66823 = UNSTREAM_STRING( &constant_bin[ 1070021 ], 29, 0 );
    const_tuple_764d719bb26347ee44cb7fb47a9b65c4_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_764d719bb26347ee44cb7fb47a9b65c4_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_764d719bb26347ee44cb7fb47a9b65c4_tuple, 1, const_str_plain_pool ); Py_INCREF( const_str_plain_pool );
    PyTuple_SET_ITEM( const_tuple_764d719bb26347ee44cb7fb47a9b65c4_tuple, 2, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_764d719bb26347ee44cb7fb47a9b65c4_tuple, 3, const_str_plain_retries ); Py_INCREF( const_str_plain_retries );
    PyTuple_SET_ITEM( const_tuple_764d719bb26347ee44cb7fb47a9b65c4_tuple, 4, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_str_digest_50f562faa7eed1b409bdd05c97fc14f2 = UNSTREAM_STRING( &constant_bin[ 1070050 ], 99, 0 );
    const_str_digest_1c6dffdd7a7bcf43af16d1526d19ef10 = UNSTREAM_STRING( &constant_bin[ 1070149 ], 49, 0 );
    const_str_digest_d54edb257b1240e069427ea15807c309 = UNSTREAM_STRING( &constant_bin[ 1070198 ], 62, 0 );
    const_str_digest_ae47a0634b7ce883442a5d8a017f6a25 = UNSTREAM_STRING( &constant_bin[ 1070260 ], 122, 0 );
    const_str_digest_22d8ad82a042b8c9b6ae653eb0bbaafd = UNSTREAM_STRING( &constant_bin[ 1070382 ], 48, 0 );
    const_str_digest_5ccbd7b5fba66b3158dd32970d930916 = UNSTREAM_STRING( &constant_bin[ 1070430 ], 54, 0 );
    const_str_digest_1b17e5345caa893d267645d5296f52b9 = UNSTREAM_STRING( &constant_bin[ 1070484 ], 67, 0 );
    const_str_digest_0beacf6afb33b121e9545510332129fc = UNSTREAM_STRING( &constant_bin[ 1070551 ], 57, 0 );
    const_str_digest_8c0402b3f822d653c84c590d6e596566 = UNSTREAM_STRING( &constant_bin[ 1070608 ], 57, 0 );
    const_str_digest_0af1d92cbf25f8a036fda6803e038903 = UNSTREAM_STRING( &constant_bin[ 1070665 ], 57, 0 );
    const_str_digest_401d5766bd48277296aa1afc93f98bc4 = UNSTREAM_STRING( &constant_bin[ 1070722 ], 47, 0 );
    const_str_digest_d455563e1ef951148bac32f5cc949a27 = UNSTREAM_STRING( &constant_bin[ 1070769 ], 48, 0 );
    const_str_digest_caae7e70acce199048d0f76529b5d906 = UNSTREAM_STRING( &constant_bin[ 1070817 ], 51, 0 );
    const_str_digest_c85fd95998d676bb8b296c5552d11916 = UNSTREAM_STRING( &constant_bin[ 1070868 ], 33, 0 );
    const_str_digest_d23d849ab02a6235eb0652ac312b2323 = UNSTREAM_STRING( &constant_bin[ 1070901 ], 64, 0 );
    const_str_plain_Unknown = UNSTREAM_STRING( &constant_bin[ 26165 ], 7, 1 );
    const_str_digest_3cba0a880d63b7b310fd43504b18c057 = UNSTREAM_STRING( &constant_bin[ 1070965 ], 63, 0 );
    const_str_digest_7507dacd42331ff69ed33f16b17b92b8 = UNSTREAM_STRING( &constant_bin[ 1071028 ], 47, 0 );
    const_tuple_str_plain_self_str_plain_scheme_str_plain_message_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_scheme_str_plain_message_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_scheme_str_plain_message_tuple, 1, const_str_plain_scheme ); Py_INCREF( const_str_plain_scheme );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_scheme_str_plain_message_tuple, 2, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_str_digest_7cd1672c18c257a809407a1a63fa0e88 = UNSTREAM_STRING( &constant_bin[ 1071075 ], 44, 0 );
    const_str_digest_b3cccf261f53b23aaf668796a6ebdda4 = UNSTREAM_STRING( &constant_bin[ 1071119 ], 38, 0 );
    const_str_plain_PoolError = UNSTREAM_STRING( &constant_bin[ 1054330 ], 9, 1 );
    const_str_digest_85322d4279b2ac8026a5921e77f32165 = UNSTREAM_STRING( &constant_bin[ 1071157 ], 69, 0 );
    const_tuple_77dc0fb361a835683c8e9a68cc070a8e_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_77dc0fb361a835683c8e9a68cc070a8e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_77dc0fb361a835683c8e9a68cc070a8e_tuple, 1, const_str_plain_defects ); Py_INCREF( const_str_plain_defects );
    PyTuple_SET_ITEM( const_tuple_77dc0fb361a835683c8e9a68cc070a8e_tuple, 2, const_str_plain_unparsed_data ); Py_INCREF( const_str_plain_unparsed_data );
    PyTuple_SET_ITEM( const_tuple_77dc0fb361a835683c8e9a68cc070a8e_tuple, 3, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_tuple_str_plain_self_str_plain_pool_str_plain_message_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pool_str_plain_message_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pool_str_plain_message_tuple, 1, const_str_plain_pool ); Py_INCREF( const_str_plain_pool );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pool_str_plain_message_tuple, 2, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_str_digest_cb9b95f47cda8f2821509d84e8d824e3 = UNSTREAM_STRING( &constant_bin[ 1071226 ], 19, 0 );
    const_str_digest_906ad4a0fc873be8c0c812f03902dc29 = UNSTREAM_STRING( &constant_bin[ 1071245 ], 70, 0 );
    const_str_digest_52259094e9ef0d3b81149cff696bacc3 = UNSTREAM_STRING( &constant_bin[ 1071315 ], 41, 0 );
    const_tuple_str_plain_self_str_plain_partial_str_plain_expected_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_partial_str_plain_expected_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_partial_str_plain_expected_tuple, 1, const_str_plain_partial ); Py_INCREF( const_str_plain_partial );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_partial_str_plain_expected_tuple, 2, const_str_plain_expected ); Py_INCREF( const_str_plain_expected );
    const_str_digest_0b3cbe0215684a287553275c21c89d2f = UNSTREAM_STRING( &constant_bin[ 1071356 ], 59, 0 );
    const_str_digest_3ecac7959fca6b094793e5853872d936 = UNSTREAM_STRING( &constant_bin[ 1071415 ], 47, 0 );
    const_tuple_str_plain_self_str_plain_location_str_plain_message_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_location_str_plain_message_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_location_str_plain_message_tuple, 1, const_str_plain_location ); Py_INCREF( const_str_plain_location );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_location_str_plain_message_tuple, 2, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_str_digest_8e8ee501a73b92aaab075e946de662bf = UNSTREAM_STRING( &constant_bin[ 1071462 ], 48, 0 );
    const_str_digest_28db377b4c4aaf2881b08e822881aecb = UNSTREAM_STRING( &constant_bin[ 1071510 ], 40, 0 );
    const_str_digest_46b5bed5a2577b5849f26cefa58279d5 = UNSTREAM_STRING( &constant_bin[ 1071550 ], 27, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$exceptions( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b37ff837bea98402fbe710b5f6fa099f;
static PyCodeObject *codeobj_b4c73dbf269b6d70d7c899c3791c5388;
static PyCodeObject *codeobj_f29125bab80add6948e52901250853a5;
static PyCodeObject *codeobj_10a63271f9396893274b4619163d04d0;
static PyCodeObject *codeobj_857a460f3d1fb0950fe6d7292165ddb3;
static PyCodeObject *codeobj_c7c0f6022a9f002911a6f7e7f3190f4a;
static PyCodeObject *codeobj_abc29bc6745d2e04ad98b7a1f76bab7b;
static PyCodeObject *codeobj_5490552c698998d588c424b3853df5be;
static PyCodeObject *codeobj_6c46cd65fe9b4801d069adbd473276ab;
static PyCodeObject *codeobj_c61d54e52a8eb04b63ac0b34b994caa6;
static PyCodeObject *codeobj_c4a80140c4119ca51023d2689614f8d5;
static PyCodeObject *codeobj_6c51a725591ea4ffe8f84a61670ddccf;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_5ccbd7b5fba66b3158dd32970d930916;
    codeobj_b37ff837bea98402fbe710b5f6fa099f = MAKE_CODEOBJ( module_filename_obj, const_str_digest_46b5bed5a2577b5849f26cefa58279d5, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_b4c73dbf269b6d70d7c899c3791c5388 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 20, const_tuple_str_plain_self_str_plain_pool_str_plain_message_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_f29125bab80add6948e52901250853a5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 31, const_tuple_4a8ec3b34fcf1282c262cfa0596ce9cb_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_10a63271f9396893274b4619163d04d0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 76, const_tuple_4e5661b66775469145a3b4097a93b81e_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_857a460f3d1fb0950fe6d7292165ddb3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 88, const_tuple_764d719bb26347ee44cb7fb47a9b65c4_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_c7c0f6022a9f002911a6f7e7f3190f4a = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 143, const_tuple_str_plain_self_str_plain_location_str_plain_message_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_abc29bc6745d2e04ad98b7a1f76bab7b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 215, const_tuple_str_plain_self_str_plain_partial_str_plain_expected_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_5490552c698998d588c424b3853df5be = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 232, const_tuple_str_plain_self_str_plain_scheme_str_plain_message_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_6c46cd65fe9b4801d069adbd473276ab = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 239, const_tuple_77dc0fb361a835683c8e9a68cc070a8e_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_c61d54e52a8eb04b63ac0b34b994caa6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___reduce__, 24, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_c4a80140c4119ca51023d2689614f8d5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___reduce__, 35, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_6c51a725591ea4ffe8f84a61670ddccf = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 218, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_10___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_11___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_2___reduce__(  );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_3___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_4___reduce__(  );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_5___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_6___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_7___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_8___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_9___repr__(  );


// The module function definitions.
static PyObject *impl_urllib3$exceptions$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pool = python_pars[ 1 ];
    PyObject *par_message = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_b4c73dbf269b6d70d7c899c3791c5388;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b4c73dbf269b6d70d7c899c3791c5388 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b4c73dbf269b6d70d7c899c3791c5388, codeobj_b4c73dbf269b6d70d7c899c3791c5388, module_urllib3$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b4c73dbf269b6d70d7c899c3791c5388 = cache_frame_b4c73dbf269b6d70d7c899c3791c5388;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b4c73dbf269b6d70d7c899c3791c5388 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b4c73dbf269b6d70d7c899c3791c5388 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_pool );
        tmp_assattr_name_1 = par_pool;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_pool, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "HTTPError" );
            exception_tb = NULL;

            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_args_element_name_1 = par_self;
        tmp_left_name_1 = const_str_digest_b0cc034d9177fde48a3b44ac122139d9;
        CHECK_OBJECT( par_pool );
        tmp_tuple_element_1 = par_pool;
        tmp_right_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_message );
        tmp_tuple_element_1 = par_message;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
        tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_b4c73dbf269b6d70d7c899c3791c5388->m_frame.f_lineno = 22;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4c73dbf269b6d70d7c899c3791c5388 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4c73dbf269b6d70d7c899c3791c5388 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b4c73dbf269b6d70d7c899c3791c5388, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b4c73dbf269b6d70d7c899c3791c5388->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b4c73dbf269b6d70d7c899c3791c5388, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b4c73dbf269b6d70d7c899c3791c5388,
        type_description_1,
        par_self,
        par_pool,
        par_message
    );


    // Release cached frame.
    if ( frame_b4c73dbf269b6d70d7c899c3791c5388 == cache_frame_b4c73dbf269b6d70d7c899c3791c5388 )
    {
        Py_DECREF( frame_b4c73dbf269b6d70d7c899c3791c5388 );
    }
    cache_frame_b4c73dbf269b6d70d7c899c3791c5388 = NULL;

    assertFrameObject( frame_b4c73dbf269b6d70d7c899c3791c5388 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_pool );
    Py_DECREF( par_pool );
    par_pool = NULL;

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

    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_pool );
    Py_DECREF( par_pool );
    par_pool = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_1___init__ );
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


static PyObject *impl_urllib3$exceptions$$$function_2___reduce__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_c61d54e52a8eb04b63ac0b34b994caa6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c61d54e52a8eb04b63ac0b34b994caa6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c61d54e52a8eb04b63ac0b34b994caa6, codeobj_c61d54e52a8eb04b63ac0b34b994caa6, module_urllib3$exceptions, sizeof(void *) );
    frame_c61d54e52a8eb04b63ac0b34b994caa6 = cache_frame_c61d54e52a8eb04b63ac0b34b994caa6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c61d54e52a8eb04b63ac0b34b994caa6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c61d54e52a8eb04b63ac0b34b994caa6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_tuple_none_none_tuple;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c61d54e52a8eb04b63ac0b34b994caa6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c61d54e52a8eb04b63ac0b34b994caa6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c61d54e52a8eb04b63ac0b34b994caa6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c61d54e52a8eb04b63ac0b34b994caa6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c61d54e52a8eb04b63ac0b34b994caa6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c61d54e52a8eb04b63ac0b34b994caa6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c61d54e52a8eb04b63ac0b34b994caa6,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_c61d54e52a8eb04b63ac0b34b994caa6 == cache_frame_c61d54e52a8eb04b63ac0b34b994caa6 )
    {
        Py_DECREF( frame_c61d54e52a8eb04b63ac0b34b994caa6 );
    }
    cache_frame_c61d54e52a8eb04b63ac0b34b994caa6 = NULL;

    assertFrameObject( frame_c61d54e52a8eb04b63ac0b34b994caa6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_2___reduce__ );
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
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_2___reduce__ );
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


static PyObject *impl_urllib3$exceptions$$$function_3___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pool = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_message = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_f29125bab80add6948e52901250853a5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f29125bab80add6948e52901250853a5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f29125bab80add6948e52901250853a5, codeobj_f29125bab80add6948e52901250853a5, module_urllib3$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f29125bab80add6948e52901250853a5 = cache_frame_f29125bab80add6948e52901250853a5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f29125bab80add6948e52901250853a5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f29125bab80add6948e52901250853a5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_url );
        tmp_assattr_name_1 = par_url;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_url, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_PoolError );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolError );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PoolError" );
            exception_tb = NULL;

            exception_lineno = 33;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT( par_pool );
        tmp_args_element_name_2 = par_pool;
        CHECK_OBJECT( par_message );
        tmp_args_element_name_3 = par_message;
        frame_f29125bab80add6948e52901250853a5->m_frame.f_lineno = 33;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain___init__, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f29125bab80add6948e52901250853a5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f29125bab80add6948e52901250853a5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f29125bab80add6948e52901250853a5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f29125bab80add6948e52901250853a5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f29125bab80add6948e52901250853a5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f29125bab80add6948e52901250853a5,
        type_description_1,
        par_self,
        par_pool,
        par_url,
        par_message
    );


    // Release cached frame.
    if ( frame_f29125bab80add6948e52901250853a5 == cache_frame_f29125bab80add6948e52901250853a5 )
    {
        Py_DECREF( frame_f29125bab80add6948e52901250853a5 );
    }
    cache_frame_f29125bab80add6948e52901250853a5 = NULL;

    assertFrameObject( frame_f29125bab80add6948e52901250853a5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_3___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_pool );
    Py_DECREF( par_pool );
    par_pool = NULL;

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

    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_pool );
    Py_DECREF( par_pool );
    par_pool = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_3___init__ );
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


static PyObject *impl_urllib3$exceptions$$$function_4___reduce__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_c4a80140c4119ca51023d2689614f8d5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c4a80140c4119ca51023d2689614f8d5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c4a80140c4119ca51023d2689614f8d5, codeobj_c4a80140c4119ca51023d2689614f8d5, module_urllib3$exceptions, sizeof(void *) );
    frame_c4a80140c4119ca51023d2689614f8d5 = cache_frame_c4a80140c4119ca51023d2689614f8d5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c4a80140c4119ca51023d2689614f8d5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c4a80140c4119ca51023d2689614f8d5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        tmp_tuple_element_2 = Py_None;
        tmp_tuple_element_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_url );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );
            Py_DECREF( tmp_tuple_element_1 );

            exception_lineno = 37;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
        tmp_tuple_element_2 = Py_None;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 2, tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c4a80140c4119ca51023d2689614f8d5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c4a80140c4119ca51023d2689614f8d5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c4a80140c4119ca51023d2689614f8d5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c4a80140c4119ca51023d2689614f8d5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c4a80140c4119ca51023d2689614f8d5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c4a80140c4119ca51023d2689614f8d5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c4a80140c4119ca51023d2689614f8d5,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_c4a80140c4119ca51023d2689614f8d5 == cache_frame_c4a80140c4119ca51023d2689614f8d5 )
    {
        Py_DECREF( frame_c4a80140c4119ca51023d2689614f8d5 );
    }
    cache_frame_c4a80140c4119ca51023d2689614f8d5 = NULL;

    assertFrameObject( frame_c4a80140c4119ca51023d2689614f8d5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_4___reduce__ );
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
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_4___reduce__ );
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


static PyObject *impl_urllib3$exceptions$$$function_5___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pool = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_reason = python_pars[ 3 ];
    PyObject *var_message = NULL;
    struct Nuitka_FrameObject *frame_10a63271f9396893274b4619163d04d0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_10a63271f9396893274b4619163d04d0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_10a63271f9396893274b4619163d04d0, codeobj_10a63271f9396893274b4619163d04d0, module_urllib3$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_10a63271f9396893274b4619163d04d0 = cache_frame_10a63271f9396893274b4619163d04d0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_10a63271f9396893274b4619163d04d0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_10a63271f9396893274b4619163d04d0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_reason );
        tmp_assattr_name_1 = par_reason;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_reason, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        tmp_left_name_1 = const_str_digest_8e8ee501a73b92aaab075e946de662bf;
        CHECK_OBJECT( par_url );
        tmp_tuple_element_1 = par_url;
        tmp_right_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_reason );
        tmp_tuple_element_1 = par_reason;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
        tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_message == NULL );
        var_message = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_RequestError );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestError );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "RequestError" );
            exception_tb = NULL;

            exception_lineno = 82;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT( par_pool );
        tmp_args_element_name_2 = par_pool;
        CHECK_OBJECT( par_url );
        tmp_args_element_name_3 = par_url;
        CHECK_OBJECT( var_message );
        tmp_args_element_name_4 = var_message;
        frame_10a63271f9396893274b4619163d04d0->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS4( tmp_called_instance_1, const_str_plain___init__, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10a63271f9396893274b4619163d04d0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10a63271f9396893274b4619163d04d0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_10a63271f9396893274b4619163d04d0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_10a63271f9396893274b4619163d04d0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_10a63271f9396893274b4619163d04d0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_10a63271f9396893274b4619163d04d0,
        type_description_1,
        par_self,
        par_pool,
        par_url,
        par_reason,
        var_message
    );


    // Release cached frame.
    if ( frame_10a63271f9396893274b4619163d04d0 == cache_frame_10a63271f9396893274b4619163d04d0 )
    {
        Py_DECREF( frame_10a63271f9396893274b4619163d04d0 );
    }
    cache_frame_10a63271f9396893274b4619163d04d0 = NULL;

    assertFrameObject( frame_10a63271f9396893274b4619163d04d0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_5___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_message );
    Py_DECREF( var_message );
    var_message = NULL;

    CHECK_OBJECT( (PyObject *)par_reason );
    Py_DECREF( par_reason );
    par_reason = NULL;

    CHECK_OBJECT( (PyObject *)par_pool );
    Py_DECREF( par_pool );
    par_pool = NULL;

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

    Py_XDECREF( var_message );
    var_message = NULL;

    CHECK_OBJECT( (PyObject *)par_reason );
    Py_DECREF( par_reason );
    par_reason = NULL;

    CHECK_OBJECT( (PyObject *)par_pool );
    Py_DECREF( par_pool );
    par_pool = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_5___init__ );
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


static PyObject *impl_urllib3$exceptions$$$function_6___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pool = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_retries = python_pars[ 3 ];
    PyObject *var_message = NULL;
    struct Nuitka_FrameObject *frame_857a460f3d1fb0950fe6d7292165ddb3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_857a460f3d1fb0950fe6d7292165ddb3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_857a460f3d1fb0950fe6d7292165ddb3, codeobj_857a460f3d1fb0950fe6d7292165ddb3, module_urllib3$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_857a460f3d1fb0950fe6d7292165ddb3 = cache_frame_857a460f3d1fb0950fe6d7292165ddb3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_857a460f3d1fb0950fe6d7292165ddb3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_857a460f3d1fb0950fe6d7292165ddb3 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = const_str_digest_52259094e9ef0d3b81149cff696bacc3;
        CHECK_OBJECT( par_url );
        tmp_right_name_1 = par_url;
        tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_message == NULL );
        var_message = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_RequestError );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestError );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "RequestError" );
            exception_tb = NULL;

            exception_lineno = 90;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT( par_pool );
        tmp_args_element_name_2 = par_pool;
        CHECK_OBJECT( par_url );
        tmp_args_element_name_3 = par_url;
        CHECK_OBJECT( var_message );
        tmp_args_element_name_4 = var_message;
        frame_857a460f3d1fb0950fe6d7292165ddb3->m_frame.f_lineno = 90;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS4( tmp_called_instance_1, const_str_plain___init__, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_retries );
        tmp_assattr_name_1 = par_retries;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_retries, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_857a460f3d1fb0950fe6d7292165ddb3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_857a460f3d1fb0950fe6d7292165ddb3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_857a460f3d1fb0950fe6d7292165ddb3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_857a460f3d1fb0950fe6d7292165ddb3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_857a460f3d1fb0950fe6d7292165ddb3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_857a460f3d1fb0950fe6d7292165ddb3,
        type_description_1,
        par_self,
        par_pool,
        par_url,
        par_retries,
        var_message
    );


    // Release cached frame.
    if ( frame_857a460f3d1fb0950fe6d7292165ddb3 == cache_frame_857a460f3d1fb0950fe6d7292165ddb3 )
    {
        Py_DECREF( frame_857a460f3d1fb0950fe6d7292165ddb3 );
    }
    cache_frame_857a460f3d1fb0950fe6d7292165ddb3 = NULL;

    assertFrameObject( frame_857a460f3d1fb0950fe6d7292165ddb3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_6___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_retries );
    Py_DECREF( par_retries );
    par_retries = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_message );
    Py_DECREF( var_message );
    var_message = NULL;

    CHECK_OBJECT( (PyObject *)par_pool );
    Py_DECREF( par_pool );
    par_pool = NULL;

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

    CHECK_OBJECT( (PyObject *)par_retries );
    Py_DECREF( par_retries );
    par_retries = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    CHECK_OBJECT( (PyObject *)par_pool );
    Py_DECREF( par_pool );
    par_pool = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_6___init__ );
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


static PyObject *impl_urllib3$exceptions$$$function_7___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_location = python_pars[ 1 ];
    PyObject *var_message = NULL;
    struct Nuitka_FrameObject *frame_c7c0f6022a9f002911a6f7e7f3190f4a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_c7c0f6022a9f002911a6f7e7f3190f4a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c7c0f6022a9f002911a6f7e7f3190f4a, codeobj_c7c0f6022a9f002911a6f7e7f3190f4a, module_urllib3$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c7c0f6022a9f002911a6f7e7f3190f4a = cache_frame_c7c0f6022a9f002911a6f7e7f3190f4a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c7c0f6022a9f002911a6f7e7f3190f4a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c7c0f6022a9f002911a6f7e7f3190f4a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = const_str_digest_cb9b95f47cda8f2821509d84e8d824e3;
        CHECK_OBJECT( par_location );
        tmp_right_name_1 = par_location;
        tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_message == NULL );
        var_message = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "HTTPError" );
            exception_tb = NULL;

            exception_lineno = 145;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT( var_message );
        tmp_args_element_name_2 = var_message;
        frame_c7c0f6022a9f002911a6f7e7f3190f4a->m_frame.f_lineno = 145;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain___init__, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_location );
        tmp_assattr_name_1 = par_location;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_location, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c7c0f6022a9f002911a6f7e7f3190f4a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c7c0f6022a9f002911a6f7e7f3190f4a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c7c0f6022a9f002911a6f7e7f3190f4a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c7c0f6022a9f002911a6f7e7f3190f4a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c7c0f6022a9f002911a6f7e7f3190f4a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c7c0f6022a9f002911a6f7e7f3190f4a,
        type_description_1,
        par_self,
        par_location,
        var_message
    );


    // Release cached frame.
    if ( frame_c7c0f6022a9f002911a6f7e7f3190f4a == cache_frame_c7c0f6022a9f002911a6f7e7f3190f4a )
    {
        Py_DECREF( frame_c7c0f6022a9f002911a6f7e7f3190f4a );
    }
    cache_frame_c7c0f6022a9f002911a6f7e7f3190f4a = NULL;

    assertFrameObject( frame_c7c0f6022a9f002911a6f7e7f3190f4a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_7___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_message );
    Py_DECREF( var_message );
    var_message = NULL;

    CHECK_OBJECT( (PyObject *)par_location );
    Py_DECREF( par_location );
    par_location = NULL;

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

    Py_XDECREF( var_message );
    var_message = NULL;

    CHECK_OBJECT( (PyObject *)par_location );
    Py_DECREF( par_location );
    par_location = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_7___init__ );
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


static PyObject *impl_urllib3$exceptions$$$function_8___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_partial = python_pars[ 1 ];
    PyObject *par_expected = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_abc29bc6745d2e04ad98b7a1f76bab7b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_abc29bc6745d2e04ad98b7a1f76bab7b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_abc29bc6745d2e04ad98b7a1f76bab7b, codeobj_abc29bc6745d2e04ad98b7a1f76bab7b, module_urllib3$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_abc29bc6745d2e04ad98b7a1f76bab7b = cache_frame_abc29bc6745d2e04ad98b7a1f76bab7b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_abc29bc6745d2e04ad98b7a1f76bab7b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_abc29bc6745d2e04ad98b7a1f76bab7b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_IncompleteRead );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IncompleteRead );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "IncompleteRead" );
            exception_tb = NULL;

            exception_lineno = 216;
            type_description_1 = "ooo";
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


            exception_lineno = 216;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_partial );
        tmp_args_element_name_1 = par_partial;
        CHECK_OBJECT( par_expected );
        tmp_args_element_name_2 = par_expected;
        frame_abc29bc6745d2e04ad98b7a1f76bab7b->m_frame.f_lineno = 216;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain___init__, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_abc29bc6745d2e04ad98b7a1f76bab7b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_abc29bc6745d2e04ad98b7a1f76bab7b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_abc29bc6745d2e04ad98b7a1f76bab7b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_abc29bc6745d2e04ad98b7a1f76bab7b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_abc29bc6745d2e04ad98b7a1f76bab7b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_abc29bc6745d2e04ad98b7a1f76bab7b,
        type_description_1,
        par_self,
        par_partial,
        par_expected
    );


    // Release cached frame.
    if ( frame_abc29bc6745d2e04ad98b7a1f76bab7b == cache_frame_abc29bc6745d2e04ad98b7a1f76bab7b )
    {
        Py_DECREF( frame_abc29bc6745d2e04ad98b7a1f76bab7b );
    }
    cache_frame_abc29bc6745d2e04ad98b7a1f76bab7b = NULL;

    assertFrameObject( frame_abc29bc6745d2e04ad98b7a1f76bab7b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_8___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_expected );
    Py_DECREF( par_expected );
    par_expected = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_partial );
    Py_DECREF( par_partial );
    par_partial = NULL;

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

    CHECK_OBJECT( (PyObject *)par_expected );
    Py_DECREF( par_expected );
    par_expected = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_partial );
    Py_DECREF( par_partial );
    par_partial = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_8___init__ );
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


static PyObject *impl_urllib3$exceptions$$$function_9___repr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_6c51a725591ea4ffe8f84a61670ddccf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6c51a725591ea4ffe8f84a61670ddccf = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6c51a725591ea4ffe8f84a61670ddccf, codeobj_6c51a725591ea4ffe8f84a61670ddccf, module_urllib3$exceptions, sizeof(void *) );
    frame_6c51a725591ea4ffe8f84a61670ddccf = cache_frame_6c51a725591ea4ffe8f84a61670ddccf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6c51a725591ea4ffe8f84a61670ddccf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6c51a725591ea4ffe8f84a61670ddccf ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        tmp_left_name_1 = const_str_digest_7507dacd42331ff69ed33f16b17b92b8;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_partial );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_expected );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_1 );

            exception_lineno = 220;
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


            exception_lineno = 219;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c51a725591ea4ffe8f84a61670ddccf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c51a725591ea4ffe8f84a61670ddccf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c51a725591ea4ffe8f84a61670ddccf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6c51a725591ea4ffe8f84a61670ddccf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6c51a725591ea4ffe8f84a61670ddccf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6c51a725591ea4ffe8f84a61670ddccf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6c51a725591ea4ffe8f84a61670ddccf,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_6c51a725591ea4ffe8f84a61670ddccf == cache_frame_6c51a725591ea4ffe8f84a61670ddccf )
    {
        Py_DECREF( frame_6c51a725591ea4ffe8f84a61670ddccf );
    }
    cache_frame_6c51a725591ea4ffe8f84a61670ddccf = NULL;

    assertFrameObject( frame_6c51a725591ea4ffe8f84a61670ddccf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_9___repr__ );
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
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_9___repr__ );
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


static PyObject *impl_urllib3$exceptions$$$function_10___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_scheme = python_pars[ 1 ];
    PyObject *var_message = NULL;
    struct Nuitka_FrameObject *frame_5490552c698998d588c424b3853df5be;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5490552c698998d588c424b3853df5be = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5490552c698998d588c424b3853df5be, codeobj_5490552c698998d588c424b3853df5be, module_urllib3$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5490552c698998d588c424b3853df5be = cache_frame_5490552c698998d588c424b3853df5be;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5490552c698998d588c424b3853df5be );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5490552c698998d588c424b3853df5be ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = const_str_digest_ffd5c59803af63cf2041e83ca8e66823;
        CHECK_OBJECT( par_scheme );
        tmp_right_name_1 = par_scheme;
        tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_message == NULL );
        var_message = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ProxySchemeUnknown );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProxySchemeUnknown );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ProxySchemeUnknown" );
            exception_tb = NULL;

            exception_lineno = 234;
            type_description_1 = "ooo";
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


            exception_lineno = 234;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_message );
        tmp_args_element_name_1 = var_message;
        frame_5490552c698998d588c424b3853df5be->m_frame.f_lineno = 234;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain___init__, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5490552c698998d588c424b3853df5be );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5490552c698998d588c424b3853df5be );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5490552c698998d588c424b3853df5be, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5490552c698998d588c424b3853df5be->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5490552c698998d588c424b3853df5be, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5490552c698998d588c424b3853df5be,
        type_description_1,
        par_self,
        par_scheme,
        var_message
    );


    // Release cached frame.
    if ( frame_5490552c698998d588c424b3853df5be == cache_frame_5490552c698998d588c424b3853df5be )
    {
        Py_DECREF( frame_5490552c698998d588c424b3853df5be );
    }
    cache_frame_5490552c698998d588c424b3853df5be = NULL;

    assertFrameObject( frame_5490552c698998d588c424b3853df5be );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_10___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_scheme );
    Py_DECREF( par_scheme );
    par_scheme = NULL;

    CHECK_OBJECT( (PyObject *)var_message );
    Py_DECREF( var_message );
    var_message = NULL;

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

    CHECK_OBJECT( (PyObject *)par_scheme );
    Py_DECREF( par_scheme );
    par_scheme = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_10___init__ );
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


static PyObject *impl_urllib3$exceptions$$$function_11___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_defects = python_pars[ 1 ];
    PyObject *par_unparsed_data = python_pars[ 2 ];
    PyObject *var_message = NULL;
    struct Nuitka_FrameObject *frame_6c46cd65fe9b4801d069adbd473276ab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6c46cd65fe9b4801d069adbd473276ab = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6c46cd65fe9b4801d069adbd473276ab, codeobj_6c46cd65fe9b4801d069adbd473276ab, module_urllib3$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6c46cd65fe9b4801d069adbd473276ab = cache_frame_6c46cd65fe9b4801d069adbd473276ab;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6c46cd65fe9b4801d069adbd473276ab );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6c46cd65fe9b4801d069adbd473276ab ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        tmp_left_name_1 = const_str_digest_46584e2093371b92bd116a36f6fac20c;
        CHECK_OBJECT( par_defects );
        tmp_or_left_value_1 = par_defects;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "oooo";
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
        tmp_or_right_value_1 = const_str_plain_Unknown;
        tmp_tuple_element_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_tuple_element_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_right_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_unparsed_data );
        tmp_tuple_element_1 = par_unparsed_data;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
        tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_message == NULL );
        var_message = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HeaderParsingError );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HeaderParsingError );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "HeaderParsingError" );
            exception_tb = NULL;

            exception_lineno = 241;
            type_description_1 = "oooo";
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


            exception_lineno = 241;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_message );
        tmp_args_element_name_1 = var_message;
        frame_6c46cd65fe9b4801d069adbd473276ab->m_frame.f_lineno = 241;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain___init__, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c46cd65fe9b4801d069adbd473276ab );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c46cd65fe9b4801d069adbd473276ab );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6c46cd65fe9b4801d069adbd473276ab, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6c46cd65fe9b4801d069adbd473276ab->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6c46cd65fe9b4801d069adbd473276ab, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6c46cd65fe9b4801d069adbd473276ab,
        type_description_1,
        par_self,
        par_defects,
        par_unparsed_data,
        var_message
    );


    // Release cached frame.
    if ( frame_6c46cd65fe9b4801d069adbd473276ab == cache_frame_6c46cd65fe9b4801d069adbd473276ab )
    {
        Py_DECREF( frame_6c46cd65fe9b4801d069adbd473276ab );
    }
    cache_frame_6c46cd65fe9b4801d069adbd473276ab = NULL;

    assertFrameObject( frame_6c46cd65fe9b4801d069adbd473276ab );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_11___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_message );
    Py_DECREF( var_message );
    var_message = NULL;

    CHECK_OBJECT( (PyObject *)par_unparsed_data );
    Py_DECREF( par_unparsed_data );
    par_unparsed_data = NULL;

    CHECK_OBJECT( (PyObject *)par_defects );
    Py_DECREF( par_defects );
    par_defects = NULL;

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

    Py_XDECREF( var_message );
    var_message = NULL;

    CHECK_OBJECT( (PyObject *)par_unparsed_data );
    Py_DECREF( par_unparsed_data );
    par_unparsed_data = NULL;

    CHECK_OBJECT( (PyObject *)par_defects );
    Py_DECREF( par_defects );
    par_defects = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_11___init__ );
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



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_10___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_10___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5490552c698998d588c424b3853df5be,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$exceptions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_11___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_11___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6c46cd65fe9b4801d069adbd473276ab,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$exceptions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b4c73dbf269b6d70d7c899c3791c5388,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$exceptions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_2___reduce__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_2___reduce__,
        const_str_plain___reduce__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c61d54e52a8eb04b63ac0b34b994caa6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$exceptions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_3___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f29125bab80add6948e52901250853a5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$exceptions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_4___reduce__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_4___reduce__,
        const_str_plain___reduce__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c4a80140c4119ca51023d2689614f8d5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$exceptions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_5___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_10a63271f9396893274b4619163d04d0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$exceptions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_6___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_857a460f3d1fb0950fe6d7292165ddb3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$exceptions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_7___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_7___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c7c0f6022a9f002911a6f7e7f3190f4a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$exceptions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_8___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_abc29bc6745d2e04ad98b7a1f76bab7b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$exceptions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_9___repr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_9___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6c51a725591ea4ffe8f84a61670ddccf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$exceptions,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$exceptions =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.exceptions",
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

MOD_INIT_DECL( urllib3$exceptions )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$exceptions );
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
    puts("urllib3.exceptions: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.exceptions: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.exceptions: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$exceptions" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$exceptions = Py_InitModule4(
        "urllib3.exceptions",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$exceptions = PyModule_Create( &mdef_urllib3$exceptions );
#endif

    moduledict_urllib3$exceptions = MODULE_DICT( module_urllib3$exceptions );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$exceptions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$exceptions );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_c8562bbff9d721153deb2fdd066393d0, module_urllib3$exceptions );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__class = NULL;
    PyObject *tmp_class_creation_10__class_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_11__bases = NULL;
    PyObject *tmp_class_creation_11__class = NULL;
    PyObject *tmp_class_creation_11__class_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_12__bases = NULL;
    PyObject *tmp_class_creation_12__class = NULL;
    PyObject *tmp_class_creation_12__class_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_13__bases = NULL;
    PyObject *tmp_class_creation_13__class = NULL;
    PyObject *tmp_class_creation_13__class_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_14__bases = NULL;
    PyObject *tmp_class_creation_14__class = NULL;
    PyObject *tmp_class_creation_14__class_dict = NULL;
    PyObject *tmp_class_creation_14__metaclass = NULL;
    PyObject *tmp_class_creation_15__bases = NULL;
    PyObject *tmp_class_creation_15__class = NULL;
    PyObject *tmp_class_creation_15__class_dict = NULL;
    PyObject *tmp_class_creation_15__metaclass = NULL;
    PyObject *tmp_class_creation_16__bases = NULL;
    PyObject *tmp_class_creation_16__class = NULL;
    PyObject *tmp_class_creation_16__class_dict = NULL;
    PyObject *tmp_class_creation_16__metaclass = NULL;
    PyObject *tmp_class_creation_17__bases = NULL;
    PyObject *tmp_class_creation_17__class = NULL;
    PyObject *tmp_class_creation_17__class_dict = NULL;
    PyObject *tmp_class_creation_17__metaclass = NULL;
    PyObject *tmp_class_creation_18__bases = NULL;
    PyObject *tmp_class_creation_18__class = NULL;
    PyObject *tmp_class_creation_18__class_dict = NULL;
    PyObject *tmp_class_creation_18__metaclass = NULL;
    PyObject *tmp_class_creation_19__bases = NULL;
    PyObject *tmp_class_creation_19__class = NULL;
    PyObject *tmp_class_creation_19__class_dict = NULL;
    PyObject *tmp_class_creation_19__metaclass = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_20__bases = NULL;
    PyObject *tmp_class_creation_20__class = NULL;
    PyObject *tmp_class_creation_20__class_dict = NULL;
    PyObject *tmp_class_creation_20__metaclass = NULL;
    PyObject *tmp_class_creation_21__bases = NULL;
    PyObject *tmp_class_creation_21__class = NULL;
    PyObject *tmp_class_creation_21__class_dict = NULL;
    PyObject *tmp_class_creation_21__metaclass = NULL;
    PyObject *tmp_class_creation_22__bases = NULL;
    PyObject *tmp_class_creation_22__class = NULL;
    PyObject *tmp_class_creation_22__class_dict = NULL;
    PyObject *tmp_class_creation_22__metaclass = NULL;
    PyObject *tmp_class_creation_23__bases = NULL;
    PyObject *tmp_class_creation_23__class = NULL;
    PyObject *tmp_class_creation_23__class_dict = NULL;
    PyObject *tmp_class_creation_23__metaclass = NULL;
    PyObject *tmp_class_creation_24__bases = NULL;
    PyObject *tmp_class_creation_24__class = NULL;
    PyObject *tmp_class_creation_24__class_dict = NULL;
    PyObject *tmp_class_creation_24__metaclass = NULL;
    PyObject *tmp_class_creation_25__bases = NULL;
    PyObject *tmp_class_creation_25__class = NULL;
    PyObject *tmp_class_creation_25__class_dict = NULL;
    PyObject *tmp_class_creation_25__metaclass = NULL;
    PyObject *tmp_class_creation_26__bases = NULL;
    PyObject *tmp_class_creation_26__class = NULL;
    PyObject *tmp_class_creation_26__class_dict = NULL;
    PyObject *tmp_class_creation_26__metaclass = NULL;
    PyObject *tmp_class_creation_27__bases = NULL;
    PyObject *tmp_class_creation_27__class = NULL;
    PyObject *tmp_class_creation_27__class_dict = NULL;
    PyObject *tmp_class_creation_27__metaclass = NULL;
    PyObject *tmp_class_creation_28__bases = NULL;
    PyObject *tmp_class_creation_28__class = NULL;
    PyObject *tmp_class_creation_28__class_dict = NULL;
    PyObject *tmp_class_creation_28__metaclass = NULL;
    PyObject *tmp_class_creation_29__bases = NULL;
    PyObject *tmp_class_creation_29__class = NULL;
    PyObject *tmp_class_creation_29__class_dict = NULL;
    PyObject *tmp_class_creation_29__metaclass = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_30__bases = NULL;
    PyObject *tmp_class_creation_30__class = NULL;
    PyObject *tmp_class_creation_30__class_dict = NULL;
    PyObject *tmp_class_creation_30__metaclass = NULL;
    PyObject *tmp_class_creation_31__bases = NULL;
    PyObject *tmp_class_creation_31__class = NULL;
    PyObject *tmp_class_creation_31__class_dict = NULL;
    PyObject *tmp_class_creation_31__metaclass = NULL;
    PyObject *tmp_class_creation_32__class = NULL;
    PyObject *tmp_class_creation_32__class_dict = NULL;
    PyObject *tmp_class_creation_32__metaclass = NULL;
    PyObject *tmp_class_creation_33__bases = NULL;
    PyObject *tmp_class_creation_33__class = NULL;
    PyObject *tmp_class_creation_33__class_dict = NULL;
    PyObject *tmp_class_creation_33__metaclass = NULL;
    PyObject *tmp_class_creation_34__bases = NULL;
    PyObject *tmp_class_creation_34__class = NULL;
    PyObject *tmp_class_creation_34__class_dict = NULL;
    PyObject *tmp_class_creation_34__metaclass = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
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
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__class = NULL;
    PyObject *tmp_class_creation_7__class_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__class = NULL;
    PyObject *tmp_class_creation_8__class_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__class = NULL;
    PyObject *tmp_class_creation_9__class_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_locals_urllib3$exceptions_228_key___init__ = NULL;
    PyObject *tmp_select_metaclass_10__base = NULL;
    PyObject *tmp_select_metaclass_11__base = NULL;
    PyObject *tmp_select_metaclass_12__base = NULL;
    PyObject *tmp_select_metaclass_13__base = NULL;
    PyObject *tmp_select_metaclass_14__base = NULL;
    PyObject *tmp_select_metaclass_15__base = NULL;
    PyObject *tmp_select_metaclass_16__base = NULL;
    PyObject *tmp_select_metaclass_17__base = NULL;
    PyObject *tmp_select_metaclass_18__base = NULL;
    PyObject *tmp_select_metaclass_19__base = NULL;
    PyObject *tmp_select_metaclass_20__base = NULL;
    PyObject *tmp_select_metaclass_21__base = NULL;
    PyObject *tmp_select_metaclass_22__base = NULL;
    PyObject *tmp_select_metaclass_23__base = NULL;
    PyObject *tmp_select_metaclass_24__base = NULL;
    PyObject *tmp_select_metaclass_25__base = NULL;
    PyObject *tmp_select_metaclass_26__base = NULL;
    PyObject *tmp_select_metaclass_27__base = NULL;
    PyObject *tmp_select_metaclass_28__base = NULL;
    PyObject *tmp_select_metaclass_29__base = NULL;
    PyObject *tmp_select_metaclass_2__base = NULL;
    PyObject *tmp_select_metaclass_30__base = NULL;
    PyObject *tmp_select_metaclass_31__base = NULL;
    PyObject *tmp_select_metaclass_33__base = NULL;
    PyObject *tmp_select_metaclass_34__base = NULL;
    PyObject *tmp_select_metaclass_3__base = NULL;
    PyObject *tmp_select_metaclass_4__base = NULL;
    PyObject *tmp_select_metaclass_5__base = NULL;
    PyObject *tmp_select_metaclass_6__base = NULL;
    PyObject *tmp_select_metaclass_7__base = NULL;
    PyObject *tmp_select_metaclass_8__base = NULL;
    PyObject *tmp_select_metaclass_9__base = NULL;
    struct Nuitka_FrameObject *frame_b37ff837bea98402fbe710b5f6fa099f;
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
    PyObject *locals_urllib3$exceptions_13 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_urllib3$exceptions_18 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *locals_urllib3$exceptions_29 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *locals_urllib3$exceptions_40 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_urllib3$exceptions_45 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *locals_urllib3$exceptions_50 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *locals_urllib3$exceptions_55 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *locals_urllib3$exceptions_66 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *locals_urllib3$exceptions_85 = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *locals_urllib3$exceptions_94 = NULL;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *locals_urllib3$exceptions_99 = NULL;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *locals_urllib3$exceptions_108 = NULL;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *locals_urllib3$exceptions_115 = NULL;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *locals_urllib3$exceptions_120 = NULL;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *locals_urllib3$exceptions_125 = NULL;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *locals_urllib3$exceptions_130 = NULL;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *locals_urllib3$exceptions_135 = NULL;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *locals_urllib3$exceptions_140 = NULL;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *locals_urllib3$exceptions_150 = NULL;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *locals_urllib3$exceptions_156 = NULL;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *locals_urllib3$exceptions_161 = NULL;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *locals_urllib3$exceptions_166 = NULL;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *locals_urllib3$exceptions_171 = NULL;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *locals_urllib3$exceptions_176 = NULL;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *locals_urllib3$exceptions_181 = NULL;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *locals_urllib3$exceptions_186 = NULL;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    PyObject *locals_urllib3$exceptions_194 = NULL;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    PyObject *locals_urllib3$exceptions_199 = NULL;
    PyObject *exception_keeper_type_56;
    PyObject *exception_keeper_value_56;
    PyTracebackObject *exception_keeper_tb_56;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
    PyObject *exception_keeper_type_57;
    PyObject *exception_keeper_value_57;
    PyTracebackObject *exception_keeper_tb_57;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
    PyObject *locals_urllib3$exceptions_207 = NULL;
    PyObject *exception_keeper_type_58;
    PyObject *exception_keeper_value_58;
    PyTracebackObject *exception_keeper_tb_58;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
    PyObject *exception_keeper_type_59;
    PyObject *exception_keeper_value_59;
    PyTracebackObject *exception_keeper_tb_59;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
    PyObject *locals_urllib3$exceptions_223 = NULL;
    PyObject *exception_keeper_type_60;
    PyObject *exception_keeper_value_60;
    PyTracebackObject *exception_keeper_tb_60;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
    PyObject *exception_keeper_type_61;
    PyObject *exception_keeper_value_61;
    PyTracebackObject *exception_keeper_tb_61;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
    PyObject *exception_keeper_type_62;
    PyObject *exception_keeper_value_62;
    PyTracebackObject *exception_keeper_tb_62;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
    PyObject *locals_urllib3$exceptions_237 = NULL;
    PyObject *exception_keeper_type_63;
    PyObject *exception_keeper_value_63;
    PyTracebackObject *exception_keeper_tb_63;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;
    PyObject *exception_keeper_type_64;
    PyObject *exception_keeper_value_64;
    PyTracebackObject *exception_keeper_tb_64;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_64;
    PyObject *locals_urllib3$exceptions_244 = NULL;
    PyObject *exception_keeper_type_65;
    PyObject *exception_keeper_value_65;
    PyTracebackObject *exception_keeper_tb_65;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_65;
    PyObject *exception_keeper_type_66;
    PyObject *exception_keeper_value_66;
    PyTracebackObject *exception_keeper_tb_66;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_66;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_5ccbd7b5fba66b3158dd32970d930916;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_b37ff837bea98402fbe710b5f6fa099f = MAKE_MODULE_FRAME( codeobj_b37ff837bea98402fbe710b5f6fa099f, module_urllib3$exceptions );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_b37ff837bea98402fbe710b5f6fa099f );
    assert( Py_REFCNT( frame_b37ff837bea98402fbe710b5f6fa099f ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 1;
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
        UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_863f7ecfa780c39c386006d180d8b06a;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$exceptions;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_IncompleteRead_tuple;
        tmp_level_name_1 = const_int_0;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 2;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_IncompleteRead );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_httplib_IncompleteRead, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = PyDict_Copy( const_dict_5e96d7f69380d04f429d0687fe7b8668 );
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
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


            exception_lineno = 8;

            goto try_except_handler_1;
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
        tmp_assign_source_6 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_6 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_6 );
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_HTTPError;
        tmp_args_element_name_2 = const_tuple_type_Exception_tuple;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 8;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_7;
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
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_8 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError, tmp_assign_source_8 );
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_Warning );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "Warning" );
            exception_tb = NULL;

            exception_lineno = 13;

            goto try_except_handler_2;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        tmp_assign_source_9 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_9, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_urllib3$exceptions_13 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_13, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_c85fd95998d676bb8b296c5552d11916;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_13, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_10 = locals_urllib3$exceptions_13;
        Py_INCREF( tmp_assign_source_10 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_urllib3$exceptions_13 );
        locals_urllib3$exceptions_13 = NULL;
        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_1:;
        assert( tmp_class_creation_2__class_dict == NULL );
        tmp_class_creation_2__class_dict = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
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


            exception_lineno = 13;

            goto try_except_handler_2;
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
        tmp_assign_source_11 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_subscribed_name_1 = tmp_class_creation_2__bases;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_12 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 13;

                goto try_except_handler_2;
            }
            assert( tmp_select_metaclass_2__base == NULL );
            tmp_select_metaclass_2__base = tmp_assign_source_12;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( tmp_select_metaclass_2__base );
            tmp_source_name_1 = tmp_select_metaclass_2__base;
            tmp_assign_source_11 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 13;

                goto try_except_handler_5;
            }
            goto try_return_handler_4;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
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

        {
            PyObject *tmp_type_arg_1;
            Py_DECREF( exception_keeper_type_2 );
            Py_XDECREF( exception_keeper_value_2 );
            Py_XDECREF( exception_keeper_tb_2 );
            CHECK_OBJECT( tmp_select_metaclass_2__base );
            tmp_type_arg_1 = tmp_select_metaclass_2__base;
            tmp_assign_source_11 = BUILTIN_TYPE1( tmp_type_arg_1 );
            assert( !(tmp_assign_source_11 == NULL) );
            goto try_return_handler_4;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
        Py_DECREF( tmp_select_metaclass_2__base );
        tmp_select_metaclass_2__base = NULL;

        goto outline_result_2;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
        Py_DECREF( tmp_select_metaclass_2__base );
        tmp_select_metaclass_2__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_2:;
        condexpr_end_2:;
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_called_name_2 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_4 = const_str_plain_HTTPWarning;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_args_element_name_5 = tmp_class_creation_2__bases;
        CHECK_OBJECT( tmp_class_creation_2__class_dict );
        tmp_args_element_name_6 = tmp_class_creation_2__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 13;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_2__class == NULL );
        tmp_class_creation_2__class = tmp_assign_source_13;
    }
    goto try_end_2;
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

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_class_creation_2__class );
        tmp_assign_source_14 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPWarning, tmp_assign_source_14 );
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
        PyObject *tmp_assign_source_15;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
            exception_tb = NULL;

            exception_lineno = 18;

            goto try_except_handler_6;
        }

        tmp_tuple_element_2 = tmp_mvar_value_2;
        tmp_assign_source_15 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 0, tmp_tuple_element_2 );
        assert( tmp_class_creation_3__bases == NULL );
        tmp_class_creation_3__bases = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        {
            PyObject *tmp_set_locals_2;
            tmp_set_locals_2 = PyDict_New();
            locals_urllib3$exceptions_18 = tmp_set_locals_2;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_18, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_401d5766bd48277296aa1afc93f98bc4;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_18, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_1___init__(  );



        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_18, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_2___reduce__(  );



        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_18, const_str_plain___reduce__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_16 = locals_urllib3$exceptions_18;
        Py_INCREF( tmp_assign_source_16 );
        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF( locals_urllib3$exceptions_18 );
        locals_urllib3$exceptions_18 = NULL;
        goto outline_result_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_3:;
        assert( tmp_class_creation_3__class_dict == NULL );
        tmp_class_creation_3__class_dict = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
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


            exception_lineno = 18;

            goto try_except_handler_6;
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
        tmp_assign_source_17 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto try_except_handler_6;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_subscribed_name_2 = tmp_class_creation_3__bases;
            tmp_subscript_name_2 = const_int_0;
            tmp_assign_source_18 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;

                goto try_except_handler_6;
            }
            assert( tmp_select_metaclass_3__base == NULL );
            tmp_select_metaclass_3__base = tmp_assign_source_18;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( tmp_select_metaclass_3__base );
            tmp_source_name_2 = tmp_select_metaclass_3__base;
            tmp_assign_source_17 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;

                goto try_except_handler_9;
            }
            goto try_return_handler_8;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_2;
            Py_DECREF( exception_keeper_type_4 );
            Py_XDECREF( exception_keeper_value_4 );
            Py_XDECREF( exception_keeper_tb_4 );
            CHECK_OBJECT( tmp_select_metaclass_3__base );
            tmp_type_arg_2 = tmp_select_metaclass_3__base;
            tmp_assign_source_17 = BUILTIN_TYPE1( tmp_type_arg_2 );
            assert( !(tmp_assign_source_17 == NULL) );
            goto try_return_handler_8;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
        Py_DECREF( tmp_select_metaclass_3__base );
        tmp_select_metaclass_3__base = NULL;

        goto outline_result_4;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
        Py_DECREF( tmp_select_metaclass_3__base );
        tmp_select_metaclass_3__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_4:;
        condexpr_end_3:;
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_called_name_3 = tmp_class_creation_3__metaclass;
        tmp_args_element_name_7 = const_str_plain_PoolError;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_args_element_name_8 = tmp_class_creation_3__bases;
        CHECK_OBJECT( tmp_class_creation_3__class_dict );
        tmp_args_element_name_9 = tmp_class_creation_3__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 18;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto try_except_handler_6;
        }
        assert( tmp_class_creation_3__class == NULL );
        tmp_class_creation_3__class = tmp_assign_source_19;
    }
    goto try_end_3;
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

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT( tmp_class_creation_3__class );
        tmp_assign_source_20 = tmp_class_creation_3__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_PoolError, tmp_assign_source_20 );
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
        PyObject *tmp_assign_source_21;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_PoolError );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolError );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "PoolError" );
            exception_tb = NULL;

            exception_lineno = 29;

            goto try_except_handler_10;
        }

        tmp_tuple_element_3 = tmp_mvar_value_3;
        tmp_assign_source_21 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_assign_source_21, 0, tmp_tuple_element_3 );
        assert( tmp_class_creation_4__bases == NULL );
        tmp_class_creation_4__bases = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_set_locals_3;
            tmp_set_locals_3 = PyDict_New();
            locals_urllib3$exceptions_29 = tmp_set_locals_3;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_29, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_1ac943b4741094a8fa467ee81285da04;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_29, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_3___init__(  );



        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_29, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_4___reduce__(  );



        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_29, const_str_plain___reduce__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_22 = locals_urllib3$exceptions_29;
        Py_INCREF( tmp_assign_source_22 );
        goto try_return_handler_11;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF( locals_urllib3$exceptions_29 );
        locals_urllib3$exceptions_29 = NULL;
        goto outline_result_5;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_5:;
        assert( tmp_class_creation_4__class_dict == NULL );
        tmp_class_creation_4__class_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
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


            exception_lineno = 29;

            goto try_except_handler_10;
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
        tmp_assign_source_23 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_10;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_subscribed_name_3 = tmp_class_creation_4__bases;
            tmp_subscript_name_3 = const_int_0;
            tmp_assign_source_24 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 29;

                goto try_except_handler_10;
            }
            assert( tmp_select_metaclass_4__base == NULL );
            tmp_select_metaclass_4__base = tmp_assign_source_24;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( tmp_select_metaclass_4__base );
            tmp_source_name_3 = tmp_select_metaclass_4__base;
            tmp_assign_source_23 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
            if ( tmp_assign_source_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 29;

                goto try_except_handler_13;
            }
            goto try_return_handler_12;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_3;
            Py_DECREF( exception_keeper_type_6 );
            Py_XDECREF( exception_keeper_value_6 );
            Py_XDECREF( exception_keeper_tb_6 );
            CHECK_OBJECT( tmp_select_metaclass_4__base );
            tmp_type_arg_3 = tmp_select_metaclass_4__base;
            tmp_assign_source_23 = BUILTIN_TYPE1( tmp_type_arg_3 );
            assert( !(tmp_assign_source_23 == NULL) );
            goto try_return_handler_12;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
        Py_DECREF( tmp_select_metaclass_4__base );
        tmp_select_metaclass_4__base = NULL;

        goto outline_result_6;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
        Py_DECREF( tmp_select_metaclass_4__base );
        tmp_select_metaclass_4__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_6:;
        condexpr_end_4:;
        assert( tmp_class_creation_4__metaclass == NULL );
        tmp_class_creation_4__metaclass = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        CHECK_OBJECT( tmp_class_creation_4__metaclass );
        tmp_called_name_4 = tmp_class_creation_4__metaclass;
        tmp_args_element_name_10 = const_str_plain_RequestError;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_args_element_name_11 = tmp_class_creation_4__bases;
        CHECK_OBJECT( tmp_class_creation_4__class_dict );
        tmp_args_element_name_12 = tmp_class_creation_4__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_10;
        }
        assert( tmp_class_creation_4__class == NULL );
        tmp_class_creation_4__class = tmp_assign_source_25;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT( tmp_class_creation_4__class );
        tmp_assign_source_26 = tmp_class_creation_4__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_RequestError, tmp_assign_source_26 );
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
        PyObject *tmp_assign_source_27;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
            exception_tb = NULL;

            exception_lineno = 40;

            goto try_except_handler_14;
        }

        tmp_tuple_element_4 = tmp_mvar_value_4;
        tmp_assign_source_27 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_assign_source_27, 0, tmp_tuple_element_4 );
        assert( tmp_class_creation_5__bases == NULL );
        tmp_class_creation_5__bases = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        {
            PyObject *tmp_set_locals_4;
            tmp_set_locals_4 = PyDict_New();
            locals_urllib3$exceptions_40 = tmp_set_locals_4;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_40, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_0af1d92cbf25f8a036fda6803e038903;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_40, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_28 = locals_urllib3$exceptions_40;
        Py_INCREF( tmp_assign_source_28 );
        goto try_return_handler_15;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF( locals_urllib3$exceptions_40 );
        locals_urllib3$exceptions_40 = NULL;
        goto outline_result_7;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_7:;
        assert( tmp_class_creation_5__class_dict == NULL );
        tmp_class_creation_5__class_dict = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
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


            exception_lineno = 40;

            goto try_except_handler_14;
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
        tmp_assign_source_29 = DICT_GET_ITEM( tmp_dict_name_10, tmp_key_name_10 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_14;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            CHECK_OBJECT( tmp_class_creation_5__bases );
            tmp_subscribed_name_4 = tmp_class_creation_5__bases;
            tmp_subscript_name_4 = const_int_0;
            tmp_assign_source_30 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
            if ( tmp_assign_source_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;

                goto try_except_handler_14;
            }
            assert( tmp_select_metaclass_5__base == NULL );
            tmp_select_metaclass_5__base = tmp_assign_source_30;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( tmp_select_metaclass_5__base );
            tmp_source_name_4 = tmp_select_metaclass_5__base;
            tmp_assign_source_29 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
            if ( tmp_assign_source_29 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;

                goto try_except_handler_17;
            }
            goto try_return_handler_16;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_4;
            Py_DECREF( exception_keeper_type_8 );
            Py_XDECREF( exception_keeper_value_8 );
            Py_XDECREF( exception_keeper_tb_8 );
            CHECK_OBJECT( tmp_select_metaclass_5__base );
            tmp_type_arg_4 = tmp_select_metaclass_5__base;
            tmp_assign_source_29 = BUILTIN_TYPE1( tmp_type_arg_4 );
            assert( !(tmp_assign_source_29 == NULL) );
            goto try_return_handler_16;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_16:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_5__base );
        Py_DECREF( tmp_select_metaclass_5__base );
        tmp_select_metaclass_5__base = NULL;

        goto outline_result_8;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_5__base );
        Py_DECREF( tmp_select_metaclass_5__base );
        tmp_select_metaclass_5__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_8:;
        condexpr_end_5:;
        assert( tmp_class_creation_5__metaclass == NULL );
        tmp_class_creation_5__metaclass = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        CHECK_OBJECT( tmp_class_creation_5__metaclass );
        tmp_called_name_5 = tmp_class_creation_5__metaclass;
        tmp_args_element_name_13 = const_str_plain_SSLError;
        CHECK_OBJECT( tmp_class_creation_5__bases );
        tmp_args_element_name_14 = tmp_class_creation_5__bases;
        CHECK_OBJECT( tmp_class_creation_5__class_dict );
        tmp_args_element_name_15 = tmp_class_creation_5__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
            tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_14;
        }
        assert( tmp_class_creation_5__class == NULL );
        tmp_class_creation_5__class = tmp_assign_source_31;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT( tmp_class_creation_5__class );
        tmp_assign_source_32 = tmp_class_creation_5__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SSLError, tmp_assign_source_32 );
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
        PyObject *tmp_assign_source_33;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
            exception_tb = NULL;

            exception_lineno = 45;

            goto try_except_handler_18;
        }

        tmp_tuple_element_5 = tmp_mvar_value_5;
        tmp_assign_source_33 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_assign_source_33, 0, tmp_tuple_element_5 );
        assert( tmp_class_creation_6__bases == NULL );
        tmp_class_creation_6__bases = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        {
            PyObject *tmp_set_locals_5;
            tmp_set_locals_5 = PyDict_New();
            locals_urllib3$exceptions_45 = tmp_set_locals_5;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_45, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_7cd1672c18c257a809407a1a63fa0e88;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_45, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_34 = locals_urllib3$exceptions_45;
        Py_INCREF( tmp_assign_source_34 );
        goto try_return_handler_19;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF( locals_urllib3$exceptions_45 );
        locals_urllib3$exceptions_45 = NULL;
        goto outline_result_9;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_9:;
        assert( tmp_class_creation_6__class_dict == NULL );
        tmp_class_creation_6__class_dict = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
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


            exception_lineno = 45;

            goto try_except_handler_18;
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
        tmp_assign_source_35 = DICT_GET_ITEM( tmp_dict_name_12, tmp_key_name_12 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;

            goto try_except_handler_18;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            CHECK_OBJECT( tmp_class_creation_6__bases );
            tmp_subscribed_name_5 = tmp_class_creation_6__bases;
            tmp_subscript_name_5 = const_int_0;
            tmp_assign_source_36 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
            if ( tmp_assign_source_36 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 45;

                goto try_except_handler_18;
            }
            assert( tmp_select_metaclass_6__base == NULL );
            tmp_select_metaclass_6__base = tmp_assign_source_36;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( tmp_select_metaclass_6__base );
            tmp_source_name_5 = tmp_select_metaclass_6__base;
            tmp_assign_source_35 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_5 );
            if ( tmp_assign_source_35 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 45;

                goto try_except_handler_21;
            }
            goto try_return_handler_20;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_5;
            Py_DECREF( exception_keeper_type_10 );
            Py_XDECREF( exception_keeper_value_10 );
            Py_XDECREF( exception_keeper_tb_10 );
            CHECK_OBJECT( tmp_select_metaclass_6__base );
            tmp_type_arg_5 = tmp_select_metaclass_6__base;
            tmp_assign_source_35 = BUILTIN_TYPE1( tmp_type_arg_5 );
            assert( !(tmp_assign_source_35 == NULL) );
            goto try_return_handler_20;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_20:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_6__base );
        Py_DECREF( tmp_select_metaclass_6__base );
        tmp_select_metaclass_6__base = NULL;

        goto outline_result_10;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_6__base );
        Py_DECREF( tmp_select_metaclass_6__base );
        tmp_select_metaclass_6__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_10:;
        condexpr_end_6:;
        assert( tmp_class_creation_6__metaclass == NULL );
        tmp_class_creation_6__metaclass = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_args_element_name_18;
        CHECK_OBJECT( tmp_class_creation_6__metaclass );
        tmp_called_name_6 = tmp_class_creation_6__metaclass;
        tmp_args_element_name_16 = const_str_plain_ProxyError;
        CHECK_OBJECT( tmp_class_creation_6__bases );
        tmp_args_element_name_17 = tmp_class_creation_6__bases;
        CHECK_OBJECT( tmp_class_creation_6__class_dict );
        tmp_args_element_name_18 = tmp_class_creation_6__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18 };
            tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
        }

        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;

            goto try_except_handler_18;
        }
        assert( tmp_class_creation_6__class == NULL );
        tmp_class_creation_6__class = tmp_assign_source_37;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
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
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    {
        PyObject *tmp_assign_source_38;
        CHECK_OBJECT( tmp_class_creation_6__class );
        tmp_assign_source_38 = tmp_class_creation_6__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ProxyError, tmp_assign_source_38 );
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

    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
            exception_tb = NULL;

            exception_lineno = 50;

            goto try_except_handler_22;
        }

        tmp_tuple_element_6 = tmp_mvar_value_6;
        tmp_assign_source_39 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_assign_source_39, 0, tmp_tuple_element_6 );
        assert( tmp_class_creation_7__bases == NULL );
        tmp_class_creation_7__bases = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        {
            PyObject *tmp_set_locals_6;
            tmp_set_locals_6 = PyDict_New();
            locals_urllib3$exceptions_50 = tmp_set_locals_6;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_50, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_0b3cbe0215684a287553275c21c89d2f;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_50, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_40 = locals_urllib3$exceptions_50;
        Py_INCREF( tmp_assign_source_40 );
        goto try_return_handler_23;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_23:;
        Py_DECREF( locals_urllib3$exceptions_50 );
        locals_urllib3$exceptions_50 = NULL;
        goto outline_result_11;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_11:;
        assert( tmp_class_creation_7__class_dict == NULL );
        tmp_class_creation_7__class_dict = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
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


            exception_lineno = 50;

            goto try_except_handler_22;
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
        tmp_assign_source_41 = DICT_GET_ITEM( tmp_dict_name_14, tmp_key_name_14 );
        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;

            goto try_except_handler_22;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_subscript_name_6;
            CHECK_OBJECT( tmp_class_creation_7__bases );
            tmp_subscribed_name_6 = tmp_class_creation_7__bases;
            tmp_subscript_name_6 = const_int_0;
            tmp_assign_source_42 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 0 );
            if ( tmp_assign_source_42 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;

                goto try_except_handler_22;
            }
            assert( tmp_select_metaclass_7__base == NULL );
            tmp_select_metaclass_7__base = tmp_assign_source_42;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( tmp_select_metaclass_7__base );
            tmp_source_name_6 = tmp_select_metaclass_7__base;
            tmp_assign_source_41 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_6 );
            if ( tmp_assign_source_41 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;

                goto try_except_handler_25;
            }
            goto try_return_handler_24;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_6;
            Py_DECREF( exception_keeper_type_12 );
            Py_XDECREF( exception_keeper_value_12 );
            Py_XDECREF( exception_keeper_tb_12 );
            CHECK_OBJECT( tmp_select_metaclass_7__base );
            tmp_type_arg_6 = tmp_select_metaclass_7__base;
            tmp_assign_source_41 = BUILTIN_TYPE1( tmp_type_arg_6 );
            assert( !(tmp_assign_source_41 == NULL) );
            goto try_return_handler_24;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_24:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_7__base );
        Py_DECREF( tmp_select_metaclass_7__base );
        tmp_select_metaclass_7__base = NULL;

        goto outline_result_12;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_7__base );
        Py_DECREF( tmp_select_metaclass_7__base );
        tmp_select_metaclass_7__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_12:;
        condexpr_end_7:;
        assert( tmp_class_creation_7__metaclass == NULL );
        tmp_class_creation_7__metaclass = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_args_element_name_21;
        CHECK_OBJECT( tmp_class_creation_7__metaclass );
        tmp_called_name_7 = tmp_class_creation_7__metaclass;
        tmp_args_element_name_19 = const_str_plain_DecodeError;
        CHECK_OBJECT( tmp_class_creation_7__bases );
        tmp_args_element_name_20 = tmp_class_creation_7__bases;
        CHECK_OBJECT( tmp_class_creation_7__class_dict );
        tmp_args_element_name_21 = tmp_class_creation_7__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 50;
        {
            PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21 };
            tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
        }

        if ( tmp_assign_source_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;

            goto try_except_handler_22;
        }
        assert( tmp_class_creation_7__class == NULL );
        tmp_class_creation_7__class = tmp_assign_source_43;
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_class_creation_7__class_dict );
    tmp_class_creation_7__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    {
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT( tmp_class_creation_7__class );
        tmp_assign_source_44 = tmp_class_creation_7__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_DecodeError, tmp_assign_source_44 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class );
    Py_DECREF( tmp_class_creation_7__class );
    tmp_class_creation_7__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__bases );
    Py_DECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_dict );
    Py_DECREF( tmp_class_creation_7__class_dict );
    tmp_class_creation_7__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__metaclass );
    Py_DECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
            exception_tb = NULL;

            exception_lineno = 55;

            goto try_except_handler_26;
        }

        tmp_tuple_element_7 = tmp_mvar_value_7;
        tmp_assign_source_45 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_assign_source_45, 0, tmp_tuple_element_7 );
        assert( tmp_class_creation_8__bases == NULL );
        tmp_class_creation_8__bases = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        {
            PyObject *tmp_set_locals_7;
            tmp_set_locals_7 = PyDict_New();
            locals_urllib3$exceptions_55 = tmp_set_locals_7;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_55, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_d54edb257b1240e069427ea15807c309;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_55, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_46 = locals_urllib3$exceptions_55;
        Py_INCREF( tmp_assign_source_46 );
        goto try_return_handler_27;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_27:;
        Py_DECREF( locals_urllib3$exceptions_55 );
        locals_urllib3$exceptions_55 = NULL;
        goto outline_result_13;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_13:;
        assert( tmp_class_creation_8__class_dict == NULL );
        tmp_class_creation_8__class_dict = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
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


            exception_lineno = 55;

            goto try_except_handler_26;
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
        tmp_assign_source_47 = DICT_GET_ITEM( tmp_dict_name_16, tmp_key_name_16 );
        if ( tmp_assign_source_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;

            goto try_except_handler_26;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_subscribed_name_7;
            PyObject *tmp_subscript_name_7;
            CHECK_OBJECT( tmp_class_creation_8__bases );
            tmp_subscribed_name_7 = tmp_class_creation_8__bases;
            tmp_subscript_name_7 = const_int_0;
            tmp_assign_source_48 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_7, tmp_subscript_name_7, 0 );
            if ( tmp_assign_source_48 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;

                goto try_except_handler_26;
            }
            assert( tmp_select_metaclass_8__base == NULL );
            tmp_select_metaclass_8__base = tmp_assign_source_48;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_7;
            CHECK_OBJECT( tmp_select_metaclass_8__base );
            tmp_source_name_7 = tmp_select_metaclass_8__base;
            tmp_assign_source_47 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_7 );
            if ( tmp_assign_source_47 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;

                goto try_except_handler_29;
            }
            goto try_return_handler_28;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_7;
            Py_DECREF( exception_keeper_type_14 );
            Py_XDECREF( exception_keeper_value_14 );
            Py_XDECREF( exception_keeper_tb_14 );
            CHECK_OBJECT( tmp_select_metaclass_8__base );
            tmp_type_arg_7 = tmp_select_metaclass_8__base;
            tmp_assign_source_47 = BUILTIN_TYPE1( tmp_type_arg_7 );
            assert( !(tmp_assign_source_47 == NULL) );
            goto try_return_handler_28;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_28:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_8__base );
        Py_DECREF( tmp_select_metaclass_8__base );
        tmp_select_metaclass_8__base = NULL;

        goto outline_result_14;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_8__base );
        Py_DECREF( tmp_select_metaclass_8__base );
        tmp_select_metaclass_8__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_14:;
        condexpr_end_8:;
        assert( tmp_class_creation_8__metaclass == NULL );
        tmp_class_creation_8__metaclass = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_name_8;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_args_element_name_24;
        CHECK_OBJECT( tmp_class_creation_8__metaclass );
        tmp_called_name_8 = tmp_class_creation_8__metaclass;
        tmp_args_element_name_22 = const_str_plain_ProtocolError;
        CHECK_OBJECT( tmp_class_creation_8__bases );
        tmp_args_element_name_23 = tmp_class_creation_8__bases;
        CHECK_OBJECT( tmp_class_creation_8__class_dict );
        tmp_args_element_name_24 = tmp_class_creation_8__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24 };
            tmp_assign_source_49 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_8, call_args );
        }

        if ( tmp_assign_source_49 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;

            goto try_except_handler_26;
        }
        assert( tmp_class_creation_8__class == NULL );
        tmp_class_creation_8__class = tmp_assign_source_49;
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    Py_XDECREF( tmp_class_creation_8__class_dict );
    tmp_class_creation_8__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    {
        PyObject *tmp_assign_source_50;
        CHECK_OBJECT( tmp_class_creation_8__class );
        tmp_assign_source_50 = tmp_class_creation_8__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ProtocolError, tmp_assign_source_50 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class );
    Py_DECREF( tmp_class_creation_8__class );
    tmp_class_creation_8__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__bases );
    Py_DECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class_dict );
    Py_DECREF( tmp_class_creation_8__class_dict );
    tmp_class_creation_8__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__metaclass );
    Py_DECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ProtocolError );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProtocolError );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ProtocolError" );
            exception_tb = NULL;

            exception_lineno = 61;

            goto frame_exception_exit_1;
        }

        tmp_assign_source_51 = tmp_mvar_value_8;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectionError, tmp_assign_source_51 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_RequestError );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestError );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestError" );
            exception_tb = NULL;

            exception_lineno = 66;

            goto try_except_handler_30;
        }

        tmp_tuple_element_8 = tmp_mvar_value_9;
        tmp_assign_source_52 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_assign_source_52, 0, tmp_tuple_element_8 );
        assert( tmp_class_creation_9__bases == NULL );
        tmp_class_creation_9__bases = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        {
            PyObject *tmp_set_locals_8;
            tmp_set_locals_8 = PyDict_New();
            locals_urllib3$exceptions_66 = tmp_set_locals_8;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_66, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_cd49640eb7d7e15c099dacc30d0f8bde;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_66, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_5___init__( tmp_defaults_1 );



            tmp_res = PyDict_SetItem( locals_urllib3$exceptions_66, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        // Tried code:
        tmp_assign_source_53 = locals_urllib3$exceptions_66;
        Py_INCREF( tmp_assign_source_53 );
        goto try_return_handler_31;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_31:;
        Py_DECREF( locals_urllib3$exceptions_66 );
        locals_urllib3$exceptions_66 = NULL;
        goto outline_result_15;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_15:;
        assert( tmp_class_creation_9__class_dict == NULL );
        tmp_class_creation_9__class_dict = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
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


            exception_lineno = 66;

            goto try_except_handler_30;
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
        tmp_assign_source_54 = DICT_GET_ITEM( tmp_dict_name_18, tmp_key_name_18 );
        if ( tmp_assign_source_54 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;

            goto try_except_handler_30;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        {
            PyObject *tmp_assign_source_55;
            PyObject *tmp_subscribed_name_8;
            PyObject *tmp_subscript_name_8;
            CHECK_OBJECT( tmp_class_creation_9__bases );
            tmp_subscribed_name_8 = tmp_class_creation_9__bases;
            tmp_subscript_name_8 = const_int_0;
            tmp_assign_source_55 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_8, tmp_subscript_name_8, 0 );
            if ( tmp_assign_source_55 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;

                goto try_except_handler_30;
            }
            assert( tmp_select_metaclass_9__base == NULL );
            tmp_select_metaclass_9__base = tmp_assign_source_55;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( tmp_select_metaclass_9__base );
            tmp_source_name_8 = tmp_select_metaclass_9__base;
            tmp_assign_source_54 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_8 );
            if ( tmp_assign_source_54 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;

                goto try_except_handler_33;
            }
            goto try_return_handler_32;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_33:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_8;
            Py_DECREF( exception_keeper_type_16 );
            Py_XDECREF( exception_keeper_value_16 );
            Py_XDECREF( exception_keeper_tb_16 );
            CHECK_OBJECT( tmp_select_metaclass_9__base );
            tmp_type_arg_8 = tmp_select_metaclass_9__base;
            tmp_assign_source_54 = BUILTIN_TYPE1( tmp_type_arg_8 );
            assert( !(tmp_assign_source_54 == NULL) );
            goto try_return_handler_32;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_32:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_9__base );
        Py_DECREF( tmp_select_metaclass_9__base );
        tmp_select_metaclass_9__base = NULL;

        goto outline_result_16;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_9__base );
        Py_DECREF( tmp_select_metaclass_9__base );
        tmp_select_metaclass_9__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_16:;
        condexpr_end_9:;
        assert( tmp_class_creation_9__metaclass == NULL );
        tmp_class_creation_9__metaclass = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_args_element_name_27;
        CHECK_OBJECT( tmp_class_creation_9__metaclass );
        tmp_called_name_9 = tmp_class_creation_9__metaclass;
        tmp_args_element_name_25 = const_str_plain_MaxRetryError;
        CHECK_OBJECT( tmp_class_creation_9__bases );
        tmp_args_element_name_26 = tmp_class_creation_9__bases;
        CHECK_OBJECT( tmp_class_creation_9__class_dict );
        tmp_args_element_name_27 = tmp_class_creation_9__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 66;
        {
            PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27 };
            tmp_assign_source_56 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_9, call_args );
        }

        if ( tmp_assign_source_56 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;

            goto try_except_handler_30;
        }
        assert( tmp_class_creation_9__class == NULL );
        tmp_class_creation_9__class = tmp_assign_source_56;
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_9__bases );
    tmp_class_creation_9__bases = NULL;

    Py_XDECREF( tmp_class_creation_9__class_dict );
    tmp_class_creation_9__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    {
        PyObject *tmp_assign_source_57;
        CHECK_OBJECT( tmp_class_creation_9__class );
        tmp_assign_source_57 = tmp_class_creation_9__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_MaxRetryError, tmp_assign_source_57 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class );
    Py_DECREF( tmp_class_creation_9__class );
    tmp_class_creation_9__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__bases );
    Py_DECREF( tmp_class_creation_9__bases );
    tmp_class_creation_9__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class_dict );
    Py_DECREF( tmp_class_creation_9__class_dict );
    tmp_class_creation_9__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__metaclass );
    Py_DECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_mvar_value_10;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_RequestError );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestError );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestError" );
            exception_tb = NULL;

            exception_lineno = 85;

            goto try_except_handler_34;
        }

        tmp_tuple_element_9 = tmp_mvar_value_10;
        tmp_assign_source_58 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_assign_source_58, 0, tmp_tuple_element_9 );
        assert( tmp_class_creation_10__bases == NULL );
        tmp_class_creation_10__bases = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_59;
        {
            PyObject *tmp_set_locals_9;
            tmp_set_locals_9 = PyDict_New();
            locals_urllib3$exceptions_85 = tmp_set_locals_9;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_85, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_3cba0a880d63b7b310fd43504b18c057;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_85, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_int_pos_3_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_6___init__( tmp_defaults_2 );



            tmp_res = PyDict_SetItem( locals_urllib3$exceptions_85, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        // Tried code:
        tmp_assign_source_59 = locals_urllib3$exceptions_85;
        Py_INCREF( tmp_assign_source_59 );
        goto try_return_handler_35;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_35:;
        Py_DECREF( locals_urllib3$exceptions_85 );
        locals_urllib3$exceptions_85 = NULL;
        goto outline_result_17;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_17:;
        assert( tmp_class_creation_10__class_dict == NULL );
        tmp_class_creation_10__class_dict = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_key_name_19;
        PyObject *tmp_dict_name_19;
        PyObject *tmp_dict_name_20;
        PyObject *tmp_key_name_20;
        tmp_key_name_19 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_10__class_dict );
        tmp_dict_name_19 = tmp_class_creation_10__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_19, tmp_key_name_19 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;

            goto try_except_handler_34;
        }
        tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_10;
        }
        else
        {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT( tmp_class_creation_10__class_dict );
        tmp_dict_name_20 = tmp_class_creation_10__class_dict;
        tmp_key_name_20 = const_str_plain___metaclass__;
        tmp_assign_source_60 = DICT_GET_ITEM( tmp_dict_name_20, tmp_key_name_20 );
        if ( tmp_assign_source_60 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;

            goto try_except_handler_34;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        {
            PyObject *tmp_assign_source_61;
            PyObject *tmp_subscribed_name_9;
            PyObject *tmp_subscript_name_9;
            CHECK_OBJECT( tmp_class_creation_10__bases );
            tmp_subscribed_name_9 = tmp_class_creation_10__bases;
            tmp_subscript_name_9 = const_int_0;
            tmp_assign_source_61 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_9, tmp_subscript_name_9, 0 );
            if ( tmp_assign_source_61 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;

                goto try_except_handler_34;
            }
            assert( tmp_select_metaclass_10__base == NULL );
            tmp_select_metaclass_10__base = tmp_assign_source_61;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_9;
            CHECK_OBJECT( tmp_select_metaclass_10__base );
            tmp_source_name_9 = tmp_select_metaclass_10__base;
            tmp_assign_source_60 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_9 );
            if ( tmp_assign_source_60 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;

                goto try_except_handler_37;
            }
            goto try_return_handler_36;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_37:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_9;
            Py_DECREF( exception_keeper_type_18 );
            Py_XDECREF( exception_keeper_value_18 );
            Py_XDECREF( exception_keeper_tb_18 );
            CHECK_OBJECT( tmp_select_metaclass_10__base );
            tmp_type_arg_9 = tmp_select_metaclass_10__base;
            tmp_assign_source_60 = BUILTIN_TYPE1( tmp_type_arg_9 );
            assert( !(tmp_assign_source_60 == NULL) );
            goto try_return_handler_36;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_36:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_10__base );
        Py_DECREF( tmp_select_metaclass_10__base );
        tmp_select_metaclass_10__base = NULL;

        goto outline_result_18;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_10__base );
        Py_DECREF( tmp_select_metaclass_10__base );
        tmp_select_metaclass_10__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_18:;
        condexpr_end_10:;
        assert( tmp_class_creation_10__metaclass == NULL );
        tmp_class_creation_10__metaclass = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_name_10;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_args_element_name_30;
        CHECK_OBJECT( tmp_class_creation_10__metaclass );
        tmp_called_name_10 = tmp_class_creation_10__metaclass;
        tmp_args_element_name_28 = const_str_plain_HostChangedError;
        CHECK_OBJECT( tmp_class_creation_10__bases );
        tmp_args_element_name_29 = tmp_class_creation_10__bases;
        CHECK_OBJECT( tmp_class_creation_10__class_dict );
        tmp_args_element_name_30 = tmp_class_creation_10__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 85;
        {
            PyObject *call_args[] = { tmp_args_element_name_28, tmp_args_element_name_29, tmp_args_element_name_30 };
            tmp_assign_source_62 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
        }

        if ( tmp_assign_source_62 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;

            goto try_except_handler_34;
        }
        assert( tmp_class_creation_10__class == NULL );
        tmp_class_creation_10__class = tmp_assign_source_62;
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_10__bases );
    tmp_class_creation_10__bases = NULL;

    Py_XDECREF( tmp_class_creation_10__class_dict );
    tmp_class_creation_10__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    {
        PyObject *tmp_assign_source_63;
        CHECK_OBJECT( tmp_class_creation_10__class );
        tmp_assign_source_63 = tmp_class_creation_10__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HostChangedError, tmp_assign_source_63 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__class );
    Py_DECREF( tmp_class_creation_10__class );
    tmp_class_creation_10__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__bases );
    Py_DECREF( tmp_class_creation_10__bases );
    tmp_class_creation_10__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__class_dict );
    Py_DECREF( tmp_class_creation_10__class_dict );
    tmp_class_creation_10__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__metaclass );
    Py_DECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_mvar_value_11;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
            exception_tb = NULL;

            exception_lineno = 94;

            goto try_except_handler_38;
        }

        tmp_tuple_element_10 = tmp_mvar_value_11;
        tmp_assign_source_64 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_10 );
        PyTuple_SET_ITEM( tmp_assign_source_64, 0, tmp_tuple_element_10 );
        assert( tmp_class_creation_11__bases == NULL );
        tmp_class_creation_11__bases = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_65;
        {
            PyObject *tmp_set_locals_10;
            tmp_set_locals_10 = PyDict_New();
            locals_urllib3$exceptions_94 = tmp_set_locals_10;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_94, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_caae7e70acce199048d0f76529b5d906;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_94, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_65 = locals_urllib3$exceptions_94;
        Py_INCREF( tmp_assign_source_65 );
        goto try_return_handler_39;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_39:;
        Py_DECREF( locals_urllib3$exceptions_94 );
        locals_urllib3$exceptions_94 = NULL;
        goto outline_result_19;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_19:;
        assert( tmp_class_creation_11__class_dict == NULL );
        tmp_class_creation_11__class_dict = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_key_name_21;
        PyObject *tmp_dict_name_21;
        PyObject *tmp_dict_name_22;
        PyObject *tmp_key_name_22;
        tmp_key_name_21 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_11__class_dict );
        tmp_dict_name_21 = tmp_class_creation_11__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_21, tmp_key_name_21 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;

            goto try_except_handler_38;
        }
        tmp_condition_result_11 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_11;
        }
        else
        {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT( tmp_class_creation_11__class_dict );
        tmp_dict_name_22 = tmp_class_creation_11__class_dict;
        tmp_key_name_22 = const_str_plain___metaclass__;
        tmp_assign_source_66 = DICT_GET_ITEM( tmp_dict_name_22, tmp_key_name_22 );
        if ( tmp_assign_source_66 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;

            goto try_except_handler_38;
        }
        goto condexpr_end_11;
        condexpr_false_11:;
        {
            PyObject *tmp_assign_source_67;
            PyObject *tmp_subscribed_name_10;
            PyObject *tmp_subscript_name_10;
            CHECK_OBJECT( tmp_class_creation_11__bases );
            tmp_subscribed_name_10 = tmp_class_creation_11__bases;
            tmp_subscript_name_10 = const_int_0;
            tmp_assign_source_67 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_10, tmp_subscript_name_10, 0 );
            if ( tmp_assign_source_67 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;

                goto try_except_handler_38;
            }
            assert( tmp_select_metaclass_11__base == NULL );
            tmp_select_metaclass_11__base = tmp_assign_source_67;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_10;
            CHECK_OBJECT( tmp_select_metaclass_11__base );
            tmp_source_name_10 = tmp_select_metaclass_11__base;
            tmp_assign_source_66 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_10 );
            if ( tmp_assign_source_66 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;

                goto try_except_handler_41;
            }
            goto try_return_handler_40;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_41:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_10;
            Py_DECREF( exception_keeper_type_20 );
            Py_XDECREF( exception_keeper_value_20 );
            Py_XDECREF( exception_keeper_tb_20 );
            CHECK_OBJECT( tmp_select_metaclass_11__base );
            tmp_type_arg_10 = tmp_select_metaclass_11__base;
            tmp_assign_source_66 = BUILTIN_TYPE1( tmp_type_arg_10 );
            assert( !(tmp_assign_source_66 == NULL) );
            goto try_return_handler_40;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_40:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_11__base );
        Py_DECREF( tmp_select_metaclass_11__base );
        tmp_select_metaclass_11__base = NULL;

        goto outline_result_20;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_11__base );
        Py_DECREF( tmp_select_metaclass_11__base );
        tmp_select_metaclass_11__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_20:;
        condexpr_end_11:;
        assert( tmp_class_creation_11__metaclass == NULL );
        tmp_class_creation_11__metaclass = tmp_assign_source_66;
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_name_11;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_args_element_name_33;
        CHECK_OBJECT( tmp_class_creation_11__metaclass );
        tmp_called_name_11 = tmp_class_creation_11__metaclass;
        tmp_args_element_name_31 = const_str_plain_TimeoutStateError;
        CHECK_OBJECT( tmp_class_creation_11__bases );
        tmp_args_element_name_32 = tmp_class_creation_11__bases;
        CHECK_OBJECT( tmp_class_creation_11__class_dict );
        tmp_args_element_name_33 = tmp_class_creation_11__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 94;
        {
            PyObject *call_args[] = { tmp_args_element_name_31, tmp_args_element_name_32, tmp_args_element_name_33 };
            tmp_assign_source_68 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_11, call_args );
        }

        if ( tmp_assign_source_68 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;

            goto try_except_handler_38;
        }
        assert( tmp_class_creation_11__class == NULL );
        tmp_class_creation_11__class = tmp_assign_source_68;
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_38:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_11__bases );
    tmp_class_creation_11__bases = NULL;

    Py_XDECREF( tmp_class_creation_11__class_dict );
    tmp_class_creation_11__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_11__metaclass );
    tmp_class_creation_11__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    {
        PyObject *tmp_assign_source_69;
        CHECK_OBJECT( tmp_class_creation_11__class );
        tmp_assign_source_69 = tmp_class_creation_11__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_TimeoutStateError, tmp_assign_source_69 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__class );
    Py_DECREF( tmp_class_creation_11__class );
    tmp_class_creation_11__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__bases );
    Py_DECREF( tmp_class_creation_11__bases );
    tmp_class_creation_11__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__class_dict );
    Py_DECREF( tmp_class_creation_11__class_dict );
    tmp_class_creation_11__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__metaclass );
    Py_DECREF( tmp_class_creation_11__metaclass );
    tmp_class_creation_11__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_mvar_value_12;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
            exception_tb = NULL;

            exception_lineno = 99;

            goto try_except_handler_42;
        }

        tmp_tuple_element_11 = tmp_mvar_value_12;
        tmp_assign_source_70 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_assign_source_70, 0, tmp_tuple_element_11 );
        assert( tmp_class_creation_12__bases == NULL );
        tmp_class_creation_12__bases = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        {
            PyObject *tmp_set_locals_11;
            tmp_set_locals_11 = PyDict_New();
            locals_urllib3$exceptions_99 = tmp_set_locals_11;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_99, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_072e7ebfa3d3db507d9717d1cc53e1e2;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_99, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_71 = locals_urllib3$exceptions_99;
        Py_INCREF( tmp_assign_source_71 );
        goto try_return_handler_43;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_43:;
        Py_DECREF( locals_urllib3$exceptions_99 );
        locals_urllib3$exceptions_99 = NULL;
        goto outline_result_21;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_21:;
        assert( tmp_class_creation_12__class_dict == NULL );
        tmp_class_creation_12__class_dict = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_key_name_23;
        PyObject *tmp_dict_name_23;
        PyObject *tmp_dict_name_24;
        PyObject *tmp_key_name_24;
        tmp_key_name_23 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_12__class_dict );
        tmp_dict_name_23 = tmp_class_creation_12__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_23, tmp_key_name_23 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;

            goto try_except_handler_42;
        }
        tmp_condition_result_12 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_12;
        }
        else
        {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT( tmp_class_creation_12__class_dict );
        tmp_dict_name_24 = tmp_class_creation_12__class_dict;
        tmp_key_name_24 = const_str_plain___metaclass__;
        tmp_assign_source_72 = DICT_GET_ITEM( tmp_dict_name_24, tmp_key_name_24 );
        if ( tmp_assign_source_72 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;

            goto try_except_handler_42;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        {
            PyObject *tmp_assign_source_73;
            PyObject *tmp_subscribed_name_11;
            PyObject *tmp_subscript_name_11;
            CHECK_OBJECT( tmp_class_creation_12__bases );
            tmp_subscribed_name_11 = tmp_class_creation_12__bases;
            tmp_subscript_name_11 = const_int_0;
            tmp_assign_source_73 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_11, tmp_subscript_name_11, 0 );
            if ( tmp_assign_source_73 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 99;

                goto try_except_handler_42;
            }
            assert( tmp_select_metaclass_12__base == NULL );
            tmp_select_metaclass_12__base = tmp_assign_source_73;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_11;
            CHECK_OBJECT( tmp_select_metaclass_12__base );
            tmp_source_name_11 = tmp_select_metaclass_12__base;
            tmp_assign_source_72 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_11 );
            if ( tmp_assign_source_72 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 99;

                goto try_except_handler_45;
            }
            goto try_return_handler_44;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_45:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_11;
            Py_DECREF( exception_keeper_type_22 );
            Py_XDECREF( exception_keeper_value_22 );
            Py_XDECREF( exception_keeper_tb_22 );
            CHECK_OBJECT( tmp_select_metaclass_12__base );
            tmp_type_arg_11 = tmp_select_metaclass_12__base;
            tmp_assign_source_72 = BUILTIN_TYPE1( tmp_type_arg_11 );
            assert( !(tmp_assign_source_72 == NULL) );
            goto try_return_handler_44;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_44:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_12__base );
        Py_DECREF( tmp_select_metaclass_12__base );
        tmp_select_metaclass_12__base = NULL;

        goto outline_result_22;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_12__base );
        Py_DECREF( tmp_select_metaclass_12__base );
        tmp_select_metaclass_12__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_22:;
        condexpr_end_12:;
        assert( tmp_class_creation_12__metaclass == NULL );
        tmp_class_creation_12__metaclass = tmp_assign_source_72;
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_name_12;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_args_element_name_36;
        CHECK_OBJECT( tmp_class_creation_12__metaclass );
        tmp_called_name_12 = tmp_class_creation_12__metaclass;
        tmp_args_element_name_34 = const_str_plain_TimeoutError;
        CHECK_OBJECT( tmp_class_creation_12__bases );
        tmp_args_element_name_35 = tmp_class_creation_12__bases;
        CHECK_OBJECT( tmp_class_creation_12__class_dict );
        tmp_args_element_name_36 = tmp_class_creation_12__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = { tmp_args_element_name_34, tmp_args_element_name_35, tmp_args_element_name_36 };
            tmp_assign_source_74 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_12, call_args );
        }

        if ( tmp_assign_source_74 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;

            goto try_except_handler_42;
        }
        assert( tmp_class_creation_12__class == NULL );
        tmp_class_creation_12__class = tmp_assign_source_74;
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_42:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_12__bases );
    tmp_class_creation_12__bases = NULL;

    Py_XDECREF( tmp_class_creation_12__class_dict );
    tmp_class_creation_12__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_12__metaclass );
    tmp_class_creation_12__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    {
        PyObject *tmp_assign_source_75;
        CHECK_OBJECT( tmp_class_creation_12__class );
        tmp_assign_source_75 = tmp_class_creation_12__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_TimeoutError, tmp_assign_source_75 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__class );
    Py_DECREF( tmp_class_creation_12__class );
    tmp_class_creation_12__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__bases );
    Py_DECREF( tmp_class_creation_12__bases );
    tmp_class_creation_12__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__class_dict );
    Py_DECREF( tmp_class_creation_12__class_dict );
    tmp_class_creation_12__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__metaclass );
    Py_DECREF( tmp_class_creation_12__metaclass );
    tmp_class_creation_12__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_mvar_value_14;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_TimeoutError );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeoutError );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "TimeoutError" );
            exception_tb = NULL;

            exception_lineno = 108;

            goto try_except_handler_46;
        }

        tmp_tuple_element_12 = tmp_mvar_value_13;
        tmp_assign_source_76 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_12 );
        PyTuple_SET_ITEM( tmp_assign_source_76, 0, tmp_tuple_element_12 );
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_RequestError );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestError );
        }

        if ( tmp_mvar_value_14 == NULL )
        {
            Py_DECREF( tmp_assign_source_76 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestError" );
            exception_tb = NULL;

            exception_lineno = 108;

            goto try_except_handler_46;
        }

        tmp_tuple_element_12 = tmp_mvar_value_14;
        Py_INCREF( tmp_tuple_element_12 );
        PyTuple_SET_ITEM( tmp_assign_source_76, 1, tmp_tuple_element_12 );
        assert( tmp_class_creation_13__bases == NULL );
        tmp_class_creation_13__bases = tmp_assign_source_76;
    }
    {
        PyObject *tmp_assign_source_77;
        {
            PyObject *tmp_set_locals_12;
            tmp_set_locals_12 = PyDict_New();
            locals_urllib3$exceptions_108 = tmp_set_locals_12;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_108, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_906ad4a0fc873be8c0c812f03902dc29;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_108, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_77 = locals_urllib3$exceptions_108;
        Py_INCREF( tmp_assign_source_77 );
        goto try_return_handler_47;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_47:;
        Py_DECREF( locals_urllib3$exceptions_108 );
        locals_urllib3$exceptions_108 = NULL;
        goto outline_result_23;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_23:;
        assert( tmp_class_creation_13__class_dict == NULL );
        tmp_class_creation_13__class_dict = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_key_name_25;
        PyObject *tmp_dict_name_25;
        PyObject *tmp_dict_name_26;
        PyObject *tmp_key_name_26;
        tmp_key_name_25 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_13__class_dict );
        tmp_dict_name_25 = tmp_class_creation_13__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_25, tmp_key_name_25 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;

            goto try_except_handler_46;
        }
        tmp_condition_result_13 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_13;
        }
        else
        {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT( tmp_class_creation_13__class_dict );
        tmp_dict_name_26 = tmp_class_creation_13__class_dict;
        tmp_key_name_26 = const_str_plain___metaclass__;
        tmp_assign_source_78 = DICT_GET_ITEM( tmp_dict_name_26, tmp_key_name_26 );
        if ( tmp_assign_source_78 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;

            goto try_except_handler_46;
        }
        goto condexpr_end_13;
        condexpr_false_13:;
        {
            PyObject *tmp_assign_source_79;
            PyObject *tmp_subscribed_name_12;
            PyObject *tmp_subscript_name_12;
            CHECK_OBJECT( tmp_class_creation_13__bases );
            tmp_subscribed_name_12 = tmp_class_creation_13__bases;
            tmp_subscript_name_12 = const_int_0;
            tmp_assign_source_79 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_12, tmp_subscript_name_12, 0 );
            if ( tmp_assign_source_79 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;

                goto try_except_handler_46;
            }
            assert( tmp_select_metaclass_13__base == NULL );
            tmp_select_metaclass_13__base = tmp_assign_source_79;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_12;
            CHECK_OBJECT( tmp_select_metaclass_13__base );
            tmp_source_name_12 = tmp_select_metaclass_13__base;
            tmp_assign_source_78 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_12 );
            if ( tmp_assign_source_78 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;

                goto try_except_handler_49;
            }
            goto try_return_handler_48;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_49:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_12;
            Py_DECREF( exception_keeper_type_24 );
            Py_XDECREF( exception_keeper_value_24 );
            Py_XDECREF( exception_keeper_tb_24 );
            CHECK_OBJECT( tmp_select_metaclass_13__base );
            tmp_type_arg_12 = tmp_select_metaclass_13__base;
            tmp_assign_source_78 = BUILTIN_TYPE1( tmp_type_arg_12 );
            assert( !(tmp_assign_source_78 == NULL) );
            goto try_return_handler_48;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_48:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_13__base );
        Py_DECREF( tmp_select_metaclass_13__base );
        tmp_select_metaclass_13__base = NULL;

        goto outline_result_24;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_13__base );
        Py_DECREF( tmp_select_metaclass_13__base );
        tmp_select_metaclass_13__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_24:;
        condexpr_end_13:;
        assert( tmp_class_creation_13__metaclass == NULL );
        tmp_class_creation_13__metaclass = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_called_name_13;
        PyObject *tmp_args_element_name_37;
        PyObject *tmp_args_element_name_38;
        PyObject *tmp_args_element_name_39;
        CHECK_OBJECT( tmp_class_creation_13__metaclass );
        tmp_called_name_13 = tmp_class_creation_13__metaclass;
        tmp_args_element_name_37 = const_str_plain_ReadTimeoutError;
        CHECK_OBJECT( tmp_class_creation_13__bases );
        tmp_args_element_name_38 = tmp_class_creation_13__bases;
        CHECK_OBJECT( tmp_class_creation_13__class_dict );
        tmp_args_element_name_39 = tmp_class_creation_13__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = { tmp_args_element_name_37, tmp_args_element_name_38, tmp_args_element_name_39 };
            tmp_assign_source_80 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_13, call_args );
        }

        if ( tmp_assign_source_80 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;

            goto try_except_handler_46;
        }
        assert( tmp_class_creation_13__class == NULL );
        tmp_class_creation_13__class = tmp_assign_source_80;
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_46:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_13__bases );
    tmp_class_creation_13__bases = NULL;

    Py_XDECREF( tmp_class_creation_13__class_dict );
    tmp_class_creation_13__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_13__metaclass );
    tmp_class_creation_13__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    {
        PyObject *tmp_assign_source_81;
        CHECK_OBJECT( tmp_class_creation_13__class );
        tmp_assign_source_81 = tmp_class_creation_13__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError, tmp_assign_source_81 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__class );
    Py_DECREF( tmp_class_creation_13__class );
    tmp_class_creation_13__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__bases );
    Py_DECREF( tmp_class_creation_13__bases );
    tmp_class_creation_13__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__class_dict );
    Py_DECREF( tmp_class_creation_13__class_dict );
    tmp_class_creation_13__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__metaclass );
    Py_DECREF( tmp_class_creation_13__metaclass );
    tmp_class_creation_13__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_mvar_value_15;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_TimeoutError );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeoutError );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "TimeoutError" );
            exception_tb = NULL;

            exception_lineno = 115;

            goto try_except_handler_50;
        }

        tmp_tuple_element_13 = tmp_mvar_value_15;
        tmp_assign_source_82 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_13 );
        PyTuple_SET_ITEM( tmp_assign_source_82, 0, tmp_tuple_element_13 );
        assert( tmp_class_creation_14__bases == NULL );
        tmp_class_creation_14__bases = tmp_assign_source_82;
    }
    {
        PyObject *tmp_assign_source_83;
        {
            PyObject *tmp_set_locals_13;
            tmp_set_locals_13 = PyDict_New();
            locals_urllib3$exceptions_115 = tmp_set_locals_13;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_115, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_d23d849ab02a6235eb0652ac312b2323;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_115, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_83 = locals_urllib3$exceptions_115;
        Py_INCREF( tmp_assign_source_83 );
        goto try_return_handler_51;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_51:;
        Py_DECREF( locals_urllib3$exceptions_115 );
        locals_urllib3$exceptions_115 = NULL;
        goto outline_result_25;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_25:;
        assert( tmp_class_creation_14__class_dict == NULL );
        tmp_class_creation_14__class_dict = tmp_assign_source_83;
    }
    {
        PyObject *tmp_assign_source_84;
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_key_name_27;
        PyObject *tmp_dict_name_27;
        PyObject *tmp_dict_name_28;
        PyObject *tmp_key_name_28;
        tmp_key_name_27 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_14__class_dict );
        tmp_dict_name_27 = tmp_class_creation_14__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_27, tmp_key_name_27 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;

            goto try_except_handler_50;
        }
        tmp_condition_result_14 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_14;
        }
        else
        {
            goto condexpr_false_14;
        }
        condexpr_true_14:;
        CHECK_OBJECT( tmp_class_creation_14__class_dict );
        tmp_dict_name_28 = tmp_class_creation_14__class_dict;
        tmp_key_name_28 = const_str_plain___metaclass__;
        tmp_assign_source_84 = DICT_GET_ITEM( tmp_dict_name_28, tmp_key_name_28 );
        if ( tmp_assign_source_84 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;

            goto try_except_handler_50;
        }
        goto condexpr_end_14;
        condexpr_false_14:;
        {
            PyObject *tmp_assign_source_85;
            PyObject *tmp_subscribed_name_13;
            PyObject *tmp_subscript_name_13;
            CHECK_OBJECT( tmp_class_creation_14__bases );
            tmp_subscribed_name_13 = tmp_class_creation_14__bases;
            tmp_subscript_name_13 = const_int_0;
            tmp_assign_source_85 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_13, tmp_subscript_name_13, 0 );
            if ( tmp_assign_source_85 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 115;

                goto try_except_handler_50;
            }
            assert( tmp_select_metaclass_14__base == NULL );
            tmp_select_metaclass_14__base = tmp_assign_source_85;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_13;
            CHECK_OBJECT( tmp_select_metaclass_14__base );
            tmp_source_name_13 = tmp_select_metaclass_14__base;
            tmp_assign_source_84 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_13 );
            if ( tmp_assign_source_84 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 115;

                goto try_except_handler_53;
            }
            goto try_return_handler_52;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_53:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_13;
            Py_DECREF( exception_keeper_type_26 );
            Py_XDECREF( exception_keeper_value_26 );
            Py_XDECREF( exception_keeper_tb_26 );
            CHECK_OBJECT( tmp_select_metaclass_14__base );
            tmp_type_arg_13 = tmp_select_metaclass_14__base;
            tmp_assign_source_84 = BUILTIN_TYPE1( tmp_type_arg_13 );
            assert( !(tmp_assign_source_84 == NULL) );
            goto try_return_handler_52;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_52:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_14__base );
        Py_DECREF( tmp_select_metaclass_14__base );
        tmp_select_metaclass_14__base = NULL;

        goto outline_result_26;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_14__base );
        Py_DECREF( tmp_select_metaclass_14__base );
        tmp_select_metaclass_14__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_26:;
        condexpr_end_14:;
        assert( tmp_class_creation_14__metaclass == NULL );
        tmp_class_creation_14__metaclass = tmp_assign_source_84;
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_called_name_14;
        PyObject *tmp_args_element_name_40;
        PyObject *tmp_args_element_name_41;
        PyObject *tmp_args_element_name_42;
        CHECK_OBJECT( tmp_class_creation_14__metaclass );
        tmp_called_name_14 = tmp_class_creation_14__metaclass;
        tmp_args_element_name_40 = const_str_plain_ConnectTimeoutError;
        CHECK_OBJECT( tmp_class_creation_14__bases );
        tmp_args_element_name_41 = tmp_class_creation_14__bases;
        CHECK_OBJECT( tmp_class_creation_14__class_dict );
        tmp_args_element_name_42 = tmp_class_creation_14__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = { tmp_args_element_name_40, tmp_args_element_name_41, tmp_args_element_name_42 };
            tmp_assign_source_86 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_14, call_args );
        }

        if ( tmp_assign_source_86 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;

            goto try_except_handler_50;
        }
        assert( tmp_class_creation_14__class == NULL );
        tmp_class_creation_14__class = tmp_assign_source_86;
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_50:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_14__bases );
    tmp_class_creation_14__bases = NULL;

    Py_XDECREF( tmp_class_creation_14__class_dict );
    tmp_class_creation_14__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_14__metaclass );
    tmp_class_creation_14__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    {
        PyObject *tmp_assign_source_87;
        CHECK_OBJECT( tmp_class_creation_14__class );
        tmp_assign_source_87 = tmp_class_creation_14__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError, tmp_assign_source_87 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__class );
    Py_DECREF( tmp_class_creation_14__class );
    tmp_class_creation_14__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__bases );
    Py_DECREF( tmp_class_creation_14__bases );
    tmp_class_creation_14__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__class_dict );
    Py_DECREF( tmp_class_creation_14__class_dict );
    tmp_class_creation_14__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__metaclass );
    Py_DECREF( tmp_class_creation_14__metaclass );
    tmp_class_creation_14__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_mvar_value_17;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ConnectTimeoutError" );
            exception_tb = NULL;

            exception_lineno = 120;

            goto try_except_handler_54;
        }

        tmp_tuple_element_14 = tmp_mvar_value_16;
        tmp_assign_source_88 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_14 );
        PyTuple_SET_ITEM( tmp_assign_source_88, 0, tmp_tuple_element_14 );
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_PoolError );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolError );
        }

        if ( tmp_mvar_value_17 == NULL )
        {
            Py_DECREF( tmp_assign_source_88 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "PoolError" );
            exception_tb = NULL;

            exception_lineno = 120;

            goto try_except_handler_54;
        }

        tmp_tuple_element_14 = tmp_mvar_value_17;
        Py_INCREF( tmp_tuple_element_14 );
        PyTuple_SET_ITEM( tmp_assign_source_88, 1, tmp_tuple_element_14 );
        assert( tmp_class_creation_15__bases == NULL );
        tmp_class_creation_15__bases = tmp_assign_source_88;
    }
    {
        PyObject *tmp_assign_source_89;
        {
            PyObject *tmp_set_locals_14;
            tmp_set_locals_14 = PyDict_New();
            locals_urllib3$exceptions_120 = tmp_set_locals_14;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_120, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_5cd5167a778e9ea5a19e045e34276deb;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_120, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_89 = locals_urllib3$exceptions_120;
        Py_INCREF( tmp_assign_source_89 );
        goto try_return_handler_55;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_55:;
        Py_DECREF( locals_urllib3$exceptions_120 );
        locals_urllib3$exceptions_120 = NULL;
        goto outline_result_27;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_27:;
        assert( tmp_class_creation_15__class_dict == NULL );
        tmp_class_creation_15__class_dict = tmp_assign_source_89;
    }
    {
        PyObject *tmp_assign_source_90;
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_key_name_29;
        PyObject *tmp_dict_name_29;
        PyObject *tmp_dict_name_30;
        PyObject *tmp_key_name_30;
        tmp_key_name_29 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_15__class_dict );
        tmp_dict_name_29 = tmp_class_creation_15__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_29, tmp_key_name_29 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;

            goto try_except_handler_54;
        }
        tmp_condition_result_15 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_15;
        }
        else
        {
            goto condexpr_false_15;
        }
        condexpr_true_15:;
        CHECK_OBJECT( tmp_class_creation_15__class_dict );
        tmp_dict_name_30 = tmp_class_creation_15__class_dict;
        tmp_key_name_30 = const_str_plain___metaclass__;
        tmp_assign_source_90 = DICT_GET_ITEM( tmp_dict_name_30, tmp_key_name_30 );
        if ( tmp_assign_source_90 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;

            goto try_except_handler_54;
        }
        goto condexpr_end_15;
        condexpr_false_15:;
        {
            PyObject *tmp_assign_source_91;
            PyObject *tmp_subscribed_name_14;
            PyObject *tmp_subscript_name_14;
            CHECK_OBJECT( tmp_class_creation_15__bases );
            tmp_subscribed_name_14 = tmp_class_creation_15__bases;
            tmp_subscript_name_14 = const_int_0;
            tmp_assign_source_91 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_14, tmp_subscript_name_14, 0 );
            if ( tmp_assign_source_91 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;

                goto try_except_handler_54;
            }
            assert( tmp_select_metaclass_15__base == NULL );
            tmp_select_metaclass_15__base = tmp_assign_source_91;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_14;
            CHECK_OBJECT( tmp_select_metaclass_15__base );
            tmp_source_name_14 = tmp_select_metaclass_15__base;
            tmp_assign_source_90 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_14 );
            if ( tmp_assign_source_90 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;

                goto try_except_handler_57;
            }
            goto try_return_handler_56;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_57:;
        exception_keeper_type_28 = exception_type;
        exception_keeper_value_28 = exception_value;
        exception_keeper_tb_28 = exception_tb;
        exception_keeper_lineno_28 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_14;
            Py_DECREF( exception_keeper_type_28 );
            Py_XDECREF( exception_keeper_value_28 );
            Py_XDECREF( exception_keeper_tb_28 );
            CHECK_OBJECT( tmp_select_metaclass_15__base );
            tmp_type_arg_14 = tmp_select_metaclass_15__base;
            tmp_assign_source_90 = BUILTIN_TYPE1( tmp_type_arg_14 );
            assert( !(tmp_assign_source_90 == NULL) );
            goto try_return_handler_56;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_56:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_15__base );
        Py_DECREF( tmp_select_metaclass_15__base );
        tmp_select_metaclass_15__base = NULL;

        goto outline_result_28;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_15__base );
        Py_DECREF( tmp_select_metaclass_15__base );
        tmp_select_metaclass_15__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_28:;
        condexpr_end_15:;
        assert( tmp_class_creation_15__metaclass == NULL );
        tmp_class_creation_15__metaclass = tmp_assign_source_90;
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_called_name_15;
        PyObject *tmp_args_element_name_43;
        PyObject *tmp_args_element_name_44;
        PyObject *tmp_args_element_name_45;
        CHECK_OBJECT( tmp_class_creation_15__metaclass );
        tmp_called_name_15 = tmp_class_creation_15__metaclass;
        tmp_args_element_name_43 = const_str_plain_NewConnectionError;
        CHECK_OBJECT( tmp_class_creation_15__bases );
        tmp_args_element_name_44 = tmp_class_creation_15__bases;
        CHECK_OBJECT( tmp_class_creation_15__class_dict );
        tmp_args_element_name_45 = tmp_class_creation_15__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 120;
        {
            PyObject *call_args[] = { tmp_args_element_name_43, tmp_args_element_name_44, tmp_args_element_name_45 };
            tmp_assign_source_92 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_15, call_args );
        }

        if ( tmp_assign_source_92 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;

            goto try_except_handler_54;
        }
        assert( tmp_class_creation_15__class == NULL );
        tmp_class_creation_15__class = tmp_assign_source_92;
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_54:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_15__bases );
    tmp_class_creation_15__bases = NULL;

    Py_XDECREF( tmp_class_creation_15__class_dict );
    tmp_class_creation_15__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_15__metaclass );
    tmp_class_creation_15__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    {
        PyObject *tmp_assign_source_93;
        CHECK_OBJECT( tmp_class_creation_15__class );
        tmp_assign_source_93 = tmp_class_creation_15__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_NewConnectionError, tmp_assign_source_93 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__class );
    Py_DECREF( tmp_class_creation_15__class );
    tmp_class_creation_15__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__bases );
    Py_DECREF( tmp_class_creation_15__bases );
    tmp_class_creation_15__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__class_dict );
    Py_DECREF( tmp_class_creation_15__class_dict );
    tmp_class_creation_15__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__metaclass );
    Py_DECREF( tmp_class_creation_15__metaclass );
    tmp_class_creation_15__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_mvar_value_18;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_PoolError );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolError );
        }

        if ( tmp_mvar_value_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "PoolError" );
            exception_tb = NULL;

            exception_lineno = 125;

            goto try_except_handler_58;
        }

        tmp_tuple_element_15 = tmp_mvar_value_18;
        tmp_assign_source_94 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_15 );
        PyTuple_SET_ITEM( tmp_assign_source_94, 0, tmp_tuple_element_15 );
        assert( tmp_class_creation_16__bases == NULL );
        tmp_class_creation_16__bases = tmp_assign_source_94;
    }
    {
        PyObject *tmp_assign_source_95;
        {
            PyObject *tmp_set_locals_15;
            tmp_set_locals_15 = PyDict_New();
            locals_urllib3$exceptions_125 = tmp_set_locals_15;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_125, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_1b17e5345caa893d267645d5296f52b9;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_125, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_95 = locals_urllib3$exceptions_125;
        Py_INCREF( tmp_assign_source_95 );
        goto try_return_handler_59;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_59:;
        Py_DECREF( locals_urllib3$exceptions_125 );
        locals_urllib3$exceptions_125 = NULL;
        goto outline_result_29;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_29:;
        assert( tmp_class_creation_16__class_dict == NULL );
        tmp_class_creation_16__class_dict = tmp_assign_source_95;
    }
    {
        PyObject *tmp_assign_source_96;
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_key_name_31;
        PyObject *tmp_dict_name_31;
        PyObject *tmp_dict_name_32;
        PyObject *tmp_key_name_32;
        tmp_key_name_31 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_16__class_dict );
        tmp_dict_name_31 = tmp_class_creation_16__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_31, tmp_key_name_31 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;

            goto try_except_handler_58;
        }
        tmp_condition_result_16 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_16;
        }
        else
        {
            goto condexpr_false_16;
        }
        condexpr_true_16:;
        CHECK_OBJECT( tmp_class_creation_16__class_dict );
        tmp_dict_name_32 = tmp_class_creation_16__class_dict;
        tmp_key_name_32 = const_str_plain___metaclass__;
        tmp_assign_source_96 = DICT_GET_ITEM( tmp_dict_name_32, tmp_key_name_32 );
        if ( tmp_assign_source_96 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;

            goto try_except_handler_58;
        }
        goto condexpr_end_16;
        condexpr_false_16:;
        {
            PyObject *tmp_assign_source_97;
            PyObject *tmp_subscribed_name_15;
            PyObject *tmp_subscript_name_15;
            CHECK_OBJECT( tmp_class_creation_16__bases );
            tmp_subscribed_name_15 = tmp_class_creation_16__bases;
            tmp_subscript_name_15 = const_int_0;
            tmp_assign_source_97 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_15, tmp_subscript_name_15, 0 );
            if ( tmp_assign_source_97 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 125;

                goto try_except_handler_58;
            }
            assert( tmp_select_metaclass_16__base == NULL );
            tmp_select_metaclass_16__base = tmp_assign_source_97;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_15;
            CHECK_OBJECT( tmp_select_metaclass_16__base );
            tmp_source_name_15 = tmp_select_metaclass_16__base;
            tmp_assign_source_96 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_15 );
            if ( tmp_assign_source_96 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 125;

                goto try_except_handler_61;
            }
            goto try_return_handler_60;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_61:;
        exception_keeper_type_30 = exception_type;
        exception_keeper_value_30 = exception_value;
        exception_keeper_tb_30 = exception_tb;
        exception_keeper_lineno_30 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_15;
            Py_DECREF( exception_keeper_type_30 );
            Py_XDECREF( exception_keeper_value_30 );
            Py_XDECREF( exception_keeper_tb_30 );
            CHECK_OBJECT( tmp_select_metaclass_16__base );
            tmp_type_arg_15 = tmp_select_metaclass_16__base;
            tmp_assign_source_96 = BUILTIN_TYPE1( tmp_type_arg_15 );
            assert( !(tmp_assign_source_96 == NULL) );
            goto try_return_handler_60;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_60:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_16__base );
        Py_DECREF( tmp_select_metaclass_16__base );
        tmp_select_metaclass_16__base = NULL;

        goto outline_result_30;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_16__base );
        Py_DECREF( tmp_select_metaclass_16__base );
        tmp_select_metaclass_16__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_30:;
        condexpr_end_16:;
        assert( tmp_class_creation_16__metaclass == NULL );
        tmp_class_creation_16__metaclass = tmp_assign_source_96;
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_called_name_16;
        PyObject *tmp_args_element_name_46;
        PyObject *tmp_args_element_name_47;
        PyObject *tmp_args_element_name_48;
        CHECK_OBJECT( tmp_class_creation_16__metaclass );
        tmp_called_name_16 = tmp_class_creation_16__metaclass;
        tmp_args_element_name_46 = const_str_plain_EmptyPoolError;
        CHECK_OBJECT( tmp_class_creation_16__bases );
        tmp_args_element_name_47 = tmp_class_creation_16__bases;
        CHECK_OBJECT( tmp_class_creation_16__class_dict );
        tmp_args_element_name_48 = tmp_class_creation_16__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 125;
        {
            PyObject *call_args[] = { tmp_args_element_name_46, tmp_args_element_name_47, tmp_args_element_name_48 };
            tmp_assign_source_98 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_16, call_args );
        }

        if ( tmp_assign_source_98 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;

            goto try_except_handler_58;
        }
        assert( tmp_class_creation_16__class == NULL );
        tmp_class_creation_16__class = tmp_assign_source_98;
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_58:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_16__bases );
    tmp_class_creation_16__bases = NULL;

    Py_XDECREF( tmp_class_creation_16__class_dict );
    tmp_class_creation_16__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_16__metaclass );
    tmp_class_creation_16__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    {
        PyObject *tmp_assign_source_99;
        CHECK_OBJECT( tmp_class_creation_16__class );
        tmp_assign_source_99 = tmp_class_creation_16__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_EmptyPoolError, tmp_assign_source_99 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__class );
    Py_DECREF( tmp_class_creation_16__class );
    tmp_class_creation_16__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__bases );
    Py_DECREF( tmp_class_creation_16__bases );
    tmp_class_creation_16__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__class_dict );
    Py_DECREF( tmp_class_creation_16__class_dict );
    tmp_class_creation_16__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__metaclass );
    Py_DECREF( tmp_class_creation_16__metaclass );
    tmp_class_creation_16__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_mvar_value_19;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_PoolError );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolError );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "PoolError" );
            exception_tb = NULL;

            exception_lineno = 130;

            goto try_except_handler_62;
        }

        tmp_tuple_element_16 = tmp_mvar_value_19;
        tmp_assign_source_100 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_16 );
        PyTuple_SET_ITEM( tmp_assign_source_100, 0, tmp_tuple_element_16 );
        assert( tmp_class_creation_17__bases == NULL );
        tmp_class_creation_17__bases = tmp_assign_source_100;
    }
    {
        PyObject *tmp_assign_source_101;
        {
            PyObject *tmp_set_locals_16;
            tmp_set_locals_16 = PyDict_New();
            locals_urllib3$exceptions_130 = tmp_set_locals_16;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_130, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_5ac3ff452137ae9d952f65688385427b;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_130, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_101 = locals_urllib3$exceptions_130;
        Py_INCREF( tmp_assign_source_101 );
        goto try_return_handler_63;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_63:;
        Py_DECREF( locals_urllib3$exceptions_130 );
        locals_urllib3$exceptions_130 = NULL;
        goto outline_result_31;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_31:;
        assert( tmp_class_creation_17__class_dict == NULL );
        tmp_class_creation_17__class_dict = tmp_assign_source_101;
    }
    {
        PyObject *tmp_assign_source_102;
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_key_name_33;
        PyObject *tmp_dict_name_33;
        PyObject *tmp_dict_name_34;
        PyObject *tmp_key_name_34;
        tmp_key_name_33 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_17__class_dict );
        tmp_dict_name_33 = tmp_class_creation_17__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_33, tmp_key_name_33 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;

            goto try_except_handler_62;
        }
        tmp_condition_result_17 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_17;
        }
        else
        {
            goto condexpr_false_17;
        }
        condexpr_true_17:;
        CHECK_OBJECT( tmp_class_creation_17__class_dict );
        tmp_dict_name_34 = tmp_class_creation_17__class_dict;
        tmp_key_name_34 = const_str_plain___metaclass__;
        tmp_assign_source_102 = DICT_GET_ITEM( tmp_dict_name_34, tmp_key_name_34 );
        if ( tmp_assign_source_102 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;

            goto try_except_handler_62;
        }
        goto condexpr_end_17;
        condexpr_false_17:;
        {
            PyObject *tmp_assign_source_103;
            PyObject *tmp_subscribed_name_16;
            PyObject *tmp_subscript_name_16;
            CHECK_OBJECT( tmp_class_creation_17__bases );
            tmp_subscribed_name_16 = tmp_class_creation_17__bases;
            tmp_subscript_name_16 = const_int_0;
            tmp_assign_source_103 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_16, tmp_subscript_name_16, 0 );
            if ( tmp_assign_source_103 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 130;

                goto try_except_handler_62;
            }
            assert( tmp_select_metaclass_17__base == NULL );
            tmp_select_metaclass_17__base = tmp_assign_source_103;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_16;
            CHECK_OBJECT( tmp_select_metaclass_17__base );
            tmp_source_name_16 = tmp_select_metaclass_17__base;
            tmp_assign_source_102 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_16 );
            if ( tmp_assign_source_102 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 130;

                goto try_except_handler_65;
            }
            goto try_return_handler_64;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_65:;
        exception_keeper_type_32 = exception_type;
        exception_keeper_value_32 = exception_value;
        exception_keeper_tb_32 = exception_tb;
        exception_keeper_lineno_32 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_16;
            Py_DECREF( exception_keeper_type_32 );
            Py_XDECREF( exception_keeper_value_32 );
            Py_XDECREF( exception_keeper_tb_32 );
            CHECK_OBJECT( tmp_select_metaclass_17__base );
            tmp_type_arg_16 = tmp_select_metaclass_17__base;
            tmp_assign_source_102 = BUILTIN_TYPE1( tmp_type_arg_16 );
            assert( !(tmp_assign_source_102 == NULL) );
            goto try_return_handler_64;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_64:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_17__base );
        Py_DECREF( tmp_select_metaclass_17__base );
        tmp_select_metaclass_17__base = NULL;

        goto outline_result_32;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_17__base );
        Py_DECREF( tmp_select_metaclass_17__base );
        tmp_select_metaclass_17__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_32:;
        condexpr_end_17:;
        assert( tmp_class_creation_17__metaclass == NULL );
        tmp_class_creation_17__metaclass = tmp_assign_source_102;
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_called_name_17;
        PyObject *tmp_args_element_name_49;
        PyObject *tmp_args_element_name_50;
        PyObject *tmp_args_element_name_51;
        CHECK_OBJECT( tmp_class_creation_17__metaclass );
        tmp_called_name_17 = tmp_class_creation_17__metaclass;
        tmp_args_element_name_49 = const_str_plain_ClosedPoolError;
        CHECK_OBJECT( tmp_class_creation_17__bases );
        tmp_args_element_name_50 = tmp_class_creation_17__bases;
        CHECK_OBJECT( tmp_class_creation_17__class_dict );
        tmp_args_element_name_51 = tmp_class_creation_17__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = { tmp_args_element_name_49, tmp_args_element_name_50, tmp_args_element_name_51 };
            tmp_assign_source_104 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_17, call_args );
        }

        if ( tmp_assign_source_104 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;

            goto try_except_handler_62;
        }
        assert( tmp_class_creation_17__class == NULL );
        tmp_class_creation_17__class = tmp_assign_source_104;
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_62:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_17__bases );
    tmp_class_creation_17__bases = NULL;

    Py_XDECREF( tmp_class_creation_17__class_dict );
    tmp_class_creation_17__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_17__metaclass );
    tmp_class_creation_17__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    {
        PyObject *tmp_assign_source_105;
        CHECK_OBJECT( tmp_class_creation_17__class );
        tmp_assign_source_105 = tmp_class_creation_17__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ClosedPoolError, tmp_assign_source_105 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__class );
    Py_DECREF( tmp_class_creation_17__class );
    tmp_class_creation_17__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__bases );
    Py_DECREF( tmp_class_creation_17__bases );
    tmp_class_creation_17__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__class_dict );
    Py_DECREF( tmp_class_creation_17__class_dict );
    tmp_class_creation_17__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__metaclass );
    Py_DECREF( tmp_class_creation_17__metaclass );
    tmp_class_creation_17__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_mvar_value_20;
        tmp_tuple_element_17 = PyExc_ValueError;
        tmp_assign_source_106 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_17 );
        PyTuple_SET_ITEM( tmp_assign_source_106, 0, tmp_tuple_element_17 );
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
        }

        if ( tmp_mvar_value_20 == NULL )
        {
            Py_DECREF( tmp_assign_source_106 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
            exception_tb = NULL;

            exception_lineno = 135;

            goto try_except_handler_66;
        }

        tmp_tuple_element_17 = tmp_mvar_value_20;
        Py_INCREF( tmp_tuple_element_17 );
        PyTuple_SET_ITEM( tmp_assign_source_106, 1, tmp_tuple_element_17 );
        assert( tmp_class_creation_18__bases == NULL );
        tmp_class_creation_18__bases = tmp_assign_source_106;
    }
    {
        PyObject *tmp_assign_source_107;
        {
            PyObject *tmp_set_locals_17;
            tmp_set_locals_17 = PyDict_New();
            locals_urllib3$exceptions_135 = tmp_set_locals_17;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_135, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_4bca1ec40d7badeae2d91e5b0042a9a9;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_135, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_107 = locals_urllib3$exceptions_135;
        Py_INCREF( tmp_assign_source_107 );
        goto try_return_handler_67;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_67:;
        Py_DECREF( locals_urllib3$exceptions_135 );
        locals_urllib3$exceptions_135 = NULL;
        goto outline_result_33;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_33:;
        assert( tmp_class_creation_18__class_dict == NULL );
        tmp_class_creation_18__class_dict = tmp_assign_source_107;
    }
    {
        PyObject *tmp_assign_source_108;
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_key_name_35;
        PyObject *tmp_dict_name_35;
        PyObject *tmp_dict_name_36;
        PyObject *tmp_key_name_36;
        tmp_key_name_35 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_18__class_dict );
        tmp_dict_name_35 = tmp_class_creation_18__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_35, tmp_key_name_35 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;

            goto try_except_handler_66;
        }
        tmp_condition_result_18 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_18;
        }
        else
        {
            goto condexpr_false_18;
        }
        condexpr_true_18:;
        CHECK_OBJECT( tmp_class_creation_18__class_dict );
        tmp_dict_name_36 = tmp_class_creation_18__class_dict;
        tmp_key_name_36 = const_str_plain___metaclass__;
        tmp_assign_source_108 = DICT_GET_ITEM( tmp_dict_name_36, tmp_key_name_36 );
        if ( tmp_assign_source_108 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;

            goto try_except_handler_66;
        }
        goto condexpr_end_18;
        condexpr_false_18:;
        {
            PyObject *tmp_assign_source_109;
            PyObject *tmp_subscribed_name_17;
            PyObject *tmp_subscript_name_17;
            CHECK_OBJECT( tmp_class_creation_18__bases );
            tmp_subscribed_name_17 = tmp_class_creation_18__bases;
            tmp_subscript_name_17 = const_int_0;
            tmp_assign_source_109 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_17, tmp_subscript_name_17, 0 );
            if ( tmp_assign_source_109 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 135;

                goto try_except_handler_66;
            }
            assert( tmp_select_metaclass_18__base == NULL );
            tmp_select_metaclass_18__base = tmp_assign_source_109;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_17;
            CHECK_OBJECT( tmp_select_metaclass_18__base );
            tmp_source_name_17 = tmp_select_metaclass_18__base;
            tmp_assign_source_108 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_17 );
            if ( tmp_assign_source_108 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 135;

                goto try_except_handler_69;
            }
            goto try_return_handler_68;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_69:;
        exception_keeper_type_34 = exception_type;
        exception_keeper_value_34 = exception_value;
        exception_keeper_tb_34 = exception_tb;
        exception_keeper_lineno_34 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_17;
            Py_DECREF( exception_keeper_type_34 );
            Py_XDECREF( exception_keeper_value_34 );
            Py_XDECREF( exception_keeper_tb_34 );
            CHECK_OBJECT( tmp_select_metaclass_18__base );
            tmp_type_arg_17 = tmp_select_metaclass_18__base;
            tmp_assign_source_108 = BUILTIN_TYPE1( tmp_type_arg_17 );
            assert( !(tmp_assign_source_108 == NULL) );
            goto try_return_handler_68;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_68:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_18__base );
        Py_DECREF( tmp_select_metaclass_18__base );
        tmp_select_metaclass_18__base = NULL;

        goto outline_result_34;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_18__base );
        Py_DECREF( tmp_select_metaclass_18__base );
        tmp_select_metaclass_18__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_34:;
        condexpr_end_18:;
        assert( tmp_class_creation_18__metaclass == NULL );
        tmp_class_creation_18__metaclass = tmp_assign_source_108;
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_called_name_18;
        PyObject *tmp_args_element_name_52;
        PyObject *tmp_args_element_name_53;
        PyObject *tmp_args_element_name_54;
        CHECK_OBJECT( tmp_class_creation_18__metaclass );
        tmp_called_name_18 = tmp_class_creation_18__metaclass;
        tmp_args_element_name_52 = const_str_plain_LocationValueError;
        CHECK_OBJECT( tmp_class_creation_18__bases );
        tmp_args_element_name_53 = tmp_class_creation_18__bases;
        CHECK_OBJECT( tmp_class_creation_18__class_dict );
        tmp_args_element_name_54 = tmp_class_creation_18__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 135;
        {
            PyObject *call_args[] = { tmp_args_element_name_52, tmp_args_element_name_53, tmp_args_element_name_54 };
            tmp_assign_source_110 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_18, call_args );
        }

        if ( tmp_assign_source_110 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;

            goto try_except_handler_66;
        }
        assert( tmp_class_creation_18__class == NULL );
        tmp_class_creation_18__class = tmp_assign_source_110;
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_66:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_18__bases );
    tmp_class_creation_18__bases = NULL;

    Py_XDECREF( tmp_class_creation_18__class_dict );
    tmp_class_creation_18__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_18__metaclass );
    tmp_class_creation_18__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    {
        PyObject *tmp_assign_source_111;
        CHECK_OBJECT( tmp_class_creation_18__class );
        tmp_assign_source_111 = tmp_class_creation_18__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_LocationValueError, tmp_assign_source_111 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__class );
    Py_DECREF( tmp_class_creation_18__class );
    tmp_class_creation_18__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__bases );
    Py_DECREF( tmp_class_creation_18__bases );
    tmp_class_creation_18__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__class_dict );
    Py_DECREF( tmp_class_creation_18__class_dict );
    tmp_class_creation_18__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__metaclass );
    Py_DECREF( tmp_class_creation_18__metaclass );
    tmp_class_creation_18__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_mvar_value_21;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_LocationValueError );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LocationValueError );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "LocationValueError" );
            exception_tb = NULL;

            exception_lineno = 140;

            goto try_except_handler_70;
        }

        tmp_tuple_element_18 = tmp_mvar_value_21;
        tmp_assign_source_112 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_18 );
        PyTuple_SET_ITEM( tmp_assign_source_112, 0, tmp_tuple_element_18 );
        assert( tmp_class_creation_19__bases == NULL );
        tmp_class_creation_19__bases = tmp_assign_source_112;
    }
    {
        PyObject *tmp_assign_source_113;
        {
            PyObject *tmp_set_locals_18;
            tmp_set_locals_18 = PyDict_New();
            locals_urllib3$exceptions_140 = tmp_set_locals_18;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_140, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_4335cb1660cb67dcbaf1b1ae306aaca9;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_140, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_7___init__(  );



        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_140, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_113 = locals_urllib3$exceptions_140;
        Py_INCREF( tmp_assign_source_113 );
        goto try_return_handler_71;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_71:;
        Py_DECREF( locals_urllib3$exceptions_140 );
        locals_urllib3$exceptions_140 = NULL;
        goto outline_result_35;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_35:;
        assert( tmp_class_creation_19__class_dict == NULL );
        tmp_class_creation_19__class_dict = tmp_assign_source_113;
    }
    {
        PyObject *tmp_assign_source_114;
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_key_name_37;
        PyObject *tmp_dict_name_37;
        PyObject *tmp_dict_name_38;
        PyObject *tmp_key_name_38;
        tmp_key_name_37 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_19__class_dict );
        tmp_dict_name_37 = tmp_class_creation_19__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_37, tmp_key_name_37 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;

            goto try_except_handler_70;
        }
        tmp_condition_result_19 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_19 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_19;
        }
        else
        {
            goto condexpr_false_19;
        }
        condexpr_true_19:;
        CHECK_OBJECT( tmp_class_creation_19__class_dict );
        tmp_dict_name_38 = tmp_class_creation_19__class_dict;
        tmp_key_name_38 = const_str_plain___metaclass__;
        tmp_assign_source_114 = DICT_GET_ITEM( tmp_dict_name_38, tmp_key_name_38 );
        if ( tmp_assign_source_114 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;

            goto try_except_handler_70;
        }
        goto condexpr_end_19;
        condexpr_false_19:;
        {
            PyObject *tmp_assign_source_115;
            PyObject *tmp_subscribed_name_18;
            PyObject *tmp_subscript_name_18;
            CHECK_OBJECT( tmp_class_creation_19__bases );
            tmp_subscribed_name_18 = tmp_class_creation_19__bases;
            tmp_subscript_name_18 = const_int_0;
            tmp_assign_source_115 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_18, tmp_subscript_name_18, 0 );
            if ( tmp_assign_source_115 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 140;

                goto try_except_handler_70;
            }
            assert( tmp_select_metaclass_19__base == NULL );
            tmp_select_metaclass_19__base = tmp_assign_source_115;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_18;
            CHECK_OBJECT( tmp_select_metaclass_19__base );
            tmp_source_name_18 = tmp_select_metaclass_19__base;
            tmp_assign_source_114 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_18 );
            if ( tmp_assign_source_114 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 140;

                goto try_except_handler_73;
            }
            goto try_return_handler_72;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_73:;
        exception_keeper_type_36 = exception_type;
        exception_keeper_value_36 = exception_value;
        exception_keeper_tb_36 = exception_tb;
        exception_keeper_lineno_36 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_18;
            Py_DECREF( exception_keeper_type_36 );
            Py_XDECREF( exception_keeper_value_36 );
            Py_XDECREF( exception_keeper_tb_36 );
            CHECK_OBJECT( tmp_select_metaclass_19__base );
            tmp_type_arg_18 = tmp_select_metaclass_19__base;
            tmp_assign_source_114 = BUILTIN_TYPE1( tmp_type_arg_18 );
            assert( !(tmp_assign_source_114 == NULL) );
            goto try_return_handler_72;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_72:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_19__base );
        Py_DECREF( tmp_select_metaclass_19__base );
        tmp_select_metaclass_19__base = NULL;

        goto outline_result_36;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_19__base );
        Py_DECREF( tmp_select_metaclass_19__base );
        tmp_select_metaclass_19__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_36:;
        condexpr_end_19:;
        assert( tmp_class_creation_19__metaclass == NULL );
        tmp_class_creation_19__metaclass = tmp_assign_source_114;
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_called_name_19;
        PyObject *tmp_args_element_name_55;
        PyObject *tmp_args_element_name_56;
        PyObject *tmp_args_element_name_57;
        CHECK_OBJECT( tmp_class_creation_19__metaclass );
        tmp_called_name_19 = tmp_class_creation_19__metaclass;
        tmp_args_element_name_55 = const_str_plain_LocationParseError;
        CHECK_OBJECT( tmp_class_creation_19__bases );
        tmp_args_element_name_56 = tmp_class_creation_19__bases;
        CHECK_OBJECT( tmp_class_creation_19__class_dict );
        tmp_args_element_name_57 = tmp_class_creation_19__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 140;
        {
            PyObject *call_args[] = { tmp_args_element_name_55, tmp_args_element_name_56, tmp_args_element_name_57 };
            tmp_assign_source_116 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_19, call_args );
        }

        if ( tmp_assign_source_116 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;

            goto try_except_handler_70;
        }
        assert( tmp_class_creation_19__class == NULL );
        tmp_class_creation_19__class = tmp_assign_source_116;
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_70:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_19__bases );
    tmp_class_creation_19__bases = NULL;

    Py_XDECREF( tmp_class_creation_19__class_dict );
    tmp_class_creation_19__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_19__metaclass );
    tmp_class_creation_19__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_37;
    exception_value = exception_keeper_value_37;
    exception_tb = exception_keeper_tb_37;
    exception_lineno = exception_keeper_lineno_37;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    {
        PyObject *tmp_assign_source_117;
        CHECK_OBJECT( tmp_class_creation_19__class );
        tmp_assign_source_117 = tmp_class_creation_19__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_LocationParseError, tmp_assign_source_117 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__class );
    Py_DECREF( tmp_class_creation_19__class );
    tmp_class_creation_19__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__bases );
    Py_DECREF( tmp_class_creation_19__bases );
    tmp_class_creation_19__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__class_dict );
    Py_DECREF( tmp_class_creation_19__class_dict );
    tmp_class_creation_19__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__metaclass );
    Py_DECREF( tmp_class_creation_19__metaclass );
    tmp_class_creation_19__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_mvar_value_22;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
        }

        if ( tmp_mvar_value_22 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
            exception_tb = NULL;

            exception_lineno = 150;

            goto try_except_handler_74;
        }

        tmp_tuple_element_19 = tmp_mvar_value_22;
        tmp_assign_source_118 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_19 );
        PyTuple_SET_ITEM( tmp_assign_source_118, 0, tmp_tuple_element_19 );
        assert( tmp_class_creation_20__bases == NULL );
        tmp_class_creation_20__bases = tmp_assign_source_118;
    }
    {
        PyObject *tmp_assign_source_119;
        {
            PyObject *tmp_set_locals_19;
            tmp_set_locals_19 = PyDict_New();
            locals_urllib3$exceptions_150 = tmp_set_locals_19;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_150, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_4221c6866c41e5ab7b77b09bf6885351;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_150, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_b69643d5b773f9f5a7202cff9d2e0c72;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_150, const_str_plain_GENERIC_ERROR, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_b3cccf261f53b23aaf668796a6ebdda4;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_150, const_str_plain_SPECIFIC_ERROR, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_119 = locals_urllib3$exceptions_150;
        Py_INCREF( tmp_assign_source_119 );
        goto try_return_handler_75;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_75:;
        Py_DECREF( locals_urllib3$exceptions_150 );
        locals_urllib3$exceptions_150 = NULL;
        goto outline_result_37;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_37:;
        assert( tmp_class_creation_20__class_dict == NULL );
        tmp_class_creation_20__class_dict = tmp_assign_source_119;
    }
    {
        PyObject *tmp_assign_source_120;
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_key_name_39;
        PyObject *tmp_dict_name_39;
        PyObject *tmp_dict_name_40;
        PyObject *tmp_key_name_40;
        tmp_key_name_39 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_20__class_dict );
        tmp_dict_name_39 = tmp_class_creation_20__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_39, tmp_key_name_39 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;

            goto try_except_handler_74;
        }
        tmp_condition_result_20 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_20 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_20;
        }
        else
        {
            goto condexpr_false_20;
        }
        condexpr_true_20:;
        CHECK_OBJECT( tmp_class_creation_20__class_dict );
        tmp_dict_name_40 = tmp_class_creation_20__class_dict;
        tmp_key_name_40 = const_str_plain___metaclass__;
        tmp_assign_source_120 = DICT_GET_ITEM( tmp_dict_name_40, tmp_key_name_40 );
        if ( tmp_assign_source_120 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;

            goto try_except_handler_74;
        }
        goto condexpr_end_20;
        condexpr_false_20:;
        {
            PyObject *tmp_assign_source_121;
            PyObject *tmp_subscribed_name_19;
            PyObject *tmp_subscript_name_19;
            CHECK_OBJECT( tmp_class_creation_20__bases );
            tmp_subscribed_name_19 = tmp_class_creation_20__bases;
            tmp_subscript_name_19 = const_int_0;
            tmp_assign_source_121 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_19, tmp_subscript_name_19, 0 );
            if ( tmp_assign_source_121 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 150;

                goto try_except_handler_74;
            }
            assert( tmp_select_metaclass_20__base == NULL );
            tmp_select_metaclass_20__base = tmp_assign_source_121;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_19;
            CHECK_OBJECT( tmp_select_metaclass_20__base );
            tmp_source_name_19 = tmp_select_metaclass_20__base;
            tmp_assign_source_120 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_19 );
            if ( tmp_assign_source_120 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 150;

                goto try_except_handler_77;
            }
            goto try_return_handler_76;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_77:;
        exception_keeper_type_38 = exception_type;
        exception_keeper_value_38 = exception_value;
        exception_keeper_tb_38 = exception_tb;
        exception_keeper_lineno_38 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_19;
            Py_DECREF( exception_keeper_type_38 );
            Py_XDECREF( exception_keeper_value_38 );
            Py_XDECREF( exception_keeper_tb_38 );
            CHECK_OBJECT( tmp_select_metaclass_20__base );
            tmp_type_arg_19 = tmp_select_metaclass_20__base;
            tmp_assign_source_120 = BUILTIN_TYPE1( tmp_type_arg_19 );
            assert( !(tmp_assign_source_120 == NULL) );
            goto try_return_handler_76;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_76:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_20__base );
        Py_DECREF( tmp_select_metaclass_20__base );
        tmp_select_metaclass_20__base = NULL;

        goto outline_result_38;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_20__base );
        Py_DECREF( tmp_select_metaclass_20__base );
        tmp_select_metaclass_20__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_38:;
        condexpr_end_20:;
        assert( tmp_class_creation_20__metaclass == NULL );
        tmp_class_creation_20__metaclass = tmp_assign_source_120;
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_called_name_20;
        PyObject *tmp_args_element_name_58;
        PyObject *tmp_args_element_name_59;
        PyObject *tmp_args_element_name_60;
        CHECK_OBJECT( tmp_class_creation_20__metaclass );
        tmp_called_name_20 = tmp_class_creation_20__metaclass;
        tmp_args_element_name_58 = const_str_plain_ResponseError;
        CHECK_OBJECT( tmp_class_creation_20__bases );
        tmp_args_element_name_59 = tmp_class_creation_20__bases;
        CHECK_OBJECT( tmp_class_creation_20__class_dict );
        tmp_args_element_name_60 = tmp_class_creation_20__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = { tmp_args_element_name_58, tmp_args_element_name_59, tmp_args_element_name_60 };
            tmp_assign_source_122 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_20, call_args );
        }

        if ( tmp_assign_source_122 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;

            goto try_except_handler_74;
        }
        assert( tmp_class_creation_20__class == NULL );
        tmp_class_creation_20__class = tmp_assign_source_122;
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_74:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_20__bases );
    tmp_class_creation_20__bases = NULL;

    Py_XDECREF( tmp_class_creation_20__class_dict );
    tmp_class_creation_20__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_20__metaclass );
    tmp_class_creation_20__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_39;
    exception_value = exception_keeper_value_39;
    exception_tb = exception_keeper_tb_39;
    exception_lineno = exception_keeper_lineno_39;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    {
        PyObject *tmp_assign_source_123;
        CHECK_OBJECT( tmp_class_creation_20__class );
        tmp_assign_source_123 = tmp_class_creation_20__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ResponseError, tmp_assign_source_123 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__class );
    Py_DECREF( tmp_class_creation_20__class );
    tmp_class_creation_20__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__bases );
    Py_DECREF( tmp_class_creation_20__bases );
    tmp_class_creation_20__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__class_dict );
    Py_DECREF( tmp_class_creation_20__class_dict );
    tmp_class_creation_20__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__metaclass );
    Py_DECREF( tmp_class_creation_20__metaclass );
    tmp_class_creation_20__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_mvar_value_23;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPWarning );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPWarning );
        }

        if ( tmp_mvar_value_23 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPWarning" );
            exception_tb = NULL;

            exception_lineno = 156;

            goto try_except_handler_78;
        }

        tmp_tuple_element_20 = tmp_mvar_value_23;
        tmp_assign_source_124 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_20 );
        PyTuple_SET_ITEM( tmp_assign_source_124, 0, tmp_tuple_element_20 );
        assert( tmp_class_creation_21__bases == NULL );
        tmp_class_creation_21__bases = tmp_assign_source_124;
    }
    {
        PyObject *tmp_assign_source_125;
        {
            PyObject *tmp_set_locals_20;
            tmp_set_locals_20 = PyDict_New();
            locals_urllib3$exceptions_156 = tmp_set_locals_20;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_156, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_22d8ad82a042b8c9b6ae653eb0bbaafd;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_156, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_125 = locals_urllib3$exceptions_156;
        Py_INCREF( tmp_assign_source_125 );
        goto try_return_handler_79;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_79:;
        Py_DECREF( locals_urllib3$exceptions_156 );
        locals_urllib3$exceptions_156 = NULL;
        goto outline_result_39;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_39:;
        assert( tmp_class_creation_21__class_dict == NULL );
        tmp_class_creation_21__class_dict = tmp_assign_source_125;
    }
    {
        PyObject *tmp_assign_source_126;
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_key_name_41;
        PyObject *tmp_dict_name_41;
        PyObject *tmp_dict_name_42;
        PyObject *tmp_key_name_42;
        tmp_key_name_41 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_21__class_dict );
        tmp_dict_name_41 = tmp_class_creation_21__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_41, tmp_key_name_41 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 156;

            goto try_except_handler_78;
        }
        tmp_condition_result_21 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_21 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_21;
        }
        else
        {
            goto condexpr_false_21;
        }
        condexpr_true_21:;
        CHECK_OBJECT( tmp_class_creation_21__class_dict );
        tmp_dict_name_42 = tmp_class_creation_21__class_dict;
        tmp_key_name_42 = const_str_plain___metaclass__;
        tmp_assign_source_126 = DICT_GET_ITEM( tmp_dict_name_42, tmp_key_name_42 );
        if ( tmp_assign_source_126 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 156;

            goto try_except_handler_78;
        }
        goto condexpr_end_21;
        condexpr_false_21:;
        {
            PyObject *tmp_assign_source_127;
            PyObject *tmp_subscribed_name_20;
            PyObject *tmp_subscript_name_20;
            CHECK_OBJECT( tmp_class_creation_21__bases );
            tmp_subscribed_name_20 = tmp_class_creation_21__bases;
            tmp_subscript_name_20 = const_int_0;
            tmp_assign_source_127 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_20, tmp_subscript_name_20, 0 );
            if ( tmp_assign_source_127 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 156;

                goto try_except_handler_78;
            }
            assert( tmp_select_metaclass_21__base == NULL );
            tmp_select_metaclass_21__base = tmp_assign_source_127;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_20;
            CHECK_OBJECT( tmp_select_metaclass_21__base );
            tmp_source_name_20 = tmp_select_metaclass_21__base;
            tmp_assign_source_126 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_20 );
            if ( tmp_assign_source_126 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 156;

                goto try_except_handler_81;
            }
            goto try_return_handler_80;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_81:;
        exception_keeper_type_40 = exception_type;
        exception_keeper_value_40 = exception_value;
        exception_keeper_tb_40 = exception_tb;
        exception_keeper_lineno_40 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_20;
            Py_DECREF( exception_keeper_type_40 );
            Py_XDECREF( exception_keeper_value_40 );
            Py_XDECREF( exception_keeper_tb_40 );
            CHECK_OBJECT( tmp_select_metaclass_21__base );
            tmp_type_arg_20 = tmp_select_metaclass_21__base;
            tmp_assign_source_126 = BUILTIN_TYPE1( tmp_type_arg_20 );
            assert( !(tmp_assign_source_126 == NULL) );
            goto try_return_handler_80;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_80:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_21__base );
        Py_DECREF( tmp_select_metaclass_21__base );
        tmp_select_metaclass_21__base = NULL;

        goto outline_result_40;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_21__base );
        Py_DECREF( tmp_select_metaclass_21__base );
        tmp_select_metaclass_21__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_40:;
        condexpr_end_21:;
        assert( tmp_class_creation_21__metaclass == NULL );
        tmp_class_creation_21__metaclass = tmp_assign_source_126;
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_called_name_21;
        PyObject *tmp_args_element_name_61;
        PyObject *tmp_args_element_name_62;
        PyObject *tmp_args_element_name_63;
        CHECK_OBJECT( tmp_class_creation_21__metaclass );
        tmp_called_name_21 = tmp_class_creation_21__metaclass;
        tmp_args_element_name_61 = const_str_plain_SecurityWarning;
        CHECK_OBJECT( tmp_class_creation_21__bases );
        tmp_args_element_name_62 = tmp_class_creation_21__bases;
        CHECK_OBJECT( tmp_class_creation_21__class_dict );
        tmp_args_element_name_63 = tmp_class_creation_21__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 156;
        {
            PyObject *call_args[] = { tmp_args_element_name_61, tmp_args_element_name_62, tmp_args_element_name_63 };
            tmp_assign_source_128 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_21, call_args );
        }

        if ( tmp_assign_source_128 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 156;

            goto try_except_handler_78;
        }
        assert( tmp_class_creation_21__class == NULL );
        tmp_class_creation_21__class = tmp_assign_source_128;
    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_78:;
    exception_keeper_type_41 = exception_type;
    exception_keeper_value_41 = exception_value;
    exception_keeper_tb_41 = exception_tb;
    exception_keeper_lineno_41 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_21__bases );
    tmp_class_creation_21__bases = NULL;

    Py_XDECREF( tmp_class_creation_21__class_dict );
    tmp_class_creation_21__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_21__metaclass );
    tmp_class_creation_21__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_41;
    exception_value = exception_keeper_value_41;
    exception_tb = exception_keeper_tb_41;
    exception_lineno = exception_keeper_lineno_41;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    {
        PyObject *tmp_assign_source_129;
        CHECK_OBJECT( tmp_class_creation_21__class );
        tmp_assign_source_129 = tmp_class_creation_21__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SecurityWarning, tmp_assign_source_129 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__class );
    Py_DECREF( tmp_class_creation_21__class );
    tmp_class_creation_21__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__bases );
    Py_DECREF( tmp_class_creation_21__bases );
    tmp_class_creation_21__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__class_dict );
    Py_DECREF( tmp_class_creation_21__class_dict );
    tmp_class_creation_21__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__metaclass );
    Py_DECREF( tmp_class_creation_21__metaclass );
    tmp_class_creation_21__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_mvar_value_24;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SecurityWarning );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SecurityWarning );
        }

        if ( tmp_mvar_value_24 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "SecurityWarning" );
            exception_tb = NULL;

            exception_lineno = 161;

            goto try_except_handler_82;
        }

        tmp_tuple_element_21 = tmp_mvar_value_24;
        tmp_assign_source_130 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_21 );
        PyTuple_SET_ITEM( tmp_assign_source_130, 0, tmp_tuple_element_21 );
        assert( tmp_class_creation_22__bases == NULL );
        tmp_class_creation_22__bases = tmp_assign_source_130;
    }
    {
        PyObject *tmp_assign_source_131;
        {
            PyObject *tmp_set_locals_21;
            tmp_set_locals_21 = PyDict_New();
            locals_urllib3$exceptions_161 = tmp_set_locals_21;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_161, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_d3e96f948eaa41c53caaae3833d57481;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_161, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_131 = locals_urllib3$exceptions_161;
        Py_INCREF( tmp_assign_source_131 );
        goto try_return_handler_83;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_83:;
        Py_DECREF( locals_urllib3$exceptions_161 );
        locals_urllib3$exceptions_161 = NULL;
        goto outline_result_41;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_41:;
        assert( tmp_class_creation_22__class_dict == NULL );
        tmp_class_creation_22__class_dict = tmp_assign_source_131;
    }
    {
        PyObject *tmp_assign_source_132;
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_key_name_43;
        PyObject *tmp_dict_name_43;
        PyObject *tmp_dict_name_44;
        PyObject *tmp_key_name_44;
        tmp_key_name_43 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_22__class_dict );
        tmp_dict_name_43 = tmp_class_creation_22__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_43, tmp_key_name_43 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;

            goto try_except_handler_82;
        }
        tmp_condition_result_22 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_22 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_22;
        }
        else
        {
            goto condexpr_false_22;
        }
        condexpr_true_22:;
        CHECK_OBJECT( tmp_class_creation_22__class_dict );
        tmp_dict_name_44 = tmp_class_creation_22__class_dict;
        tmp_key_name_44 = const_str_plain___metaclass__;
        tmp_assign_source_132 = DICT_GET_ITEM( tmp_dict_name_44, tmp_key_name_44 );
        if ( tmp_assign_source_132 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;

            goto try_except_handler_82;
        }
        goto condexpr_end_22;
        condexpr_false_22:;
        {
            PyObject *tmp_assign_source_133;
            PyObject *tmp_subscribed_name_21;
            PyObject *tmp_subscript_name_21;
            CHECK_OBJECT( tmp_class_creation_22__bases );
            tmp_subscribed_name_21 = tmp_class_creation_22__bases;
            tmp_subscript_name_21 = const_int_0;
            tmp_assign_source_133 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_21, tmp_subscript_name_21, 0 );
            if ( tmp_assign_source_133 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 161;

                goto try_except_handler_82;
            }
            assert( tmp_select_metaclass_22__base == NULL );
            tmp_select_metaclass_22__base = tmp_assign_source_133;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_21;
            CHECK_OBJECT( tmp_select_metaclass_22__base );
            tmp_source_name_21 = tmp_select_metaclass_22__base;
            tmp_assign_source_132 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_21 );
            if ( tmp_assign_source_132 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 161;

                goto try_except_handler_85;
            }
            goto try_return_handler_84;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_85:;
        exception_keeper_type_42 = exception_type;
        exception_keeper_value_42 = exception_value;
        exception_keeper_tb_42 = exception_tb;
        exception_keeper_lineno_42 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_21;
            Py_DECREF( exception_keeper_type_42 );
            Py_XDECREF( exception_keeper_value_42 );
            Py_XDECREF( exception_keeper_tb_42 );
            CHECK_OBJECT( tmp_select_metaclass_22__base );
            tmp_type_arg_21 = tmp_select_metaclass_22__base;
            tmp_assign_source_132 = BUILTIN_TYPE1( tmp_type_arg_21 );
            assert( !(tmp_assign_source_132 == NULL) );
            goto try_return_handler_84;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_84:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_22__base );
        Py_DECREF( tmp_select_metaclass_22__base );
        tmp_select_metaclass_22__base = NULL;

        goto outline_result_42;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_22__base );
        Py_DECREF( tmp_select_metaclass_22__base );
        tmp_select_metaclass_22__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_42:;
        condexpr_end_22:;
        assert( tmp_class_creation_22__metaclass == NULL );
        tmp_class_creation_22__metaclass = tmp_assign_source_132;
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_called_name_22;
        PyObject *tmp_args_element_name_64;
        PyObject *tmp_args_element_name_65;
        PyObject *tmp_args_element_name_66;
        CHECK_OBJECT( tmp_class_creation_22__metaclass );
        tmp_called_name_22 = tmp_class_creation_22__metaclass;
        tmp_args_element_name_64 = const_str_plain_SubjectAltNameWarning;
        CHECK_OBJECT( tmp_class_creation_22__bases );
        tmp_args_element_name_65 = tmp_class_creation_22__bases;
        CHECK_OBJECT( tmp_class_creation_22__class_dict );
        tmp_args_element_name_66 = tmp_class_creation_22__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 161;
        {
            PyObject *call_args[] = { tmp_args_element_name_64, tmp_args_element_name_65, tmp_args_element_name_66 };
            tmp_assign_source_134 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_22, call_args );
        }

        if ( tmp_assign_source_134 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;

            goto try_except_handler_82;
        }
        assert( tmp_class_creation_22__class == NULL );
        tmp_class_creation_22__class = tmp_assign_source_134;
    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_82:;
    exception_keeper_type_43 = exception_type;
    exception_keeper_value_43 = exception_value;
    exception_keeper_tb_43 = exception_tb;
    exception_keeper_lineno_43 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_22__bases );
    tmp_class_creation_22__bases = NULL;

    Py_XDECREF( tmp_class_creation_22__class_dict );
    tmp_class_creation_22__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_22__metaclass );
    tmp_class_creation_22__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_43;
    exception_value = exception_keeper_value_43;
    exception_tb = exception_keeper_tb_43;
    exception_lineno = exception_keeper_lineno_43;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    {
        PyObject *tmp_assign_source_135;
        CHECK_OBJECT( tmp_class_creation_22__class );
        tmp_assign_source_135 = tmp_class_creation_22__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SubjectAltNameWarning, tmp_assign_source_135 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__class );
    Py_DECREF( tmp_class_creation_22__class );
    tmp_class_creation_22__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__bases );
    Py_DECREF( tmp_class_creation_22__bases );
    tmp_class_creation_22__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__class_dict );
    Py_DECREF( tmp_class_creation_22__class_dict );
    tmp_class_creation_22__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__metaclass );
    Py_DECREF( tmp_class_creation_22__metaclass );
    tmp_class_creation_22__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_mvar_value_25;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SecurityWarning );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SecurityWarning );
        }

        if ( tmp_mvar_value_25 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "SecurityWarning" );
            exception_tb = NULL;

            exception_lineno = 166;

            goto try_except_handler_86;
        }

        tmp_tuple_element_22 = tmp_mvar_value_25;
        tmp_assign_source_136 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_22 );
        PyTuple_SET_ITEM( tmp_assign_source_136, 0, tmp_tuple_element_22 );
        assert( tmp_class_creation_23__bases == NULL );
        tmp_class_creation_23__bases = tmp_assign_source_136;
    }
    {
        PyObject *tmp_assign_source_137;
        {
            PyObject *tmp_set_locals_22;
            tmp_set_locals_22 = PyDict_New();
            locals_urllib3$exceptions_166 = tmp_set_locals_22;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_166, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_3ecac7959fca6b094793e5853872d936;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_166, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_137 = locals_urllib3$exceptions_166;
        Py_INCREF( tmp_assign_source_137 );
        goto try_return_handler_87;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_87:;
        Py_DECREF( locals_urllib3$exceptions_166 );
        locals_urllib3$exceptions_166 = NULL;
        goto outline_result_43;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_43:;
        assert( tmp_class_creation_23__class_dict == NULL );
        tmp_class_creation_23__class_dict = tmp_assign_source_137;
    }
    {
        PyObject *tmp_assign_source_138;
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_key_name_45;
        PyObject *tmp_dict_name_45;
        PyObject *tmp_dict_name_46;
        PyObject *tmp_key_name_46;
        tmp_key_name_45 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_23__class_dict );
        tmp_dict_name_45 = tmp_class_creation_23__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_45, tmp_key_name_45 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;

            goto try_except_handler_86;
        }
        tmp_condition_result_23 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_23 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_23;
        }
        else
        {
            goto condexpr_false_23;
        }
        condexpr_true_23:;
        CHECK_OBJECT( tmp_class_creation_23__class_dict );
        tmp_dict_name_46 = tmp_class_creation_23__class_dict;
        tmp_key_name_46 = const_str_plain___metaclass__;
        tmp_assign_source_138 = DICT_GET_ITEM( tmp_dict_name_46, tmp_key_name_46 );
        if ( tmp_assign_source_138 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;

            goto try_except_handler_86;
        }
        goto condexpr_end_23;
        condexpr_false_23:;
        {
            PyObject *tmp_assign_source_139;
            PyObject *tmp_subscribed_name_22;
            PyObject *tmp_subscript_name_22;
            CHECK_OBJECT( tmp_class_creation_23__bases );
            tmp_subscribed_name_22 = tmp_class_creation_23__bases;
            tmp_subscript_name_22 = const_int_0;
            tmp_assign_source_139 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_22, tmp_subscript_name_22, 0 );
            if ( tmp_assign_source_139 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;

                goto try_except_handler_86;
            }
            assert( tmp_select_metaclass_23__base == NULL );
            tmp_select_metaclass_23__base = tmp_assign_source_139;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_22;
            CHECK_OBJECT( tmp_select_metaclass_23__base );
            tmp_source_name_22 = tmp_select_metaclass_23__base;
            tmp_assign_source_138 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_22 );
            if ( tmp_assign_source_138 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;

                goto try_except_handler_89;
            }
            goto try_return_handler_88;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_89:;
        exception_keeper_type_44 = exception_type;
        exception_keeper_value_44 = exception_value;
        exception_keeper_tb_44 = exception_tb;
        exception_keeper_lineno_44 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_22;
            Py_DECREF( exception_keeper_type_44 );
            Py_XDECREF( exception_keeper_value_44 );
            Py_XDECREF( exception_keeper_tb_44 );
            CHECK_OBJECT( tmp_select_metaclass_23__base );
            tmp_type_arg_22 = tmp_select_metaclass_23__base;
            tmp_assign_source_138 = BUILTIN_TYPE1( tmp_type_arg_22 );
            assert( !(tmp_assign_source_138 == NULL) );
            goto try_return_handler_88;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_88:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_23__base );
        Py_DECREF( tmp_select_metaclass_23__base );
        tmp_select_metaclass_23__base = NULL;

        goto outline_result_44;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_23__base );
        Py_DECREF( tmp_select_metaclass_23__base );
        tmp_select_metaclass_23__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_44:;
        condexpr_end_23:;
        assert( tmp_class_creation_23__metaclass == NULL );
        tmp_class_creation_23__metaclass = tmp_assign_source_138;
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_called_name_23;
        PyObject *tmp_args_element_name_67;
        PyObject *tmp_args_element_name_68;
        PyObject *tmp_args_element_name_69;
        CHECK_OBJECT( tmp_class_creation_23__metaclass );
        tmp_called_name_23 = tmp_class_creation_23__metaclass;
        tmp_args_element_name_67 = const_str_plain_InsecureRequestWarning;
        CHECK_OBJECT( tmp_class_creation_23__bases );
        tmp_args_element_name_68 = tmp_class_creation_23__bases;
        CHECK_OBJECT( tmp_class_creation_23__class_dict );
        tmp_args_element_name_69 = tmp_class_creation_23__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 166;
        {
            PyObject *call_args[] = { tmp_args_element_name_67, tmp_args_element_name_68, tmp_args_element_name_69 };
            tmp_assign_source_140 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_23, call_args );
        }

        if ( tmp_assign_source_140 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;

            goto try_except_handler_86;
        }
        assert( tmp_class_creation_23__class == NULL );
        tmp_class_creation_23__class = tmp_assign_source_140;
    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_86:;
    exception_keeper_type_45 = exception_type;
    exception_keeper_value_45 = exception_value;
    exception_keeper_tb_45 = exception_tb;
    exception_keeper_lineno_45 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_23__bases );
    tmp_class_creation_23__bases = NULL;

    Py_XDECREF( tmp_class_creation_23__class_dict );
    tmp_class_creation_23__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_23__metaclass );
    tmp_class_creation_23__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_45;
    exception_value = exception_keeper_value_45;
    exception_tb = exception_keeper_tb_45;
    exception_lineno = exception_keeper_lineno_45;

    goto frame_exception_exit_1;
    // End of try:
    try_end_23:;
    {
        PyObject *tmp_assign_source_141;
        CHECK_OBJECT( tmp_class_creation_23__class );
        tmp_assign_source_141 = tmp_class_creation_23__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_InsecureRequestWarning, tmp_assign_source_141 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__class );
    Py_DECREF( tmp_class_creation_23__class );
    tmp_class_creation_23__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__bases );
    Py_DECREF( tmp_class_creation_23__bases );
    tmp_class_creation_23__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__class_dict );
    Py_DECREF( tmp_class_creation_23__class_dict );
    tmp_class_creation_23__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__metaclass );
    Py_DECREF( tmp_class_creation_23__metaclass );
    tmp_class_creation_23__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_mvar_value_26;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SecurityWarning );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SecurityWarning );
        }

        if ( tmp_mvar_value_26 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "SecurityWarning" );
            exception_tb = NULL;

            exception_lineno = 171;

            goto try_except_handler_90;
        }

        tmp_tuple_element_23 = tmp_mvar_value_26;
        tmp_assign_source_142 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_23 );
        PyTuple_SET_ITEM( tmp_assign_source_142, 0, tmp_tuple_element_23 );
        assert( tmp_class_creation_24__bases == NULL );
        tmp_class_creation_24__bases = tmp_assign_source_142;
    }
    {
        PyObject *tmp_assign_source_143;
        {
            PyObject *tmp_set_locals_23;
            tmp_set_locals_23 = PyDict_New();
            locals_urllib3$exceptions_171 = tmp_set_locals_23;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_171, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_d455563e1ef951148bac32f5cc949a27;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_171, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_143 = locals_urllib3$exceptions_171;
        Py_INCREF( tmp_assign_source_143 );
        goto try_return_handler_91;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_91:;
        Py_DECREF( locals_urllib3$exceptions_171 );
        locals_urllib3$exceptions_171 = NULL;
        goto outline_result_45;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_45:;
        assert( tmp_class_creation_24__class_dict == NULL );
        tmp_class_creation_24__class_dict = tmp_assign_source_143;
    }
    {
        PyObject *tmp_assign_source_144;
        nuitka_bool tmp_condition_result_24;
        PyObject *tmp_key_name_47;
        PyObject *tmp_dict_name_47;
        PyObject *tmp_dict_name_48;
        PyObject *tmp_key_name_48;
        tmp_key_name_47 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_24__class_dict );
        tmp_dict_name_47 = tmp_class_creation_24__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_47, tmp_key_name_47 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;

            goto try_except_handler_90;
        }
        tmp_condition_result_24 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_24 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_24;
        }
        else
        {
            goto condexpr_false_24;
        }
        condexpr_true_24:;
        CHECK_OBJECT( tmp_class_creation_24__class_dict );
        tmp_dict_name_48 = tmp_class_creation_24__class_dict;
        tmp_key_name_48 = const_str_plain___metaclass__;
        tmp_assign_source_144 = DICT_GET_ITEM( tmp_dict_name_48, tmp_key_name_48 );
        if ( tmp_assign_source_144 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;

            goto try_except_handler_90;
        }
        goto condexpr_end_24;
        condexpr_false_24:;
        {
            PyObject *tmp_assign_source_145;
            PyObject *tmp_subscribed_name_23;
            PyObject *tmp_subscript_name_23;
            CHECK_OBJECT( tmp_class_creation_24__bases );
            tmp_subscribed_name_23 = tmp_class_creation_24__bases;
            tmp_subscript_name_23 = const_int_0;
            tmp_assign_source_145 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_23, tmp_subscript_name_23, 0 );
            if ( tmp_assign_source_145 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;

                goto try_except_handler_90;
            }
            assert( tmp_select_metaclass_24__base == NULL );
            tmp_select_metaclass_24__base = tmp_assign_source_145;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_23;
            CHECK_OBJECT( tmp_select_metaclass_24__base );
            tmp_source_name_23 = tmp_select_metaclass_24__base;
            tmp_assign_source_144 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_23 );
            if ( tmp_assign_source_144 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;

                goto try_except_handler_93;
            }
            goto try_return_handler_92;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_93:;
        exception_keeper_type_46 = exception_type;
        exception_keeper_value_46 = exception_value;
        exception_keeper_tb_46 = exception_tb;
        exception_keeper_lineno_46 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_23;
            Py_DECREF( exception_keeper_type_46 );
            Py_XDECREF( exception_keeper_value_46 );
            Py_XDECREF( exception_keeper_tb_46 );
            CHECK_OBJECT( tmp_select_metaclass_24__base );
            tmp_type_arg_23 = tmp_select_metaclass_24__base;
            tmp_assign_source_144 = BUILTIN_TYPE1( tmp_type_arg_23 );
            assert( !(tmp_assign_source_144 == NULL) );
            goto try_return_handler_92;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_92:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_24__base );
        Py_DECREF( tmp_select_metaclass_24__base );
        tmp_select_metaclass_24__base = NULL;

        goto outline_result_46;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_24__base );
        Py_DECREF( tmp_select_metaclass_24__base );
        tmp_select_metaclass_24__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_46:;
        condexpr_end_24:;
        assert( tmp_class_creation_24__metaclass == NULL );
        tmp_class_creation_24__metaclass = tmp_assign_source_144;
    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_called_name_24;
        PyObject *tmp_args_element_name_70;
        PyObject *tmp_args_element_name_71;
        PyObject *tmp_args_element_name_72;
        CHECK_OBJECT( tmp_class_creation_24__metaclass );
        tmp_called_name_24 = tmp_class_creation_24__metaclass;
        tmp_args_element_name_70 = const_str_plain_SystemTimeWarning;
        CHECK_OBJECT( tmp_class_creation_24__bases );
        tmp_args_element_name_71 = tmp_class_creation_24__bases;
        CHECK_OBJECT( tmp_class_creation_24__class_dict );
        tmp_args_element_name_72 = tmp_class_creation_24__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = { tmp_args_element_name_70, tmp_args_element_name_71, tmp_args_element_name_72 };
            tmp_assign_source_146 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_24, call_args );
        }

        if ( tmp_assign_source_146 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;

            goto try_except_handler_90;
        }
        assert( tmp_class_creation_24__class == NULL );
        tmp_class_creation_24__class = tmp_assign_source_146;
    }
    goto try_end_24;
    // Exception handler code:
    try_except_handler_90:;
    exception_keeper_type_47 = exception_type;
    exception_keeper_value_47 = exception_value;
    exception_keeper_tb_47 = exception_tb;
    exception_keeper_lineno_47 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_24__bases );
    tmp_class_creation_24__bases = NULL;

    Py_XDECREF( tmp_class_creation_24__class_dict );
    tmp_class_creation_24__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_24__metaclass );
    tmp_class_creation_24__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_47;
    exception_value = exception_keeper_value_47;
    exception_tb = exception_keeper_tb_47;
    exception_lineno = exception_keeper_lineno_47;

    goto frame_exception_exit_1;
    // End of try:
    try_end_24:;
    {
        PyObject *tmp_assign_source_147;
        CHECK_OBJECT( tmp_class_creation_24__class );
        tmp_assign_source_147 = tmp_class_creation_24__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SystemTimeWarning, tmp_assign_source_147 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_24__class );
    Py_DECREF( tmp_class_creation_24__class );
    tmp_class_creation_24__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_24__bases );
    Py_DECREF( tmp_class_creation_24__bases );
    tmp_class_creation_24__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_24__class_dict );
    Py_DECREF( tmp_class_creation_24__class_dict );
    tmp_class_creation_24__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_24__metaclass );
    Py_DECREF( tmp_class_creation_24__metaclass );
    tmp_class_creation_24__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_tuple_element_24;
        PyObject *tmp_mvar_value_27;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SecurityWarning );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SecurityWarning );
        }

        if ( tmp_mvar_value_27 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "SecurityWarning" );
            exception_tb = NULL;

            exception_lineno = 176;

            goto try_except_handler_94;
        }

        tmp_tuple_element_24 = tmp_mvar_value_27;
        tmp_assign_source_148 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_24 );
        PyTuple_SET_ITEM( tmp_assign_source_148, 0, tmp_tuple_element_24 );
        assert( tmp_class_creation_25__bases == NULL );
        tmp_class_creation_25__bases = tmp_assign_source_148;
    }
    {
        PyObject *tmp_assign_source_149;
        {
            PyObject *tmp_set_locals_24;
            tmp_set_locals_24 = PyDict_New();
            locals_urllib3$exceptions_176 = tmp_set_locals_24;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_176, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_85322d4279b2ac8026a5921e77f32165;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_176, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_149 = locals_urllib3$exceptions_176;
        Py_INCREF( tmp_assign_source_149 );
        goto try_return_handler_95;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_95:;
        Py_DECREF( locals_urllib3$exceptions_176 );
        locals_urllib3$exceptions_176 = NULL;
        goto outline_result_47;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_47:;
        assert( tmp_class_creation_25__class_dict == NULL );
        tmp_class_creation_25__class_dict = tmp_assign_source_149;
    }
    {
        PyObject *tmp_assign_source_150;
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_key_name_49;
        PyObject *tmp_dict_name_49;
        PyObject *tmp_dict_name_50;
        PyObject *tmp_key_name_50;
        tmp_key_name_49 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_25__class_dict );
        tmp_dict_name_49 = tmp_class_creation_25__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_49, tmp_key_name_49 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;

            goto try_except_handler_94;
        }
        tmp_condition_result_25 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_25 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_25;
        }
        else
        {
            goto condexpr_false_25;
        }
        condexpr_true_25:;
        CHECK_OBJECT( tmp_class_creation_25__class_dict );
        tmp_dict_name_50 = tmp_class_creation_25__class_dict;
        tmp_key_name_50 = const_str_plain___metaclass__;
        tmp_assign_source_150 = DICT_GET_ITEM( tmp_dict_name_50, tmp_key_name_50 );
        if ( tmp_assign_source_150 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;

            goto try_except_handler_94;
        }
        goto condexpr_end_25;
        condexpr_false_25:;
        {
            PyObject *tmp_assign_source_151;
            PyObject *tmp_subscribed_name_24;
            PyObject *tmp_subscript_name_24;
            CHECK_OBJECT( tmp_class_creation_25__bases );
            tmp_subscribed_name_24 = tmp_class_creation_25__bases;
            tmp_subscript_name_24 = const_int_0;
            tmp_assign_source_151 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_24, tmp_subscript_name_24, 0 );
            if ( tmp_assign_source_151 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;

                goto try_except_handler_94;
            }
            assert( tmp_select_metaclass_25__base == NULL );
            tmp_select_metaclass_25__base = tmp_assign_source_151;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_24;
            CHECK_OBJECT( tmp_select_metaclass_25__base );
            tmp_source_name_24 = tmp_select_metaclass_25__base;
            tmp_assign_source_150 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_24 );
            if ( tmp_assign_source_150 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;

                goto try_except_handler_97;
            }
            goto try_return_handler_96;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_97:;
        exception_keeper_type_48 = exception_type;
        exception_keeper_value_48 = exception_value;
        exception_keeper_tb_48 = exception_tb;
        exception_keeper_lineno_48 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_24;
            Py_DECREF( exception_keeper_type_48 );
            Py_XDECREF( exception_keeper_value_48 );
            Py_XDECREF( exception_keeper_tb_48 );
            CHECK_OBJECT( tmp_select_metaclass_25__base );
            tmp_type_arg_24 = tmp_select_metaclass_25__base;
            tmp_assign_source_150 = BUILTIN_TYPE1( tmp_type_arg_24 );
            assert( !(tmp_assign_source_150 == NULL) );
            goto try_return_handler_96;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_96:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_25__base );
        Py_DECREF( tmp_select_metaclass_25__base );
        tmp_select_metaclass_25__base = NULL;

        goto outline_result_48;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_25__base );
        Py_DECREF( tmp_select_metaclass_25__base );
        tmp_select_metaclass_25__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_48:;
        condexpr_end_25:;
        assert( tmp_class_creation_25__metaclass == NULL );
        tmp_class_creation_25__metaclass = tmp_assign_source_150;
    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_called_name_25;
        PyObject *tmp_args_element_name_73;
        PyObject *tmp_args_element_name_74;
        PyObject *tmp_args_element_name_75;
        CHECK_OBJECT( tmp_class_creation_25__metaclass );
        tmp_called_name_25 = tmp_class_creation_25__metaclass;
        tmp_args_element_name_73 = const_str_plain_InsecurePlatformWarning;
        CHECK_OBJECT( tmp_class_creation_25__bases );
        tmp_args_element_name_74 = tmp_class_creation_25__bases;
        CHECK_OBJECT( tmp_class_creation_25__class_dict );
        tmp_args_element_name_75 = tmp_class_creation_25__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 176;
        {
            PyObject *call_args[] = { tmp_args_element_name_73, tmp_args_element_name_74, tmp_args_element_name_75 };
            tmp_assign_source_152 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_25, call_args );
        }

        if ( tmp_assign_source_152 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;

            goto try_except_handler_94;
        }
        assert( tmp_class_creation_25__class == NULL );
        tmp_class_creation_25__class = tmp_assign_source_152;
    }
    goto try_end_25;
    // Exception handler code:
    try_except_handler_94:;
    exception_keeper_type_49 = exception_type;
    exception_keeper_value_49 = exception_value;
    exception_keeper_tb_49 = exception_tb;
    exception_keeper_lineno_49 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_25__bases );
    tmp_class_creation_25__bases = NULL;

    Py_XDECREF( tmp_class_creation_25__class_dict );
    tmp_class_creation_25__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_25__metaclass );
    tmp_class_creation_25__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_49;
    exception_value = exception_keeper_value_49;
    exception_tb = exception_keeper_tb_49;
    exception_lineno = exception_keeper_lineno_49;

    goto frame_exception_exit_1;
    // End of try:
    try_end_25:;
    {
        PyObject *tmp_assign_source_153;
        CHECK_OBJECT( tmp_class_creation_25__class );
        tmp_assign_source_153 = tmp_class_creation_25__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_InsecurePlatformWarning, tmp_assign_source_153 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_25__class );
    Py_DECREF( tmp_class_creation_25__class );
    tmp_class_creation_25__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_25__bases );
    Py_DECREF( tmp_class_creation_25__bases );
    tmp_class_creation_25__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_25__class_dict );
    Py_DECREF( tmp_class_creation_25__class_dict );
    tmp_class_creation_25__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_25__metaclass );
    Py_DECREF( tmp_class_creation_25__metaclass );
    tmp_class_creation_25__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_mvar_value_28;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPWarning );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPWarning );
        }

        if ( tmp_mvar_value_28 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPWarning" );
            exception_tb = NULL;

            exception_lineno = 181;

            goto try_except_handler_98;
        }

        tmp_tuple_element_25 = tmp_mvar_value_28;
        tmp_assign_source_154 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_25 );
        PyTuple_SET_ITEM( tmp_assign_source_154, 0, tmp_tuple_element_25 );
        assert( tmp_class_creation_26__bases == NULL );
        tmp_class_creation_26__bases = tmp_assign_source_154;
    }
    {
        PyObject *tmp_assign_source_155;
        {
            PyObject *tmp_set_locals_25;
            tmp_set_locals_25 = PyDict_New();
            locals_urllib3$exceptions_181 = tmp_set_locals_25;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_181, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_0beacf6afb33b121e9545510332129fc;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_181, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_155 = locals_urllib3$exceptions_181;
        Py_INCREF( tmp_assign_source_155 );
        goto try_return_handler_99;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_99:;
        Py_DECREF( locals_urllib3$exceptions_181 );
        locals_urllib3$exceptions_181 = NULL;
        goto outline_result_49;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_49:;
        assert( tmp_class_creation_26__class_dict == NULL );
        tmp_class_creation_26__class_dict = tmp_assign_source_155;
    }
    {
        PyObject *tmp_assign_source_156;
        nuitka_bool tmp_condition_result_26;
        PyObject *tmp_key_name_51;
        PyObject *tmp_dict_name_51;
        PyObject *tmp_dict_name_52;
        PyObject *tmp_key_name_52;
        tmp_key_name_51 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_26__class_dict );
        tmp_dict_name_51 = tmp_class_creation_26__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_51, tmp_key_name_51 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;

            goto try_except_handler_98;
        }
        tmp_condition_result_26 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_26 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_26;
        }
        else
        {
            goto condexpr_false_26;
        }
        condexpr_true_26:;
        CHECK_OBJECT( tmp_class_creation_26__class_dict );
        tmp_dict_name_52 = tmp_class_creation_26__class_dict;
        tmp_key_name_52 = const_str_plain___metaclass__;
        tmp_assign_source_156 = DICT_GET_ITEM( tmp_dict_name_52, tmp_key_name_52 );
        if ( tmp_assign_source_156 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;

            goto try_except_handler_98;
        }
        goto condexpr_end_26;
        condexpr_false_26:;
        {
            PyObject *tmp_assign_source_157;
            PyObject *tmp_subscribed_name_25;
            PyObject *tmp_subscript_name_25;
            CHECK_OBJECT( tmp_class_creation_26__bases );
            tmp_subscribed_name_25 = tmp_class_creation_26__bases;
            tmp_subscript_name_25 = const_int_0;
            tmp_assign_source_157 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_25, tmp_subscript_name_25, 0 );
            if ( tmp_assign_source_157 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 181;

                goto try_except_handler_98;
            }
            assert( tmp_select_metaclass_26__base == NULL );
            tmp_select_metaclass_26__base = tmp_assign_source_157;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_25;
            CHECK_OBJECT( tmp_select_metaclass_26__base );
            tmp_source_name_25 = tmp_select_metaclass_26__base;
            tmp_assign_source_156 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_25 );
            if ( tmp_assign_source_156 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 181;

                goto try_except_handler_101;
            }
            goto try_return_handler_100;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_101:;
        exception_keeper_type_50 = exception_type;
        exception_keeper_value_50 = exception_value;
        exception_keeper_tb_50 = exception_tb;
        exception_keeper_lineno_50 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_25;
            Py_DECREF( exception_keeper_type_50 );
            Py_XDECREF( exception_keeper_value_50 );
            Py_XDECREF( exception_keeper_tb_50 );
            CHECK_OBJECT( tmp_select_metaclass_26__base );
            tmp_type_arg_25 = tmp_select_metaclass_26__base;
            tmp_assign_source_156 = BUILTIN_TYPE1( tmp_type_arg_25 );
            assert( !(tmp_assign_source_156 == NULL) );
            goto try_return_handler_100;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_100:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_26__base );
        Py_DECREF( tmp_select_metaclass_26__base );
        tmp_select_metaclass_26__base = NULL;

        goto outline_result_50;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_26__base );
        Py_DECREF( tmp_select_metaclass_26__base );
        tmp_select_metaclass_26__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_50:;
        condexpr_end_26:;
        assert( tmp_class_creation_26__metaclass == NULL );
        tmp_class_creation_26__metaclass = tmp_assign_source_156;
    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_called_name_26;
        PyObject *tmp_args_element_name_76;
        PyObject *tmp_args_element_name_77;
        PyObject *tmp_args_element_name_78;
        CHECK_OBJECT( tmp_class_creation_26__metaclass );
        tmp_called_name_26 = tmp_class_creation_26__metaclass;
        tmp_args_element_name_76 = const_str_plain_SNIMissingWarning;
        CHECK_OBJECT( tmp_class_creation_26__bases );
        tmp_args_element_name_77 = tmp_class_creation_26__bases;
        CHECK_OBJECT( tmp_class_creation_26__class_dict );
        tmp_args_element_name_78 = tmp_class_creation_26__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = { tmp_args_element_name_76, tmp_args_element_name_77, tmp_args_element_name_78 };
            tmp_assign_source_158 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_26, call_args );
        }

        if ( tmp_assign_source_158 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;

            goto try_except_handler_98;
        }
        assert( tmp_class_creation_26__class == NULL );
        tmp_class_creation_26__class = tmp_assign_source_158;
    }
    goto try_end_26;
    // Exception handler code:
    try_except_handler_98:;
    exception_keeper_type_51 = exception_type;
    exception_keeper_value_51 = exception_value;
    exception_keeper_tb_51 = exception_tb;
    exception_keeper_lineno_51 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_26__bases );
    tmp_class_creation_26__bases = NULL;

    Py_XDECREF( tmp_class_creation_26__class_dict );
    tmp_class_creation_26__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_26__metaclass );
    tmp_class_creation_26__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_51;
    exception_value = exception_keeper_value_51;
    exception_tb = exception_keeper_tb_51;
    exception_lineno = exception_keeper_lineno_51;

    goto frame_exception_exit_1;
    // End of try:
    try_end_26:;
    {
        PyObject *tmp_assign_source_159;
        CHECK_OBJECT( tmp_class_creation_26__class );
        tmp_assign_source_159 = tmp_class_creation_26__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SNIMissingWarning, tmp_assign_source_159 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_26__class );
    Py_DECREF( tmp_class_creation_26__class );
    tmp_class_creation_26__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_26__bases );
    Py_DECREF( tmp_class_creation_26__bases );
    tmp_class_creation_26__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_26__class_dict );
    Py_DECREF( tmp_class_creation_26__class_dict );
    tmp_class_creation_26__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_26__metaclass );
    Py_DECREF( tmp_class_creation_26__metaclass );
    tmp_class_creation_26__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_mvar_value_29;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPWarning );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPWarning );
        }

        if ( tmp_mvar_value_29 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPWarning" );
            exception_tb = NULL;

            exception_lineno = 186;

            goto try_except_handler_102;
        }

        tmp_tuple_element_26 = tmp_mvar_value_29;
        tmp_assign_source_160 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_26 );
        PyTuple_SET_ITEM( tmp_assign_source_160, 0, tmp_tuple_element_26 );
        assert( tmp_class_creation_27__bases == NULL );
        tmp_class_creation_27__bases = tmp_assign_source_160;
    }
    {
        PyObject *tmp_assign_source_161;
        {
            PyObject *tmp_set_locals_26;
            tmp_set_locals_26 = PyDict_New();
            locals_urllib3$exceptions_186 = tmp_set_locals_26;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_186, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_50f562faa7eed1b409bdd05c97fc14f2;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_186, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_161 = locals_urllib3$exceptions_186;
        Py_INCREF( tmp_assign_source_161 );
        goto try_return_handler_103;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_103:;
        Py_DECREF( locals_urllib3$exceptions_186 );
        locals_urllib3$exceptions_186 = NULL;
        goto outline_result_51;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_51:;
        assert( tmp_class_creation_27__class_dict == NULL );
        tmp_class_creation_27__class_dict = tmp_assign_source_161;
    }
    {
        PyObject *tmp_assign_source_162;
        nuitka_bool tmp_condition_result_27;
        PyObject *tmp_key_name_53;
        PyObject *tmp_dict_name_53;
        PyObject *tmp_dict_name_54;
        PyObject *tmp_key_name_54;
        tmp_key_name_53 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_27__class_dict );
        tmp_dict_name_53 = tmp_class_creation_27__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_53, tmp_key_name_53 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;

            goto try_except_handler_102;
        }
        tmp_condition_result_27 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_27 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_27;
        }
        else
        {
            goto condexpr_false_27;
        }
        condexpr_true_27:;
        CHECK_OBJECT( tmp_class_creation_27__class_dict );
        tmp_dict_name_54 = tmp_class_creation_27__class_dict;
        tmp_key_name_54 = const_str_plain___metaclass__;
        tmp_assign_source_162 = DICT_GET_ITEM( tmp_dict_name_54, tmp_key_name_54 );
        if ( tmp_assign_source_162 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;

            goto try_except_handler_102;
        }
        goto condexpr_end_27;
        condexpr_false_27:;
        {
            PyObject *tmp_assign_source_163;
            PyObject *tmp_subscribed_name_26;
            PyObject *tmp_subscript_name_26;
            CHECK_OBJECT( tmp_class_creation_27__bases );
            tmp_subscribed_name_26 = tmp_class_creation_27__bases;
            tmp_subscript_name_26 = const_int_0;
            tmp_assign_source_163 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_26, tmp_subscript_name_26, 0 );
            if ( tmp_assign_source_163 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 186;

                goto try_except_handler_102;
            }
            assert( tmp_select_metaclass_27__base == NULL );
            tmp_select_metaclass_27__base = tmp_assign_source_163;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_26;
            CHECK_OBJECT( tmp_select_metaclass_27__base );
            tmp_source_name_26 = tmp_select_metaclass_27__base;
            tmp_assign_source_162 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_26 );
            if ( tmp_assign_source_162 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 186;

                goto try_except_handler_105;
            }
            goto try_return_handler_104;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_105:;
        exception_keeper_type_52 = exception_type;
        exception_keeper_value_52 = exception_value;
        exception_keeper_tb_52 = exception_tb;
        exception_keeper_lineno_52 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_26;
            Py_DECREF( exception_keeper_type_52 );
            Py_XDECREF( exception_keeper_value_52 );
            Py_XDECREF( exception_keeper_tb_52 );
            CHECK_OBJECT( tmp_select_metaclass_27__base );
            tmp_type_arg_26 = tmp_select_metaclass_27__base;
            tmp_assign_source_162 = BUILTIN_TYPE1( tmp_type_arg_26 );
            assert( !(tmp_assign_source_162 == NULL) );
            goto try_return_handler_104;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_104:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_27__base );
        Py_DECREF( tmp_select_metaclass_27__base );
        tmp_select_metaclass_27__base = NULL;

        goto outline_result_52;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_27__base );
        Py_DECREF( tmp_select_metaclass_27__base );
        tmp_select_metaclass_27__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_52:;
        condexpr_end_27:;
        assert( tmp_class_creation_27__metaclass == NULL );
        tmp_class_creation_27__metaclass = tmp_assign_source_162;
    }
    {
        PyObject *tmp_assign_source_164;
        PyObject *tmp_called_name_27;
        PyObject *tmp_args_element_name_79;
        PyObject *tmp_args_element_name_80;
        PyObject *tmp_args_element_name_81;
        CHECK_OBJECT( tmp_class_creation_27__metaclass );
        tmp_called_name_27 = tmp_class_creation_27__metaclass;
        tmp_args_element_name_79 = const_str_plain_DependencyWarning;
        CHECK_OBJECT( tmp_class_creation_27__bases );
        tmp_args_element_name_80 = tmp_class_creation_27__bases;
        CHECK_OBJECT( tmp_class_creation_27__class_dict );
        tmp_args_element_name_81 = tmp_class_creation_27__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 186;
        {
            PyObject *call_args[] = { tmp_args_element_name_79, tmp_args_element_name_80, tmp_args_element_name_81 };
            tmp_assign_source_164 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_27, call_args );
        }

        if ( tmp_assign_source_164 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;

            goto try_except_handler_102;
        }
        assert( tmp_class_creation_27__class == NULL );
        tmp_class_creation_27__class = tmp_assign_source_164;
    }
    goto try_end_27;
    // Exception handler code:
    try_except_handler_102:;
    exception_keeper_type_53 = exception_type;
    exception_keeper_value_53 = exception_value;
    exception_keeper_tb_53 = exception_tb;
    exception_keeper_lineno_53 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_27__bases );
    tmp_class_creation_27__bases = NULL;

    Py_XDECREF( tmp_class_creation_27__class_dict );
    tmp_class_creation_27__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_27__metaclass );
    tmp_class_creation_27__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_53;
    exception_value = exception_keeper_value_53;
    exception_tb = exception_keeper_tb_53;
    exception_lineno = exception_keeper_lineno_53;

    goto frame_exception_exit_1;
    // End of try:
    try_end_27:;
    {
        PyObject *tmp_assign_source_165;
        CHECK_OBJECT( tmp_class_creation_27__class );
        tmp_assign_source_165 = tmp_class_creation_27__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_DependencyWarning, tmp_assign_source_165 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_27__class );
    Py_DECREF( tmp_class_creation_27__class );
    tmp_class_creation_27__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_27__bases );
    Py_DECREF( tmp_class_creation_27__bases );
    tmp_class_creation_27__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_27__class_dict );
    Py_DECREF( tmp_class_creation_27__class_dict );
    tmp_class_creation_27__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_27__metaclass );
    Py_DECREF( tmp_class_creation_27__metaclass );
    tmp_class_creation_27__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_mvar_value_30;
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ProtocolError );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProtocolError );
        }

        if ( tmp_mvar_value_30 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ProtocolError" );
            exception_tb = NULL;

            exception_lineno = 194;

            goto try_except_handler_106;
        }

        tmp_tuple_element_27 = tmp_mvar_value_30;
        tmp_assign_source_166 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_27 );
        PyTuple_SET_ITEM( tmp_assign_source_166, 0, tmp_tuple_element_27 );
        tmp_tuple_element_27 = PyExc_ValueError;
        Py_INCREF( tmp_tuple_element_27 );
        PyTuple_SET_ITEM( tmp_assign_source_166, 1, tmp_tuple_element_27 );
        assert( tmp_class_creation_28__bases == NULL );
        tmp_class_creation_28__bases = tmp_assign_source_166;
    }
    {
        PyObject *tmp_assign_source_167;
        {
            PyObject *tmp_set_locals_27;
            tmp_set_locals_27 = PyDict_New();
            locals_urllib3$exceptions_194 = tmp_set_locals_27;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_194, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_b54ef1348f0bbeb78bd78ac4903b9341;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_194, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_167 = locals_urllib3$exceptions_194;
        Py_INCREF( tmp_assign_source_167 );
        goto try_return_handler_107;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_107:;
        Py_DECREF( locals_urllib3$exceptions_194 );
        locals_urllib3$exceptions_194 = NULL;
        goto outline_result_53;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_53:;
        assert( tmp_class_creation_28__class_dict == NULL );
        tmp_class_creation_28__class_dict = tmp_assign_source_167;
    }
    {
        PyObject *tmp_assign_source_168;
        nuitka_bool tmp_condition_result_28;
        PyObject *tmp_key_name_55;
        PyObject *tmp_dict_name_55;
        PyObject *tmp_dict_name_56;
        PyObject *tmp_key_name_56;
        tmp_key_name_55 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_28__class_dict );
        tmp_dict_name_55 = tmp_class_creation_28__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_55, tmp_key_name_55 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;

            goto try_except_handler_106;
        }
        tmp_condition_result_28 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_28 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_28;
        }
        else
        {
            goto condexpr_false_28;
        }
        condexpr_true_28:;
        CHECK_OBJECT( tmp_class_creation_28__class_dict );
        tmp_dict_name_56 = tmp_class_creation_28__class_dict;
        tmp_key_name_56 = const_str_plain___metaclass__;
        tmp_assign_source_168 = DICT_GET_ITEM( tmp_dict_name_56, tmp_key_name_56 );
        if ( tmp_assign_source_168 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;

            goto try_except_handler_106;
        }
        goto condexpr_end_28;
        condexpr_false_28:;
        {
            PyObject *tmp_assign_source_169;
            PyObject *tmp_subscribed_name_27;
            PyObject *tmp_subscript_name_27;
            CHECK_OBJECT( tmp_class_creation_28__bases );
            tmp_subscribed_name_27 = tmp_class_creation_28__bases;
            tmp_subscript_name_27 = const_int_0;
            tmp_assign_source_169 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_27, tmp_subscript_name_27, 0 );
            if ( tmp_assign_source_169 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 194;

                goto try_except_handler_106;
            }
            assert( tmp_select_metaclass_28__base == NULL );
            tmp_select_metaclass_28__base = tmp_assign_source_169;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_27;
            CHECK_OBJECT( tmp_select_metaclass_28__base );
            tmp_source_name_27 = tmp_select_metaclass_28__base;
            tmp_assign_source_168 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_27 );
            if ( tmp_assign_source_168 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 194;

                goto try_except_handler_109;
            }
            goto try_return_handler_108;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_109:;
        exception_keeper_type_54 = exception_type;
        exception_keeper_value_54 = exception_value;
        exception_keeper_tb_54 = exception_tb;
        exception_keeper_lineno_54 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_27;
            Py_DECREF( exception_keeper_type_54 );
            Py_XDECREF( exception_keeper_value_54 );
            Py_XDECREF( exception_keeper_tb_54 );
            CHECK_OBJECT( tmp_select_metaclass_28__base );
            tmp_type_arg_27 = tmp_select_metaclass_28__base;
            tmp_assign_source_168 = BUILTIN_TYPE1( tmp_type_arg_27 );
            assert( !(tmp_assign_source_168 == NULL) );
            goto try_return_handler_108;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_108:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_28__base );
        Py_DECREF( tmp_select_metaclass_28__base );
        tmp_select_metaclass_28__base = NULL;

        goto outline_result_54;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_28__base );
        Py_DECREF( tmp_select_metaclass_28__base );
        tmp_select_metaclass_28__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_54:;
        condexpr_end_28:;
        assert( tmp_class_creation_28__metaclass == NULL );
        tmp_class_creation_28__metaclass = tmp_assign_source_168;
    }
    {
        PyObject *tmp_assign_source_170;
        PyObject *tmp_called_name_28;
        PyObject *tmp_args_element_name_82;
        PyObject *tmp_args_element_name_83;
        PyObject *tmp_args_element_name_84;
        CHECK_OBJECT( tmp_class_creation_28__metaclass );
        tmp_called_name_28 = tmp_class_creation_28__metaclass;
        tmp_args_element_name_82 = const_str_plain_ResponseNotChunked;
        CHECK_OBJECT( tmp_class_creation_28__bases );
        tmp_args_element_name_83 = tmp_class_creation_28__bases;
        CHECK_OBJECT( tmp_class_creation_28__class_dict );
        tmp_args_element_name_84 = tmp_class_creation_28__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 194;
        {
            PyObject *call_args[] = { tmp_args_element_name_82, tmp_args_element_name_83, tmp_args_element_name_84 };
            tmp_assign_source_170 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_28, call_args );
        }

        if ( tmp_assign_source_170 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;

            goto try_except_handler_106;
        }
        assert( tmp_class_creation_28__class == NULL );
        tmp_class_creation_28__class = tmp_assign_source_170;
    }
    goto try_end_28;
    // Exception handler code:
    try_except_handler_106:;
    exception_keeper_type_55 = exception_type;
    exception_keeper_value_55 = exception_value;
    exception_keeper_tb_55 = exception_tb;
    exception_keeper_lineno_55 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_28__bases );
    tmp_class_creation_28__bases = NULL;

    Py_XDECREF( tmp_class_creation_28__class_dict );
    tmp_class_creation_28__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_28__metaclass );
    tmp_class_creation_28__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_55;
    exception_value = exception_keeper_value_55;
    exception_tb = exception_keeper_tb_55;
    exception_lineno = exception_keeper_lineno_55;

    goto frame_exception_exit_1;
    // End of try:
    try_end_28:;
    {
        PyObject *tmp_assign_source_171;
        CHECK_OBJECT( tmp_class_creation_28__class );
        tmp_assign_source_171 = tmp_class_creation_28__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ResponseNotChunked, tmp_assign_source_171 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_28__class );
    Py_DECREF( tmp_class_creation_28__class );
    tmp_class_creation_28__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_28__bases );
    Py_DECREF( tmp_class_creation_28__bases );
    tmp_class_creation_28__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_28__class_dict );
    Py_DECREF( tmp_class_creation_28__class_dict );
    tmp_class_creation_28__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_28__metaclass );
    Py_DECREF( tmp_class_creation_28__metaclass );
    tmp_class_creation_28__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_mvar_value_31;
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

        if (unlikely( tmp_mvar_value_31 == NULL ))
        {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
        }

        if ( tmp_mvar_value_31 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
            exception_tb = NULL;

            exception_lineno = 199;

            goto try_except_handler_110;
        }

        tmp_tuple_element_28 = tmp_mvar_value_31;
        tmp_assign_source_172 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_28 );
        PyTuple_SET_ITEM( tmp_assign_source_172, 0, tmp_tuple_element_28 );
        assert( tmp_class_creation_29__bases == NULL );
        tmp_class_creation_29__bases = tmp_assign_source_172;
    }
    {
        PyObject *tmp_assign_source_173;
        {
            PyObject *tmp_set_locals_28;
            tmp_set_locals_28 = PyDict_New();
            locals_urllib3$exceptions_199 = tmp_set_locals_28;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_199, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_ae47a0634b7ce883442a5d8a017f6a25;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_199, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_173 = locals_urllib3$exceptions_199;
        Py_INCREF( tmp_assign_source_173 );
        goto try_return_handler_111;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_111:;
        Py_DECREF( locals_urllib3$exceptions_199 );
        locals_urllib3$exceptions_199 = NULL;
        goto outline_result_55;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_55:;
        assert( tmp_class_creation_29__class_dict == NULL );
        tmp_class_creation_29__class_dict = tmp_assign_source_173;
    }
    {
        PyObject *tmp_assign_source_174;
        nuitka_bool tmp_condition_result_29;
        PyObject *tmp_key_name_57;
        PyObject *tmp_dict_name_57;
        PyObject *tmp_dict_name_58;
        PyObject *tmp_key_name_58;
        tmp_key_name_57 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_29__class_dict );
        tmp_dict_name_57 = tmp_class_creation_29__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_57, tmp_key_name_57 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;

            goto try_except_handler_110;
        }
        tmp_condition_result_29 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_29 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_29;
        }
        else
        {
            goto condexpr_false_29;
        }
        condexpr_true_29:;
        CHECK_OBJECT( tmp_class_creation_29__class_dict );
        tmp_dict_name_58 = tmp_class_creation_29__class_dict;
        tmp_key_name_58 = const_str_plain___metaclass__;
        tmp_assign_source_174 = DICT_GET_ITEM( tmp_dict_name_58, tmp_key_name_58 );
        if ( tmp_assign_source_174 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;

            goto try_except_handler_110;
        }
        goto condexpr_end_29;
        condexpr_false_29:;
        {
            PyObject *tmp_assign_source_175;
            PyObject *tmp_subscribed_name_28;
            PyObject *tmp_subscript_name_28;
            CHECK_OBJECT( tmp_class_creation_29__bases );
            tmp_subscribed_name_28 = tmp_class_creation_29__bases;
            tmp_subscript_name_28 = const_int_0;
            tmp_assign_source_175 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_28, tmp_subscript_name_28, 0 );
            if ( tmp_assign_source_175 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 199;

                goto try_except_handler_110;
            }
            assert( tmp_select_metaclass_29__base == NULL );
            tmp_select_metaclass_29__base = tmp_assign_source_175;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_28;
            CHECK_OBJECT( tmp_select_metaclass_29__base );
            tmp_source_name_28 = tmp_select_metaclass_29__base;
            tmp_assign_source_174 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_28 );
            if ( tmp_assign_source_174 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 199;

                goto try_except_handler_113;
            }
            goto try_return_handler_112;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_113:;
        exception_keeper_type_56 = exception_type;
        exception_keeper_value_56 = exception_value;
        exception_keeper_tb_56 = exception_tb;
        exception_keeper_lineno_56 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_28;
            Py_DECREF( exception_keeper_type_56 );
            Py_XDECREF( exception_keeper_value_56 );
            Py_XDECREF( exception_keeper_tb_56 );
            CHECK_OBJECT( tmp_select_metaclass_29__base );
            tmp_type_arg_28 = tmp_select_metaclass_29__base;
            tmp_assign_source_174 = BUILTIN_TYPE1( tmp_type_arg_28 );
            assert( !(tmp_assign_source_174 == NULL) );
            goto try_return_handler_112;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_112:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_29__base );
        Py_DECREF( tmp_select_metaclass_29__base );
        tmp_select_metaclass_29__base = NULL;

        goto outline_result_56;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_29__base );
        Py_DECREF( tmp_select_metaclass_29__base );
        tmp_select_metaclass_29__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_56:;
        condexpr_end_29:;
        assert( tmp_class_creation_29__metaclass == NULL );
        tmp_class_creation_29__metaclass = tmp_assign_source_174;
    }
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_called_name_29;
        PyObject *tmp_args_element_name_85;
        PyObject *tmp_args_element_name_86;
        PyObject *tmp_args_element_name_87;
        CHECK_OBJECT( tmp_class_creation_29__metaclass );
        tmp_called_name_29 = tmp_class_creation_29__metaclass;
        tmp_args_element_name_85 = const_str_plain_BodyNotHttplibCompatible;
        CHECK_OBJECT( tmp_class_creation_29__bases );
        tmp_args_element_name_86 = tmp_class_creation_29__bases;
        CHECK_OBJECT( tmp_class_creation_29__class_dict );
        tmp_args_element_name_87 = tmp_class_creation_29__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 199;
        {
            PyObject *call_args[] = { tmp_args_element_name_85, tmp_args_element_name_86, tmp_args_element_name_87 };
            tmp_assign_source_176 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_29, call_args );
        }

        if ( tmp_assign_source_176 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;

            goto try_except_handler_110;
        }
        assert( tmp_class_creation_29__class == NULL );
        tmp_class_creation_29__class = tmp_assign_source_176;
    }
    goto try_end_29;
    // Exception handler code:
    try_except_handler_110:;
    exception_keeper_type_57 = exception_type;
    exception_keeper_value_57 = exception_value;
    exception_keeper_tb_57 = exception_tb;
    exception_keeper_lineno_57 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_29__bases );
    tmp_class_creation_29__bases = NULL;

    Py_XDECREF( tmp_class_creation_29__class_dict );
    tmp_class_creation_29__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_29__metaclass );
    tmp_class_creation_29__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_57;
    exception_value = exception_keeper_value_57;
    exception_tb = exception_keeper_tb_57;
    exception_lineno = exception_keeper_lineno_57;

    goto frame_exception_exit_1;
    // End of try:
    try_end_29:;
    {
        PyObject *tmp_assign_source_177;
        CHECK_OBJECT( tmp_class_creation_29__class );
        tmp_assign_source_177 = tmp_class_creation_29__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_BodyNotHttplibCompatible, tmp_assign_source_177 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_29__class );
    Py_DECREF( tmp_class_creation_29__class );
    tmp_class_creation_29__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_29__bases );
    Py_DECREF( tmp_class_creation_29__bases );
    tmp_class_creation_29__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_29__class_dict );
    Py_DECREF( tmp_class_creation_29__class_dict );
    tmp_class_creation_29__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_29__metaclass );
    Py_DECREF( tmp_class_creation_29__metaclass );
    tmp_class_creation_29__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_178;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_mvar_value_32;
        PyObject *tmp_mvar_value_33;
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

        if (unlikely( tmp_mvar_value_32 == NULL ))
        {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
        }

        if ( tmp_mvar_value_32 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
            exception_tb = NULL;

            exception_lineno = 207;

            goto try_except_handler_114;
        }

        tmp_tuple_element_29 = tmp_mvar_value_32;
        tmp_assign_source_178 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_29 );
        PyTuple_SET_ITEM( tmp_assign_source_178, 0, tmp_tuple_element_29 );
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_httplib_IncompleteRead );

        if (unlikely( tmp_mvar_value_33 == NULL ))
        {
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_httplib_IncompleteRead );
        }

        if ( tmp_mvar_value_33 == NULL )
        {
            Py_DECREF( tmp_assign_source_178 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "httplib_IncompleteRead" );
            exception_tb = NULL;

            exception_lineno = 207;

            goto try_except_handler_114;
        }

        tmp_tuple_element_29 = tmp_mvar_value_33;
        Py_INCREF( tmp_tuple_element_29 );
        PyTuple_SET_ITEM( tmp_assign_source_178, 1, tmp_tuple_element_29 );
        assert( tmp_class_creation_30__bases == NULL );
        tmp_class_creation_30__bases = tmp_assign_source_178;
    }
    {
        PyObject *tmp_assign_source_179;
        {
            PyObject *tmp_set_locals_29;
            tmp_set_locals_29 = PyDict_New();
            locals_urllib3$exceptions_207 = tmp_set_locals_29;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_207, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_e7d525c37e8e3bf1b29419172dc726f6;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_207, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_8___init__(  );



        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_207, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_9___repr__(  );



        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_207, const_str_plain___repr__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_179 = locals_urllib3$exceptions_207;
        Py_INCREF( tmp_assign_source_179 );
        goto try_return_handler_115;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_115:;
        Py_DECREF( locals_urllib3$exceptions_207 );
        locals_urllib3$exceptions_207 = NULL;
        goto outline_result_57;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_57:;
        assert( tmp_class_creation_30__class_dict == NULL );
        tmp_class_creation_30__class_dict = tmp_assign_source_179;
    }
    {
        PyObject *tmp_assign_source_180;
        nuitka_bool tmp_condition_result_30;
        PyObject *tmp_key_name_59;
        PyObject *tmp_dict_name_59;
        PyObject *tmp_dict_name_60;
        PyObject *tmp_key_name_60;
        tmp_key_name_59 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_30__class_dict );
        tmp_dict_name_59 = tmp_class_creation_30__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_59, tmp_key_name_59 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;

            goto try_except_handler_114;
        }
        tmp_condition_result_30 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_30 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_30;
        }
        else
        {
            goto condexpr_false_30;
        }
        condexpr_true_30:;
        CHECK_OBJECT( tmp_class_creation_30__class_dict );
        tmp_dict_name_60 = tmp_class_creation_30__class_dict;
        tmp_key_name_60 = const_str_plain___metaclass__;
        tmp_assign_source_180 = DICT_GET_ITEM( tmp_dict_name_60, tmp_key_name_60 );
        if ( tmp_assign_source_180 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;

            goto try_except_handler_114;
        }
        goto condexpr_end_30;
        condexpr_false_30:;
        {
            PyObject *tmp_assign_source_181;
            PyObject *tmp_subscribed_name_29;
            PyObject *tmp_subscript_name_29;
            CHECK_OBJECT( tmp_class_creation_30__bases );
            tmp_subscribed_name_29 = tmp_class_creation_30__bases;
            tmp_subscript_name_29 = const_int_0;
            tmp_assign_source_181 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_29, tmp_subscript_name_29, 0 );
            if ( tmp_assign_source_181 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 207;

                goto try_except_handler_114;
            }
            assert( tmp_select_metaclass_30__base == NULL );
            tmp_select_metaclass_30__base = tmp_assign_source_181;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_29;
            CHECK_OBJECT( tmp_select_metaclass_30__base );
            tmp_source_name_29 = tmp_select_metaclass_30__base;
            tmp_assign_source_180 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_29 );
            if ( tmp_assign_source_180 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 207;

                goto try_except_handler_117;
            }
            goto try_return_handler_116;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_117:;
        exception_keeper_type_58 = exception_type;
        exception_keeper_value_58 = exception_value;
        exception_keeper_tb_58 = exception_tb;
        exception_keeper_lineno_58 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_29;
            Py_DECREF( exception_keeper_type_58 );
            Py_XDECREF( exception_keeper_value_58 );
            Py_XDECREF( exception_keeper_tb_58 );
            CHECK_OBJECT( tmp_select_metaclass_30__base );
            tmp_type_arg_29 = tmp_select_metaclass_30__base;
            tmp_assign_source_180 = BUILTIN_TYPE1( tmp_type_arg_29 );
            assert( !(tmp_assign_source_180 == NULL) );
            goto try_return_handler_116;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_116:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_30__base );
        Py_DECREF( tmp_select_metaclass_30__base );
        tmp_select_metaclass_30__base = NULL;

        goto outline_result_58;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_30__base );
        Py_DECREF( tmp_select_metaclass_30__base );
        tmp_select_metaclass_30__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_58:;
        condexpr_end_30:;
        assert( tmp_class_creation_30__metaclass == NULL );
        tmp_class_creation_30__metaclass = tmp_assign_source_180;
    }
    {
        PyObject *tmp_assign_source_182;
        PyObject *tmp_called_name_30;
        PyObject *tmp_args_element_name_88;
        PyObject *tmp_args_element_name_89;
        PyObject *tmp_args_element_name_90;
        CHECK_OBJECT( tmp_class_creation_30__metaclass );
        tmp_called_name_30 = tmp_class_creation_30__metaclass;
        tmp_args_element_name_88 = const_str_plain_IncompleteRead;
        CHECK_OBJECT( tmp_class_creation_30__bases );
        tmp_args_element_name_89 = tmp_class_creation_30__bases;
        CHECK_OBJECT( tmp_class_creation_30__class_dict );
        tmp_args_element_name_90 = tmp_class_creation_30__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 207;
        {
            PyObject *call_args[] = { tmp_args_element_name_88, tmp_args_element_name_89, tmp_args_element_name_90 };
            tmp_assign_source_182 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_30, call_args );
        }

        if ( tmp_assign_source_182 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;

            goto try_except_handler_114;
        }
        assert( tmp_class_creation_30__class == NULL );
        tmp_class_creation_30__class = tmp_assign_source_182;
    }
    goto try_end_30;
    // Exception handler code:
    try_except_handler_114:;
    exception_keeper_type_59 = exception_type;
    exception_keeper_value_59 = exception_value;
    exception_keeper_tb_59 = exception_tb;
    exception_keeper_lineno_59 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_30__bases );
    tmp_class_creation_30__bases = NULL;

    Py_XDECREF( tmp_class_creation_30__class_dict );
    tmp_class_creation_30__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_30__metaclass );
    tmp_class_creation_30__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_59;
    exception_value = exception_keeper_value_59;
    exception_tb = exception_keeper_tb_59;
    exception_lineno = exception_keeper_lineno_59;

    goto frame_exception_exit_1;
    // End of try:
    try_end_30:;
    {
        PyObject *tmp_assign_source_183;
        CHECK_OBJECT( tmp_class_creation_30__class );
        tmp_assign_source_183 = tmp_class_creation_30__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_IncompleteRead, tmp_assign_source_183 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_30__class );
    Py_DECREF( tmp_class_creation_30__class );
    tmp_class_creation_30__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_30__bases );
    Py_DECREF( tmp_class_creation_30__bases );
    tmp_class_creation_30__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_30__class_dict );
    Py_DECREF( tmp_class_creation_30__class_dict );
    tmp_class_creation_30__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_30__metaclass );
    Py_DECREF( tmp_class_creation_30__metaclass );
    tmp_class_creation_30__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_184;
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_mvar_value_34;
        tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

        if (unlikely( tmp_mvar_value_34 == NULL ))
        {
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
        }

        if ( tmp_mvar_value_34 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
            exception_tb = NULL;

            exception_lineno = 223;

            goto try_except_handler_118;
        }

        tmp_tuple_element_30 = tmp_mvar_value_34;
        tmp_assign_source_184 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_30 );
        PyTuple_SET_ITEM( tmp_assign_source_184, 0, tmp_tuple_element_30 );
        assert( tmp_class_creation_31__bases == NULL );
        tmp_class_creation_31__bases = tmp_assign_source_184;
    }
    {
        PyObject *tmp_assign_source_185;
        {
            PyObject *tmp_set_locals_30;
            tmp_set_locals_30 = PyDict_New();
            locals_urllib3$exceptions_223 = tmp_set_locals_30;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_223, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_28db377b4c4aaf2881b08e822881aecb;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_223, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_185 = locals_urllib3$exceptions_223;
        Py_INCREF( tmp_assign_source_185 );
        goto try_return_handler_119;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_119:;
        Py_DECREF( locals_urllib3$exceptions_223 );
        locals_urllib3$exceptions_223 = NULL;
        goto outline_result_59;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_59:;
        assert( tmp_class_creation_31__class_dict == NULL );
        tmp_class_creation_31__class_dict = tmp_assign_source_185;
    }
    {
        PyObject *tmp_assign_source_186;
        nuitka_bool tmp_condition_result_31;
        PyObject *tmp_key_name_61;
        PyObject *tmp_dict_name_61;
        PyObject *tmp_dict_name_62;
        PyObject *tmp_key_name_62;
        tmp_key_name_61 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_31__class_dict );
        tmp_dict_name_61 = tmp_class_creation_31__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_61, tmp_key_name_61 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;

            goto try_except_handler_118;
        }
        tmp_condition_result_31 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_31 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_31;
        }
        else
        {
            goto condexpr_false_31;
        }
        condexpr_true_31:;
        CHECK_OBJECT( tmp_class_creation_31__class_dict );
        tmp_dict_name_62 = tmp_class_creation_31__class_dict;
        tmp_key_name_62 = const_str_plain___metaclass__;
        tmp_assign_source_186 = DICT_GET_ITEM( tmp_dict_name_62, tmp_key_name_62 );
        if ( tmp_assign_source_186 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;

            goto try_except_handler_118;
        }
        goto condexpr_end_31;
        condexpr_false_31:;
        {
            PyObject *tmp_assign_source_187;
            PyObject *tmp_subscribed_name_30;
            PyObject *tmp_subscript_name_30;
            CHECK_OBJECT( tmp_class_creation_31__bases );
            tmp_subscribed_name_30 = tmp_class_creation_31__bases;
            tmp_subscript_name_30 = const_int_0;
            tmp_assign_source_187 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_30, tmp_subscript_name_30, 0 );
            if ( tmp_assign_source_187 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 223;

                goto try_except_handler_118;
            }
            assert( tmp_select_metaclass_31__base == NULL );
            tmp_select_metaclass_31__base = tmp_assign_source_187;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_30;
            CHECK_OBJECT( tmp_select_metaclass_31__base );
            tmp_source_name_30 = tmp_select_metaclass_31__base;
            tmp_assign_source_186 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_30 );
            if ( tmp_assign_source_186 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 223;

                goto try_except_handler_121;
            }
            goto try_return_handler_120;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_121:;
        exception_keeper_type_60 = exception_type;
        exception_keeper_value_60 = exception_value;
        exception_keeper_tb_60 = exception_tb;
        exception_keeper_lineno_60 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_30;
            Py_DECREF( exception_keeper_type_60 );
            Py_XDECREF( exception_keeper_value_60 );
            Py_XDECREF( exception_keeper_tb_60 );
            CHECK_OBJECT( tmp_select_metaclass_31__base );
            tmp_type_arg_30 = tmp_select_metaclass_31__base;
            tmp_assign_source_186 = BUILTIN_TYPE1( tmp_type_arg_30 );
            assert( !(tmp_assign_source_186 == NULL) );
            goto try_return_handler_120;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_120:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_31__base );
        Py_DECREF( tmp_select_metaclass_31__base );
        tmp_select_metaclass_31__base = NULL;

        goto outline_result_60;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_31__base );
        Py_DECREF( tmp_select_metaclass_31__base );
        tmp_select_metaclass_31__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_60:;
        condexpr_end_31:;
        assert( tmp_class_creation_31__metaclass == NULL );
        tmp_class_creation_31__metaclass = tmp_assign_source_186;
    }
    {
        PyObject *tmp_assign_source_188;
        PyObject *tmp_called_name_31;
        PyObject *tmp_args_element_name_91;
        PyObject *tmp_args_element_name_92;
        PyObject *tmp_args_element_name_93;
        CHECK_OBJECT( tmp_class_creation_31__metaclass );
        tmp_called_name_31 = tmp_class_creation_31__metaclass;
        tmp_args_element_name_91 = const_str_plain_InvalidHeader;
        CHECK_OBJECT( tmp_class_creation_31__bases );
        tmp_args_element_name_92 = tmp_class_creation_31__bases;
        CHECK_OBJECT( tmp_class_creation_31__class_dict );
        tmp_args_element_name_93 = tmp_class_creation_31__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = { tmp_args_element_name_91, tmp_args_element_name_92, tmp_args_element_name_93 };
            tmp_assign_source_188 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_31, call_args );
        }

        if ( tmp_assign_source_188 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;

            goto try_except_handler_118;
        }
        assert( tmp_class_creation_31__class == NULL );
        tmp_class_creation_31__class = tmp_assign_source_188;
    }
    goto try_end_31;
    // Exception handler code:
    try_except_handler_118:;
    exception_keeper_type_61 = exception_type;
    exception_keeper_value_61 = exception_value;
    exception_keeper_tb_61 = exception_tb;
    exception_keeper_lineno_61 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_31__bases );
    tmp_class_creation_31__bases = NULL;

    Py_XDECREF( tmp_class_creation_31__class_dict );
    tmp_class_creation_31__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_31__metaclass );
    tmp_class_creation_31__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_61;
    exception_value = exception_keeper_value_61;
    exception_tb = exception_keeper_tb_61;
    exception_lineno = exception_keeper_lineno_61;

    goto frame_exception_exit_1;
    // End of try:
    try_end_31:;
    {
        PyObject *tmp_assign_source_189;
        CHECK_OBJECT( tmp_class_creation_31__class );
        tmp_assign_source_189 = tmp_class_creation_31__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidHeader, tmp_assign_source_189 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_31__class );
    Py_DECREF( tmp_class_creation_31__class );
    tmp_class_creation_31__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_31__bases );
    Py_DECREF( tmp_class_creation_31__bases );
    tmp_class_creation_31__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_31__class_dict );
    Py_DECREF( tmp_class_creation_31__class_dict );
    tmp_class_creation_31__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_31__metaclass );
    Py_DECREF( tmp_class_creation_31__metaclass );
    tmp_class_creation_31__metaclass = NULL;

    {
        PyObject *tmp_assign_source_190;
        {
            PyObject *tmp_assign_source_191;
            tmp_assign_source_191 = MAKE_FUNCTION_urllib3$exceptions$$$function_10___init__(  );



            assert( tmp_locals_urllib3$exceptions_228_key___init__ == NULL );
            tmp_locals_urllib3$exceptions_228_key___init__ = tmp_assign_source_191;
        }
        // Tried code:
        {
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_dict_value_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
            tmp_dict_key_1 = const_str_plain___module__;
            tmp_assign_source_190 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem( tmp_assign_source_190, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_2 = const_str_digest_1c6dffdd7a7bcf43af16d1526d19ef10;
            tmp_dict_key_2 = const_str_plain___doc__;
            tmp_res = PyDict_SetItem( tmp_assign_source_190, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_urllib3$exceptions_228_key___init__ );
            tmp_dict_value_3 = tmp_locals_urllib3$exceptions_228_key___init__;
            tmp_dict_key_3 = const_str_plain___init__;
            tmp_res = PyDict_SetItem( tmp_assign_source_190, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            goto try_return_handler_122;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_122:;
        CHECK_OBJECT( (PyObject *)tmp_locals_urllib3$exceptions_228_key___init__ );
        Py_DECREF( tmp_locals_urllib3$exceptions_228_key___init__ );
        tmp_locals_urllib3$exceptions_228_key___init__ = NULL;

        goto outline_result_61;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_61:;
        assert( tmp_class_creation_32__class_dict == NULL );
        tmp_class_creation_32__class_dict = tmp_assign_source_190;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_192;
        nuitka_bool tmp_condition_result_32;
        PyObject *tmp_key_name_63;
        PyObject *tmp_dict_name_63;
        PyObject *tmp_dict_name_64;
        PyObject *tmp_key_name_64;
        tmp_key_name_63 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_32__class_dict );
        tmp_dict_name_63 = tmp_class_creation_32__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_63, tmp_key_name_63 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;

            goto try_except_handler_123;
        }
        tmp_condition_result_32 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_32 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_32;
        }
        else
        {
            goto condexpr_false_32;
        }
        condexpr_true_32:;
        CHECK_OBJECT( tmp_class_creation_32__class_dict );
        tmp_dict_name_64 = tmp_class_creation_32__class_dict;
        tmp_key_name_64 = const_str_plain___metaclass__;
        tmp_assign_source_192 = DICT_GET_ITEM( tmp_dict_name_64, tmp_key_name_64 );
        if ( tmp_assign_source_192 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;

            goto try_except_handler_123;
        }
        goto condexpr_end_32;
        condexpr_false_32:;
        tmp_assign_source_192 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_192 );
        condexpr_end_32:;
        assert( tmp_class_creation_32__metaclass == NULL );
        tmp_class_creation_32__metaclass = tmp_assign_source_192;
    }
    {
        PyObject *tmp_assign_source_193;
        PyObject *tmp_called_name_32;
        PyObject *tmp_args_element_name_94;
        PyObject *tmp_args_element_name_95;
        PyObject *tmp_args_element_name_96;
        CHECK_OBJECT( tmp_class_creation_32__metaclass );
        tmp_called_name_32 = tmp_class_creation_32__metaclass;
        tmp_args_element_name_94 = const_str_plain_ProxySchemeUnknown;
        tmp_args_element_name_95 = const_tuple_type_AssertionError_type_ValueError_tuple;
        CHECK_OBJECT( tmp_class_creation_32__class_dict );
        tmp_args_element_name_96 = tmp_class_creation_32__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 228;
        {
            PyObject *call_args[] = { tmp_args_element_name_94, tmp_args_element_name_95, tmp_args_element_name_96 };
            tmp_assign_source_193 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_32, call_args );
        }

        if ( tmp_assign_source_193 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;

            goto try_except_handler_123;
        }
        assert( tmp_class_creation_32__class == NULL );
        tmp_class_creation_32__class = tmp_assign_source_193;
    }
    goto try_end_32;
    // Exception handler code:
    try_except_handler_123:;
    exception_keeper_type_62 = exception_type;
    exception_keeper_value_62 = exception_value;
    exception_keeper_tb_62 = exception_tb;
    exception_keeper_lineno_62 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_32__class_dict );
    Py_DECREF( tmp_class_creation_32__class_dict );
    tmp_class_creation_32__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_32__metaclass );
    tmp_class_creation_32__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_62;
    exception_value = exception_keeper_value_62;
    exception_tb = exception_keeper_tb_62;
    exception_lineno = exception_keeper_lineno_62;

    goto frame_exception_exit_1;
    // End of try:
    try_end_32:;
    {
        PyObject *tmp_assign_source_194;
        CHECK_OBJECT( tmp_class_creation_32__class );
        tmp_assign_source_194 = tmp_class_creation_32__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ProxySchemeUnknown, tmp_assign_source_194 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_32__class );
    Py_DECREF( tmp_class_creation_32__class );
    tmp_class_creation_32__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_32__class_dict );
    Py_DECREF( tmp_class_creation_32__class_dict );
    tmp_class_creation_32__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_32__metaclass );
    Py_DECREF( tmp_class_creation_32__metaclass );
    tmp_class_creation_32__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_195;
        PyObject *tmp_tuple_element_31;
        PyObject *tmp_mvar_value_35;
        tmp_mvar_value_35 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

        if (unlikely( tmp_mvar_value_35 == NULL ))
        {
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
        }

        if ( tmp_mvar_value_35 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
            exception_tb = NULL;

            exception_lineno = 237;

            goto try_except_handler_124;
        }

        tmp_tuple_element_31 = tmp_mvar_value_35;
        tmp_assign_source_195 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_31 );
        PyTuple_SET_ITEM( tmp_assign_source_195, 0, tmp_tuple_element_31 );
        assert( tmp_class_creation_33__bases == NULL );
        tmp_class_creation_33__bases = tmp_assign_source_195;
    }
    {
        PyObject *tmp_assign_source_196;
        {
            PyObject *tmp_set_locals_31;
            tmp_set_locals_31 = PyDict_New();
            locals_urllib3$exceptions_237 = tmp_set_locals_31;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_237, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_6b2631bb00bf77812f4e433630f72b85;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_237, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_11___init__(  );



        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_237, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_196 = locals_urllib3$exceptions_237;
        Py_INCREF( tmp_assign_source_196 );
        goto try_return_handler_125;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_125:;
        Py_DECREF( locals_urllib3$exceptions_237 );
        locals_urllib3$exceptions_237 = NULL;
        goto outline_result_62;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_62:;
        assert( tmp_class_creation_33__class_dict == NULL );
        tmp_class_creation_33__class_dict = tmp_assign_source_196;
    }
    {
        PyObject *tmp_assign_source_197;
        nuitka_bool tmp_condition_result_33;
        PyObject *tmp_key_name_65;
        PyObject *tmp_dict_name_65;
        PyObject *tmp_dict_name_66;
        PyObject *tmp_key_name_66;
        tmp_key_name_65 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_33__class_dict );
        tmp_dict_name_65 = tmp_class_creation_33__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_65, tmp_key_name_65 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;

            goto try_except_handler_124;
        }
        tmp_condition_result_33 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_33 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_33;
        }
        else
        {
            goto condexpr_false_33;
        }
        condexpr_true_33:;
        CHECK_OBJECT( tmp_class_creation_33__class_dict );
        tmp_dict_name_66 = tmp_class_creation_33__class_dict;
        tmp_key_name_66 = const_str_plain___metaclass__;
        tmp_assign_source_197 = DICT_GET_ITEM( tmp_dict_name_66, tmp_key_name_66 );
        if ( tmp_assign_source_197 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;

            goto try_except_handler_124;
        }
        goto condexpr_end_33;
        condexpr_false_33:;
        {
            PyObject *tmp_assign_source_198;
            PyObject *tmp_subscribed_name_31;
            PyObject *tmp_subscript_name_31;
            CHECK_OBJECT( tmp_class_creation_33__bases );
            tmp_subscribed_name_31 = tmp_class_creation_33__bases;
            tmp_subscript_name_31 = const_int_0;
            tmp_assign_source_198 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_31, tmp_subscript_name_31, 0 );
            if ( tmp_assign_source_198 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 237;

                goto try_except_handler_124;
            }
            assert( tmp_select_metaclass_33__base == NULL );
            tmp_select_metaclass_33__base = tmp_assign_source_198;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_31;
            CHECK_OBJECT( tmp_select_metaclass_33__base );
            tmp_source_name_31 = tmp_select_metaclass_33__base;
            tmp_assign_source_197 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_31 );
            if ( tmp_assign_source_197 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 237;

                goto try_except_handler_127;
            }
            goto try_return_handler_126;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_127:;
        exception_keeper_type_63 = exception_type;
        exception_keeper_value_63 = exception_value;
        exception_keeper_tb_63 = exception_tb;
        exception_keeper_lineno_63 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_31;
            Py_DECREF( exception_keeper_type_63 );
            Py_XDECREF( exception_keeper_value_63 );
            Py_XDECREF( exception_keeper_tb_63 );
            CHECK_OBJECT( tmp_select_metaclass_33__base );
            tmp_type_arg_31 = tmp_select_metaclass_33__base;
            tmp_assign_source_197 = BUILTIN_TYPE1( tmp_type_arg_31 );
            assert( !(tmp_assign_source_197 == NULL) );
            goto try_return_handler_126;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_126:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_33__base );
        Py_DECREF( tmp_select_metaclass_33__base );
        tmp_select_metaclass_33__base = NULL;

        goto outline_result_63;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_33__base );
        Py_DECREF( tmp_select_metaclass_33__base );
        tmp_select_metaclass_33__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_63:;
        condexpr_end_33:;
        assert( tmp_class_creation_33__metaclass == NULL );
        tmp_class_creation_33__metaclass = tmp_assign_source_197;
    }
    {
        PyObject *tmp_assign_source_199;
        PyObject *tmp_called_name_33;
        PyObject *tmp_args_element_name_97;
        PyObject *tmp_args_element_name_98;
        PyObject *tmp_args_element_name_99;
        CHECK_OBJECT( tmp_class_creation_33__metaclass );
        tmp_called_name_33 = tmp_class_creation_33__metaclass;
        tmp_args_element_name_97 = const_str_plain_HeaderParsingError;
        CHECK_OBJECT( tmp_class_creation_33__bases );
        tmp_args_element_name_98 = tmp_class_creation_33__bases;
        CHECK_OBJECT( tmp_class_creation_33__class_dict );
        tmp_args_element_name_99 = tmp_class_creation_33__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 237;
        {
            PyObject *call_args[] = { tmp_args_element_name_97, tmp_args_element_name_98, tmp_args_element_name_99 };
            tmp_assign_source_199 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_33, call_args );
        }

        if ( tmp_assign_source_199 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;

            goto try_except_handler_124;
        }
        assert( tmp_class_creation_33__class == NULL );
        tmp_class_creation_33__class = tmp_assign_source_199;
    }
    goto try_end_33;
    // Exception handler code:
    try_except_handler_124:;
    exception_keeper_type_64 = exception_type;
    exception_keeper_value_64 = exception_value;
    exception_keeper_tb_64 = exception_tb;
    exception_keeper_lineno_64 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_33__bases );
    tmp_class_creation_33__bases = NULL;

    Py_XDECREF( tmp_class_creation_33__class_dict );
    tmp_class_creation_33__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_33__metaclass );
    tmp_class_creation_33__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_64;
    exception_value = exception_keeper_value_64;
    exception_tb = exception_keeper_tb_64;
    exception_lineno = exception_keeper_lineno_64;

    goto frame_exception_exit_1;
    // End of try:
    try_end_33:;
    {
        PyObject *tmp_assign_source_200;
        CHECK_OBJECT( tmp_class_creation_33__class );
        tmp_assign_source_200 = tmp_class_creation_33__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HeaderParsingError, tmp_assign_source_200 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_33__class );
    Py_DECREF( tmp_class_creation_33__class );
    tmp_class_creation_33__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_33__bases );
    Py_DECREF( tmp_class_creation_33__bases );
    tmp_class_creation_33__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_33__class_dict );
    Py_DECREF( tmp_class_creation_33__class_dict );
    tmp_class_creation_33__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_33__metaclass );
    Py_DECREF( tmp_class_creation_33__metaclass );
    tmp_class_creation_33__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_201;
        PyObject *tmp_tuple_element_32;
        PyObject *tmp_mvar_value_36;
        tmp_mvar_value_36 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

        if (unlikely( tmp_mvar_value_36 == NULL ))
        {
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
        }

        if ( tmp_mvar_value_36 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
            exception_tb = NULL;

            exception_lineno = 244;

            goto try_except_handler_128;
        }

        tmp_tuple_element_32 = tmp_mvar_value_36;
        tmp_assign_source_201 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_32 );
        PyTuple_SET_ITEM( tmp_assign_source_201, 0, tmp_tuple_element_32 );
        assert( tmp_class_creation_34__bases == NULL );
        tmp_class_creation_34__bases = tmp_assign_source_201;
    }
    {
        PyObject *tmp_assign_source_202;
        {
            PyObject *tmp_set_locals_32;
            tmp_set_locals_32 = PyDict_New();
            locals_urllib3$exceptions_244 = tmp_set_locals_32;
        }
        tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_244, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_8c0402b3f822d653c84c590d6e596566;
        tmp_res = PyDict_SetItem( locals_urllib3$exceptions_244, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_202 = locals_urllib3$exceptions_244;
        Py_INCREF( tmp_assign_source_202 );
        goto try_return_handler_129;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_129:;
        Py_DECREF( locals_urllib3$exceptions_244 );
        locals_urllib3$exceptions_244 = NULL;
        goto outline_result_64;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_64:;
        assert( tmp_class_creation_34__class_dict == NULL );
        tmp_class_creation_34__class_dict = tmp_assign_source_202;
    }
    {
        PyObject *tmp_assign_source_203;
        nuitka_bool tmp_condition_result_34;
        PyObject *tmp_key_name_67;
        PyObject *tmp_dict_name_67;
        PyObject *tmp_dict_name_68;
        PyObject *tmp_key_name_68;
        tmp_key_name_67 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_34__class_dict );
        tmp_dict_name_67 = tmp_class_creation_34__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_67, tmp_key_name_67 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;

            goto try_except_handler_128;
        }
        tmp_condition_result_34 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_34 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_34;
        }
        else
        {
            goto condexpr_false_34;
        }
        condexpr_true_34:;
        CHECK_OBJECT( tmp_class_creation_34__class_dict );
        tmp_dict_name_68 = tmp_class_creation_34__class_dict;
        tmp_key_name_68 = const_str_plain___metaclass__;
        tmp_assign_source_203 = DICT_GET_ITEM( tmp_dict_name_68, tmp_key_name_68 );
        if ( tmp_assign_source_203 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;

            goto try_except_handler_128;
        }
        goto condexpr_end_34;
        condexpr_false_34:;
        {
            PyObject *tmp_assign_source_204;
            PyObject *tmp_subscribed_name_32;
            PyObject *tmp_subscript_name_32;
            CHECK_OBJECT( tmp_class_creation_34__bases );
            tmp_subscribed_name_32 = tmp_class_creation_34__bases;
            tmp_subscript_name_32 = const_int_0;
            tmp_assign_source_204 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_32, tmp_subscript_name_32, 0 );
            if ( tmp_assign_source_204 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 244;

                goto try_except_handler_128;
            }
            assert( tmp_select_metaclass_34__base == NULL );
            tmp_select_metaclass_34__base = tmp_assign_source_204;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_32;
            CHECK_OBJECT( tmp_select_metaclass_34__base );
            tmp_source_name_32 = tmp_select_metaclass_34__base;
            tmp_assign_source_203 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_32 );
            if ( tmp_assign_source_203 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 244;

                goto try_except_handler_131;
            }
            goto try_return_handler_130;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_131:;
        exception_keeper_type_65 = exception_type;
        exception_keeper_value_65 = exception_value;
        exception_keeper_tb_65 = exception_tb;
        exception_keeper_lineno_65 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_32;
            Py_DECREF( exception_keeper_type_65 );
            Py_XDECREF( exception_keeper_value_65 );
            Py_XDECREF( exception_keeper_tb_65 );
            CHECK_OBJECT( tmp_select_metaclass_34__base );
            tmp_type_arg_32 = tmp_select_metaclass_34__base;
            tmp_assign_source_203 = BUILTIN_TYPE1( tmp_type_arg_32 );
            assert( !(tmp_assign_source_203 == NULL) );
            goto try_return_handler_130;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_130:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_34__base );
        Py_DECREF( tmp_select_metaclass_34__base );
        tmp_select_metaclass_34__base = NULL;

        goto outline_result_65;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_34__base );
        Py_DECREF( tmp_select_metaclass_34__base );
        tmp_select_metaclass_34__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_65:;
        condexpr_end_34:;
        assert( tmp_class_creation_34__metaclass == NULL );
        tmp_class_creation_34__metaclass = tmp_assign_source_203;
    }
    {
        PyObject *tmp_assign_source_205;
        PyObject *tmp_called_name_34;
        PyObject *tmp_args_element_name_100;
        PyObject *tmp_args_element_name_101;
        PyObject *tmp_args_element_name_102;
        CHECK_OBJECT( tmp_class_creation_34__metaclass );
        tmp_called_name_34 = tmp_class_creation_34__metaclass;
        tmp_args_element_name_100 = const_str_plain_UnrewindableBodyError;
        CHECK_OBJECT( tmp_class_creation_34__bases );
        tmp_args_element_name_101 = tmp_class_creation_34__bases;
        CHECK_OBJECT( tmp_class_creation_34__class_dict );
        tmp_args_element_name_102 = tmp_class_creation_34__class_dict;
        frame_b37ff837bea98402fbe710b5f6fa099f->m_frame.f_lineno = 244;
        {
            PyObject *call_args[] = { tmp_args_element_name_100, tmp_args_element_name_101, tmp_args_element_name_102 };
            tmp_assign_source_205 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_34, call_args );
        }

        if ( tmp_assign_source_205 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;

            goto try_except_handler_128;
        }
        assert( tmp_class_creation_34__class == NULL );
        tmp_class_creation_34__class = tmp_assign_source_205;
    }
    goto try_end_34;
    // Exception handler code:
    try_except_handler_128:;
    exception_keeper_type_66 = exception_type;
    exception_keeper_value_66 = exception_value;
    exception_keeper_tb_66 = exception_tb;
    exception_keeper_lineno_66 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_34__bases );
    tmp_class_creation_34__bases = NULL;

    Py_XDECREF( tmp_class_creation_34__class_dict );
    tmp_class_creation_34__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_34__metaclass );
    tmp_class_creation_34__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_66;
    exception_value = exception_keeper_value_66;
    exception_tb = exception_keeper_tb_66;
    exception_lineno = exception_keeper_lineno_66;

    goto frame_exception_exit_1;
    // End of try:
    try_end_34:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b37ff837bea98402fbe710b5f6fa099f );
#endif
    popFrameStack();

    assertFrameObject( frame_b37ff837bea98402fbe710b5f6fa099f );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b37ff837bea98402fbe710b5f6fa099f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b37ff837bea98402fbe710b5f6fa099f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b37ff837bea98402fbe710b5f6fa099f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b37ff837bea98402fbe710b5f6fa099f, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_206;
        CHECK_OBJECT( tmp_class_creation_34__class );
        tmp_assign_source_206 = tmp_class_creation_34__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_UnrewindableBodyError, tmp_assign_source_206 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_34__class );
    Py_DECREF( tmp_class_creation_34__class );
    tmp_class_creation_34__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_34__bases );
    Py_DECREF( tmp_class_creation_34__bases );
    tmp_class_creation_34__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_34__class_dict );
    Py_DECREF( tmp_class_creation_34__class_dict );
    tmp_class_creation_34__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_34__metaclass );
    Py_DECREF( tmp_class_creation_34__metaclass );
    tmp_class_creation_34__metaclass = NULL;


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_urllib3$exceptions );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
