/* Generated code for Python module 'requests.cookies'
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

/* The "_module_requests$cookies" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$cookies;
PyDictObject *moduledict_requests$cookies;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_copy;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple;
extern PyObject *const_str_plain_get;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_get_cookie_header;
extern PyObject *const_tuple_str_plain_self_str_plain_headers_tuple;
extern PyObject *const_str_plain_result;
static PyObject *const_str_digest_bb11d917f97bb6215fd11706382927d9;
extern PyObject *const_str_plain_scheme;
extern PyObject *const_str_plain_iteritems;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_has_header;
static PyObject *const_str_plain_set_policy;
extern PyObject *const_str_plain_err;
extern PyObject *const_str_plain_query;
static PyObject *const_str_digest_c99227a29db521837b47fa67726c6a3c;
static PyObject *const_str_plain__policy;
static PyObject *const_str_plain_origin_req_host;
extern PyObject *const_str_plain_strptime;
static PyObject *const_str_digest_b32fff81b34b2c7f10c1d1dc66bbef6d;
extern PyObject *const_str_plain__r;
extern PyObject *const_str_plain_property;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_morsel;
extern PyObject *const_str_plain_version;
extern PyObject *const_str_plain_netloc;
static PyObject *const_str_plain_secure;
static PyObject *const_str_plain_morsel_to_cookie;
static PyObject *const_str_plain_rfc2109;
static PyObject *const_str_digest_5c9dad01a3c84d4b998a25c6f245d693;
extern PyObject *const_str_plain_comment;
extern PyObject *const_str_plain_object;
static PyObject *const_tuple_95c52f105bd16b9093b126943b0df3d1_tuple;
static PyObject *const_str_plain_get_origin_req_host;
static PyObject *const_str_plain_get_policy;
extern PyObject *const_str_plain_parsed;
extern PyObject *const_str_plain__copy_cookie_jar;
static PyObject *const_str_plain_MockRequest;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_str_plain_self_str_plain_request_tuple;
extern PyObject *const_str_plain_cookiejar;
static PyObject *const_str_digest_b04a12651fd966784023636e22761d12;
static PyObject *const_str_plain_create_cookie;
static PyObject *const_str_plain_comment_url;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_str_plain_cookiejar_from_dict;
extern PyObject *const_str_plain_val;
static PyObject *const_str_digest_f0c7ff82cbfe26b2f3f1df333f77ef1b;
static PyObject *const_str_digest_08b25300475453472c10345ee7168b50;
extern PyObject *const_str_plain_Morsel;
static PyObject *const_str_plain_names_from_jar;
extern PyObject *const_str_plain_other;
static PyObject *const_str_digest_8d200ac749deb0ed034c3f2346adcc3d;
static PyObject *const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple;
extern PyObject *const_str_plain_MutableMapping;
static PyObject *const_tuple_str_plain_domain_tuple;
static PyObject *const_tuple_str_plain_path_tuple;
static PyObject *const_str_digest_dd3cc005839efdfe1c3c0f3b070086ba;
extern PyObject *const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple;
static PyObject *const_str_plain_add_unredirected_header;
static PyObject *const_tuple_25d2de9e61b29fbcffb40dadbd207aef_tuple;
static PyObject *const_tuple_str_plain_morsel_str_plain_time_template_str_plain_expires_tuple;
extern PyObject *const_str_plain_to_native_string;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_calendar;
static PyObject *const_dict_81b3970727674c20ce12b1a4757dad21;
static PyObject *const_str_digest_6f0eeed3729339eac6c86da181041a13;
static PyObject *const_str_plain_get_full_url;
extern PyObject *const_str_plain_urlparse;
static PyObject *const_str_digest_573342b2a8e1af18fbe63f15ee63f11b;
static PyObject *const_str_digest_101fa36882b0f5da69e72374403c2c30;
static PyObject *const_str_plain_toReturn;
extern PyObject *const_tuple_str_plain_to_native_string_tuple;
static PyObject *const_str_digest_05ffb5bc39cd46e6936de7ec055f15aa;
extern PyObject *const_str_plain___setitem__;
static PyObject *const_tuple_ca917a44106411b262150e155c627a6c_tuple;
extern PyObject *const_str_plain___getstate__;
extern PyObject *const_tuple_str_plain_self_str_plain_key_str_plain_val_tuple;
static PyObject *const_str_digest_d4e8bce3e52a50e29fc0c09bd0f73e7f;
static PyObject *const_tuple_str_plain__cookies_lock_tuple;
static PyObject *const_str_digest_955b7d6fef0bcb66b462d15cb6f41169;
extern PyObject *const_tuple_str_dot_tuple;
static PyObject *const_str_plain_MockResponse;
extern PyObject *const_str_plain_set;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_tuple_str_plain_jar_str_plain_cookie_str_plain_new_jar_tuple;
extern PyObject *const_str_plain_getheaders;
extern PyObject *const_str_plain_threading;
extern PyObject *const_str_plain_domain;
static PyObject *const_tuple_str_plain_self_str_plain_other_str_plain_cookie_tuple;
static PyObject *const_str_plain_extract_cookies;
static PyObject *const_tuple_str_plain_Host_tuple;
static PyObject *const_str_plain_dictionary;
extern PyObject *const_str_plain_timegm;
extern PyObject *const_str_plain_rest;
extern PyObject *const_str_plain_cookies;
static PyObject *const_dict_a5e68083723d45b7dd5e500852a4245b;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_chr_34;
extern PyObject *const_str_plain___setstate__;
static PyObject *const_str_digest_a90c9fe31ac91c19721e9fd9e6cf64bd;
static PyObject *const_str_plain_domains;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_update;
static PyObject *const_str_plain__find_no_duplicates;
extern PyObject *const_str_plain_discard;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_list_paths;
extern PyObject *const_str_plain_request;
static PyObject *const_str_digest_94ebad60c38a4f103db32744a5bab84d;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_digest_80fe00ea301d02293abaf9dea17cddac;
static PyObject *const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple;
static PyObject *const_str_digest_5266e491bdb204b2a45e0a788e9bac94;
static PyObject *const_str_plain_domain_initial_dot;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_values;
extern PyObject *const_str_plain_get_host;
static PyObject *const_tuple_cc8bb9f8aaf002e327fa9291fe7fb9ee_tuple;
static PyObject *const_str_digest_58ff5aeca7b13e22937ae8b6a9a6b876;
static PyObject *const_str_plain_add_cookie_header;
extern PyObject *const_str_plain_c;
static PyObject *const_str_plain__cookies_lock;
static PyObject *const_str_plain_clearables;
static PyObject *const_str_digest_8282cde113cd2232a516d421ec587b65;
extern PyObject *const_str_plain___init__;
static PyObject *const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple;
static PyObject *const_str_plain_add_header;
extern PyObject *const_str_plain_merge_cookies;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_chr_47;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain_params;
static PyObject *const_str_digest_c251a6c94c6e10269ce10063ac8b5e24;
static PyObject *const_str_plain_new_cj;
extern PyObject *const_str_dot;
static PyObject *const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple;
static PyObject *const_str_digest_a9d19ccf5848be851d2f630cfe17789d;
extern PyObject *const_str_plain_time;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain_cookie;
static PyObject *const_str_digest_f2419ba08dedfa0db3c34c39eaf2eb5d;
static PyObject *const_str_digest_d3a4a40c67458b1207db4bc7ab20d310;
extern PyObject *const_str_plain_Host;
static PyObject *const_str_plain_port_specified;
static PyObject *const_str_plain_get_header;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain__original_response;
static PyObject *const_str_digest_d61c39e15f1f0b76bd46a71165e3bbe6;
static PyObject *const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple;
static PyObject *const_str_plain_cookie_in_jar;
extern PyObject *const_str_plain_Cookie;
extern PyObject *const_str_plain_headers;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_None;
static PyObject *const_str_plain_get_type;
extern PyObject *const_str_plain_cookie_dict;
static PyObject *const_str_plain_is_unverifiable;
static PyObject *const_str_plain_multiple_domains;
static PyObject *const_str_plain_get_dict;
static PyObject *const_str_digest_58821042b0e0d98cc3b40076b38affdd;
extern PyObject *const_str_plain_dict;
static PyObject *const_tuple_831032f065cd3258ed8a4829c50bfee2_tuple;
static PyObject *const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d;
static PyObject *const_str_digest_e02118ec259954e10ca6d6356803797f;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_req;
extern PyObject *const_str_plain_msg;
static PyObject *const_str_plain_get_new_headers;
extern PyObject *const_str_plain_default;
extern PyObject *const_str_plain_endswith;
static PyObject *const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple;
static PyObject *const_str_plain_path_specified;
static PyObject *const_str_plain_set_cookie;
static PyObject *const_tuple_str_plain_Cookie_tuple;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_digest_c6a3c61d8189ea3789c38808f9f3af27;
extern PyObject *const_str_plain_RLock;
extern PyObject *const_str_plain_iterkeys;
static PyObject *const_str_plain_remove_cookie_by_name;
extern PyObject *const_str_plain___delitem__;
extern PyObject *const_str_plain___contains__;
extern PyObject *const_str_plain_extract_cookies_to_jar;
extern PyObject *const_str_plain_CookieJar;
extern PyObject *const_str_plain_startswith;
static PyObject *const_tuple_type_RuntimeError_tuple;
extern PyObject *const_str_plain_r;
static PyObject *const_str_plain_badargs;
static PyObject *const_str_plain_unverifiable;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_dict_8bb618981da06812b982ce6e43eb28e7;
static PyObject *const_str_plain_time_template;
extern PyObject *const_tuple_str_plain_self_str_plain_name_tuple;
extern PyObject *const_tuple_none_true_tuple;
static PyObject *const_str_digest_138ef95cec671591d9bedfa7e0898703;
static PyObject *const_str_digest_2aa7f18650b70bafed61b449ab43cbad;
extern PyObject *const_str_plain_urlunparse;
static PyObject *const_str_digest_741e4a7055b20857d935a0f7ed1c4abe;
static PyObject *const_str_digest_59021ee0ac4a578b9169d1a96b78e1da;
static PyObject *const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple;
static PyObject *const_str_plain_new_jar;
static PyObject *const_str_plain__new_headers;
static PyObject *const_str_digest_c9dd2760a1399f089d616717f6e41ae2;
extern PyObject *const_str_plain_clear;
static PyObject *const_str_plain__headers;
static PyObject *const_str_plain_expires;
extern PyObject *const_str_plain_cookielib;
extern PyObject *const_str_plain_False;
static PyObject *const_str_plain_overwrite;
static PyObject *const_str_digest_33e1091efb89a5aa5c06480eca194fed;
extern PyObject *const_str_plain__internal_utils;
static PyObject *const_str_plain_jar;
static PyObject *const_str_plain__find;
extern PyObject *const_str_digest_c245c8a772b3a33119deac8565a08f57;
extern PyObject *const_str_plain_paths;
static PyObject *const_str_digest_85e0ea626320458ddd4363cffbfdc559;
static PyObject *const_str_plain_CookieConflictError;
static PyObject *const_str_digest_dcd45b6ff6ecc7b26e302a149b58c85c;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_port;
static PyObject *const_tuple_str_plain_self_str_plain_new_cj_tuple;
extern PyObject *const_str_plain_compat;
static PyObject *const_str_digest_8aeec5b3f7298c5bac1e129b6ee9f59f;
extern PyObject *const_str_plain_RequestsCookieJar;
extern PyObject *const_str_plain_host;
static PyObject *const_str_digest_384c88e858c00a2981bdb05550c007ba;
static PyObject *const_str_plain_domain_specified;
extern PyObject *const_tuple_none_none_none_tuple;
static PyObject *const_str_digest_95cacfdffdeafa2154ddb2520f2fb58f;
extern PyObject *const_tuple_str_plain_self_str_plain_state_tuple;
static PyObject *const_tuple_str_chr_34_tuple;
static PyObject *const_str_plain_dummy_threading;
static PyObject *const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_state;
extern PyObject *const_str_plain_pop;
static PyObject *const_str_digest_40890ce8458196445ad3a61ce14829f8;
extern PyObject *const_str_plain_response;
static PyObject *const_str_digest_2074f4b4dde671f06897bcc11d0d41da;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_self;
extern PyObject *const_tuple_str_plain_self_str_plain_name_str_plain_default_tuple;
static PyObject *const_str_plain_list_domains;
static PyObject *const_str_digest_7fad1f4acdf828076344bcbd2f3093fc;
static PyObject *const_str_digest_12188133309ffc390643b7a732954d08;
extern PyObject *const_str_plain_itervalues;
static PyObject *const_str_plain_HttpOnly;
static PyObject *const_str_digest_ef5ef54fd7fab3dbc34eb13a254678ee;
static PyObject *const_tuple_e879b00880f406da33a29c27a6fe107e_tuple;
static PyObject *const_tuple_0aa5b2cb8f391adb63d4b5efbdfa9aa6_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_cookie_tuple;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_fragment;
static PyObject *const_str_plain_httponly;
static PyObject *const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple = PyTuple_New( 3 );
    const_str_plain_jar = UNSTREAM_STRING( &constant_bin[ 942542 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple, 0, const_str_plain_jar ); Py_INCREF( const_str_plain_jar );
    PyTuple_SET_ITEM( const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple, 1, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple, 2, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    const_str_digest_bb11d917f97bb6215fd11706382927d9 = UNSTREAM_STRING( &constant_bin[ 942545 ], 211, 0 );
    const_str_plain_set_policy = UNSTREAM_STRING( &constant_bin[ 942756 ], 10, 1 );
    const_str_digest_c99227a29db521837b47fa67726c6a3c = UNSTREAM_STRING( &constant_bin[ 942766 ], 52, 0 );
    const_str_plain__policy = UNSTREAM_STRING( &constant_bin[ 543343 ], 7, 1 );
    const_str_plain_origin_req_host = UNSTREAM_STRING( &constant_bin[ 942818 ], 15, 1 );
    const_str_digest_b32fff81b34b2c7f10c1d1dc66bbef6d = UNSTREAM_STRING( &constant_bin[ 942833 ], 66, 0 );
    const_str_plain_morsel = UNSTREAM_STRING( &constant_bin[ 942899 ], 6, 1 );
    const_str_plain_secure = UNSTREAM_STRING( &constant_bin[ 942905 ], 6, 1 );
    const_str_plain_morsel_to_cookie = UNSTREAM_STRING( &constant_bin[ 942911 ], 16, 1 );
    const_str_plain_rfc2109 = UNSTREAM_STRING( &constant_bin[ 942927 ], 7, 1 );
    const_str_digest_5c9dad01a3c84d4b998a25c6f245d693 = UNSTREAM_STRING( &constant_bin[ 942934 ], 65, 0 );
    const_tuple_95c52f105bd16b9093b126943b0df3d1_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_95c52f105bd16b9093b126943b0df3d1_tuple, 0, const_str_plain_cookiejar ); Py_INCREF( const_str_plain_cookiejar );
    PyTuple_SET_ITEM( const_tuple_95c52f105bd16b9093b126943b0df3d1_tuple, 1, const_str_plain_cookies ); Py_INCREF( const_str_plain_cookies );
    const_str_plain_cookie_in_jar = UNSTREAM_STRING( &constant_bin[ 942999 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_95c52f105bd16b9093b126943b0df3d1_tuple, 2, const_str_plain_cookie_in_jar ); Py_INCREF( const_str_plain_cookie_in_jar );
    const_str_plain_get_origin_req_host = UNSTREAM_STRING( &constant_bin[ 943012 ], 19, 1 );
    const_str_plain_get_policy = UNSTREAM_STRING( &constant_bin[ 943031 ], 10, 1 );
    const_str_plain_MockRequest = UNSTREAM_STRING( &constant_bin[ 943041 ], 11, 1 );
    const_tuple_str_plain_self_str_plain_request_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_request_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_request_tuple, 1, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    const_str_digest_b04a12651fd966784023636e22761d12 = UNSTREAM_STRING( &constant_bin[ 943052 ], 245, 0 );
    const_str_plain_create_cookie = UNSTREAM_STRING( &constant_bin[ 942766 ], 13, 1 );
    const_str_plain_comment_url = UNSTREAM_STRING( &constant_bin[ 943297 ], 11, 1 );
    const_str_digest_f0c7ff82cbfe26b2f3f1df333f77ef1b = UNSTREAM_STRING( &constant_bin[ 943308 ], 210, 0 );
    const_str_digest_08b25300475453472c10345ee7168b50 = UNSTREAM_STRING( &constant_bin[ 943518 ], 255, 0 );
    const_str_plain_names_from_jar = UNSTREAM_STRING( &constant_bin[ 943773 ], 14, 1 );
    const_str_digest_8d200ac749deb0ed034c3f2346adcc3d = UNSTREAM_STRING( &constant_bin[ 943787 ], 25, 0 );
    const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple, 2, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple, 3, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple, 4, const_str_plain_cookie ); Py_INCREF( const_str_plain_cookie );
    const_tuple_str_plain_domain_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_domain_tuple, 0, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    const_tuple_str_plain_path_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_path_tuple, 0, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    const_str_digest_dd3cc005839efdfe1c3c0f3b070086ba = UNSTREAM_STRING( &constant_bin[ 943812 ], 118, 0 );
    const_str_plain_add_unredirected_header = UNSTREAM_STRING( &constant_bin[ 943930 ], 23, 1 );
    const_tuple_25d2de9e61b29fbcffb40dadbd207aef_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_25d2de9e61b29fbcffb40dadbd207aef_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_25d2de9e61b29fbcffb40dadbd207aef_tuple, 1, const_str_plain_cookie ); Py_INCREF( const_str_plain_cookie );
    PyTuple_SET_ITEM( const_tuple_25d2de9e61b29fbcffb40dadbd207aef_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_25d2de9e61b29fbcffb40dadbd207aef_tuple, 3, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_tuple_str_plain_morsel_str_plain_time_template_str_plain_expires_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_morsel_str_plain_time_template_str_plain_expires_tuple, 0, const_str_plain_morsel ); Py_INCREF( const_str_plain_morsel );
    const_str_plain_time_template = UNSTREAM_STRING( &constant_bin[ 943953 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_morsel_str_plain_time_template_str_plain_expires_tuple, 1, const_str_plain_time_template ); Py_INCREF( const_str_plain_time_template );
    const_str_plain_expires = UNSTREAM_STRING( &constant_bin[ 943966 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_morsel_str_plain_time_template_str_plain_expires_tuple, 2, const_str_plain_expires ); Py_INCREF( const_str_plain_expires );
    const_dict_81b3970727674c20ce12b1a4757dad21 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_81b3970727674c20ce12b1a4757dad21, const_str_plain_encoding, const_str_digest_c075052d723d6707083e869a0e3659bb );
    assert( PyDict_Size( const_dict_81b3970727674c20ce12b1a4757dad21 ) == 1 );
    const_str_digest_6f0eeed3729339eac6c86da181041a13 = UNSTREAM_STRING( &constant_bin[ 943973 ], 40, 0 );
    const_str_plain_get_full_url = UNSTREAM_STRING( &constant_bin[ 944013 ], 12, 1 );
    const_str_digest_573342b2a8e1af18fbe63f15ee63f11b = UNSTREAM_STRING( &constant_bin[ 944025 ], 176, 0 );
    const_str_digest_101fa36882b0f5da69e72374403c2c30 = UNSTREAM_STRING( &constant_bin[ 944201 ], 108, 0 );
    const_str_plain_toReturn = UNSTREAM_STRING( &constant_bin[ 944309 ], 8, 1 );
    const_str_digest_05ffb5bc39cd46e6936de7ec055f15aa = UNSTREAM_STRING( &constant_bin[ 944317 ], 38, 0 );
    const_tuple_ca917a44106411b262150e155c627a6c_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_ca917a44106411b262150e155c627a6c_tuple, 0, const_str_plain_cookiejar ); Py_INCREF( const_str_plain_cookiejar );
    PyTuple_SET_ITEM( const_tuple_ca917a44106411b262150e155c627a6c_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_ca917a44106411b262150e155c627a6c_tuple, 2, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_ca917a44106411b262150e155c627a6c_tuple, 3, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    const_str_plain_clearables = UNSTREAM_STRING( &constant_bin[ 944355 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_ca917a44106411b262150e155c627a6c_tuple, 4, const_str_plain_clearables ); Py_INCREF( const_str_plain_clearables );
    PyTuple_SET_ITEM( const_tuple_ca917a44106411b262150e155c627a6c_tuple, 5, const_str_plain_cookie ); Py_INCREF( const_str_plain_cookie );
    const_str_digest_d4e8bce3e52a50e29fc0c09bd0f73e7f = UNSTREAM_STRING( &constant_bin[ 944365 ], 236, 0 );
    const_tuple_str_plain__cookies_lock_tuple = PyTuple_New( 1 );
    const_str_plain__cookies_lock = UNSTREAM_STRING( &constant_bin[ 944601 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__cookies_lock_tuple, 0, const_str_plain__cookies_lock ); Py_INCREF( const_str_plain__cookies_lock );
    const_str_digest_955b7d6fef0bcb66b462d15cb6f41169 = UNSTREAM_STRING( &constant_bin[ 944614 ], 173, 0 );
    const_str_plain_MockResponse = UNSTREAM_STRING( &constant_bin[ 944787 ], 12, 1 );
    const_tuple_str_plain_jar_str_plain_cookie_str_plain_new_jar_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_jar_str_plain_cookie_str_plain_new_jar_tuple, 0, const_str_plain_jar ); Py_INCREF( const_str_plain_jar );
    PyTuple_SET_ITEM( const_tuple_str_plain_jar_str_plain_cookie_str_plain_new_jar_tuple, 1, const_str_plain_cookie ); Py_INCREF( const_str_plain_cookie );
    const_str_plain_new_jar = UNSTREAM_STRING( &constant_bin[ 944799 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_jar_str_plain_cookie_str_plain_new_jar_tuple, 2, const_str_plain_new_jar ); Py_INCREF( const_str_plain_new_jar );
    const_tuple_str_plain_self_str_plain_other_str_plain_cookie_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_cookie_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_cookie_tuple, 1, const_str_plain_other ); Py_INCREF( const_str_plain_other );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_cookie_tuple, 2, const_str_plain_cookie ); Py_INCREF( const_str_plain_cookie );
    const_str_plain_extract_cookies = UNSTREAM_STRING( &constant_bin[ 944806 ], 15, 1 );
    const_tuple_str_plain_Host_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Host_tuple, 0, const_str_plain_Host ); Py_INCREF( const_str_plain_Host );
    const_str_plain_dictionary = UNSTREAM_STRING( &constant_bin[ 144446 ], 10, 1 );
    const_dict_a5e68083723d45b7dd5e500852a4245b = _PyDict_NewPresized( 1 );
    const_str_plain_HttpOnly = UNSTREAM_STRING( &constant_bin[ 944821 ], 8, 1 );
    PyDict_SetItem( const_dict_a5e68083723d45b7dd5e500852a4245b, const_str_plain_HttpOnly, Py_None );
    assert( PyDict_Size( const_dict_a5e68083723d45b7dd5e500852a4245b ) == 1 );
    const_str_digest_a90c9fe31ac91c19721e9fd9e6cf64bd = UNSTREAM_STRING( &constant_bin[ 944829 ], 107, 0 );
    const_str_plain_domains = UNSTREAM_STRING( &constant_bin[ 943847 ], 7, 1 );
    const_str_plain__find_no_duplicates = UNSTREAM_STRING( &constant_bin[ 944936 ], 19, 1 );
    const_str_plain_list_paths = UNSTREAM_STRING( &constant_bin[ 944955 ], 10, 1 );
    const_str_digest_94ebad60c38a4f103db32744a5bab84d = UNSTREAM_STRING( &constant_bin[ 944965 ], 149, 0 );
    const_str_digest_80fe00ea301d02293abaf9dea17cddac = UNSTREAM_STRING( &constant_bin[ 945114 ], 33, 0 );
    const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple, 2, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple, 3, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple, 4, const_str_plain_toReturn ); Py_INCREF( const_str_plain_toReturn );
    PyTuple_SET_ITEM( const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple, 5, const_str_plain_cookie ); Py_INCREF( const_str_plain_cookie );
    const_str_digest_5266e491bdb204b2a45e0a788e9bac94 = UNSTREAM_STRING( &constant_bin[ 945147 ], 50, 0 );
    const_str_plain_domain_initial_dot = UNSTREAM_STRING( &constant_bin[ 945197 ], 18, 1 );
    const_tuple_cc8bb9f8aaf002e327fa9291fe7fb9ee_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_cc8bb9f8aaf002e327fa9291fe7fb9ee_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_cc8bb9f8aaf002e327fa9291fe7fb9ee_tuple, 1, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_cc8bb9f8aaf002e327fa9291fe7fb9ee_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_cc8bb9f8aaf002e327fa9291fe7fb9ee_tuple, 3, const_str_plain_err ); Py_INCREF( const_str_plain_err );
    PyTuple_SET_ITEM( const_tuple_cc8bb9f8aaf002e327fa9291fe7fb9ee_tuple, 4, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_plain_badargs = UNSTREAM_STRING( &constant_bin[ 945215 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_cc8bb9f8aaf002e327fa9291fe7fb9ee_tuple, 5, const_str_plain_badargs ); Py_INCREF( const_str_plain_badargs );
    const_str_digest_58ff5aeca7b13e22937ae8b6a9a6b876 = UNSTREAM_STRING( &constant_bin[ 945222 ], 132, 0 );
    const_str_plain_add_cookie_header = UNSTREAM_STRING( &constant_bin[ 945354 ], 17, 1 );
    const_str_digest_8282cde113cd2232a516d421ec587b65 = UNSTREAM_STRING( &constant_bin[ 945371 ], 149, 0 );
    const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple, 1, const_str_plain_paths ); Py_INCREF( const_str_plain_paths );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple, 2, const_str_plain_cookie ); Py_INCREF( const_str_plain_cookie );
    const_str_plain_add_header = UNSTREAM_STRING( &constant_bin[ 934462 ], 10, 1 );
    const_str_digest_c251a6c94c6e10269ce10063ac8b5e24 = UNSTREAM_STRING( &constant_bin[ 945520 ], 52, 0 );
    const_str_plain_new_cj = UNSTREAM_STRING( &constant_bin[ 945572 ], 6, 1 );
    const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple, 0, const_str_plain_jar ); Py_INCREF( const_str_plain_jar );
    PyTuple_SET_ITEM( const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple, 1, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple, 2, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    PyTuple_SET_ITEM( const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple, 3, const_str_plain_req ); Py_INCREF( const_str_plain_req );
    PyTuple_SET_ITEM( const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple, 4, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_str_digest_a9d19ccf5848be851d2f630cfe17789d = UNSTREAM_STRING( &constant_bin[ 945578 ], 61, 0 );
    const_str_digest_f2419ba08dedfa0db3c34c39eaf2eb5d = UNSTREAM_STRING( &constant_bin[ 945639 ], 163, 0 );
    const_str_digest_d3a4a40c67458b1207db4bc7ab20d310 = UNSTREAM_STRING( &constant_bin[ 945802 ], 190, 0 );
    const_str_plain_port_specified = UNSTREAM_STRING( &constant_bin[ 945992 ], 14, 1 );
    const_str_plain_get_header = UNSTREAM_STRING( &constant_bin[ 946006 ], 10, 1 );
    const_str_digest_d61c39e15f1f0b76bd46a71165e3bbe6 = UNSTREAM_STRING( &constant_bin[ 946016 ], 148, 0 );
    const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple, 1, const_str_plain_domains ); Py_INCREF( const_str_plain_domains );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple, 2, const_str_plain_cookie ); Py_INCREF( const_str_plain_cookie );
    const_str_plain_get_type = UNSTREAM_STRING( &constant_bin[ 64563 ], 8, 1 );
    const_str_plain_is_unverifiable = UNSTREAM_STRING( &constant_bin[ 946164 ], 15, 1 );
    const_str_plain_multiple_domains = UNSTREAM_STRING( &constant_bin[ 946179 ], 16, 1 );
    const_str_plain_get_dict = UNSTREAM_STRING( &constant_bin[ 946195 ], 8, 1 );
    const_str_digest_58821042b0e0d98cc3b40076b38affdd = UNSTREAM_STRING( &constant_bin[ 946203 ], 48, 0 );
    const_tuple_831032f065cd3258ed8a4829c50bfee2_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_831032f065cd3258ed8a4829c50bfee2_tuple, 0, const_str_plain_cookielib ); Py_INCREF( const_str_plain_cookielib );
    PyTuple_SET_ITEM( const_tuple_831032f065cd3258ed8a4829c50bfee2_tuple, 1, const_str_plain_urlparse ); Py_INCREF( const_str_plain_urlparse );
    PyTuple_SET_ITEM( const_tuple_831032f065cd3258ed8a4829c50bfee2_tuple, 2, const_str_plain_urlunparse ); Py_INCREF( const_str_plain_urlunparse );
    PyTuple_SET_ITEM( const_tuple_831032f065cd3258ed8a4829c50bfee2_tuple, 3, const_str_plain_Morsel ); Py_INCREF( const_str_plain_Morsel );
    PyTuple_SET_ITEM( const_tuple_831032f065cd3258ed8a4829c50bfee2_tuple, 4, const_str_plain_MutableMapping ); Py_INCREF( const_str_plain_MutableMapping );
    const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d = UNSTREAM_STRING( &constant_bin[ 946251 ], 7, 0 );
    const_str_digest_e02118ec259954e10ca6d6356803797f = UNSTREAM_STRING( &constant_bin[ 946258 ], 192, 0 );
    const_str_plain_get_new_headers = UNSTREAM_STRING( &constant_bin[ 946450 ], 15, 1 );
    const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple, 1, const_str_plain_host ); Py_INCREF( const_str_plain_host );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple, 2, const_str_plain_parsed ); Py_INCREF( const_str_plain_parsed );
    const_str_plain_path_specified = UNSTREAM_STRING( &constant_bin[ 946465 ], 14, 1 );
    const_str_plain_set_cookie = UNSTREAM_STRING( &constant_bin[ 946479 ], 10, 1 );
    const_tuple_str_plain_Cookie_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Cookie_tuple, 0, const_str_plain_Cookie ); Py_INCREF( const_str_plain_Cookie );
    const_str_digest_c6a3c61d8189ea3789c38808f9f3af27 = UNSTREAM_STRING( &constant_bin[ 946489 ], 689, 0 );
    const_str_plain_remove_cookie_by_name = UNSTREAM_STRING( &constant_bin[ 944274 ], 21, 1 );
    const_tuple_type_RuntimeError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_type_RuntimeError_tuple, 0, (PyObject *)PyExc_RuntimeError ); Py_INCREF( (PyObject *)PyExc_RuntimeError );
    const_str_plain_unverifiable = UNSTREAM_STRING( &constant_bin[ 946167 ], 12, 1 );
    const_dict_8bb618981da06812b982ce6e43eb28e7 = _PyDict_NewPresized( 2 );
    const_str_digest_12188133309ffc390643b7a732954d08 = UNSTREAM_STRING( &constant_bin[ 944615 ], 16, 0 );
    PyDict_SetItem( const_dict_8bb618981da06812b982ce6e43eb28e7, const_str_plain___module__, const_str_digest_12188133309ffc390643b7a732954d08 );
    PyDict_SetItem( const_dict_8bb618981da06812b982ce6e43eb28e7, const_str_plain___doc__, const_str_digest_f2419ba08dedfa0db3c34c39eaf2eb5d );
    assert( PyDict_Size( const_dict_8bb618981da06812b982ce6e43eb28e7 ) == 2 );
    const_str_digest_138ef95cec671591d9bedfa7e0898703 = UNSTREAM_STRING( &constant_bin[ 947178 ], 77, 0 );
    const_str_digest_2aa7f18650b70bafed61b449ab43cbad = UNSTREAM_STRING( &constant_bin[ 947255 ], 468, 0 );
    const_str_digest_741e4a7055b20857d935a0f7ed1c4abe = UNSTREAM_STRING( &constant_bin[ 947723 ], 227, 0 );
    const_str_digest_59021ee0ac4a578b9169d1a96b78e1da = UNSTREAM_STRING( &constant_bin[ 947950 ], 52, 0 );
    const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple, 2, const_str_plain_default ); Py_INCREF( const_str_plain_default );
    PyTuple_SET_ITEM( const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple, 3, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple, 4, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    const_str_plain__new_headers = UNSTREAM_STRING( &constant_bin[ 946453 ], 12, 1 );
    const_str_digest_c9dd2760a1399f089d616717f6e41ae2 = UNSTREAM_STRING( &constant_bin[ 948002 ], 25, 0 );
    const_str_plain__headers = UNSTREAM_STRING( &constant_bin[ 934465 ], 8, 1 );
    const_str_plain_overwrite = UNSTREAM_STRING( &constant_bin[ 948027 ], 9, 1 );
    const_str_digest_33e1091efb89a5aa5c06480eca194fed = UNSTREAM_STRING( &constant_bin[ 948036 ], 498, 0 );
    const_str_plain__find = UNSTREAM_STRING( &constant_bin[ 209900 ], 5, 1 );
    const_str_digest_85e0ea626320458ddd4363cffbfdc559 = UNSTREAM_STRING( &constant_bin[ 948534 ], 323, 0 );
    const_str_plain_CookieConflictError = UNSTREAM_STRING( &constant_bin[ 948857 ], 19, 1 );
    const_str_digest_dcd45b6ff6ecc7b26e302a149b58c85c = UNSTREAM_STRING( &constant_bin[ 948876 ], 505, 0 );
    const_tuple_str_plain_self_str_plain_new_cj_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_new_cj_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_new_cj_tuple, 1, const_str_plain_new_cj ); Py_INCREF( const_str_plain_new_cj );
    const_str_digest_8aeec5b3f7298c5bac1e129b6ee9f59f = UNSTREAM_STRING( &constant_bin[ 949381 ], 202, 0 );
    const_str_digest_384c88e858c00a2981bdb05550c007ba = UNSTREAM_STRING( &constant_bin[ 949583 ], 27, 0 );
    const_str_plain_domain_specified = UNSTREAM_STRING( &constant_bin[ 949610 ], 16, 1 );
    const_str_digest_95cacfdffdeafa2154ddb2520f2fb58f = UNSTREAM_STRING( &constant_bin[ 949626 ], 106, 0 );
    const_tuple_str_chr_34_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_chr_34_tuple, 0, const_str_chr_34 ); Py_INCREF( const_str_chr_34 );
    const_str_plain_dummy_threading = UNSTREAM_STRING( &constant_bin[ 949732 ], 15, 1 );
    const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple, 2, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple, 3, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple, 4, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    const_str_digest_40890ce8458196445ad3a61ce14829f8 = UNSTREAM_STRING( &constant_bin[ 949747 ], 27, 0 );
    const_str_digest_2074f4b4dde671f06897bcc11d0d41da = UNSTREAM_STRING( &constant_bin[ 949774 ], 134, 0 );
    const_str_plain_list_domains = UNSTREAM_STRING( &constant_bin[ 949908 ], 12, 1 );
    const_str_digest_7fad1f4acdf828076344bcbd2f3093fc = UNSTREAM_STRING( &constant_bin[ 949920 ], 131, 0 );
    const_str_digest_ef5ef54fd7fab3dbc34eb13a254678ee = UNSTREAM_STRING( &constant_bin[ 950051 ], 40, 0 );
    const_tuple_e879b00880f406da33a29c27a6fe107e_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_e879b00880f406da33a29c27a6fe107e_tuple, 0, const_str_plain_cookie_dict ); Py_INCREF( const_str_plain_cookie_dict );
    PyTuple_SET_ITEM( const_tuple_e879b00880f406da33a29c27a6fe107e_tuple, 1, const_str_plain_cookiejar ); Py_INCREF( const_str_plain_cookiejar );
    PyTuple_SET_ITEM( const_tuple_e879b00880f406da33a29c27a6fe107e_tuple, 2, const_str_plain_overwrite ); Py_INCREF( const_str_plain_overwrite );
    PyTuple_SET_ITEM( const_tuple_e879b00880f406da33a29c27a6fe107e_tuple, 3, const_str_plain_names_from_jar ); Py_INCREF( const_str_plain_names_from_jar );
    PyTuple_SET_ITEM( const_tuple_e879b00880f406da33a29c27a6fe107e_tuple, 4, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_e879b00880f406da33a29c27a6fe107e_tuple, 5, const_str_plain_cookie ); Py_INCREF( const_str_plain_cookie );
    const_tuple_0aa5b2cb8f391adb63d4b5efbdfa9aa6_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_0aa5b2cb8f391adb63d4b5efbdfa9aa6_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_0aa5b2cb8f391adb63d4b5efbdfa9aa6_tuple, 1, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_0aa5b2cb8f391adb63d4b5efbdfa9aa6_tuple, 2, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_0aa5b2cb8f391adb63d4b5efbdfa9aa6_tuple, 3, const_str_plain_cookie ); Py_INCREF( const_str_plain_cookie );
    PyTuple_SET_ITEM( const_tuple_0aa5b2cb8f391adb63d4b5efbdfa9aa6_tuple, 4, const_str_plain_dictionary ); Py_INCREF( const_str_plain_dictionary );
    const_tuple_str_plain_self_str_plain_cookie_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cookie_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cookie_tuple, 1, const_str_plain_cookie ); Py_INCREF( const_str_plain_cookie );
    const_str_plain_httponly = UNSTREAM_STRING( &constant_bin[ 950091 ], 8, 1 );
    const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple, 0, const_str_digest_c245c8a772b3a33119deac8565a08f57 ); Py_INCREF( const_str_digest_c245c8a772b3a33119deac8565a08f57 );
    PyTuple_SET_ITEM( const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$cookies( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_f239adae68e304790d6aa9a39c23e7b9;
static PyCodeObject *codeobj_90e798895b61d1ad0e1434f5f7478faa;
static PyCodeObject *codeobj_9ea89b7a132c9f783ef3ec5f9df44b49;
static PyCodeObject *codeobj_7fe301af9a9c16f5ea161a2836d06e39;
static PyCodeObject *codeobj_ef5acc30962009558a782d38bb09eeab;
static PyCodeObject *codeobj_660ec21aa16ac133d331a9c39308c93f;
static PyCodeObject *codeobj_19ee8ae3bb1dda657e0d47f94bfd4700;
static PyCodeObject *codeobj_4ba0e401bc9b99fd4d5e282fb082d3f7;
static PyCodeObject *codeobj_be1d0363e4c39f971bb8246d37c7c858;
static PyCodeObject *codeobj_d61891d38faeb7479b0997dfc2d435fd;
static PyCodeObject *codeobj_f68811eaf09fad53c1b236ae40fbc349;
static PyCodeObject *codeobj_0dfa8aaa7580004bbd27cb7c38611e4c;
static PyCodeObject *codeobj_b0910d3fb21ca7672598327e935ce232;
static PyCodeObject *codeobj_52c70a9baf3f3bc12e38902218545b3a;
static PyCodeObject *codeobj_61b127473fb0aee214b03cd821d42555;
static PyCodeObject *codeobj_b3d2d06fb7011b6a74dd316dcefd1a92;
static PyCodeObject *codeobj_f1cf3648295cf8710370bb4207467241;
static PyCodeObject *codeobj_4431e8ea73cb3d149c8fcdbbb957c0bc;
static PyCodeObject *codeobj_3790fdf113373a6986c475c57c335bb2;
static PyCodeObject *codeobj_52c802ee21afe05626c252a4a56f1d9c;
static PyCodeObject *codeobj_0543d2fd4f485d86545d7f352bae132d;
static PyCodeObject *codeobj_35935570550094e38a6714401daf1bfd;
static PyCodeObject *codeobj_4223c17850eb1ab7acbf6e35d1096f7f;
static PyCodeObject *codeobj_34c8060f7c2cbfafaba0744715cca7fe;
static PyCodeObject *codeobj_60f9315d089254062271db219841fec3;
static PyCodeObject *codeobj_67518c8f2ed686d9abb9abc3c09cc1a0;
static PyCodeObject *codeobj_3b17b91b04203fe3cf921d4b1b5fb192;
static PyCodeObject *codeobj_5a3e1ac27c82fd06c724bfb6626377f6;
static PyCodeObject *codeobj_efc3ae75056dc200b0ce5ea54734123b;
static PyCodeObject *codeobj_376c02cad049b335b5bc873e2cd62f52;
static PyCodeObject *codeobj_0a7009ddb3ade6e83cafc7036c31aa44;
static PyCodeObject *codeobj_4ddf54c81851d86ba9203759ff3319ff;
static PyCodeObject *codeobj_4f64948cd136e31d8bf437740b850271;
static PyCodeObject *codeobj_a0ea98de0913f7b96966486dc0958bda;
static PyCodeObject *codeobj_95f49bc8d7100729b16009fd9e1af3a6;
static PyCodeObject *codeobj_3a0b35a31cd8924a0167a5971c698ab4;
static PyCodeObject *codeobj_c0bfcdc1b74d1066b2c84b68dde8f210;
static PyCodeObject *codeobj_0583d5987808e361b09b6f2a9220c8e7;
static PyCodeObject *codeobj_4d9eeca9887b7309418908f098f92366;
static PyCodeObject *codeobj_c613e039ae3d9aad157f752f9d50ceb2;
static PyCodeObject *codeobj_ebd610336330c4244c062091d4674d05;
static PyCodeObject *codeobj_de0a49d0e64ad2a52d795816c59b5228;
static PyCodeObject *codeobj_29c90574d842c9822feb17c9d2a45738;
static PyCodeObject *codeobj_31c1677bdaf3181e74f5175cd2f18a24;
static PyCodeObject *codeobj_7c0c4ced2ec588874b876c295e965f78;
static PyCodeObject *codeobj_350bf23a08b3616835403c03954ef79a;
static PyCodeObject *codeobj_e16309c7fc384b702d49541d2cecb5ef;
static PyCodeObject *codeobj_628d005596f876e0d8a774c29ad8dc54;
static PyCodeObject *codeobj_26250e413c3c3fe5c0af44b9850c30b8;
static PyCodeObject *codeobj_ba6793ba5844d637cacb95481f7e2edc;
static PyCodeObject *codeobj_bcf31103c980504474b839f982cea098;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_c251a6c94c6e10269ce10063ac8b5e24;
    codeobj_f239adae68e304790d6aa9a39c23e7b9 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_c9dd2760a1399f089d616717f6e41ae2, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_90e798895b61d1ad0e1434f5f7478faa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_MockRequest, 25, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_9ea89b7a132c9f783ef3ec5f9df44b49 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___contains__, 315, const_tuple_str_plain_self_str_plain_name_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7fe301af9a9c16f5ea161a2836d06e39 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___delitem__, 337, const_tuple_str_plain_self_str_plain_name_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ef5acc30962009558a782d38bb09eeab = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getitem__, 321, const_tuple_str_plain_self_str_plain_name_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_660ec21aa16ac133d331a9c39308c93f = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getstate__, 401, const_tuple_str_plain_self_str_plain_state_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_19ee8ae3bb1dda657e0d47f94bfd4700 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 37, const_tuple_str_plain_self_str_plain_request_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4ba0e401bc9b99fd4d5e282fb082d3f7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 104, const_tuple_str_plain_self_str_plain_headers_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_be1d0363e4c39f971bb8246d37c7c858 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___setitem__, 330, const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d61891d38faeb7479b0997dfc2d435fd = MAKE_CODEOBJ( module_filename_obj, const_str_plain___setstate__, 408, const_tuple_str_plain_self_str_plain_state_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f68811eaf09fad53c1b236ae40fbc349 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__copy_cookie_jar, 426, const_tuple_str_plain_jar_str_plain_cookie_str_plain_new_jar_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0dfa8aaa7580004bbd27cb7c38611e4c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__find, 356, const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b0910d3fb21ca7672598327e935ce232 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__find_no_duplicates, 376, const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_52c70a9baf3f3bc12e38902218545b3a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_header, 74, const_tuple_str_plain_self_str_plain_key_str_plain_val_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_61b127473fb0aee214b03cd821d42555 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_unredirected_header, 78, const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b3d2d06fb7011b6a74dd316dcefd1a92 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cookiejar_from_dict, 508, const_tuple_e879b00880f406da33a29c27a6fe107e_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f1cf3648295cf8710370bb4207467241 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_copy, 414, const_tuple_str_plain_self_str_plain_new_cj_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4431e8ea73cb3d149c8fcdbbb957c0bc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_cookie, 441, const_tuple_cc8bb9f8aaf002e327fa9291fe7fb9ee_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_3790fdf113373a6986c475c57c335bb2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_extract_cookies_to_jar, 118, const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_52c802ee21afe05626c252a4a56f1d9c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get, 189, const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0543d2fd4f485d86545d7f352bae132d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_cookie_header, 135, const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_35935570550094e38a6714401daf1bfd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_dict, 299, const_tuple_0aa5b2cb8f391adb63d4b5efbdfa9aa6_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4223c17850eb1ab7acbf6e35d1096f7f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_full_url, 51, const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_34c8060f7c2cbfafaba0744715cca7fe = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_header, 71, const_tuple_str_plain_self_str_plain_name_str_plain_default_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_60f9315d089254062271db219841fec3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_host, 45, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_67518c8f2ed686d9abb9abc3c09cc1a0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_new_headers, 81, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3b17b91b04203fe3cf921d4b1b5fb192 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_origin_req_host, 48, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5a3e1ac27c82fd06c724bfb6626377f6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_policy, 421, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_efc3ae75056dc200b0ce5ea54734123b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_type, 42, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_376c02cad049b335b5bc873e2cd62f52 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getheaders, 114, const_tuple_str_plain_self_str_plain_name_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0a7009ddb3ade6e83cafc7036c31aa44 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_has_header, 68, const_tuple_str_plain_self_str_plain_name_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4ddf54c81851d86ba9203759ff3319ff = MAKE_CODEOBJ( module_filename_obj, const_str_plain_host, 92, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4f64948cd136e31d8bf437740b850271 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_info, 111, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a0ea98de0913f7b96966486dc0958bda = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_unverifiable, 65, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_95f49bc8d7100729b16009fd9e1af3a6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_items, 261, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3a0b35a31cd8924a0167a5971c698ab4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_iteritems, 252, const_tuple_str_plain_self_str_plain_cookie_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c0bfcdc1b74d1066b2c84b68dde8f210 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_iterkeys, 218, const_tuple_str_plain_self_str_plain_cookie_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0583d5987808e361b09b6f2a9220c8e7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_itervalues, 235, const_tuple_str_plain_self_str_plain_cookie_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4d9eeca9887b7309418908f098f92366 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_keys, 227, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c613e039ae3d9aad157f752f9d50ceb2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_list_domains, 270, const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ebd610336330c4244c062091d4674d05 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_list_paths, 278, const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_de0a49d0e64ad2a52d795816c59b5228 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_merge_cookies, 529, const_tuple_95c52f105bd16b9093b126943b0df3d1_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_29c90574d842c9822feb17c9d2a45738 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_morsel_to_cookie, 477, const_tuple_str_plain_morsel_str_plain_time_template_str_plain_expires_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_31c1677bdaf3181e74f5175cd2f18a24 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_multiple_domains, 286, const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7c0c4ced2ec588874b876c295e965f78 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_origin_req_host, 88, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_350bf23a08b3616835403c03954ef79a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_remove_cookie_by_name, 146, const_tuple_ca917a44106411b262150e155c627a6c_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e16309c7fc384b702d49541d2cecb5ef = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set, 201, const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_628d005596f876e0d8a774c29ad8dc54 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_cookie, 343, const_tuple_25d2de9e61b29fbcffb40dadbd207aef_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_26250e413c3c3fe5c0af44b9850c30b8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_unverifiable, 84, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ba6793ba5844d637cacb95481f7e2edc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_update, 348, const_tuple_str_plain_self_str_plain_other_str_plain_cookie_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bcf31103c980504474b839f982cea098 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_values, 244, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *requests$cookies$$$function_23_iterkeys$$$genobj_1_iterkeys_maker( void );


static PyObject *requests$cookies$$$function_25_itervalues$$$genobj_1_itervalues_maker( void );


static PyObject *requests$cookies$$$function_27_iteritems$$$genobj_1_iteritems_maker( void );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_pos_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_6_complex_call_helper_pos_star_list_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_10_add_unredirected_header(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_11_get_new_headers(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_12_unverifiable(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_13_origin_req_host(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_14_host(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_15___init__(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_16_info(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_17_getheaders(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_18_extract_cookies_to_jar(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_19_get_cookie_header(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_20_remove_cookie_by_name( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_21_get( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_22_set(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_23_iterkeys(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_24_keys(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_25_itervalues(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_26_values(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_27_iteritems(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_28_items(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_29_list_domains(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_2_get_type(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_30_list_paths(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_31_multiple_domains(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_32_get_dict( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_33___contains__(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_34___getitem__(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_35___setitem__(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_36___delitem__(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_37_set_cookie(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_38_update(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_39__find( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_3_get_host(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_40__find_no_duplicates( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_41___getstate__(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_42___setstate__(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_43_copy(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_44_get_policy(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_45__copy_cookie_jar(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_46_create_cookie(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_47_morsel_to_cookie(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_48_cookiejar_from_dict( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_49_merge_cookies(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_4_get_origin_req_host(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_5_get_full_url(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_6_is_unverifiable(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_7_has_header(  );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_8_get_header( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_9_add_header(  );


// The module function definitions.
static PyObject *impl_requests$cookies$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_19ee8ae3bb1dda657e0d47f94bfd4700;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_19ee8ae3bb1dda657e0d47f94bfd4700 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_19ee8ae3bb1dda657e0d47f94bfd4700, codeobj_19ee8ae3bb1dda657e0d47f94bfd4700, module_requests$cookies, sizeof(void *)+sizeof(void *) );
    frame_19ee8ae3bb1dda657e0d47f94bfd4700 = cache_frame_19ee8ae3bb1dda657e0d47f94bfd4700;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_19ee8ae3bb1dda657e0d47f94bfd4700 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_19ee8ae3bb1dda657e0d47f94bfd4700 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_request );
        tmp_assattr_name_1 = par_request;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__r, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = PyDict_New();
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__new_headers, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_urlparse );

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

            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__r );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_url );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_19ee8ae3bb1dda657e0d47f94bfd4700->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_scheme );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_assattr_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_type, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_19ee8ae3bb1dda657e0d47f94bfd4700 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_19ee8ae3bb1dda657e0d47f94bfd4700 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_19ee8ae3bb1dda657e0d47f94bfd4700, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_19ee8ae3bb1dda657e0d47f94bfd4700->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_19ee8ae3bb1dda657e0d47f94bfd4700, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_19ee8ae3bb1dda657e0d47f94bfd4700,
        type_description_1,
        par_self,
        par_request
    );


    // Release cached frame.
    if ( frame_19ee8ae3bb1dda657e0d47f94bfd4700 == cache_frame_19ee8ae3bb1dda657e0d47f94bfd4700 )
    {
        Py_DECREF( frame_19ee8ae3bb1dda657e0d47f94bfd4700 );
    }
    cache_frame_19ee8ae3bb1dda657e0d47f94bfd4700 = NULL;

    assertFrameObject( frame_19ee8ae3bb1dda657e0d47f94bfd4700 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

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

    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_1___init__ );
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


static PyObject *impl_requests$cookies$$$function_2_get_type( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_efc3ae75056dc200b0ce5ea54734123b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_efc3ae75056dc200b0ce5ea54734123b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_efc3ae75056dc200b0ce5ea54734123b, codeobj_efc3ae75056dc200b0ce5ea54734123b, module_requests$cookies, sizeof(void *) );
    frame_efc3ae75056dc200b0ce5ea54734123b = cache_frame_efc3ae75056dc200b0ce5ea54734123b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_efc3ae75056dc200b0ce5ea54734123b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_efc3ae75056dc200b0ce5ea54734123b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_type );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_efc3ae75056dc200b0ce5ea54734123b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_efc3ae75056dc200b0ce5ea54734123b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_efc3ae75056dc200b0ce5ea54734123b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_efc3ae75056dc200b0ce5ea54734123b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_efc3ae75056dc200b0ce5ea54734123b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_efc3ae75056dc200b0ce5ea54734123b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_efc3ae75056dc200b0ce5ea54734123b,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_efc3ae75056dc200b0ce5ea54734123b == cache_frame_efc3ae75056dc200b0ce5ea54734123b )
    {
        Py_DECREF( frame_efc3ae75056dc200b0ce5ea54734123b );
    }
    cache_frame_efc3ae75056dc200b0ce5ea54734123b = NULL;

    assertFrameObject( frame_efc3ae75056dc200b0ce5ea54734123b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_2_get_type );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_2_get_type );
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


static PyObject *impl_requests$cookies$$$function_3_get_host( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_60f9315d089254062271db219841fec3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_60f9315d089254062271db219841fec3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_60f9315d089254062271db219841fec3, codeobj_60f9315d089254062271db219841fec3, module_requests$cookies, sizeof(void *) );
    frame_60f9315d089254062271db219841fec3 = cache_frame_60f9315d089254062271db219841fec3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_60f9315d089254062271db219841fec3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_60f9315d089254062271db219841fec3 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_urlparse );

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

            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__r );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_url );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_60f9315d089254062271db219841fec3->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_netloc );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_60f9315d089254062271db219841fec3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_60f9315d089254062271db219841fec3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_60f9315d089254062271db219841fec3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_60f9315d089254062271db219841fec3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_60f9315d089254062271db219841fec3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_60f9315d089254062271db219841fec3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_60f9315d089254062271db219841fec3,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_60f9315d089254062271db219841fec3 == cache_frame_60f9315d089254062271db219841fec3 )
    {
        Py_DECREF( frame_60f9315d089254062271db219841fec3 );
    }
    cache_frame_60f9315d089254062271db219841fec3 = NULL;

    assertFrameObject( frame_60f9315d089254062271db219841fec3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_3_get_host );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_3_get_host );
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


static PyObject *impl_requests$cookies$$$function_4_get_origin_req_host( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_3b17b91b04203fe3cf921d4b1b5fb192;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3b17b91b04203fe3cf921d4b1b5fb192 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3b17b91b04203fe3cf921d4b1b5fb192, codeobj_3b17b91b04203fe3cf921d4b1b5fb192, module_requests$cookies, sizeof(void *) );
    frame_3b17b91b04203fe3cf921d4b1b5fb192 = cache_frame_3b17b91b04203fe3cf921d4b1b5fb192;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3b17b91b04203fe3cf921d4b1b5fb192 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3b17b91b04203fe3cf921d4b1b5fb192 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_3b17b91b04203fe3cf921d4b1b5fb192->m_frame.f_lineno = 49;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_host );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b17b91b04203fe3cf921d4b1b5fb192 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b17b91b04203fe3cf921d4b1b5fb192 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b17b91b04203fe3cf921d4b1b5fb192 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3b17b91b04203fe3cf921d4b1b5fb192, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3b17b91b04203fe3cf921d4b1b5fb192->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3b17b91b04203fe3cf921d4b1b5fb192, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3b17b91b04203fe3cf921d4b1b5fb192,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_3b17b91b04203fe3cf921d4b1b5fb192 == cache_frame_3b17b91b04203fe3cf921d4b1b5fb192 )
    {
        Py_DECREF( frame_3b17b91b04203fe3cf921d4b1b5fb192 );
    }
    cache_frame_3b17b91b04203fe3cf921d4b1b5fb192 = NULL;

    assertFrameObject( frame_3b17b91b04203fe3cf921d4b1b5fb192 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_4_get_origin_req_host );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_4_get_origin_req_host );
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


static PyObject *impl_requests$cookies$$$function_5_get_full_url( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_host = NULL;
    PyObject *var_parsed = NULL;
    struct Nuitka_FrameObject *frame_4223c17850eb1ab7acbf6e35d1096f7f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4223c17850eb1ab7acbf6e35d1096f7f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4223c17850eb1ab7acbf6e35d1096f7f, codeobj_4223c17850eb1ab7acbf6e35d1096f7f, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4223c17850eb1ab7acbf6e35d1096f7f = cache_frame_4223c17850eb1ab7acbf6e35d1096f7f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4223c17850eb1ab7acbf6e35d1096f7f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4223c17850eb1ab7acbf6e35d1096f7f ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__r );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_headers );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_4223c17850eb1ab7acbf6e35d1096f7f->m_frame.f_lineno = 54;
        tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_Host_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
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
            PyObject *tmp_source_name_3;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__r );
            if ( tmp_source_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_url );
            Py_DECREF( tmp_source_name_3 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_to_native_string );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_to_native_string );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "to_native_string" );
            exception_tb = NULL;

            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__r );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_headers );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_str_plain_Host;
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_81b3970727674c20ce12b1a4757dad21 );
        frame_4223c17850eb1ab7acbf6e35d1096f7f->m_frame.f_lineno = 57;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_host == NULL );
        var_host = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_urlparse );

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

            exception_lineno = 58;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__r );
        if ( tmp_source_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_url );
        Py_DECREF( tmp_source_name_7 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_4223c17850eb1ab7acbf6e35d1096f7f->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_parsed == NULL );
        var_parsed = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_source_name_9;
        PyObject *tmp_source_name_10;
        PyObject *tmp_source_name_11;
        PyObject *tmp_source_name_12;
        PyObject *tmp_source_name_13;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_urlunparse );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlunparse );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "urlunparse" );
            exception_tb = NULL;

            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( var_parsed );
        tmp_source_name_9 = var_parsed;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_scheme );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = PyList_New( 6 );
        PyList_SET_ITEM( tmp_args_element_name_2, 0, tmp_list_element_1 );
        CHECK_OBJECT( var_host );
        tmp_list_element_1 = var_host;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_2, 1, tmp_list_element_1 );
        CHECK_OBJECT( var_parsed );
        tmp_source_name_10 = var_parsed;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_path );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 61;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_2, 2, tmp_list_element_1 );
        CHECK_OBJECT( var_parsed );
        tmp_source_name_11 = var_parsed;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_params );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 61;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_2, 3, tmp_list_element_1 );
        CHECK_OBJECT( var_parsed );
        tmp_source_name_12 = var_parsed;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_query );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 61;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_2, 4, tmp_list_element_1 );
        CHECK_OBJECT( var_parsed );
        tmp_source_name_13 = var_parsed;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_fragment );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 62;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_2, 5, tmp_list_element_1 );
        frame_4223c17850eb1ab7acbf6e35d1096f7f->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4223c17850eb1ab7acbf6e35d1096f7f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4223c17850eb1ab7acbf6e35d1096f7f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4223c17850eb1ab7acbf6e35d1096f7f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4223c17850eb1ab7acbf6e35d1096f7f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4223c17850eb1ab7acbf6e35d1096f7f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4223c17850eb1ab7acbf6e35d1096f7f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4223c17850eb1ab7acbf6e35d1096f7f,
        type_description_1,
        par_self,
        var_host,
        var_parsed
    );


    // Release cached frame.
    if ( frame_4223c17850eb1ab7acbf6e35d1096f7f == cache_frame_4223c17850eb1ab7acbf6e35d1096f7f )
    {
        Py_DECREF( frame_4223c17850eb1ab7acbf6e35d1096f7f );
    }
    cache_frame_4223c17850eb1ab7acbf6e35d1096f7f = NULL;

    assertFrameObject( frame_4223c17850eb1ab7acbf6e35d1096f7f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_5_get_full_url );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_host );
    var_host = NULL;

    Py_XDECREF( var_parsed );
    var_parsed = NULL;

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

    Py_XDECREF( var_host );
    var_host = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_5_get_full_url );
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


static PyObject *impl_requests$cookies$$$function_6_is_unverifiable( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_6_is_unverifiable );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_6_is_unverifiable );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function_7_has_header( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_0a7009ddb3ade6e83cafc7036c31aa44;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_0a7009ddb3ade6e83cafc7036c31aa44 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0a7009ddb3ade6e83cafc7036c31aa44, codeobj_0a7009ddb3ade6e83cafc7036c31aa44, module_requests$cookies, sizeof(void *)+sizeof(void *) );
    frame_0a7009ddb3ade6e83cafc7036c31aa44 = cache_frame_0a7009ddb3ade6e83cafc7036c31aa44;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0a7009ddb3ade6e83cafc7036c31aa44 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0a7009ddb3ade6e83cafc7036c31aa44 ) == 2 ); // Frame stack

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_name );
        tmp_compexpr_left_1 = par_name;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__r );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_headers );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = ( tmp_res == 1 ) ? Py_True : Py_False;
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
        CHECK_OBJECT( par_name );
        tmp_compexpr_left_2 = par_name;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__new_headers );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res == 1 ) ? Py_True : Py_False;
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0a7009ddb3ade6e83cafc7036c31aa44 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0a7009ddb3ade6e83cafc7036c31aa44 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0a7009ddb3ade6e83cafc7036c31aa44 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0a7009ddb3ade6e83cafc7036c31aa44, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0a7009ddb3ade6e83cafc7036c31aa44->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0a7009ddb3ade6e83cafc7036c31aa44, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0a7009ddb3ade6e83cafc7036c31aa44,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame.
    if ( frame_0a7009ddb3ade6e83cafc7036c31aa44 == cache_frame_0a7009ddb3ade6e83cafc7036c31aa44 )
    {
        Py_DECREF( frame_0a7009ddb3ade6e83cafc7036c31aa44 );
    }
    cache_frame_0a7009ddb3ade6e83cafc7036c31aa44 = NULL;

    assertFrameObject( frame_0a7009ddb3ade6e83cafc7036c31aa44 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_7_has_header );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_7_has_header );
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


static PyObject *impl_requests$cookies$$$function_8_get_header( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_default = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_34c8060f7c2cbfafaba0744715cca7fe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_34c8060f7c2cbfafaba0744715cca7fe = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_34c8060f7c2cbfafaba0744715cca7fe, codeobj_34c8060f7c2cbfafaba0744715cca7fe, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_34c8060f7c2cbfafaba0744715cca7fe = cache_frame_34c8060f7c2cbfafaba0744715cca7fe;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_34c8060f7c2cbfafaba0744715cca7fe );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_34c8060f7c2cbfafaba0744715cca7fe ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__r );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_headers );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_name );
        tmp_args_element_name_1 = par_name;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__new_headers );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_name );
        tmp_args_element_name_3 = par_name;
        CHECK_OBJECT( par_default );
        tmp_args_element_name_4 = par_default;
        frame_34c8060f7c2cbfafaba0744715cca7fe->m_frame.f_lineno = 72;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_34c8060f7c2cbfafaba0744715cca7fe->m_frame.f_lineno = 72;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_34c8060f7c2cbfafaba0744715cca7fe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_34c8060f7c2cbfafaba0744715cca7fe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_34c8060f7c2cbfafaba0744715cca7fe );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_34c8060f7c2cbfafaba0744715cca7fe, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_34c8060f7c2cbfafaba0744715cca7fe->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_34c8060f7c2cbfafaba0744715cca7fe, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_34c8060f7c2cbfafaba0744715cca7fe,
        type_description_1,
        par_self,
        par_name,
        par_default
    );


    // Release cached frame.
    if ( frame_34c8060f7c2cbfafaba0744715cca7fe == cache_frame_34c8060f7c2cbfafaba0744715cca7fe )
    {
        Py_DECREF( frame_34c8060f7c2cbfafaba0744715cca7fe );
    }
    cache_frame_34c8060f7c2cbfafaba0744715cca7fe = NULL;

    assertFrameObject( frame_34c8060f7c2cbfafaba0744715cca7fe );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_8_get_header );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_default );
    Py_DECREF( par_default );
    par_default = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_default );
    Py_DECREF( par_default );
    par_default = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_8_get_header );
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


static PyObject *impl_requests$cookies$$$function_9_add_header( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    PyObject *par_val = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_52c70a9baf3f3bc12e38902218545b3a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_52c70a9baf3f3bc12e38902218545b3a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_52c70a9baf3f3bc12e38902218545b3a, codeobj_52c70a9baf3f3bc12e38902218545b3a, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_52c70a9baf3f3bc12e38902218545b3a = cache_frame_52c70a9baf3f3bc12e38902218545b3a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_52c70a9baf3f3bc12e38902218545b3a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_52c70a9baf3f3bc12e38902218545b3a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = const_str_digest_a9d19ccf5848be851d2f630cfe17789d;
        frame_52c70a9baf3f3bc12e38902218545b3a->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = { tmp_make_exception_arg_1 };
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_NotImplementedError, call_args );
        }

        assert( !(tmp_raise_type_1 == NULL) );
        exception_type = tmp_raise_type_1;
        exception_lineno = 76;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_52c70a9baf3f3bc12e38902218545b3a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_52c70a9baf3f3bc12e38902218545b3a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_52c70a9baf3f3bc12e38902218545b3a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_52c70a9baf3f3bc12e38902218545b3a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_52c70a9baf3f3bc12e38902218545b3a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_52c70a9baf3f3bc12e38902218545b3a,
        type_description_1,
        par_self,
        par_key,
        par_val
    );


    // Release cached frame.
    if ( frame_52c70a9baf3f3bc12e38902218545b3a == cache_frame_52c70a9baf3f3bc12e38902218545b3a )
    {
        Py_DECREF( frame_52c70a9baf3f3bc12e38902218545b3a );
    }
    cache_frame_52c70a9baf3f3bc12e38902218545b3a = NULL;

    assertFrameObject( frame_52c70a9baf3f3bc12e38902218545b3a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_9_add_header );
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

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_9_add_header );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_requests$cookies$$$function_10_add_unredirected_header( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_value = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_61b127473fb0aee214b03cd821d42555;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_61b127473fb0aee214b03cd821d42555 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_61b127473fb0aee214b03cd821d42555, codeobj_61b127473fb0aee214b03cd821d42555, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_61b127473fb0aee214b03cd821d42555 = cache_frame_61b127473fb0aee214b03cd821d42555;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_61b127473fb0aee214b03cd821d42555 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_61b127473fb0aee214b03cd821d42555 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( par_value );
        tmp_ass_subvalue_1 = par_value;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__new_headers );
        if ( tmp_ass_subscribed_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_name );
        tmp_ass_subscript_1 = par_name;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscribed_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_61b127473fb0aee214b03cd821d42555 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_61b127473fb0aee214b03cd821d42555 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_61b127473fb0aee214b03cd821d42555, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_61b127473fb0aee214b03cd821d42555->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_61b127473fb0aee214b03cd821d42555, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_61b127473fb0aee214b03cd821d42555,
        type_description_1,
        par_self,
        par_name,
        par_value
    );


    // Release cached frame.
    if ( frame_61b127473fb0aee214b03cd821d42555 == cache_frame_61b127473fb0aee214b03cd821d42555 )
    {
        Py_DECREF( frame_61b127473fb0aee214b03cd821d42555 );
    }
    cache_frame_61b127473fb0aee214b03cd821d42555 = NULL;

    assertFrameObject( frame_61b127473fb0aee214b03cd821d42555 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_10_add_unredirected_header );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_10_add_unredirected_header );
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


static PyObject *impl_requests$cookies$$$function_11_get_new_headers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_67518c8f2ed686d9abb9abc3c09cc1a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_67518c8f2ed686d9abb9abc3c09cc1a0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_67518c8f2ed686d9abb9abc3c09cc1a0, codeobj_67518c8f2ed686d9abb9abc3c09cc1a0, module_requests$cookies, sizeof(void *) );
    frame_67518c8f2ed686d9abb9abc3c09cc1a0 = cache_frame_67518c8f2ed686d9abb9abc3c09cc1a0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_67518c8f2ed686d9abb9abc3c09cc1a0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_67518c8f2ed686d9abb9abc3c09cc1a0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__new_headers );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67518c8f2ed686d9abb9abc3c09cc1a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_67518c8f2ed686d9abb9abc3c09cc1a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67518c8f2ed686d9abb9abc3c09cc1a0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_67518c8f2ed686d9abb9abc3c09cc1a0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_67518c8f2ed686d9abb9abc3c09cc1a0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_67518c8f2ed686d9abb9abc3c09cc1a0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_67518c8f2ed686d9abb9abc3c09cc1a0,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_67518c8f2ed686d9abb9abc3c09cc1a0 == cache_frame_67518c8f2ed686d9abb9abc3c09cc1a0 )
    {
        Py_DECREF( frame_67518c8f2ed686d9abb9abc3c09cc1a0 );
    }
    cache_frame_67518c8f2ed686d9abb9abc3c09cc1a0 = NULL;

    assertFrameObject( frame_67518c8f2ed686d9abb9abc3c09cc1a0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_11_get_new_headers );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_11_get_new_headers );
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


static PyObject *impl_requests$cookies$$$function_12_unverifiable( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_26250e413c3c3fe5c0af44b9850c30b8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_26250e413c3c3fe5c0af44b9850c30b8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_26250e413c3c3fe5c0af44b9850c30b8, codeobj_26250e413c3c3fe5c0af44b9850c30b8, module_requests$cookies, sizeof(void *) );
    frame_26250e413c3c3fe5c0af44b9850c30b8 = cache_frame_26250e413c3c3fe5c0af44b9850c30b8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_26250e413c3c3fe5c0af44b9850c30b8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_26250e413c3c3fe5c0af44b9850c30b8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_26250e413c3c3fe5c0af44b9850c30b8->m_frame.f_lineno = 86;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_is_unverifiable );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_26250e413c3c3fe5c0af44b9850c30b8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_26250e413c3c3fe5c0af44b9850c30b8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_26250e413c3c3fe5c0af44b9850c30b8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_26250e413c3c3fe5c0af44b9850c30b8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_26250e413c3c3fe5c0af44b9850c30b8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_26250e413c3c3fe5c0af44b9850c30b8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_26250e413c3c3fe5c0af44b9850c30b8,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_26250e413c3c3fe5c0af44b9850c30b8 == cache_frame_26250e413c3c3fe5c0af44b9850c30b8 )
    {
        Py_DECREF( frame_26250e413c3c3fe5c0af44b9850c30b8 );
    }
    cache_frame_26250e413c3c3fe5c0af44b9850c30b8 = NULL;

    assertFrameObject( frame_26250e413c3c3fe5c0af44b9850c30b8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_12_unverifiable );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_12_unverifiable );
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


static PyObject *impl_requests$cookies$$$function_13_origin_req_host( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_7c0c4ced2ec588874b876c295e965f78;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7c0c4ced2ec588874b876c295e965f78 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7c0c4ced2ec588874b876c295e965f78, codeobj_7c0c4ced2ec588874b876c295e965f78, module_requests$cookies, sizeof(void *) );
    frame_7c0c4ced2ec588874b876c295e965f78 = cache_frame_7c0c4ced2ec588874b876c295e965f78;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7c0c4ced2ec588874b876c295e965f78 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7c0c4ced2ec588874b876c295e965f78 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_7c0c4ced2ec588874b876c295e965f78->m_frame.f_lineno = 90;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_origin_req_host );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7c0c4ced2ec588874b876c295e965f78 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7c0c4ced2ec588874b876c295e965f78 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7c0c4ced2ec588874b876c295e965f78 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7c0c4ced2ec588874b876c295e965f78, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7c0c4ced2ec588874b876c295e965f78->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7c0c4ced2ec588874b876c295e965f78, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7c0c4ced2ec588874b876c295e965f78,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_7c0c4ced2ec588874b876c295e965f78 == cache_frame_7c0c4ced2ec588874b876c295e965f78 )
    {
        Py_DECREF( frame_7c0c4ced2ec588874b876c295e965f78 );
    }
    cache_frame_7c0c4ced2ec588874b876c295e965f78 = NULL;

    assertFrameObject( frame_7c0c4ced2ec588874b876c295e965f78 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_13_origin_req_host );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_13_origin_req_host );
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


static PyObject *impl_requests$cookies$$$function_14_host( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_4ddf54c81851d86ba9203759ff3319ff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4ddf54c81851d86ba9203759ff3319ff = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4ddf54c81851d86ba9203759ff3319ff, codeobj_4ddf54c81851d86ba9203759ff3319ff, module_requests$cookies, sizeof(void *) );
    frame_4ddf54c81851d86ba9203759ff3319ff = cache_frame_4ddf54c81851d86ba9203759ff3319ff;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4ddf54c81851d86ba9203759ff3319ff );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4ddf54c81851d86ba9203759ff3319ff ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_4ddf54c81851d86ba9203759ff3319ff->m_frame.f_lineno = 94;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_host );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ddf54c81851d86ba9203759ff3319ff );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ddf54c81851d86ba9203759ff3319ff );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ddf54c81851d86ba9203759ff3319ff );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4ddf54c81851d86ba9203759ff3319ff, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4ddf54c81851d86ba9203759ff3319ff->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4ddf54c81851d86ba9203759ff3319ff, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4ddf54c81851d86ba9203759ff3319ff,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_4ddf54c81851d86ba9203759ff3319ff == cache_frame_4ddf54c81851d86ba9203759ff3319ff )
    {
        Py_DECREF( frame_4ddf54c81851d86ba9203759ff3319ff );
    }
    cache_frame_4ddf54c81851d86ba9203759ff3319ff = NULL;

    assertFrameObject( frame_4ddf54c81851d86ba9203759ff3319ff );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_14_host );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_14_host );
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


static PyObject *impl_requests$cookies$$$function_15___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_headers = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_4ba0e401bc9b99fd4d5e282fb082d3f7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4ba0e401bc9b99fd4d5e282fb082d3f7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4ba0e401bc9b99fd4d5e282fb082d3f7, codeobj_4ba0e401bc9b99fd4d5e282fb082d3f7, module_requests$cookies, sizeof(void *)+sizeof(void *) );
    frame_4ba0e401bc9b99fd4d5e282fb082d3f7 = cache_frame_4ba0e401bc9b99fd4d5e282fb082d3f7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4ba0e401bc9b99fd4d5e282fb082d3f7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4ba0e401bc9b99fd4d5e282fb082d3f7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_headers );
        tmp_assattr_name_1 = par_headers;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__headers, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ba0e401bc9b99fd4d5e282fb082d3f7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ba0e401bc9b99fd4d5e282fb082d3f7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4ba0e401bc9b99fd4d5e282fb082d3f7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4ba0e401bc9b99fd4d5e282fb082d3f7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4ba0e401bc9b99fd4d5e282fb082d3f7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4ba0e401bc9b99fd4d5e282fb082d3f7,
        type_description_1,
        par_self,
        par_headers
    );


    // Release cached frame.
    if ( frame_4ba0e401bc9b99fd4d5e282fb082d3f7 == cache_frame_4ba0e401bc9b99fd4d5e282fb082d3f7 )
    {
        Py_DECREF( frame_4ba0e401bc9b99fd4d5e282fb082d3f7 );
    }
    cache_frame_4ba0e401bc9b99fd4d5e282fb082d3f7 = NULL;

    assertFrameObject( frame_4ba0e401bc9b99fd4d5e282fb082d3f7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_15___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_headers );
    Py_DECREF( par_headers );
    par_headers = NULL;

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

    CHECK_OBJECT( (PyObject *)par_headers );
    Py_DECREF( par_headers );
    par_headers = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_15___init__ );
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


static PyObject *impl_requests$cookies$$$function_16_info( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_4f64948cd136e31d8bf437740b850271;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4f64948cd136e31d8bf437740b850271 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4f64948cd136e31d8bf437740b850271, codeobj_4f64948cd136e31d8bf437740b850271, module_requests$cookies, sizeof(void *) );
    frame_4f64948cd136e31d8bf437740b850271 = cache_frame_4f64948cd136e31d8bf437740b850271;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4f64948cd136e31d8bf437740b850271 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4f64948cd136e31d8bf437740b850271 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__headers );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f64948cd136e31d8bf437740b850271 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f64948cd136e31d8bf437740b850271 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f64948cd136e31d8bf437740b850271 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4f64948cd136e31d8bf437740b850271, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4f64948cd136e31d8bf437740b850271->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4f64948cd136e31d8bf437740b850271, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4f64948cd136e31d8bf437740b850271,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_4f64948cd136e31d8bf437740b850271 == cache_frame_4f64948cd136e31d8bf437740b850271 )
    {
        Py_DECREF( frame_4f64948cd136e31d8bf437740b850271 );
    }
    cache_frame_4f64948cd136e31d8bf437740b850271 = NULL;

    assertFrameObject( frame_4f64948cd136e31d8bf437740b850271 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_16_info );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_16_info );
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


static PyObject *impl_requests$cookies$$$function_17_getheaders( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_376c02cad049b335b5bc873e2cd62f52;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_376c02cad049b335b5bc873e2cd62f52 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_376c02cad049b335b5bc873e2cd62f52, codeobj_376c02cad049b335b5bc873e2cd62f52, module_requests$cookies, sizeof(void *)+sizeof(void *) );
    frame_376c02cad049b335b5bc873e2cd62f52 = cache_frame_376c02cad049b335b5bc873e2cd62f52;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_376c02cad049b335b5bc873e2cd62f52 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_376c02cad049b335b5bc873e2cd62f52 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__headers );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_name );
        tmp_args_element_name_1 = par_name;
        frame_376c02cad049b335b5bc873e2cd62f52->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getheaders, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_376c02cad049b335b5bc873e2cd62f52 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_376c02cad049b335b5bc873e2cd62f52 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_376c02cad049b335b5bc873e2cd62f52, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_376c02cad049b335b5bc873e2cd62f52->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_376c02cad049b335b5bc873e2cd62f52, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_376c02cad049b335b5bc873e2cd62f52,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame.
    if ( frame_376c02cad049b335b5bc873e2cd62f52 == cache_frame_376c02cad049b335b5bc873e2cd62f52 )
    {
        Py_DECREF( frame_376c02cad049b335b5bc873e2cd62f52 );
    }
    cache_frame_376c02cad049b335b5bc873e2cd62f52 = NULL;

    assertFrameObject( frame_376c02cad049b335b5bc873e2cd62f52 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_17_getheaders );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_17_getheaders );
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


static PyObject *impl_requests$cookies$$$function_18_extract_cookies_to_jar( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_jar = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
    PyObject *par_response = python_pars[ 2 ];
    PyObject *var_req = NULL;
    PyObject *var_res = NULL;
    struct Nuitka_FrameObject *frame_3790fdf113373a6986c475c57c335bb2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3790fdf113373a6986c475c57c335bb2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3790fdf113373a6986c475c57c335bb2, codeobj_3790fdf113373a6986c475c57c335bb2, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3790fdf113373a6986c475c57c335bb2 = cache_frame_3790fdf113373a6986c475c57c335bb2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3790fdf113373a6986c475c57c335bb2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3790fdf113373a6986c475c57c335bb2 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_response );
        tmp_source_name_1 = par_response;
        tmp_attribute_name_1 = const_str_plain__original_response;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_1, tmp_attribute_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "ooooo";
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
        CHECK_OBJECT( par_response );
        tmp_source_name_2 = par_response;
        tmp_and_right_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__original_response );
        if ( tmp_and_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF( tmp_and_left_value_1 );
        tmp_operand_name_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
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
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_MockRequest );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MockRequest );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "MockRequest" );
            exception_tb = NULL;

            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_request );
        tmp_args_element_name_1 = par_request;
        frame_3790fdf113373a6986c475c57c335bb2->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_req == NULL );
        var_req = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_MockResponse );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MockResponse );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "MockResponse" );
            exception_tb = NULL;

            exception_lineno = 131;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_response );
        tmp_source_name_4 = par_response;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__original_response );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_msg );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_3790fdf113373a6986c475c57c335bb2->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_res == NULL );
        var_res = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_jar );
        tmp_called_instance_1 = par_jar;
        CHECK_OBJECT( var_res );
        tmp_args_element_name_3 = var_res;
        CHECK_OBJECT( var_req );
        tmp_args_element_name_4 = var_req;
        frame_3790fdf113373a6986c475c57c335bb2->m_frame.f_lineno = 132;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_extract_cookies, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3790fdf113373a6986c475c57c335bb2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3790fdf113373a6986c475c57c335bb2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3790fdf113373a6986c475c57c335bb2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3790fdf113373a6986c475c57c335bb2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3790fdf113373a6986c475c57c335bb2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3790fdf113373a6986c475c57c335bb2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3790fdf113373a6986c475c57c335bb2,
        type_description_1,
        par_jar,
        par_request,
        par_response,
        var_req,
        var_res
    );


    // Release cached frame.
    if ( frame_3790fdf113373a6986c475c57c335bb2 == cache_frame_3790fdf113373a6986c475c57c335bb2 )
    {
        Py_DECREF( frame_3790fdf113373a6986c475c57c335bb2 );
    }
    cache_frame_3790fdf113373a6986c475c57c335bb2 = NULL;

    assertFrameObject( frame_3790fdf113373a6986c475c57c335bb2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_18_extract_cookies_to_jar );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

    Py_XDECREF( var_req );
    var_req = NULL;

    CHECK_OBJECT( (PyObject *)par_jar );
    Py_DECREF( par_jar );
    par_jar = NULL;

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

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

    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

    Py_XDECREF( var_req );
    var_req = NULL;

    CHECK_OBJECT( (PyObject *)par_jar );
    Py_DECREF( par_jar );
    par_jar = NULL;

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_18_extract_cookies_to_jar );
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


static PyObject *impl_requests$cookies$$$function_19_get_cookie_header( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_jar = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
    PyObject *var_r = NULL;
    struct Nuitka_FrameObject *frame_0543d2fd4f485d86545d7f352bae132d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0543d2fd4f485d86545d7f352bae132d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0543d2fd4f485d86545d7f352bae132d, codeobj_0543d2fd4f485d86545d7f352bae132d, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0543d2fd4f485d86545d7f352bae132d = cache_frame_0543d2fd4f485d86545d7f352bae132d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0543d2fd4f485d86545d7f352bae132d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0543d2fd4f485d86545d7f352bae132d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_MockRequest );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MockRequest );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "MockRequest" );
            exception_tb = NULL;

            exception_lineno = 141;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_request );
        tmp_args_element_name_1 = par_request;
        frame_0543d2fd4f485d86545d7f352bae132d->m_frame.f_lineno = 141;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_r == NULL );
        var_r = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_jar );
        tmp_called_instance_1 = par_jar;
        CHECK_OBJECT( var_r );
        tmp_args_element_name_2 = var_r;
        frame_0543d2fd4f485d86545d7f352bae132d->m_frame.f_lineno = 142;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_add_cookie_header, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT( var_r );
        tmp_called_instance_3 = var_r;
        frame_0543d2fd4f485d86545d7f352bae132d->m_frame.f_lineno = 143;
        tmp_called_instance_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_get_new_headers );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_0543d2fd4f485d86545d7f352bae132d->m_frame.f_lineno = 143;
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_Cookie_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0543d2fd4f485d86545d7f352bae132d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0543d2fd4f485d86545d7f352bae132d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0543d2fd4f485d86545d7f352bae132d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0543d2fd4f485d86545d7f352bae132d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0543d2fd4f485d86545d7f352bae132d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0543d2fd4f485d86545d7f352bae132d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0543d2fd4f485d86545d7f352bae132d,
        type_description_1,
        par_jar,
        par_request,
        var_r
    );


    // Release cached frame.
    if ( frame_0543d2fd4f485d86545d7f352bae132d == cache_frame_0543d2fd4f485d86545d7f352bae132d )
    {
        Py_DECREF( frame_0543d2fd4f485d86545d7f352bae132d );
    }
    cache_frame_0543d2fd4f485d86545d7f352bae132d = NULL;

    assertFrameObject( frame_0543d2fd4f485d86545d7f352bae132d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_19_get_cookie_header );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

    CHECK_OBJECT( (PyObject *)var_r );
    Py_DECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)par_jar );
    Py_DECREF( par_jar );
    par_jar = NULL;

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

    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)par_jar );
    Py_DECREF( par_jar );
    par_jar = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_19_get_cookie_header );
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


static PyObject *impl_requests$cookies$$$function_20_remove_cookie_by_name( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cookiejar = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_domain = python_pars[ 2 ];
    PyObject *par_path = python_pars[ 3 ];
    PyObject *var_clearables = NULL;
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_350bf23a08b3616835403c03954ef79a;
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
    static struct Nuitka_FrameObject *cache_frame_350bf23a08b3616835403c03954ef79a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( var_clearables == NULL );
        var_clearables = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_350bf23a08b3616835403c03954ef79a, codeobj_350bf23a08b3616835403c03954ef79a, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_350bf23a08b3616835403c03954ef79a = cache_frame_350bf23a08b3616835403c03954ef79a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_350bf23a08b3616835403c03954ef79a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_350bf23a08b3616835403c03954ef79a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_cookiejar );
        tmp_iter_arg_1 = par_cookiejar;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "oooooo";
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
                type_description_1 = "oooooo";
                exception_lineno = 152;
                goto try_except_handler_2;
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
            PyObject *old = var_cookie;
            var_cookie = tmp_assign_source_4;
            Py_INCREF( var_cookie );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( var_cookie );
        tmp_source_name_1 = var_cookie;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_name );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_name );
        tmp_compexpr_right_1 = par_name;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "oooooo";
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
        goto loop_start_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_domain );
        tmp_compexpr_left_2 = par_domain;
        tmp_compexpr_right_2 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_domain );
        tmp_compexpr_left_3 = par_domain;
        CHECK_OBJECT( var_cookie );
        tmp_source_name_2 = var_cookie;
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_domain );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
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
        goto loop_start_1;
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_path );
        tmp_compexpr_left_4 = par_path;
        tmp_compexpr_right_4 = Py_None;
        tmp_and_left_value_2 = ( tmp_compexpr_left_4 != tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_path );
        tmp_compexpr_left_5 = par_path;
        CHECK_OBJECT( var_cookie );
        tmp_source_name_3 = var_cookie;
        tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_path );
        if ( tmp_compexpr_right_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 157;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 157;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        goto loop_start_1;
        branch_no_3:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT( var_clearables );
        tmp_source_name_4 = var_clearables;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_cookie );
        tmp_source_name_5 = var_cookie;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_domain );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 159;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_1 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_cookie );
        tmp_source_name_6 = var_cookie;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_path );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 159;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( var_cookie );
        tmp_source_name_7 = var_cookie;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_name );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 159;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_1, 2, tmp_tuple_element_1 );
        frame_350bf23a08b3616835403c03954ef79a->m_frame.f_lineno = 159;
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


            exception_lineno = 159;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "oooooo";
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

    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( var_clearables );
        tmp_iter_arg_2 = var_clearables;
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_2__for_iterator == NULL );
        tmp_for_loop_2__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                exception_lineno = 161;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_iter_arg_3 = tmp_for_loop_2__iter_value;
        tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
            Py_XDECREF( old );
        }

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


            type_description_1 = "oooooo";
            exception_lineno = 161;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_2, 1 );
        if ( tmp_assign_source_9 == NULL )
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


            type_description_1 = "oooooo";
            exception_lineno = 161;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_3, 2 );
        if ( tmp_assign_source_10 == NULL )
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


            type_description_1 = "oooooo";
            exception_lineno = 161;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_3;
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_10;
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

                    type_description_1 = "oooooo";
                    exception_lineno = 161;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooo";
            exception_lineno = 161;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

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
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_domain;
            assert( old != NULL );
            par_domain = tmp_assign_source_11;
            Py_INCREF( par_domain );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_path;
            assert( old != NULL );
            par_path = tmp_assign_source_12;
            Py_INCREF( par_path );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = par_name;
            assert( old != NULL );
            par_name = tmp_assign_source_13;
            Py_INCREF( par_name );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_cookiejar );
        tmp_called_instance_1 = par_cookiejar;
        CHECK_OBJECT( par_domain );
        tmp_args_element_name_2 = par_domain;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_3 = par_path;
        CHECK_OBJECT( par_name );
        tmp_args_element_name_4 = par_name;
        frame_350bf23a08b3616835403c03954ef79a->m_frame.f_lineno = 162;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_clear, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_350bf23a08b3616835403c03954ef79a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_350bf23a08b3616835403c03954ef79a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_350bf23a08b3616835403c03954ef79a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_350bf23a08b3616835403c03954ef79a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_350bf23a08b3616835403c03954ef79a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_350bf23a08b3616835403c03954ef79a,
        type_description_1,
        par_cookiejar,
        par_name,
        par_domain,
        par_path,
        var_clearables,
        var_cookie
    );


    // Release cached frame.
    if ( frame_350bf23a08b3616835403c03954ef79a == cache_frame_350bf23a08b3616835403c03954ef79a )
    {
        Py_DECREF( frame_350bf23a08b3616835403c03954ef79a );
    }
    cache_frame_350bf23a08b3616835403c03954ef79a = NULL;

    assertFrameObject( frame_350bf23a08b3616835403c03954ef79a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_20_remove_cookie_by_name );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)var_clearables );
    Py_DECREF( var_clearables );
    var_clearables = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_cookiejar );
    Py_DECREF( par_cookiejar );
    par_cookiejar = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

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

    Py_XDECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)var_clearables );
    Py_DECREF( var_clearables );
    var_clearables = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_cookiejar );
    Py_DECREF( par_cookiejar );
    par_cookiejar = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

    Py_XDECREF( par_path );
    par_path = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_20_remove_cookie_by_name );
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


static PyObject *impl_requests$cookies$$$function_21_get( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_default = python_pars[ 2 ];
    PyObject *par_domain = python_pars[ 3 ];
    PyObject *par_path = python_pars[ 4 ];
    struct Nuitka_FrameObject *frame_52c802ee21afe05626c252a4a56f1d9c;
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
    static struct Nuitka_FrameObject *cache_frame_52c802ee21afe05626c252a4a56f1d9c = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_52c802ee21afe05626c252a4a56f1d9c, codeobj_52c802ee21afe05626c252a4a56f1d9c, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_52c802ee21afe05626c252a4a56f1d9c = cache_frame_52c802ee21afe05626c252a4a56f1d9c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_52c802ee21afe05626c252a4a56f1d9c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_52c802ee21afe05626c252a4a56f1d9c ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_name );
        tmp_args_element_name_1 = par_name;
        CHECK_OBJECT( par_domain );
        tmp_args_element_name_2 = par_domain;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_3 = par_path;
        frame_52c802ee21afe05626c252a4a56f1d9c->m_frame.f_lineno = 197;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain__find_no_duplicates, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_21_get );
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
    PRESERVE_FRAME_EXCEPTION( frame_52c802ee21afe05626c252a4a56f1d9c );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_52c802ee21afe05626c252a4a56f1d9c, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_52c802ee21afe05626c252a4a56f1d9c, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;
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
        CHECK_OBJECT( par_default );
        tmp_return_value = par_default;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 196;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_52c802ee21afe05626c252a4a56f1d9c->m_frame) frame_52c802ee21afe05626c252a4a56f1d9c->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
        branch_end_1:;
    }
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION( frame_52c802ee21afe05626c252a4a56f1d9c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_52c802ee21afe05626c252a4a56f1d9c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_52c802ee21afe05626c252a4a56f1d9c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_52c802ee21afe05626c252a4a56f1d9c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_52c802ee21afe05626c252a4a56f1d9c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_52c802ee21afe05626c252a4a56f1d9c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_52c802ee21afe05626c252a4a56f1d9c,
        type_description_1,
        par_self,
        par_name,
        par_default,
        par_domain,
        par_path
    );


    // Release cached frame.
    if ( frame_52c802ee21afe05626c252a4a56f1d9c == cache_frame_52c802ee21afe05626c252a4a56f1d9c )
    {
        Py_DECREF( frame_52c802ee21afe05626c252a4a56f1d9c );
    }
    cache_frame_52c802ee21afe05626c252a4a56f1d9c = NULL;

    assertFrameObject( frame_52c802ee21afe05626c252a4a56f1d9c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_21_get );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_default );
    Py_DECREF( par_default );
    par_default = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

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

    CHECK_OBJECT( (PyObject *)par_default );
    Py_DECREF( par_default );
    par_default = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_21_get );
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


static PyObject *impl_requests$cookies$$$function_22_set( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_value = python_pars[ 2 ];
    PyObject *par_kwargs = python_pars[ 3 ];
    PyObject *var_c = NULL;
    struct Nuitka_FrameObject *frame_e16309c7fc384b702d49541d2cecb5ef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e16309c7fc384b702d49541d2cecb5ef = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e16309c7fc384b702d49541d2cecb5ef, codeobj_e16309c7fc384b702d49541d2cecb5ef, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e16309c7fc384b702d49541d2cecb5ef = cache_frame_e16309c7fc384b702d49541d2cecb5ef;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e16309c7fc384b702d49541d2cecb5ef );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e16309c7fc384b702d49541d2cecb5ef ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_value );
        tmp_compexpr_left_1 = par_value;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_called_instance_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_remove_cookie_by_name );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_remove_cookie_by_name );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "remove_cookie_by_name" );
                exception_tb = NULL;

                exception_lineno = 208;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_self );
            tmp_tuple_element_1 = par_self;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_name );
            tmp_tuple_element_1 = par_name;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( par_kwargs );
            tmp_called_instance_1 = par_kwargs;
            frame_e16309c7fc384b702d49541d2cecb5ef->m_frame.f_lineno = 208;
            tmp_dict_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_domain_tuple, 0 ) );

            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_name_1 );

                exception_lineno = 208;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_1 = const_str_plain_domain;
            tmp_kw_name_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( par_kwargs );
            tmp_called_instance_2 = par_kwargs;
            frame_e16309c7fc384b702d49541d2cecb5ef->m_frame.f_lineno = 208;
            tmp_dict_value_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_path_tuple, 0 ) );

            if ( tmp_dict_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_name_1 );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 208;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_2 = const_str_plain_path;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            Py_DECREF( tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_e16309c7fc384b702d49541d2cecb5ef->m_frame.f_lineno = 208;
            tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 208;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_value );
        tmp_isinstance_inst_1 = par_value;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_Morsel );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Morsel );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "Morsel" );
            exception_tb = NULL;

            exception_lineno = 211;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_2;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_morsel_to_cookie );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_morsel_to_cookie );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "morsel_to_cookie" );
                exception_tb = NULL;

                exception_lineno = 212;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            CHECK_OBJECT( par_value );
            tmp_args_element_name_1 = par_value;
            frame_e16309c7fc384b702d49541d2cecb5ef->m_frame.f_lineno = 212;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 212;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_c == NULL );
            var_c = tmp_assign_source_1;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_dircall_arg3_1;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_create_cookie );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_create_cookie );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "create_cookie" );
                exception_tb = NULL;

                exception_lineno = 214;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_dircall_arg1_1 = tmp_mvar_value_4;
            CHECK_OBJECT( par_name );
            tmp_tuple_element_2 = par_name;
            tmp_dircall_arg2_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_value );
            tmp_tuple_element_2 = par_value;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( par_kwargs );
            tmp_dircall_arg3_1 = par_kwargs;
            Py_INCREF( tmp_dircall_arg1_1 );
            Py_INCREF( tmp_dircall_arg3_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
                tmp_assign_source_2 = impl___internal__$$$function_4_complex_call_helper_pos_star_dict( dir_call_args );
            }
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 214;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_c == NULL );
            var_c = tmp_assign_source_2;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT( var_c );
        tmp_args_element_name_2 = var_c;
        frame_e16309c7fc384b702d49541d2cecb5ef->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_set_cookie, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e16309c7fc384b702d49541d2cecb5ef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e16309c7fc384b702d49541d2cecb5ef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e16309c7fc384b702d49541d2cecb5ef );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e16309c7fc384b702d49541d2cecb5ef, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e16309c7fc384b702d49541d2cecb5ef->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e16309c7fc384b702d49541d2cecb5ef, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e16309c7fc384b702d49541d2cecb5ef,
        type_description_1,
        par_self,
        par_name,
        par_value,
        par_kwargs,
        var_c
    );


    // Release cached frame.
    if ( frame_e16309c7fc384b702d49541d2cecb5ef == cache_frame_e16309c7fc384b702d49541d2cecb5ef )
    {
        Py_DECREF( frame_e16309c7fc384b702d49541d2cecb5ef );
    }
    cache_frame_e16309c7fc384b702d49541d2cecb5ef = NULL;

    assertFrameObject( frame_e16309c7fc384b702d49541d2cecb5ef );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_c );
    tmp_return_value = var_c;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_22_set );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_c );
    var_c = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

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

    Py_XDECREF( var_c );
    var_c = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_22_set );
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


static PyObject *impl_requests$cookies$$$function_23_iterkeys( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = requests$cookies$$$function_23_iterkeys$$$genobj_1_iterkeys_maker();

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_self;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_23_iterkeys );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_23_iterkeys );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



struct requests$cookies$$$function_23_iterkeys$$$genobj_1_iterkeys_locals {
    PyObject *var_cookie;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
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

static PyObject *requests$cookies$$$function_23_iterkeys$$$genobj_1_iterkeys_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct requests$cookies$$$function_23_iterkeys$$$genobj_1_iterkeys_locals *generator_heap = (struct requests$cookies$$$function_23_iterkeys$$$genobj_1_iterkeys_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_cookie = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_c0bfcdc1b74d1066b2c84b68dde8f210, module_requests$cookies, sizeof(void *)+sizeof(void *) );
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
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 224;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = PyCell_GET( generator->m_closure[0] );
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 224;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        assert( generator_heap->tmp_for_loop_1__for_iterator == NULL );
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( generator_heap->tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "co";
                generator_heap->exception_lineno = 224;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( generator_heap->tmp_for_loop_1__iter_value );
        tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_cookie;
            generator_heap->var_cookie = tmp_assign_source_3;
            Py_INCREF( generator_heap->var_cookie );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_source_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_cookie );
        tmp_source_name_1 = generator_heap->var_cookie;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_name );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 225;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_source_name_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_source_name_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 225;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 224;
        generator_heap->type_description_1 = "co";
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

    Py_XDECREF( generator_heap->tmp_for_loop_1__iter_value );
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_1__for_iterator );
    Py_DECREF( generator_heap->tmp_for_loop_1__for_iterator );
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

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
            generator->m_closure[0],
            generator_heap->var_cookie
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

    Py_XDECREF( generator_heap->var_cookie );
    generator_heap->var_cookie = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( generator_heap->tmp_for_loop_1__iter_value );
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_1__for_iterator );
    Py_DECREF( generator_heap->tmp_for_loop_1__for_iterator );
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

    Py_XDECREF( generator_heap->var_cookie );
    generator_heap->var_cookie = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *requests$cookies$$$function_23_iterkeys$$$genobj_1_iterkeys_maker( void )
{
    return Nuitka_Generator_New(
        requests$cookies$$$function_23_iterkeys$$$genobj_1_iterkeys_context,
        module_requests$cookies,
        const_str_plain_iterkeys,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_c0bfcdc1b74d1066b2c84b68dde8f210,
        1,
        sizeof(struct requests$cookies$$$function_23_iterkeys$$$genobj_1_iterkeys_locals)
    );
}


static PyObject *impl_requests$cookies$$$function_24_keys( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_4d9eeca9887b7309418908f098f92366;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4d9eeca9887b7309418908f098f92366 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4d9eeca9887b7309418908f098f92366, codeobj_4d9eeca9887b7309418908f098f92366, module_requests$cookies, sizeof(void *) );
    frame_4d9eeca9887b7309418908f098f92366 = cache_frame_4d9eeca9887b7309418908f098f92366;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4d9eeca9887b7309418908f098f92366 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4d9eeca9887b7309418908f098f92366 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_4d9eeca9887b7309418908f098f92366->m_frame.f_lineno = 233;
        tmp_list_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_iterkeys );
        if ( tmp_list_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PySequence_List( tmp_list_arg_1 );
        Py_DECREF( tmp_list_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d9eeca9887b7309418908f098f92366 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d9eeca9887b7309418908f098f92366 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d9eeca9887b7309418908f098f92366 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4d9eeca9887b7309418908f098f92366, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4d9eeca9887b7309418908f098f92366->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4d9eeca9887b7309418908f098f92366, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4d9eeca9887b7309418908f098f92366,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_4d9eeca9887b7309418908f098f92366 == cache_frame_4d9eeca9887b7309418908f098f92366 )
    {
        Py_DECREF( frame_4d9eeca9887b7309418908f098f92366 );
    }
    cache_frame_4d9eeca9887b7309418908f098f92366 = NULL;

    assertFrameObject( frame_4d9eeca9887b7309418908f098f92366 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_24_keys );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_24_keys );
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


static PyObject *impl_requests$cookies$$$function_25_itervalues( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = requests$cookies$$$function_25_itervalues$$$genobj_1_itervalues_maker();

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_self;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_25_itervalues );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_25_itervalues );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



struct requests$cookies$$$function_25_itervalues$$$genobj_1_itervalues_locals {
    PyObject *var_cookie;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
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

static PyObject *requests$cookies$$$function_25_itervalues$$$genobj_1_itervalues_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct requests$cookies$$$function_25_itervalues$$$genobj_1_itervalues_locals *generator_heap = (struct requests$cookies$$$function_25_itervalues$$$genobj_1_itervalues_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_cookie = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_0583d5987808e361b09b6f2a9220c8e7, module_requests$cookies, sizeof(void *)+sizeof(void *) );
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
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 241;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = PyCell_GET( generator->m_closure[0] );
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 241;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        assert( generator_heap->tmp_for_loop_1__for_iterator == NULL );
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( generator_heap->tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "co";
                generator_heap->exception_lineno = 241;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( generator_heap->tmp_for_loop_1__iter_value );
        tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_cookie;
            generator_heap->var_cookie = tmp_assign_source_3;
            Py_INCREF( generator_heap->var_cookie );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_source_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_cookie );
        tmp_source_name_1 = generator_heap->var_cookie;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_value );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 242;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_source_name_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_source_name_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 242;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 241;
        generator_heap->type_description_1 = "co";
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

    Py_XDECREF( generator_heap->tmp_for_loop_1__iter_value );
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_1__for_iterator );
    Py_DECREF( generator_heap->tmp_for_loop_1__for_iterator );
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

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
            generator->m_closure[0],
            generator_heap->var_cookie
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

    Py_XDECREF( generator_heap->var_cookie );
    generator_heap->var_cookie = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( generator_heap->tmp_for_loop_1__iter_value );
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_1__for_iterator );
    Py_DECREF( generator_heap->tmp_for_loop_1__for_iterator );
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

    Py_XDECREF( generator_heap->var_cookie );
    generator_heap->var_cookie = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *requests$cookies$$$function_25_itervalues$$$genobj_1_itervalues_maker( void )
{
    return Nuitka_Generator_New(
        requests$cookies$$$function_25_itervalues$$$genobj_1_itervalues_context,
        module_requests$cookies,
        const_str_plain_itervalues,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_0583d5987808e361b09b6f2a9220c8e7,
        1,
        sizeof(struct requests$cookies$$$function_25_itervalues$$$genobj_1_itervalues_locals)
    );
}


static PyObject *impl_requests$cookies$$$function_26_values( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_bcf31103c980504474b839f982cea098;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bcf31103c980504474b839f982cea098 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bcf31103c980504474b839f982cea098, codeobj_bcf31103c980504474b839f982cea098, module_requests$cookies, sizeof(void *) );
    frame_bcf31103c980504474b839f982cea098 = cache_frame_bcf31103c980504474b839f982cea098;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bcf31103c980504474b839f982cea098 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bcf31103c980504474b839f982cea098 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_bcf31103c980504474b839f982cea098->m_frame.f_lineno = 250;
        tmp_list_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_itervalues );
        if ( tmp_list_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PySequence_List( tmp_list_arg_1 );
        Py_DECREF( tmp_list_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bcf31103c980504474b839f982cea098 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bcf31103c980504474b839f982cea098 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bcf31103c980504474b839f982cea098 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bcf31103c980504474b839f982cea098, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bcf31103c980504474b839f982cea098->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bcf31103c980504474b839f982cea098, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bcf31103c980504474b839f982cea098,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_bcf31103c980504474b839f982cea098 == cache_frame_bcf31103c980504474b839f982cea098 )
    {
        Py_DECREF( frame_bcf31103c980504474b839f982cea098 );
    }
    cache_frame_bcf31103c980504474b839f982cea098 = NULL;

    assertFrameObject( frame_bcf31103c980504474b839f982cea098 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_26_values );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_26_values );
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


static PyObject *impl_requests$cookies$$$function_27_iteritems( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = requests$cookies$$$function_27_iteritems$$$genobj_1_iteritems_maker();

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_self;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_27_iteritems );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_27_iteritems );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



struct requests$cookies$$$function_27_iteritems$$$genobj_1_iteritems_locals {
    PyObject *var_cookie;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
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

static PyObject *requests$cookies$$$function_27_iteritems$$$genobj_1_iteritems_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct requests$cookies$$$function_27_iteritems$$$genobj_1_iteritems_locals *generator_heap = (struct requests$cookies$$$function_27_iteritems$$$genobj_1_iteritems_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_cookie = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_3a0b35a31cd8924a0167a5971c698ab4, module_requests$cookies, sizeof(void *)+sizeof(void *) );
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
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = PyCell_GET( generator->m_closure[0] );
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        assert( generator_heap->tmp_for_loop_1__for_iterator == NULL );
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( generator_heap->tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "co";
                generator_heap->exception_lineno = 258;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( generator_heap->tmp_for_loop_1__iter_value );
        tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_cookie;
            generator_heap->var_cookie = tmp_assign_source_3;
            Py_INCREF( generator_heap->var_cookie );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_cookie );
        tmp_source_name_1 = generator_heap->var_cookie;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_name );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 259;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        tmp_expression_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_expression_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( generator_heap->var_cookie );
        tmp_source_name_2 = generator_heap->var_cookie;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_value );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_expression_name_1 );

            generator_heap->exception_lineno = 259;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_expression_name_1, 1, tmp_tuple_element_1 );
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_source_name_1, sizeof(PyObject *), &tmp_source_name_2, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_source_name_1, sizeof(PyObject *), &tmp_source_name_2, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 259;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 258;
        generator_heap->type_description_1 = "co";
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

    Py_XDECREF( generator_heap->tmp_for_loop_1__iter_value );
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_1__for_iterator );
    Py_DECREF( generator_heap->tmp_for_loop_1__for_iterator );
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

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
            generator->m_closure[0],
            generator_heap->var_cookie
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

    Py_XDECREF( generator_heap->var_cookie );
    generator_heap->var_cookie = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( generator_heap->tmp_for_loop_1__iter_value );
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_1__for_iterator );
    Py_DECREF( generator_heap->tmp_for_loop_1__for_iterator );
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

    Py_XDECREF( generator_heap->var_cookie );
    generator_heap->var_cookie = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *requests$cookies$$$function_27_iteritems$$$genobj_1_iteritems_maker( void )
{
    return Nuitka_Generator_New(
        requests$cookies$$$function_27_iteritems$$$genobj_1_iteritems_context,
        module_requests$cookies,
        const_str_plain_iteritems,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_3a0b35a31cd8924a0167a5971c698ab4,
        1,
        sizeof(struct requests$cookies$$$function_27_iteritems$$$genobj_1_iteritems_locals)
    );
}


static PyObject *impl_requests$cookies$$$function_28_items( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_95f49bc8d7100729b16009fd9e1af3a6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_95f49bc8d7100729b16009fd9e1af3a6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_95f49bc8d7100729b16009fd9e1af3a6, codeobj_95f49bc8d7100729b16009fd9e1af3a6, module_requests$cookies, sizeof(void *) );
    frame_95f49bc8d7100729b16009fd9e1af3a6 = cache_frame_95f49bc8d7100729b16009fd9e1af3a6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_95f49bc8d7100729b16009fd9e1af3a6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_95f49bc8d7100729b16009fd9e1af3a6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_95f49bc8d7100729b16009fd9e1af3a6->m_frame.f_lineno = 268;
        tmp_list_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_iteritems );
        if ( tmp_list_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 268;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PySequence_List( tmp_list_arg_1 );
        Py_DECREF( tmp_list_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 268;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_95f49bc8d7100729b16009fd9e1af3a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_95f49bc8d7100729b16009fd9e1af3a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_95f49bc8d7100729b16009fd9e1af3a6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_95f49bc8d7100729b16009fd9e1af3a6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_95f49bc8d7100729b16009fd9e1af3a6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_95f49bc8d7100729b16009fd9e1af3a6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_95f49bc8d7100729b16009fd9e1af3a6,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_95f49bc8d7100729b16009fd9e1af3a6 == cache_frame_95f49bc8d7100729b16009fd9e1af3a6 )
    {
        Py_DECREF( frame_95f49bc8d7100729b16009fd9e1af3a6 );
    }
    cache_frame_95f49bc8d7100729b16009fd9e1af3a6 = NULL;

    assertFrameObject( frame_95f49bc8d7100729b16009fd9e1af3a6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_28_items );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_28_items );
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


static PyObject *impl_requests$cookies$$$function_29_list_domains( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_domains = NULL;
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_c613e039ae3d9aad157f752f9d50ceb2;
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
    static struct Nuitka_FrameObject *cache_frame_c613e039ae3d9aad157f752f9d50ceb2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( var_domains == NULL );
        var_domains = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c613e039ae3d9aad157f752f9d50ceb2, codeobj_c613e039ae3d9aad157f752f9d50ceb2, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c613e039ae3d9aad157f752f9d50ceb2 = cache_frame_c613e039ae3d9aad157f752f9d50ceb2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c613e039ae3d9aad157f752f9d50ceb2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c613e039ae3d9aad157f752f9d50ceb2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_self );
        tmp_iter_arg_1 = par_self;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 273;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 273;
                goto try_except_handler_2;
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
            PyObject *old = var_cookie;
            var_cookie = tmp_assign_source_4;
            Py_INCREF( var_cookie );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( var_cookie );
        tmp_source_name_1 = var_cookie;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_domain );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_domains );
        tmp_compexpr_right_1 = var_domains;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "ooo";
            goto try_except_handler_2;
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
            PyObject *tmp_source_name_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( var_domains );
            tmp_source_name_2 = var_domains;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 275;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_cookie );
            tmp_source_name_3 = var_cookie;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_domain );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 275;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            frame_c613e039ae3d9aad157f752f9d50ceb2->m_frame.f_lineno = 275;
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


                exception_lineno = 275;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        type_description_1 = "ooo";
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
    RESTORE_FRAME_EXCEPTION( frame_c613e039ae3d9aad157f752f9d50ceb2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c613e039ae3d9aad157f752f9d50ceb2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c613e039ae3d9aad157f752f9d50ceb2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c613e039ae3d9aad157f752f9d50ceb2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c613e039ae3d9aad157f752f9d50ceb2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c613e039ae3d9aad157f752f9d50ceb2,
        type_description_1,
        par_self,
        var_domains,
        var_cookie
    );


    // Release cached frame.
    if ( frame_c613e039ae3d9aad157f752f9d50ceb2 == cache_frame_c613e039ae3d9aad157f752f9d50ceb2 )
    {
        Py_DECREF( frame_c613e039ae3d9aad157f752f9d50ceb2 );
    }
    cache_frame_c613e039ae3d9aad157f752f9d50ceb2 = NULL;

    assertFrameObject( frame_c613e039ae3d9aad157f752f9d50ceb2 );

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

    CHECK_OBJECT( var_domains );
    tmp_return_value = var_domains;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_29_list_domains );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_domains );
    Py_DECREF( var_domains );
    var_domains = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

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

    CHECK_OBJECT( (PyObject *)var_domains );
    Py_DECREF( var_domains );
    var_domains = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_29_list_domains );
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


static PyObject *impl_requests$cookies$$$function_30_list_paths( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_paths = NULL;
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_ebd610336330c4244c062091d4674d05;
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
    static struct Nuitka_FrameObject *cache_frame_ebd610336330c4244c062091d4674d05 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( var_paths == NULL );
        var_paths = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ebd610336330c4244c062091d4674d05, codeobj_ebd610336330c4244c062091d4674d05, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ebd610336330c4244c062091d4674d05 = cache_frame_ebd610336330c4244c062091d4674d05;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ebd610336330c4244c062091d4674d05 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ebd610336330c4244c062091d4674d05 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_self );
        tmp_iter_arg_1 = par_self;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 281;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 281;
                goto try_except_handler_2;
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
            PyObject *old = var_cookie;
            var_cookie = tmp_assign_source_4;
            Py_INCREF( var_cookie );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( var_cookie );
        tmp_source_name_1 = var_cookie;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_path );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_paths );
        tmp_compexpr_right_1 = var_paths;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "ooo";
            goto try_except_handler_2;
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
            PyObject *tmp_source_name_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( var_paths );
            tmp_source_name_2 = var_paths;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 283;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_cookie );
            tmp_source_name_3 = var_cookie;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_path );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 283;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            frame_ebd610336330c4244c062091d4674d05->m_frame.f_lineno = 283;
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


                exception_lineno = 283;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        type_description_1 = "ooo";
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
    RESTORE_FRAME_EXCEPTION( frame_ebd610336330c4244c062091d4674d05 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ebd610336330c4244c062091d4674d05 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ebd610336330c4244c062091d4674d05, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ebd610336330c4244c062091d4674d05->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ebd610336330c4244c062091d4674d05, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ebd610336330c4244c062091d4674d05,
        type_description_1,
        par_self,
        var_paths,
        var_cookie
    );


    // Release cached frame.
    if ( frame_ebd610336330c4244c062091d4674d05 == cache_frame_ebd610336330c4244c062091d4674d05 )
    {
        Py_DECREF( frame_ebd610336330c4244c062091d4674d05 );
    }
    cache_frame_ebd610336330c4244c062091d4674d05 = NULL;

    assertFrameObject( frame_ebd610336330c4244c062091d4674d05 );

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

    CHECK_OBJECT( var_paths );
    tmp_return_value = var_paths;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_30_list_paths );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_paths );
    Py_DECREF( var_paths );
    var_paths = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

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

    CHECK_OBJECT( (PyObject *)var_paths );
    Py_DECREF( var_paths );
    var_paths = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_30_list_paths );
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


static PyObject *impl_requests$cookies$$$function_31_multiple_domains( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_domains = NULL;
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_31c1677bdaf3181e74f5175cd2f18a24;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_31c1677bdaf3181e74f5175cd2f18a24 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( var_domains == NULL );
        var_domains = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_31c1677bdaf3181e74f5175cd2f18a24, codeobj_31c1677bdaf3181e74f5175cd2f18a24, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_31c1677bdaf3181e74f5175cd2f18a24 = cache_frame_31c1677bdaf3181e74f5175cd2f18a24;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_31c1677bdaf3181e74f5175cd2f18a24 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_31c1677bdaf3181e74f5175cd2f18a24 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_self );
        tmp_iter_arg_1 = par_self;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 293;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 293;
                goto try_except_handler_2;
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
            PyObject *old = var_cookie;
            var_cookie = tmp_assign_source_4;
            Py_INCREF( var_cookie );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( var_cookie );
        tmp_source_name_1 = var_cookie;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_domain );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 294;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_1 );
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
        CHECK_OBJECT( var_cookie );
        tmp_source_name_2 = var_cookie;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_domain );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 294;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_domains );
        tmp_compexpr_right_2 = var_domains;
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 294;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_return_value = Py_True;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_2;
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( var_domains );
        tmp_source_name_3 = var_domains;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 296;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_cookie );
        tmp_source_name_4 = var_cookie;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_domain );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 296;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_31c1677bdaf3181e74f5175cd2f18a24->m_frame.f_lineno = 296;
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


            exception_lineno = 296;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
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
    RESTORE_FRAME_EXCEPTION( frame_31c1677bdaf3181e74f5175cd2f18a24 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_31c1677bdaf3181e74f5175cd2f18a24 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_31c1677bdaf3181e74f5175cd2f18a24 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_31c1677bdaf3181e74f5175cd2f18a24, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_31c1677bdaf3181e74f5175cd2f18a24->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_31c1677bdaf3181e74f5175cd2f18a24, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_31c1677bdaf3181e74f5175cd2f18a24,
        type_description_1,
        par_self,
        var_domains,
        var_cookie
    );


    // Release cached frame.
    if ( frame_31c1677bdaf3181e74f5175cd2f18a24 == cache_frame_31c1677bdaf3181e74f5175cd2f18a24 )
    {
        Py_DECREF( frame_31c1677bdaf3181e74f5175cd2f18a24 );
    }
    cache_frame_31c1677bdaf3181e74f5175cd2f18a24 = NULL;

    assertFrameObject( frame_31c1677bdaf3181e74f5175cd2f18a24 );

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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_31_multiple_domains );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_domains );
    Py_DECREF( var_domains );
    var_domains = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

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

    CHECK_OBJECT( (PyObject *)var_domains );
    Py_DECREF( var_domains );
    var_domains = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_31_multiple_domains );
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


static PyObject *impl_requests$cookies$$$function_32_get_dict( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_domain = python_pars[ 1 ];
    PyObject *par_path = python_pars[ 2 ];
    PyObject *var_cookie = NULL;
    PyObject *var_dictionary = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_35935570550094e38a6714401daf1bfd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_35935570550094e38a6714401daf1bfd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert( var_dictionary == NULL );
        var_dictionary = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_35935570550094e38a6714401daf1bfd, codeobj_35935570550094e38a6714401daf1bfd, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_35935570550094e38a6714401daf1bfd = cache_frame_35935570550094e38a6714401daf1bfd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_35935570550094e38a6714401daf1bfd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_35935570550094e38a6714401daf1bfd ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_self );
        tmp_iter_arg_1 = par_self;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 307;
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
                exception_lineno = 307;
                goto try_except_handler_2;
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
            PyObject *old = var_cookie;
            var_cookie = tmp_assign_source_4;
            Py_INCREF( var_cookie );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_1;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_domain );
        tmp_compexpr_left_1 = par_domain;
        tmp_compexpr_right_1 = Py_None;
        tmp_or_left_value_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_cookie );
        tmp_source_name_1 = var_cookie;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_domain );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 309;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_domain );
        tmp_compexpr_right_2 = par_domain;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 309;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_and_left_value_1 = tmp_or_left_value_1;
        or_end_1:;
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
        CHECK_OBJECT( par_path );
        tmp_compexpr_left_3 = par_path;
        tmp_compexpr_right_3 = Py_None;
        tmp_or_left_value_2 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_cookie );
        tmp_source_name_2 = var_cookie;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 310;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_path );
        tmp_compexpr_right_4 = par_path;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 310;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_or_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_and_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
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
            PyObject *tmp_source_name_3;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( var_cookie );
            tmp_source_name_3 = var_cookie;
            tmp_dictset_value = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_value );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 312;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_dictionary );
            tmp_dictset_dict = var_dictionary;
            CHECK_OBJECT( var_cookie );
            tmp_source_name_4 = var_cookie;
            tmp_dictset_key = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_name );
            if ( tmp_dictset_key == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dictset_value );

                exception_lineno = 312;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_dictset_key );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 312;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        type_description_1 = "ooooo";
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
    RESTORE_FRAME_EXCEPTION( frame_35935570550094e38a6714401daf1bfd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_35935570550094e38a6714401daf1bfd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_35935570550094e38a6714401daf1bfd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_35935570550094e38a6714401daf1bfd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_35935570550094e38a6714401daf1bfd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_35935570550094e38a6714401daf1bfd,
        type_description_1,
        par_self,
        par_domain,
        par_path,
        var_cookie,
        var_dictionary
    );


    // Release cached frame.
    if ( frame_35935570550094e38a6714401daf1bfd == cache_frame_35935570550094e38a6714401daf1bfd )
    {
        Py_DECREF( frame_35935570550094e38a6714401daf1bfd );
    }
    cache_frame_35935570550094e38a6714401daf1bfd = NULL;

    assertFrameObject( frame_35935570550094e38a6714401daf1bfd );

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

    CHECK_OBJECT( var_dictionary );
    tmp_return_value = var_dictionary;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_32_get_dict );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)var_dictionary );
    Py_DECREF( var_dictionary );
    var_dictionary = NULL;

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

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)var_dictionary );
    Py_DECREF( var_dictionary );
    var_dictionary = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_32_get_dict );
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


static PyObject *impl_requests$cookies$$$function_33___contains__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_9ea89b7a132c9f783ef3ec5f9df44b49;
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
    static struct Nuitka_FrameObject *cache_frame_9ea89b7a132c9f783ef3ec5f9df44b49 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9ea89b7a132c9f783ef3ec5f9df44b49, codeobj_9ea89b7a132c9f783ef3ec5f9df44b49, module_requests$cookies, sizeof(void *)+sizeof(void *) );
    frame_9ea89b7a132c9f783ef3ec5f9df44b49 = cache_frame_9ea89b7a132c9f783ef3ec5f9df44b49;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9ea89b7a132c9f783ef3ec5f9df44b49 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9ea89b7a132c9f783ef3ec5f9df44b49 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "RequestsCookieJar" );
            exception_tb = NULL;

            exception_lineno = 317;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_name );
        tmp_args_element_name_1 = par_name;
        frame_9ea89b7a132c9f783ef3ec5f9df44b49->m_frame.f_lineno = 317;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain___contains__, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_33___contains__ );
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
    PRESERVE_FRAME_EXCEPTION( frame_9ea89b7a132c9f783ef3ec5f9df44b49 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_9ea89b7a132c9f783ef3ec5f9df44b49, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_9ea89b7a132c9f783ef3ec5f9df44b49, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_2;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_CookieConflictError );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CookieConflictError );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "CookieConflictError" );
            exception_tb = NULL;

            exception_lineno = 318;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_2;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 318;
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
        tmp_return_value = Py_True;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 316;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_9ea89b7a132c9f783ef3ec5f9df44b49->m_frame) frame_9ea89b7a132c9f783ef3ec5f9df44b49->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
        branch_end_1:;
    }
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION( frame_9ea89b7a132c9f783ef3ec5f9df44b49 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_9ea89b7a132c9f783ef3ec5f9df44b49 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_9ea89b7a132c9f783ef3ec5f9df44b49 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9ea89b7a132c9f783ef3ec5f9df44b49, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9ea89b7a132c9f783ef3ec5f9df44b49->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9ea89b7a132c9f783ef3ec5f9df44b49, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9ea89b7a132c9f783ef3ec5f9df44b49,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame.
    if ( frame_9ea89b7a132c9f783ef3ec5f9df44b49 == cache_frame_9ea89b7a132c9f783ef3ec5f9df44b49 )
    {
        Py_DECREF( frame_9ea89b7a132c9f783ef3ec5f9df44b49 );
    }
    cache_frame_9ea89b7a132c9f783ef3ec5f9df44b49 = NULL;

    assertFrameObject( frame_9ea89b7a132c9f783ef3ec5f9df44b49 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_33___contains__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_33___contains__ );
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


static PyObject *impl_requests$cookies$$$function_34___getitem__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_ef5acc30962009558a782d38bb09eeab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ef5acc30962009558a782d38bb09eeab = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ef5acc30962009558a782d38bb09eeab, codeobj_ef5acc30962009558a782d38bb09eeab, module_requests$cookies, sizeof(void *)+sizeof(void *) );
    frame_ef5acc30962009558a782d38bb09eeab = cache_frame_ef5acc30962009558a782d38bb09eeab;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ef5acc30962009558a782d38bb09eeab );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ef5acc30962009558a782d38bb09eeab ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_name );
        tmp_args_element_name_1 = par_name;
        frame_ef5acc30962009558a782d38bb09eeab->m_frame.f_lineno = 328;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__find_no_duplicates, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef5acc30962009558a782d38bb09eeab );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef5acc30962009558a782d38bb09eeab );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef5acc30962009558a782d38bb09eeab );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ef5acc30962009558a782d38bb09eeab, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ef5acc30962009558a782d38bb09eeab->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ef5acc30962009558a782d38bb09eeab, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ef5acc30962009558a782d38bb09eeab,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame.
    if ( frame_ef5acc30962009558a782d38bb09eeab == cache_frame_ef5acc30962009558a782d38bb09eeab )
    {
        Py_DECREF( frame_ef5acc30962009558a782d38bb09eeab );
    }
    cache_frame_ef5acc30962009558a782d38bb09eeab = NULL;

    assertFrameObject( frame_ef5acc30962009558a782d38bb09eeab );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_34___getitem__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_34___getitem__ );
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


static PyObject *impl_requests$cookies$$$function_35___setitem__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_value = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_be1d0363e4c39f971bb8246d37c7c858;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_be1d0363e4c39f971bb8246d37c7c858 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_be1d0363e4c39f971bb8246d37c7c858, codeobj_be1d0363e4c39f971bb8246d37c7c858, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_be1d0363e4c39f971bb8246d37c7c858 = cache_frame_be1d0363e4c39f971bb8246d37c7c858;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_be1d0363e4c39f971bb8246d37c7c858 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_be1d0363e4c39f971bb8246d37c7c858 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_name );
        tmp_args_element_name_1 = par_name;
        CHECK_OBJECT( par_value );
        tmp_args_element_name_2 = par_value;
        frame_be1d0363e4c39f971bb8246d37c7c858->m_frame.f_lineno = 335;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_set, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 335;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be1d0363e4c39f971bb8246d37c7c858 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be1d0363e4c39f971bb8246d37c7c858 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_be1d0363e4c39f971bb8246d37c7c858, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_be1d0363e4c39f971bb8246d37c7c858->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_be1d0363e4c39f971bb8246d37c7c858, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_be1d0363e4c39f971bb8246d37c7c858,
        type_description_1,
        par_self,
        par_name,
        par_value
    );


    // Release cached frame.
    if ( frame_be1d0363e4c39f971bb8246d37c7c858 == cache_frame_be1d0363e4c39f971bb8246d37c7c858 )
    {
        Py_DECREF( frame_be1d0363e4c39f971bb8246d37c7c858 );
    }
    cache_frame_be1d0363e4c39f971bb8246d37c7c858 = NULL;

    assertFrameObject( frame_be1d0363e4c39f971bb8246d37c7c858 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_35___setitem__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_35___setitem__ );
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


static PyObject *impl_requests$cookies$$$function_36___delitem__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_7fe301af9a9c16f5ea161a2836d06e39;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7fe301af9a9c16f5ea161a2836d06e39 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7fe301af9a9c16f5ea161a2836d06e39, codeobj_7fe301af9a9c16f5ea161a2836d06e39, module_requests$cookies, sizeof(void *)+sizeof(void *) );
    frame_7fe301af9a9c16f5ea161a2836d06e39 = cache_frame_7fe301af9a9c16f5ea161a2836d06e39;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7fe301af9a9c16f5ea161a2836d06e39 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7fe301af9a9c16f5ea161a2836d06e39 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_remove_cookie_by_name );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_remove_cookie_by_name );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "remove_cookie_by_name" );
            exception_tb = NULL;

            exception_lineno = 341;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT( par_name );
        tmp_args_element_name_2 = par_name;
        frame_7fe301af9a9c16f5ea161a2836d06e39->m_frame.f_lineno = 341;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 341;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7fe301af9a9c16f5ea161a2836d06e39 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7fe301af9a9c16f5ea161a2836d06e39 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7fe301af9a9c16f5ea161a2836d06e39, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7fe301af9a9c16f5ea161a2836d06e39->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7fe301af9a9c16f5ea161a2836d06e39, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7fe301af9a9c16f5ea161a2836d06e39,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame.
    if ( frame_7fe301af9a9c16f5ea161a2836d06e39 == cache_frame_7fe301af9a9c16f5ea161a2836d06e39 )
    {
        Py_DECREF( frame_7fe301af9a9c16f5ea161a2836d06e39 );
    }
    cache_frame_7fe301af9a9c16f5ea161a2836d06e39 = NULL;

    assertFrameObject( frame_7fe301af9a9c16f5ea161a2836d06e39 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_36___delitem__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_36___delitem__ );
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


static PyObject *impl_requests$cookies$$$function_37_set_cookie( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_cookie = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    PyObject *par_kwargs = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_628d005596f876e0d8a774c29ad8dc54;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_628d005596f876e0d8a774c29ad8dc54 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_628d005596f876e0d8a774c29ad8dc54, codeobj_628d005596f876e0d8a774c29ad8dc54, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_628d005596f876e0d8a774c29ad8dc54 = cache_frame_628d005596f876e0d8a774c29ad8dc54;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_628d005596f876e0d8a774c29ad8dc54 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_628d005596f876e0d8a774c29ad8dc54 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_attribute_name_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_cookie );
        tmp_source_name_2 = par_cookie;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_value );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_name_1 = const_str_plain_startswith;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_1, tmp_attribute_name_1 );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "oooo";
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
        CHECK_OBJECT( par_cookie );
        tmp_source_name_3 = par_cookie;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_value );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_628d005596f876e0d8a774c29ad8dc54->m_frame.f_lineno = 344;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_chr_34_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 344;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
        CHECK_OBJECT( par_cookie );
        tmp_source_name_4 = par_cookie;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_value );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_628d005596f876e0d8a774c29ad8dc54->m_frame.f_lineno = 344;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_endswith, &PyTuple_GET_ITEM( const_tuple_str_chr_34_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 344;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_5;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT( par_cookie );
            tmp_source_name_5 = par_cookie;
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_value );
            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 345;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_628d005596f876e0d8a774c29ad8dc54->m_frame.f_lineno = 345;
            tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_assattr_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 345;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_cookie );
            tmp_assattr_target_1 = par_cookie;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_value, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 345;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "RequestsCookieJar" );
            exception_tb = NULL;

            exception_lineno = 346;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_source_name_6 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_source_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_set_cookie );
        Py_DECREF( tmp_source_name_6 );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_cookie );
        tmp_tuple_element_1 = par_cookie;
        tmp_dircall_arg2_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_args );
        tmp_dircall_arg3_1 = par_args;
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg3_1 );
        Py_INCREF( tmp_dircall_arg4_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___internal__$$$function_6_complex_call_helper_pos_star_list_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_628d005596f876e0d8a774c29ad8dc54 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_628d005596f876e0d8a774c29ad8dc54 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_628d005596f876e0d8a774c29ad8dc54 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_628d005596f876e0d8a774c29ad8dc54, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_628d005596f876e0d8a774c29ad8dc54->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_628d005596f876e0d8a774c29ad8dc54, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_628d005596f876e0d8a774c29ad8dc54,
        type_description_1,
        par_self,
        par_cookie,
        par_args,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_628d005596f876e0d8a774c29ad8dc54 == cache_frame_628d005596f876e0d8a774c29ad8dc54 )
    {
        Py_DECREF( frame_628d005596f876e0d8a774c29ad8dc54 );
    }
    cache_frame_628d005596f876e0d8a774c29ad8dc54 = NULL;

    assertFrameObject( frame_628d005596f876e0d8a774c29ad8dc54 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_37_set_cookie );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_cookie );
    Py_DECREF( par_cookie );
    par_cookie = NULL;

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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_cookie );
    Py_DECREF( par_cookie );
    par_cookie = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_37_set_cookie );
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


static PyObject *impl_requests$cookies$$$function_38_update( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_ba6793ba5844d637cacb95481f7e2edc;
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
    static struct Nuitka_FrameObject *cache_frame_ba6793ba5844d637cacb95481f7e2edc = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ba6793ba5844d637cacb95481f7e2edc, codeobj_ba6793ba5844d637cacb95481f7e2edc, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ba6793ba5844d637cacb95481f7e2edc = cache_frame_ba6793ba5844d637cacb95481f7e2edc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ba6793ba5844d637cacb95481f7e2edc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ba6793ba5844d637cacb95481f7e2edc ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_other );
        tmp_isinstance_inst_1 = par_other;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_cookielib );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cookielib );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "cookielib" );
            exception_tb = NULL;

            exception_lineno = 350;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_CookieJar );
        if ( tmp_isinstance_cls_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
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
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_other );
            tmp_iter_arg_1 = par_other;
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 351;
                type_description_1 = "ooo";
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
                    type_description_1 = "ooo";
                    exception_lineno = 351;
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
                PyObject *old = var_cookie;
                var_cookie = tmp_assign_source_3;
                Py_INCREF( var_cookie );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_set_cookie );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 352;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_copy );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_copy );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "copy" );
                exception_tb = NULL;

                exception_lineno = 352;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }

            tmp_called_instance_1 = tmp_mvar_value_2;
            CHECK_OBJECT( var_cookie );
            tmp_args_element_name_2 = var_cookie;
            frame_ba6793ba5844d637cacb95481f7e2edc->m_frame.f_lineno = 352;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_copy, call_args );
            }

            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 352;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            frame_ba6793ba5844d637cacb95481f7e2edc->m_frame.f_lineno = 352;
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


                exception_lineno = 352;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 351;
            type_description_1 = "ooo";
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

        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_type_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_object_name_1;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "RequestsCookieJar" );
                exception_tb = NULL;

                exception_lineno = 354;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_type_name_1 = tmp_mvar_value_3;
            CHECK_OBJECT( par_self );
            tmp_object_name_1 = par_self;
            tmp_called_instance_2 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 354;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_other );
            tmp_args_element_name_3 = par_other;
            frame_ba6793ba5844d637cacb95481f7e2edc->m_frame.f_lineno = 354;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_update, call_args );
            }

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 354;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ba6793ba5844d637cacb95481f7e2edc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ba6793ba5844d637cacb95481f7e2edc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ba6793ba5844d637cacb95481f7e2edc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ba6793ba5844d637cacb95481f7e2edc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ba6793ba5844d637cacb95481f7e2edc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ba6793ba5844d637cacb95481f7e2edc,
        type_description_1,
        par_self,
        par_other,
        var_cookie
    );


    // Release cached frame.
    if ( frame_ba6793ba5844d637cacb95481f7e2edc == cache_frame_ba6793ba5844d637cacb95481f7e2edc )
    {
        Py_DECREF( frame_ba6793ba5844d637cacb95481f7e2edc );
    }
    cache_frame_ba6793ba5844d637cacb95481f7e2edc = NULL;

    assertFrameObject( frame_ba6793ba5844d637cacb95481f7e2edc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_38_update );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_38_update );
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


static PyObject *impl_requests$cookies$$$function_39__find( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_domain = python_pars[ 2 ];
    PyObject *par_path = python_pars[ 3 ];
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_0dfa8aaa7580004bbd27cb7c38611e4c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_0dfa8aaa7580004bbd27cb7c38611e4c = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0dfa8aaa7580004bbd27cb7c38611e4c, codeobj_0dfa8aaa7580004bbd27cb7c38611e4c, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0dfa8aaa7580004bbd27cb7c38611e4c = cache_frame_0dfa8aaa7580004bbd27cb7c38611e4c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0dfa8aaa7580004bbd27cb7c38611e4c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0dfa8aaa7580004bbd27cb7c38611e4c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_self );
        tmp_iter_arg_1 = par_self;
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 368;
            type_description_1 = "ooooo";
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
                type_description_1 = "ooooo";
                exception_lineno = 368;
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
            PyObject *old = var_cookie;
            var_cookie = tmp_assign_source_3;
            Py_INCREF( var_cookie );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( var_cookie );
        tmp_source_name_1 = var_cookie;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_name );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 369;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_name );
        tmp_compexpr_right_1 = par_name;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 369;
            type_description_1 = "ooooo";
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
            nuitka_bool tmp_condition_result_2;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_domain );
            tmp_compexpr_left_2 = par_domain;
            tmp_compexpr_right_2 = Py_None;
            tmp_or_left_value_1 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            CHECK_OBJECT( var_cookie );
            tmp_source_name_2 = var_cookie;
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_domain );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 370;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_domain );
            tmp_compexpr_right_3 = par_domain;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 370;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
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
                nuitka_bool tmp_condition_result_3;
                int tmp_or_left_truth_2;
                nuitka_bool tmp_or_left_value_2;
                nuitka_bool tmp_or_right_value_2;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                PyObject *tmp_source_name_3;
                CHECK_OBJECT( par_path );
                tmp_compexpr_left_4 = par_path;
                tmp_compexpr_right_4 = Py_None;
                tmp_or_left_value_2 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                CHECK_OBJECT( var_cookie );
                tmp_source_name_3 = var_cookie;
                tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_path );
                if ( tmp_compexpr_left_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 371;
                    type_description_1 = "ooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( par_path );
                tmp_compexpr_right_5 = par_path;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                Py_DECREF( tmp_compexpr_left_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 371;
                    type_description_1 = "ooooo";
                    goto try_except_handler_2;
                }
                tmp_or_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_condition_result_3 = tmp_or_right_value_2;
                goto or_end_2;
                or_left_2:;
                tmp_condition_result_3 = tmp_or_left_value_2;
                or_end_2:;
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
                    PyObject *tmp_source_name_4;
                    CHECK_OBJECT( var_cookie );
                    tmp_source_name_4 = var_cookie;
                    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_value );
                    if ( tmp_return_value == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 372;
                        type_description_1 = "ooooo";
                        goto try_except_handler_2;
                    }
                    goto try_return_handler_2;
                }
                branch_no_3:;
            }
            branch_no_2:;
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
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

    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        tmp_left_name_1 = const_str_digest_40890ce8458196445ad3a61ce14829f8;
        CHECK_OBJECT( par_name );
        tmp_tuple_element_1 = par_name;
        tmp_right_name_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_domain );
        tmp_tuple_element_1 = par_domain;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_path );
        tmp_tuple_element_1 = par_path;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 2, tmp_tuple_element_1 );
        tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_make_exception_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 374;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_0dfa8aaa7580004bbd27cb7c38611e4c->m_frame.f_lineno = 374;
        {
            PyObject *call_args[] = { tmp_make_exception_arg_1 };
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_KeyError, call_args );
        }

        Py_DECREF( tmp_make_exception_arg_1 );
        assert( !(tmp_raise_type_1 == NULL) );
        exception_type = tmp_raise_type_1;
        exception_lineno = 374;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0dfa8aaa7580004bbd27cb7c38611e4c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0dfa8aaa7580004bbd27cb7c38611e4c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0dfa8aaa7580004bbd27cb7c38611e4c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0dfa8aaa7580004bbd27cb7c38611e4c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0dfa8aaa7580004bbd27cb7c38611e4c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0dfa8aaa7580004bbd27cb7c38611e4c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0dfa8aaa7580004bbd27cb7c38611e4c,
        type_description_1,
        par_self,
        par_name,
        par_domain,
        par_path,
        var_cookie
    );


    // Release cached frame.
    if ( frame_0dfa8aaa7580004bbd27cb7c38611e4c == cache_frame_0dfa8aaa7580004bbd27cb7c38611e4c )
    {
        Py_DECREF( frame_0dfa8aaa7580004bbd27cb7c38611e4c );
    }
    cache_frame_0dfa8aaa7580004bbd27cb7c38611e4c = NULL;

    assertFrameObject( frame_0dfa8aaa7580004bbd27cb7c38611e4c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_39__find );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_cookie );
    Py_DECREF( var_cookie );
    var_cookie = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

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

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_39__find );
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


static PyObject *impl_requests$cookies$$$function_40__find_no_duplicates( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_domain = python_pars[ 2 ];
    PyObject *par_path = python_pars[ 3 ];
    PyObject *var_toReturn = NULL;
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_b0910d3fb21ca7672598327e935ce232;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b0910d3fb21ca7672598327e935ce232 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert( var_toReturn == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_toReturn = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b0910d3fb21ca7672598327e935ce232, codeobj_b0910d3fb21ca7672598327e935ce232, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b0910d3fb21ca7672598327e935ce232 = cache_frame_b0910d3fb21ca7672598327e935ce232;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b0910d3fb21ca7672598327e935ce232 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b0910d3fb21ca7672598327e935ce232 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_self );
        tmp_iter_arg_1 = par_self;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 389;
            type_description_1 = "oooooo";
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
                type_description_1 = "oooooo";
                exception_lineno = 389;
                goto try_except_handler_2;
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
            PyObject *old = var_cookie;
            var_cookie = tmp_assign_source_4;
            Py_INCREF( var_cookie );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( var_cookie );
        tmp_source_name_1 = var_cookie;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_name );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_name );
        tmp_compexpr_right_1 = par_name;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_1 = "oooooo";
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
            nuitka_bool tmp_condition_result_2;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_domain );
            tmp_compexpr_left_2 = par_domain;
            tmp_compexpr_right_2 = Py_None;
            tmp_or_left_value_1 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            CHECK_OBJECT( var_cookie );
            tmp_source_name_2 = var_cookie;
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_domain );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 391;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_domain );
            tmp_compexpr_right_3 = par_domain;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 391;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
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
                nuitka_bool tmp_condition_result_3;
                int tmp_or_left_truth_2;
                nuitka_bool tmp_or_left_value_2;
                nuitka_bool tmp_or_right_value_2;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                PyObject *tmp_source_name_3;
                CHECK_OBJECT( par_path );
                tmp_compexpr_left_4 = par_path;
                tmp_compexpr_right_4 = Py_None;
                tmp_or_left_value_2 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                CHECK_OBJECT( var_cookie );
                tmp_source_name_3 = var_cookie;
                tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_path );
                if ( tmp_compexpr_left_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 392;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( par_path );
                tmp_compexpr_right_5 = par_path;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                Py_DECREF( tmp_compexpr_left_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 392;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                tmp_or_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_condition_result_3 = tmp_or_right_value_2;
                goto or_end_2;
                or_left_2:;
                tmp_condition_result_3 = tmp_or_left_value_2;
                or_end_2:;
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
                    PyObject *tmp_compexpr_left_6;
                    PyObject *tmp_compexpr_right_6;
                    if ( var_toReturn == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "toReturn" );
                        exception_tb = NULL;

                        exception_lineno = 393;
                        type_description_1 = "oooooo";
                        goto try_except_handler_2;
                    }

                    tmp_compexpr_left_6 = var_toReturn;
                    tmp_compexpr_right_6 = Py_None;
                    tmp_condition_result_4 = ( tmp_compexpr_left_6 != tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                        PyObject *tmp_called_name_1;
                        PyObject *tmp_mvar_value_1;
                        PyObject *tmp_args_element_name_1;
                        PyObject *tmp_left_name_1;
                        PyObject *tmp_right_name_1;
                        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_CookieConflictError );

                        if (unlikely( tmp_mvar_value_1 == NULL ))
                        {
                            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CookieConflictError );
                        }

                        if ( tmp_mvar_value_1 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyString_FromFormat( "global name '%s' is not defined", "CookieConflictError" );
                            exception_tb = NULL;

                            exception_lineno = 394;
                            type_description_1 = "oooooo";
                            goto try_except_handler_2;
                        }

                        tmp_called_name_1 = tmp_mvar_value_1;
                        tmp_left_name_1 = const_str_digest_6f0eeed3729339eac6c86da181041a13;
                        CHECK_OBJECT( par_name );
                        tmp_right_name_1 = par_name;
                        tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                        if ( tmp_args_element_name_1 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 394;
                            type_description_1 = "oooooo";
                            goto try_except_handler_2;
                        }
                        frame_b0910d3fb21ca7672598327e935ce232->m_frame.f_lineno = 394;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_1 };
                            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                        }

                        Py_DECREF( tmp_args_element_name_1 );
                        if ( tmp_raise_type_1 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 394;
                            type_description_1 = "oooooo";
                            goto try_except_handler_2;
                        }
                        exception_type = tmp_raise_type_1;
                        exception_lineno = 394;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooooo";
                        goto try_except_handler_2;
                    }
                    branch_no_4:;
                }
                {
                    PyObject *tmp_assign_source_5;
                    PyObject *tmp_source_name_4;
                    CHECK_OBJECT( var_cookie );
                    tmp_source_name_4 = var_cookie;
                    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_value );
                    if ( tmp_assign_source_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 395;
                        type_description_1 = "oooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_toReturn;
                        var_toReturn = tmp_assign_source_5;
                        Py_XDECREF( old );
                    }

                }
                branch_no_3:;
            }
            branch_no_2:;
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        type_description_1 = "oooooo";
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

    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_1;
        if ( var_toReturn == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "toReturn" );
            exception_tb = NULL;

            exception_lineno = 397;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE( var_toReturn );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        if ( var_toReturn == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "toReturn" );
            exception_tb = NULL;

            exception_lineno = 398;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_return_value = var_toReturn;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_5:;
    }
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_1;
        tmp_left_name_2 = const_str_digest_40890ce8458196445ad3a61ce14829f8;
        CHECK_OBJECT( par_name );
        tmp_tuple_element_1 = par_name;
        tmp_right_name_2 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_domain );
        tmp_tuple_element_1 = par_domain;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_path );
        tmp_tuple_element_1 = par_path;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_2, 2, tmp_tuple_element_1 );
        tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_make_exception_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 399;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_b0910d3fb21ca7672598327e935ce232->m_frame.f_lineno = 399;
        {
            PyObject *call_args[] = { tmp_make_exception_arg_1 };
            tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_KeyError, call_args );
        }

        Py_DECREF( tmp_make_exception_arg_1 );
        assert( !(tmp_raise_type_2 == NULL) );
        exception_type = tmp_raise_type_2;
        exception_lineno = 399;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b0910d3fb21ca7672598327e935ce232 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b0910d3fb21ca7672598327e935ce232 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b0910d3fb21ca7672598327e935ce232 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b0910d3fb21ca7672598327e935ce232, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b0910d3fb21ca7672598327e935ce232->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b0910d3fb21ca7672598327e935ce232, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b0910d3fb21ca7672598327e935ce232,
        type_description_1,
        par_self,
        par_name,
        par_domain,
        par_path,
        var_toReturn,
        var_cookie
    );


    // Release cached frame.
    if ( frame_b0910d3fb21ca7672598327e935ce232 == cache_frame_b0910d3fb21ca7672598327e935ce232 )
    {
        Py_DECREF( frame_b0910d3fb21ca7672598327e935ce232 );
    }
    cache_frame_b0910d3fb21ca7672598327e935ce232 = NULL;

    assertFrameObject( frame_b0910d3fb21ca7672598327e935ce232 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_40__find_no_duplicates );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    Py_XDECREF( var_toReturn );
    var_toReturn = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

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

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    Py_XDECREF( var_toReturn );
    var_toReturn = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_40__find_no_duplicates );
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


static PyObject *impl_requests$cookies$$$function_41___getstate__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_state = NULL;
    struct Nuitka_FrameObject *frame_660ec21aa16ac133d331a9c39308c93f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_660ec21aa16ac133d331a9c39308c93f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_660ec21aa16ac133d331a9c39308c93f, codeobj_660ec21aa16ac133d331a9c39308c93f, module_requests$cookies, sizeof(void *)+sizeof(void *) );
    frame_660ec21aa16ac133d331a9c39308c93f = cache_frame_660ec21aa16ac133d331a9c39308c93f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_660ec21aa16ac133d331a9c39308c93f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_660ec21aa16ac133d331a9c39308c93f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 403;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_660ec21aa16ac133d331a9c39308c93f->m_frame.f_lineno = 403;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 403;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_state == NULL );
        var_state = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( var_state );
        tmp_called_instance_2 = var_state;
        frame_660ec21aa16ac133d331a9c39308c93f->m_frame.f_lineno = 405;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain__cookies_lock_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 405;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_660ec21aa16ac133d331a9c39308c93f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_660ec21aa16ac133d331a9c39308c93f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_660ec21aa16ac133d331a9c39308c93f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_660ec21aa16ac133d331a9c39308c93f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_660ec21aa16ac133d331a9c39308c93f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_660ec21aa16ac133d331a9c39308c93f,
        type_description_1,
        par_self,
        var_state
    );


    // Release cached frame.
    if ( frame_660ec21aa16ac133d331a9c39308c93f == cache_frame_660ec21aa16ac133d331a9c39308c93f )
    {
        Py_DECREF( frame_660ec21aa16ac133d331a9c39308c93f );
    }
    cache_frame_660ec21aa16ac133d331a9c39308c93f = NULL;

    assertFrameObject( frame_660ec21aa16ac133d331a9c39308c93f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_state );
    tmp_return_value = var_state;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_41___getstate__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_state );
    Py_DECREF( var_state );
    var_state = NULL;

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

    Py_XDECREF( var_state );
    var_state = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_41___getstate__ );
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


static PyObject *impl_requests$cookies$$$function_42___setstate__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_state = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_d61891d38faeb7479b0997dfc2d435fd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_d61891d38faeb7479b0997dfc2d435fd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d61891d38faeb7479b0997dfc2d435fd, codeobj_d61891d38faeb7479b0997dfc2d435fd, module_requests$cookies, sizeof(void *)+sizeof(void *) );
    frame_d61891d38faeb7479b0997dfc2d435fd = cache_frame_d61891d38faeb7479b0997dfc2d435fd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d61891d38faeb7479b0997dfc2d435fd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d61891d38faeb7479b0997dfc2d435fd ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 410;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_state );
        tmp_args_element_name_1 = par_state;
        frame_d61891d38faeb7479b0997dfc2d435fd->m_frame.f_lineno = 410;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_update, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
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
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        tmp_compexpr_left_1 = const_str_plain__cookies_lock;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_2 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 411;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 411;
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_assattr_target_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_threading );

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

                exception_lineno = 412;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_1;
            frame_d61891d38faeb7479b0997dfc2d435fd->m_frame.f_lineno = 412;
            tmp_assattr_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_RLock );
            if ( tmp_assattr_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 412;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__cookies_lock, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 412;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d61891d38faeb7479b0997dfc2d435fd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d61891d38faeb7479b0997dfc2d435fd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d61891d38faeb7479b0997dfc2d435fd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d61891d38faeb7479b0997dfc2d435fd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d61891d38faeb7479b0997dfc2d435fd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d61891d38faeb7479b0997dfc2d435fd,
        type_description_1,
        par_self,
        par_state
    );


    // Release cached frame.
    if ( frame_d61891d38faeb7479b0997dfc2d435fd == cache_frame_d61891d38faeb7479b0997dfc2d435fd )
    {
        Py_DECREF( frame_d61891d38faeb7479b0997dfc2d435fd );
    }
    cache_frame_d61891d38faeb7479b0997dfc2d435fd = NULL;

    assertFrameObject( frame_d61891d38faeb7479b0997dfc2d435fd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_42___setstate__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_state );
    Py_DECREF( par_state );
    par_state = NULL;

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

    CHECK_OBJECT( (PyObject *)par_state );
    Py_DECREF( par_state );
    par_state = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_42___setstate__ );
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


static PyObject *impl_requests$cookies$$$function_43_copy( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_new_cj = NULL;
    struct Nuitka_FrameObject *frame_f1cf3648295cf8710370bb4207467241;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f1cf3648295cf8710370bb4207467241 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f1cf3648295cf8710370bb4207467241, codeobj_f1cf3648295cf8710370bb4207467241, module_requests$cookies, sizeof(void *)+sizeof(void *) );
    frame_f1cf3648295cf8710370bb4207467241 = cache_frame_f1cf3648295cf8710370bb4207467241;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f1cf3648295cf8710370bb4207467241 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f1cf3648295cf8710370bb4207467241 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "RequestsCookieJar" );
            exception_tb = NULL;

            exception_lineno = 416;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_f1cf3648295cf8710370bb4207467241->m_frame.f_lineno = 416;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_new_cj == NULL );
        var_new_cj = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( var_new_cj );
        tmp_source_name_1 = var_new_cj;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_set_policy );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_f1cf3648295cf8710370bb4207467241->m_frame.f_lineno = 417;
        tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_policy );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 417;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f1cf3648295cf8710370bb4207467241->m_frame.f_lineno = 417;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( var_new_cj );
        tmp_called_instance_2 = var_new_cj;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_2 = par_self;
        frame_f1cf3648295cf8710370bb4207467241->m_frame.f_lineno = 418;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_update, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1cf3648295cf8710370bb4207467241 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1cf3648295cf8710370bb4207467241 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f1cf3648295cf8710370bb4207467241, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f1cf3648295cf8710370bb4207467241->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f1cf3648295cf8710370bb4207467241, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f1cf3648295cf8710370bb4207467241,
        type_description_1,
        par_self,
        var_new_cj
    );


    // Release cached frame.
    if ( frame_f1cf3648295cf8710370bb4207467241 == cache_frame_f1cf3648295cf8710370bb4207467241 )
    {
        Py_DECREF( frame_f1cf3648295cf8710370bb4207467241 );
    }
    cache_frame_f1cf3648295cf8710370bb4207467241 = NULL;

    assertFrameObject( frame_f1cf3648295cf8710370bb4207467241 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_new_cj );
    tmp_return_value = var_new_cj;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_43_copy );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_new_cj );
    Py_DECREF( var_new_cj );
    var_new_cj = NULL;

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

    Py_XDECREF( var_new_cj );
    var_new_cj = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_43_copy );
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


static PyObject *impl_requests$cookies$$$function_44_get_policy( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_5a3e1ac27c82fd06c724bfb6626377f6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5a3e1ac27c82fd06c724bfb6626377f6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5a3e1ac27c82fd06c724bfb6626377f6, codeobj_5a3e1ac27c82fd06c724bfb6626377f6, module_requests$cookies, sizeof(void *) );
    frame_5a3e1ac27c82fd06c724bfb6626377f6 = cache_frame_5a3e1ac27c82fd06c724bfb6626377f6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5a3e1ac27c82fd06c724bfb6626377f6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5a3e1ac27c82fd06c724bfb6626377f6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__policy );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 423;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a3e1ac27c82fd06c724bfb6626377f6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a3e1ac27c82fd06c724bfb6626377f6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a3e1ac27c82fd06c724bfb6626377f6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5a3e1ac27c82fd06c724bfb6626377f6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5a3e1ac27c82fd06c724bfb6626377f6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5a3e1ac27c82fd06c724bfb6626377f6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5a3e1ac27c82fd06c724bfb6626377f6,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_5a3e1ac27c82fd06c724bfb6626377f6 == cache_frame_5a3e1ac27c82fd06c724bfb6626377f6 )
    {
        Py_DECREF( frame_5a3e1ac27c82fd06c724bfb6626377f6 );
    }
    cache_frame_5a3e1ac27c82fd06c724bfb6626377f6 = NULL;

    assertFrameObject( frame_5a3e1ac27c82fd06c724bfb6626377f6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_44_get_policy );
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
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_44_get_policy );
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


static PyObject *impl_requests$cookies$$$function_45__copy_cookie_jar( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_jar = python_pars[ 0 ];
    PyObject *var_cookie = NULL;
    PyObject *var_new_jar = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_f68811eaf09fad53c1b236ae40fbc349;
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
    static struct Nuitka_FrameObject *cache_frame_f68811eaf09fad53c1b236ae40fbc349 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_jar );
        tmp_compexpr_left_1 = par_jar;
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
        goto try_return_handler_1;
        branch_no_1:;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_f68811eaf09fad53c1b236ae40fbc349, codeobj_f68811eaf09fad53c1b236ae40fbc349, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f68811eaf09fad53c1b236ae40fbc349 = cache_frame_f68811eaf09fad53c1b236ae40fbc349;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f68811eaf09fad53c1b236ae40fbc349 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f68811eaf09fad53c1b236ae40fbc349 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT( par_jar );
        tmp_source_name_1 = par_jar;
        tmp_attribute_name_1 = const_str_plain_copy;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_1, tmp_attribute_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 430;
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
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_jar );
            tmp_called_instance_1 = par_jar;
            frame_f68811eaf09fad53c1b236ae40fbc349->m_frame.f_lineno = 432;
            tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 432;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_copy );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_copy );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "copy" );
            exception_tb = NULL;

            exception_lineno = 434;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( par_jar );
        tmp_args_element_name_1 = par_jar;
        frame_f68811eaf09fad53c1b236ae40fbc349->m_frame.f_lineno = 434;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_copy, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 434;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_new_jar == NULL );
        var_new_jar = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( var_new_jar );
        tmp_called_instance_3 = var_new_jar;
        frame_f68811eaf09fad53c1b236ae40fbc349->m_frame.f_lineno = 435;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_clear );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 435;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_jar );
        tmp_iter_arg_1 = par_jar;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 436;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 436;
                goto try_except_handler_2;
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
            PyObject *old = var_cookie;
            var_cookie = tmp_assign_source_4;
            Py_INCREF( var_cookie );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( var_new_jar );
        tmp_source_name_2 = var_new_jar;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_set_cookie );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 437;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_copy );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_copy );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "copy" );
            exception_tb = NULL;

            exception_lineno = 437;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_4 = tmp_mvar_value_2;
        CHECK_OBJECT( var_cookie );
        tmp_args_element_name_3 = var_cookie;
        frame_f68811eaf09fad53c1b236ae40fbc349->m_frame.f_lineno = 437;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_copy, call_args );
        }

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 437;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_f68811eaf09fad53c1b236ae40fbc349->m_frame.f_lineno = 437;
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


            exception_lineno = 437;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 436;
        type_description_1 = "ooo";
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
    RESTORE_FRAME_EXCEPTION( frame_f68811eaf09fad53c1b236ae40fbc349 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f68811eaf09fad53c1b236ae40fbc349 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f68811eaf09fad53c1b236ae40fbc349 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f68811eaf09fad53c1b236ae40fbc349, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f68811eaf09fad53c1b236ae40fbc349->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f68811eaf09fad53c1b236ae40fbc349, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f68811eaf09fad53c1b236ae40fbc349,
        type_description_1,
        par_jar,
        var_cookie,
        var_new_jar
    );


    // Release cached frame.
    if ( frame_f68811eaf09fad53c1b236ae40fbc349 == cache_frame_f68811eaf09fad53c1b236ae40fbc349 )
    {
        Py_DECREF( frame_f68811eaf09fad53c1b236ae40fbc349 );
    }
    cache_frame_f68811eaf09fad53c1b236ae40fbc349 = NULL;

    assertFrameObject( frame_f68811eaf09fad53c1b236ae40fbc349 );

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

    CHECK_OBJECT( var_new_jar );
    tmp_return_value = var_new_jar;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_45__copy_cookie_jar );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_cookie );
    var_cookie = NULL;

    Py_XDECREF( var_new_jar );
    var_new_jar = NULL;

    CHECK_OBJECT( (PyObject *)par_jar );
    Py_DECREF( par_jar );
    par_jar = NULL;

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

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

    Py_XDECREF( var_new_jar );
    var_new_jar = NULL;

    CHECK_OBJECT( (PyObject *)par_jar );
    Py_DECREF( par_jar );
    par_jar = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_45__copy_cookie_jar );
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


static PyObject *impl_requests$cookies$$$function_46_create_cookie( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_result = NULL;
    PyObject *var_badargs = NULL;
    int tmp_res;
    struct Nuitka_FrameObject *frame_4431e8ea73cb3d149c8fcdbbb957c0bc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4431e8ea73cb3d149c8fcdbbb957c0bc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
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
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
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
        tmp_dict_value_1 = const_int_0;
        tmp_dict_key_1 = const_str_plain_version;
        tmp_assign_source_1 = _PyDict_NewPresized( 13 );
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_name );
        tmp_dict_value_2 = par_name;
        tmp_dict_key_2 = const_str_plain_name;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_value );
        tmp_dict_value_3 = par_value;
        tmp_dict_key_3 = const_str_plain_value;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_4 = Py_None;
        tmp_dict_key_4 = const_str_plain_port;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_5 = const_str_empty;
        tmp_dict_key_5 = const_str_plain_domain;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_6 = const_str_chr_47;
        tmp_dict_key_6 = const_str_plain_path;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_7 = Py_False;
        tmp_dict_key_7 = const_str_plain_secure;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_8 = Py_None;
        tmp_dict_key_8 = const_str_plain_expires;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_9 = Py_True;
        tmp_dict_key_9 = const_str_plain_discard;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_9, tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_10 = Py_None;
        tmp_dict_key_10 = const_str_plain_comment;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_10, tmp_dict_value_10 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_11 = Py_None;
        tmp_dict_key_11 = const_str_plain_comment_url;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_11, tmp_dict_value_11 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_12 = PyDict_Copy( const_dict_a5e68083723d45b7dd5e500852a4245b );
        tmp_dict_key_12 = const_str_plain_rest;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_12, tmp_dict_value_12 );
        Py_DECREF( tmp_dict_value_12 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_13 = Py_False;
        tmp_dict_key_13 = const_str_plain_rfc2109;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_13, tmp_dict_value_13 );
        assert( !(tmp_res != 0) );
        assert( var_result == NULL );
        var_result = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4431e8ea73cb3d149c8fcdbbb957c0bc, codeobj_4431e8ea73cb3d149c8fcdbbb957c0bc, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4431e8ea73cb3d149c8fcdbbb957c0bc = cache_frame_4431e8ea73cb3d149c8fcdbbb957c0bc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4431e8ea73cb3d149c8fcdbbb957c0bc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4431e8ea73cb3d149c8fcdbbb957c0bc ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_set_arg_2;
        CHECK_OBJECT( par_kwargs );
        tmp_set_arg_1 = par_kwargs;
        tmp_left_name_1 = PySet_New( tmp_set_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 463;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_result );
        tmp_set_arg_2 = var_result;
        tmp_right_name_1 = PySet_New( tmp_set_arg_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 463;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 463;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        assert( var_badargs == NULL );
        var_badargs = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_badargs );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_badargs );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 464;
            type_description_1 = "oooNoo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_list_arg_1;
            tmp_left_name_2 = const_str_digest_c99227a29db521837b47fa67726c6a3c;
            CHECK_OBJECT( var_badargs );
            tmp_list_arg_1 = var_badargs;
            tmp_right_name_2 = PySequence_List( tmp_list_arg_1 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 466;
                type_description_1 = "oooNoo";
                goto frame_exception_exit_1;
            }
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 466;
                type_description_1 = "oooNoo";
                goto frame_exception_exit_1;
            }
            frame_4431e8ea73cb3d149c8fcdbbb957c0bc->m_frame.f_lineno = 466;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 466;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( var_result );
        tmp_called_instance_1 = var_result;
        CHECK_OBJECT( par_kwargs );
        tmp_args_element_name_1 = par_kwargs;
        frame_4431e8ea73cb3d149c8fcdbbb957c0bc->m_frame.f_lineno = 468;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_update, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 468;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_value_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_key_name_1;
        CHECK_OBJECT( var_result );
        tmp_dict_name_1 = var_result;
        tmp_key_name_1 = const_str_plain_port;
        tmp_value_name_1 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_value_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 469;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_value_name_1 );
        Py_DECREF( tmp_value_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 469;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        tmp_dictset_value = ( tmp_res != 0 ) ? Py_True : Py_False;
        CHECK_OBJECT( var_result );
        tmp_dictset_dict = var_result;
        tmp_dictset_key = const_str_plain_port_specified;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
    }
    {
        PyObject *tmp_value_name_2;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        CHECK_OBJECT( var_result );
        tmp_dict_name_2 = var_result;
        tmp_key_name_2 = const_str_plain_domain;
        tmp_value_name_2 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_value_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 470;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_value_name_2 );
        Py_DECREF( tmp_value_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 470;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        tmp_dictset_value = ( tmp_res != 0 ) ? Py_True : Py_False;
        CHECK_OBJECT( var_result );
        tmp_dictset_dict = var_result;
        tmp_dictset_key = const_str_plain_domain_specified;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_dict_name_3;
        PyObject *tmp_key_name_3;
        CHECK_OBJECT( var_result );
        tmp_dict_name_3 = var_result;
        tmp_key_name_3 = const_str_plain_domain;
        tmp_called_instance_2 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 471;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        frame_4431e8ea73cb3d149c8fcdbbb957c0bc->m_frame.f_lineno = 471;
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_dictset_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 471;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_result );
        tmp_dictset_dict = var_result;
        tmp_dictset_key = const_str_plain_domain_initial_dot;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
    }
    {
        PyObject *tmp_value_name_3;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_key_name_4;
        CHECK_OBJECT( var_result );
        tmp_dict_name_4 = var_result;
        tmp_key_name_4 = const_str_plain_path;
        tmp_value_name_3 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_value_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 472;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_value_name_3 );
        Py_DECREF( tmp_value_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 472;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        tmp_dictset_value = ( tmp_res != 0 ) ? Py_True : Py_False;
        CHECK_OBJECT( var_result );
        tmp_dictset_dict = var_result;
        tmp_dictset_key = const_str_plain_path_specified;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_cookielib );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cookielib );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "cookielib" );
            exception_tb = NULL;

            exception_lineno = 474;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Cookie );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 474;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_result );
        tmp_dircall_arg2_1 = var_result;
        Py_INCREF( tmp_dircall_arg2_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___internal__$$$function_5_complex_call_helper_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 474;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4431e8ea73cb3d149c8fcdbbb957c0bc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4431e8ea73cb3d149c8fcdbbb957c0bc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4431e8ea73cb3d149c8fcdbbb957c0bc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4431e8ea73cb3d149c8fcdbbb957c0bc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4431e8ea73cb3d149c8fcdbbb957c0bc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4431e8ea73cb3d149c8fcdbbb957c0bc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4431e8ea73cb3d149c8fcdbbb957c0bc,
        type_description_1,
        par_name,
        par_value,
        par_kwargs,
        NULL,
        var_result,
        var_badargs
    );


    // Release cached frame.
    if ( frame_4431e8ea73cb3d149c8fcdbbb957c0bc == cache_frame_4431e8ea73cb3d149c8fcdbbb957c0bc )
    {
        Py_DECREF( frame_4431e8ea73cb3d149c8fcdbbb957c0bc );
    }
    cache_frame_4431e8ea73cb3d149c8fcdbbb957c0bc = NULL;

    assertFrameObject( frame_4431e8ea73cb3d149c8fcdbbb957c0bc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_46_create_cookie );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_badargs );
    Py_DECREF( var_badargs );
    var_badargs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_badargs );
    var_badargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_46_create_cookie );
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


static PyObject *impl_requests$cookies$$$function_47_morsel_to_cookie( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_morsel = python_pars[ 0 ];
    PyObject *var_expires = NULL;
    struct Nuitka_FrameObject *frame_29c90574d842c9822feb17c9d2a45738;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_29c90574d842c9822feb17c9d2a45738 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert( var_expires == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_expires = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_29c90574d842c9822feb17c9d2a45738, codeobj_29c90574d842c9822feb17c9d2a45738, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_29c90574d842c9822feb17c9d2a45738 = cache_frame_29c90574d842c9822feb17c9d2a45738;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_29c90574d842c9822feb17c9d2a45738 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_29c90574d842c9822feb17c9d2a45738 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_morsel );
        tmp_subscribed_name_1 = par_morsel;
        tmp_subscript_name_1 = const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d;
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_subscript_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 481;
            type_description_1 = "oNo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_subscript_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscript_result_1 );

            exception_lineno = 481;
            type_description_1 = "oNo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_subscript_result_1 );
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_int_arg_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_int_arg_2;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_time );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "time" );
                exception_tb = NULL;

                exception_lineno = 483;
                type_description_1 = "oNo";
                goto try_except_handler_2;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            frame_29c90574d842c9822feb17c9d2a45738->m_frame.f_lineno = 483;
            tmp_left_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_time );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 483;
                type_description_1 = "oNo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_morsel );
            tmp_subscribed_name_2 = par_morsel;
            tmp_subscript_name_2 = const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d;
            tmp_int_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_int_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 483;
                type_description_1 = "oNo";
                goto try_except_handler_2;
            }
            tmp_right_name_1 = PyNumber_Int( tmp_int_arg_2 );
            Py_DECREF( tmp_int_arg_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 483;
                type_description_1 = "oNo";
                goto try_except_handler_2;
            }
            tmp_int_arg_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_int_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 483;
                type_description_1 = "oNo";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = PyNumber_Int( tmp_int_arg_1 );
            Py_DECREF( tmp_int_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 483;
                type_description_1 = "oNo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_expires;
                assert( old != NULL );
                var_expires = tmp_assign_source_2;
                Py_DECREF( old );
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
        PRESERVE_FRAME_EXCEPTION( frame_29c90574d842c9822feb17c9d2a45738 );
        if ( exception_keeper_tb_1 == NULL )
        {
            exception_keeper_tb_1 = MAKE_TRACEBACK( frame_29c90574d842c9822feb17c9d2a45738, exception_keeper_lineno_1 );
        }
        else if ( exception_keeper_lineno_1 != 0 )
        {
            exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_29c90574d842c9822feb17c9d2a45738, exception_keeper_lineno_1 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_1 = PyExc_ValueError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 484;
                type_description_1 = "oNo";
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_subscript_name_3;
                tmp_left_name_2 = const_str_digest_384c88e858c00a2981bdb05550c007ba;
                CHECK_OBJECT( par_morsel );
                tmp_subscribed_name_3 = par_morsel;
                tmp_subscript_name_3 = const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d;
                tmp_right_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
                if ( tmp_right_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 485;
                    type_description_1 = "oNo";
                    goto frame_exception_exit_1;
                }
                tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_make_exception_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 485;
                    type_description_1 = "oNo";
                    goto frame_exception_exit_1;
                }
                frame_29c90574d842c9822feb17c9d2a45738->m_frame.f_lineno = 485;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_1 );
                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 485;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oNo";
                goto frame_exception_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 482;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_29c90574d842c9822feb17c9d2a45738->m_frame) frame_29c90574d842c9822feb17c9d2a45738->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oNo";
            goto frame_exception_exit_1;
            branch_end_2:;
        }
        // End of try:
        try_end_1:;
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_subscript_result_2;
            int tmp_truth_name_2;
            CHECK_OBJECT( par_morsel );
            tmp_subscribed_name_4 = par_morsel;
            tmp_subscript_name_4 = const_str_plain_expires;
            tmp_subscript_result_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            if ( tmp_subscript_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 486;
                type_description_1 = "oNo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_subscript_result_2 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscript_result_2 );

                exception_lineno = 486;
                type_description_1 = "oNo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_subscript_result_2 );
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
                PyObject *tmp_source_name_1;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_2;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_subscribed_name_5;
                PyObject *tmp_subscript_name_5;
                PyObject *tmp_args_element_name_3;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_calendar );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_calendar );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "calendar" );
                    exception_tb = NULL;

                    exception_lineno = 488;
                    type_description_1 = "oNo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_1 = tmp_mvar_value_2;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_timegm );
                if ( tmp_called_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 488;
                    type_description_1 = "oNo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_time );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
                }

                if ( tmp_mvar_value_3 == NULL )
                {
                    Py_DECREF( tmp_called_name_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "time" );
                    exception_tb = NULL;

                    exception_lineno = 489;
                    type_description_1 = "oNo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_2 = tmp_mvar_value_3;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_strptime );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );

                    exception_lineno = 489;
                    type_description_1 = "oNo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_morsel );
                tmp_subscribed_name_5 = par_morsel;
                tmp_subscript_name_5 = const_str_plain_expires;
                tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
                if ( tmp_args_element_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 489;
                    type_description_1 = "oNo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_3 = const_str_digest_8d200ac749deb0ed034c3f2346adcc3d;
                frame_29c90574d842c9822feb17c9d2a45738->m_frame.f_lineno = 489;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                    tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_2 );
                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );

                    exception_lineno = 489;
                    type_description_1 = "oNo";
                    goto frame_exception_exit_1;
                }
                frame_29c90574d842c9822feb17c9d2a45738->m_frame.f_lineno = 488;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 488;
                    type_description_1 = "oNo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_expires;
                    assert( old != NULL );
                    var_expires = tmp_assign_source_3;
                    Py_DECREF( old );
                }

            }
            branch_no_3:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_value_name_1;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_source_name_3;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_subscribed_name_10;
        PyObject *tmp_subscript_name_10;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_value_name_2;
        PyObject *tmp_subscribed_name_11;
        PyObject *tmp_subscript_name_11;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_source_name_4;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_subscribed_name_12;
        PyObject *tmp_subscript_name_12;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_create_cookie );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_create_cookie );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "create_cookie" );
            exception_tb = NULL;

            exception_lineno = 491;
            type_description_1 = "oNo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        CHECK_OBJECT( par_morsel );
        tmp_subscribed_name_6 = par_morsel;
        tmp_subscript_name_6 = const_str_plain_comment;
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 492;
            type_description_1 = "oNo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_comment;
        tmp_kw_name_1 = _PyDict_NewPresized( 13 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_morsel );
        tmp_subscribed_name_7 = par_morsel;
        tmp_subscript_name_7 = const_str_plain_comment;
        tmp_value_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        if ( tmp_value_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 493;
            type_description_1 = "oNo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_value_name_1 );
        Py_DECREF( tmp_value_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 493;
            type_description_1 = "oNo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_dict_key_2 = const_str_plain_comment_url;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_3 = Py_False;
        tmp_dict_key_3 = const_str_plain_discard;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_morsel );
        tmp_subscribed_name_8 = par_morsel;
        tmp_subscript_name_8 = const_str_plain_domain;
        tmp_dict_value_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 495;
            type_description_1 = "oNo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_4 = const_str_plain_domain;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        if ( var_expires == NULL )
        {
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "expires" );
            exception_tb = NULL;

            exception_lineno = 496;
            type_description_1 = "oNo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_5 = var_expires;
        tmp_dict_key_5 = const_str_plain_expires;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_morsel );
        tmp_source_name_3 = par_morsel;
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_key );
        if ( tmp_dict_value_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 497;
            type_description_1 = "oNo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_6 = const_str_plain_name;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_morsel );
        tmp_subscribed_name_9 = par_morsel;
        tmp_subscript_name_9 = const_str_plain_path;
        tmp_dict_value_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
        if ( tmp_dict_value_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 498;
            type_description_1 = "oNo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_7 = const_str_plain_path;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_8 = Py_None;
        tmp_dict_key_8 = const_str_plain_port;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_morsel );
        tmp_subscribed_name_10 = par_morsel;
        tmp_subscript_name_10 = const_str_plain_httponly;
        tmp_dict_value_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
        if ( tmp_dict_value_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 500;
            type_description_1 = "oNo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_10 = const_str_plain_HttpOnly;
        tmp_dict_value_9 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_dict_value_9, tmp_dict_key_10, tmp_dict_value_10 );
        Py_DECREF( tmp_dict_value_10 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_9 = const_str_plain_rest;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_9, tmp_dict_value_9 );
        Py_DECREF( tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_11 = Py_False;
        tmp_dict_key_11 = const_str_plain_rfc2109;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_11, tmp_dict_value_11 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_morsel );
        tmp_subscribed_name_11 = par_morsel;
        tmp_subscript_name_11 = const_str_plain_secure;
        tmp_value_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
        if ( tmp_value_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 502;
            type_description_1 = "oNo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_value_name_2 );
        Py_DECREF( tmp_value_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 502;
            type_description_1 = "oNo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_12 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_dict_key_12 = const_str_plain_secure;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_12, tmp_dict_value_12 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_morsel );
        tmp_source_name_4 = par_morsel;
        tmp_dict_value_13 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_value );
        if ( tmp_dict_value_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 503;
            type_description_1 = "oNo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_13 = const_str_plain_value;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_13, tmp_dict_value_13 );
        Py_DECREF( tmp_dict_value_13 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_morsel );
        tmp_subscribed_name_12 = par_morsel;
        tmp_subscript_name_12 = const_str_plain_version;
        tmp_or_left_value_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
        if ( tmp_or_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 504;
            type_description_1 = "oNo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_1 );
            Py_DECREF( tmp_or_left_value_1 );

            exception_lineno = 504;
            type_description_1 = "oNo";
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
        tmp_or_right_value_1 = const_int_0;
        Py_INCREF( tmp_or_right_value_1 );
        tmp_dict_value_14 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_dict_value_14 = tmp_or_left_value_1;
        or_end_1:;
        tmp_dict_key_14 = const_str_plain_version;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_14, tmp_dict_value_14 );
        Py_DECREF( tmp_dict_value_14 );
        assert( !(tmp_res != 0) );
        frame_29c90574d842c9822feb17c9d2a45738->m_frame.f_lineno = 491;
        tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 491;
            type_description_1 = "oNo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_29c90574d842c9822feb17c9d2a45738 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_29c90574d842c9822feb17c9d2a45738 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_29c90574d842c9822feb17c9d2a45738 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_29c90574d842c9822feb17c9d2a45738, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_29c90574d842c9822feb17c9d2a45738->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_29c90574d842c9822feb17c9d2a45738, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_29c90574d842c9822feb17c9d2a45738,
        type_description_1,
        par_morsel,
        NULL,
        var_expires
    );


    // Release cached frame.
    if ( frame_29c90574d842c9822feb17c9d2a45738 == cache_frame_29c90574d842c9822feb17c9d2a45738 )
    {
        Py_DECREF( frame_29c90574d842c9822feb17c9d2a45738 );
    }
    cache_frame_29c90574d842c9822feb17c9d2a45738 = NULL;

    assertFrameObject( frame_29c90574d842c9822feb17c9d2a45738 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_47_morsel_to_cookie );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_expires );
    var_expires = NULL;

    CHECK_OBJECT( (PyObject *)par_morsel );
    Py_DECREF( par_morsel );
    par_morsel = NULL;

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

    Py_XDECREF( var_expires );
    var_expires = NULL;

    CHECK_OBJECT( (PyObject *)par_morsel );
    Py_DECREF( par_morsel );
    par_morsel = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_47_morsel_to_cookie );
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


static PyObject *impl_requests$cookies$$$function_48_cookiejar_from_dict( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cookie_dict = python_pars[ 0 ];
    PyObject *par_cookiejar = python_pars[ 1 ];
    PyObject *par_overwrite = python_pars[ 2 ];
    PyObject *var_names_from_jar = NULL;
    PyObject *var_name = NULL;
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_b3d2d06fb7011b6a74dd316dcefd1a92;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_b3d2d06fb7011b6a74dd316dcefd1a92 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b3d2d06fb7011b6a74dd316dcefd1a92, codeobj_b3d2d06fb7011b6a74dd316dcefd1a92, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b3d2d06fb7011b6a74dd316dcefd1a92 = cache_frame_b3d2d06fb7011b6a74dd316dcefd1a92;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b3d2d06fb7011b6a74dd316dcefd1a92 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b3d2d06fb7011b6a74dd316dcefd1a92 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_cookiejar );
        tmp_compexpr_left_1 = par_cookiejar;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "RequestsCookieJar" );
                exception_tb = NULL;

                exception_lineno = 518;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            frame_b3d2d06fb7011b6a74dd316dcefd1a92->m_frame.f_lineno = 518;
            tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 518;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_cookiejar;
                assert( old != NULL );
                par_cookiejar = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_cookie_dict );
        tmp_compexpr_left_2 = par_cookie_dict;
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
            // Tried code:
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_iter_arg_1;
                CHECK_OBJECT( par_cookiejar );
                tmp_iter_arg_1 = par_cookiejar;
                tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 521;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                assert( tmp_list_contraction_1__$0 == NULL );
                tmp_list_contraction_1__$0 = tmp_assign_source_3;
            }
            {
                PyObject *tmp_assign_source_4;
                tmp_assign_source_4 = PyList_New( 0 );
                assert( tmp_list_contraction_1__contraction_result == NULL );
                tmp_list_contraction_1__contraction_result = tmp_assign_source_4;
            }
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_5;
                CHECK_OBJECT( tmp_list_contraction_1__$0 );
                tmp_next_source_1 = tmp_list_contraction_1__$0;
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
                        type_description_1 = "oooooo";
                        exception_lineno = 521;
                        goto try_except_handler_2;
                    }
                }

                {
                    PyObject *old = tmp_list_contraction_1__iter_value_0;
                    tmp_list_contraction_1__iter_value_0 = tmp_assign_source_5;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_6;
                CHECK_OBJECT( tmp_list_contraction_1__iter_value_0 );
                tmp_assign_source_6 = tmp_list_contraction_1__iter_value_0;
                {
                    PyObject *old = var_cookie;
                    var_cookie = tmp_assign_source_6;
                    Py_INCREF( var_cookie );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_source_name_1;
                CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
                tmp_append_list_1 = tmp_list_contraction_1__contraction_result;
                CHECK_OBJECT( var_cookie );
                tmp_source_name_1 = var_cookie;
                tmp_append_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_name );
                if ( tmp_append_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 521;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                assert( PyList_Check( tmp_append_list_1 ) );
                tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                Py_DECREF( tmp_append_value_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 521;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 521;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            goto loop_start_1;
            loop_end_1:;
            CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
            tmp_assign_source_2 = tmp_list_contraction_1__contraction_result;
            Py_INCREF( tmp_assign_source_2 );
            goto try_return_handler_2;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_48_cookiejar_from_dict );
            return NULL;
            // Return handler code:
            try_return_handler_2:;
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
            try_except_handler_2:;
            exception_keeper_type_1 = exception_type;
            exception_keeper_value_1 = exception_value;
            exception_keeper_tb_1 = exception_tb;
            exception_keeper_lineno_1 = exception_lineno;
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
            exception_type = exception_keeper_type_1;
            exception_value = exception_keeper_value_1;
            exception_tb = exception_keeper_tb_1;
            exception_lineno = exception_keeper_lineno_1;

            goto frame_exception_exit_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_48_cookiejar_from_dict );
            return NULL;
            outline_result_1:;
            assert( var_names_from_jar == NULL );
            var_names_from_jar = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( par_cookie_dict );
            tmp_iter_arg_2 = par_cookie_dict;
            tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 522;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_1__for_iterator == NULL );
            tmp_for_loop_1__for_iterator = tmp_assign_source_7;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( tmp_for_loop_1__for_iterator );
            tmp_next_source_2 = tmp_for_loop_1__for_iterator;
            tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_8 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooo";
                    exception_lineno = 522;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_8;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_for_loop_1__iter_value );
            tmp_assign_source_9 = tmp_for_loop_1__iter_value;
            {
                PyObject *old = var_name;
                var_name = tmp_assign_source_9;
                Py_INCREF( var_name );
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_3;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            int tmp_truth_name_1;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( par_overwrite );
            tmp_truth_name_1 = CHECK_IF_TRUE( par_overwrite );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 523;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
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
            CHECK_OBJECT( var_name );
            tmp_compexpr_left_3 = var_name;
            CHECK_OBJECT( var_names_from_jar );
            tmp_compexpr_right_3 = var_names_from_jar;
            tmp_res = PySequence_Contains( tmp_compexpr_right_3, tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 523;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            tmp_or_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_3 = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            tmp_condition_result_3 = tmp_or_left_value_1;
            or_end_1:;
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
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_2;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                CHECK_OBJECT( par_cookiejar );
                tmp_source_name_2 = par_cookiejar;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_set_cookie );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 524;
                    type_description_1 = "oooooo";
                    goto try_except_handler_3;
                }
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_create_cookie );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_create_cookie );
                }

                if ( tmp_mvar_value_2 == NULL )
                {
                    Py_DECREF( tmp_called_name_2 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "create_cookie" );
                    exception_tb = NULL;

                    exception_lineno = 524;
                    type_description_1 = "oooooo";
                    goto try_except_handler_3;
                }

                tmp_called_name_3 = tmp_mvar_value_2;
                CHECK_OBJECT( var_name );
                tmp_args_element_name_2 = var_name;
                CHECK_OBJECT( par_cookie_dict );
                tmp_subscribed_name_1 = par_cookie_dict;
                CHECK_OBJECT( var_name );
                tmp_subscript_name_1 = var_name;
                tmp_args_element_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                if ( tmp_args_element_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 524;
                    type_description_1 = "oooooo";
                    goto try_except_handler_3;
                }
                frame_b3d2d06fb7011b6a74dd316dcefd1a92->m_frame.f_lineno = 524;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                    tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_args_element_name_3 );
                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 524;
                    type_description_1 = "oooooo";
                    goto try_except_handler_3;
                }
                frame_b3d2d06fb7011b6a74dd316dcefd1a92->m_frame.f_lineno = 524;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_1 );
                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 524;
                    type_description_1 = "oooooo";
                    goto try_except_handler_3;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            branch_no_3:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 522;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        goto loop_start_2;
        loop_end_2:;
        goto try_end_1;
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

        Py_XDECREF( tmp_for_loop_1__iter_value );
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
        Py_DECREF( tmp_for_loop_1__for_iterator );
        tmp_for_loop_1__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_1:;
        Py_XDECREF( tmp_for_loop_1__iter_value );
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
        Py_DECREF( tmp_for_loop_1__for_iterator );
        tmp_for_loop_1__for_iterator = NULL;

        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b3d2d06fb7011b6a74dd316dcefd1a92 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b3d2d06fb7011b6a74dd316dcefd1a92 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b3d2d06fb7011b6a74dd316dcefd1a92, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b3d2d06fb7011b6a74dd316dcefd1a92->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b3d2d06fb7011b6a74dd316dcefd1a92, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b3d2d06fb7011b6a74dd316dcefd1a92,
        type_description_1,
        par_cookie_dict,
        par_cookiejar,
        par_overwrite,
        var_names_from_jar,
        var_name,
        var_cookie
    );


    // Release cached frame.
    if ( frame_b3d2d06fb7011b6a74dd316dcefd1a92 == cache_frame_b3d2d06fb7011b6a74dd316dcefd1a92 )
    {
        Py_DECREF( frame_b3d2d06fb7011b6a74dd316dcefd1a92 );
    }
    cache_frame_b3d2d06fb7011b6a74dd316dcefd1a92 = NULL;

    assertFrameObject( frame_b3d2d06fb7011b6a74dd316dcefd1a92 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_cookiejar );
    tmp_return_value = par_cookiejar;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_48_cookiejar_from_dict );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cookie_dict );
    Py_DECREF( par_cookie_dict );
    par_cookie_dict = NULL;

    Py_XDECREF( var_names_from_jar );
    var_names_from_jar = NULL;

    CHECK_OBJECT( (PyObject *)par_cookiejar );
    Py_DECREF( par_cookiejar );
    par_cookiejar = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite );
    Py_DECREF( par_overwrite );
    par_overwrite = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cookie_dict );
    Py_DECREF( par_cookie_dict );
    par_cookie_dict = NULL;

    Py_XDECREF( var_names_from_jar );
    var_names_from_jar = NULL;

    Py_XDECREF( par_cookiejar );
    par_cookiejar = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_cookie );
    var_cookie = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite );
    Py_DECREF( par_overwrite );
    par_overwrite = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_48_cookiejar_from_dict );
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


static PyObject *impl_requests$cookies$$$function_49_merge_cookies( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cookiejar = python_pars[ 0 ];
    PyObject *par_cookies = python_pars[ 1 ];
    PyObject *var_cookie_in_jar = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_de0a49d0e64ad2a52d795816c59b5228;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_de0a49d0e64ad2a52d795816c59b5228 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_de0a49d0e64ad2a52d795816c59b5228, codeobj_de0a49d0e64ad2a52d795816c59b5228, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_de0a49d0e64ad2a52d795816c59b5228 = cache_frame_de0a49d0e64ad2a52d795816c59b5228;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_de0a49d0e64ad2a52d795816c59b5228 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_de0a49d0e64ad2a52d795816c59b5228 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_cookiejar );
        tmp_isinstance_inst_1 = par_cookiejar;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_cookielib );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cookielib );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "cookielib" );
            exception_tb = NULL;

            exception_lineno = 536;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_CookieJar );
        if ( tmp_isinstance_cls_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 536;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 536;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 536;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_80fe00ea301d02293abaf9dea17cddac;
            frame_de0a49d0e64ad2a52d795816c59b5228->m_frame.f_lineno = 537;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 537;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT( par_cookies );
        tmp_isinstance_inst_2 = par_cookies;
        tmp_isinstance_cls_2 = (PyObject *)&PyDict_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 539;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_cookiejar_from_dict );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cookiejar_from_dict );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "cookiejar_from_dict" );
                exception_tb = NULL;

                exception_lineno = 540;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_cookies );
            tmp_tuple_element_1 = par_cookies;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_cookiejar );
            tmp_dict_value_1 = par_cookiejar;
            tmp_dict_key_1 = const_str_plain_cookiejar;
            tmp_kw_name_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_2 = Py_False;
            tmp_dict_key_2 = const_str_plain_overwrite;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_de0a49d0e64ad2a52d795816c59b5228->m_frame.f_lineno = 540;
            tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 540;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_cookiejar;
                assert( old != NULL );
                par_cookiejar = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_isinstance_inst_3;
            PyObject *tmp_isinstance_cls_3;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_3;
            CHECK_OBJECT( par_cookies );
            tmp_isinstance_inst_3 = par_cookies;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_cookielib );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cookielib );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "cookielib" );
                exception_tb = NULL;

                exception_lineno = 542;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_isinstance_cls_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_CookieJar );
            if ( tmp_isinstance_cls_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 542;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
            Py_DECREF( tmp_isinstance_cls_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 542;
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
            // Tried code:
            {
                PyObject *tmp_called_instance_1;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_1;
                CHECK_OBJECT( par_cookiejar );
                tmp_called_instance_1 = par_cookiejar;
                CHECK_OBJECT( par_cookies );
                tmp_args_element_name_1 = par_cookies;
                frame_de0a49d0e64ad2a52d795816c59b5228->m_frame.f_lineno = 544;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_update, call_args );
                }

                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 544;
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
            PRESERVE_FRAME_EXCEPTION( frame_de0a49d0e64ad2a52d795816c59b5228 );
            if ( exception_keeper_tb_1 == NULL )
            {
                exception_keeper_tb_1 = MAKE_TRACEBACK( frame_de0a49d0e64ad2a52d795816c59b5228, exception_keeper_lineno_1 );
            }
            else if ( exception_keeper_lineno_1 != 0 )
            {
                exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_de0a49d0e64ad2a52d795816c59b5228, exception_keeper_lineno_1 );
            }

            NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
            PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_1;
                PyObject *tmp_compexpr_right_1;
                tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
                tmp_compexpr_right_1 = PyExc_AttributeError;
                tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 545;
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
                    PyObject *tmp_assign_source_2;
                    PyObject *tmp_iter_arg_1;
                    CHECK_OBJECT( par_cookies );
                    tmp_iter_arg_1 = par_cookies;
                    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
                    if ( tmp_assign_source_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 546;
                        type_description_1 = "ooo";
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
                            type_description_1 = "ooo";
                            exception_lineno = 546;
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
                        PyObject *old = var_cookie_in_jar;
                        var_cookie_in_jar = tmp_assign_source_4;
                        Py_INCREF( var_cookie_in_jar );
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_called_instance_2;
                    PyObject *tmp_call_result_2;
                    PyObject *tmp_args_element_name_2;
                    CHECK_OBJECT( par_cookiejar );
                    tmp_called_instance_2 = par_cookiejar;
                    CHECK_OBJECT( var_cookie_in_jar );
                    tmp_args_element_name_2 = var_cookie_in_jar;
                    frame_de0a49d0e64ad2a52d795816c59b5228->m_frame.f_lineno = 547;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_2 };
                        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_set_cookie, call_args );
                    }

                    if ( tmp_call_result_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 547;
                        type_description_1 = "ooo";
                        goto try_except_handler_3;
                    }
                    Py_DECREF( tmp_call_result_2 );
                }
                if ( CONSIDER_THREADING() == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 546;
                    type_description_1 = "ooo";
                    goto try_except_handler_3;
                }
                goto loop_start_1;
                loop_end_1:;
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

                Py_XDECREF( tmp_for_loop_1__iter_value );
                tmp_for_loop_1__iter_value = NULL;

                CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
                Py_DECREF( tmp_for_loop_1__for_iterator );
                tmp_for_loop_1__for_iterator = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_2;
                exception_value = exception_keeper_value_2;
                exception_tb = exception_keeper_tb_2;
                exception_lineno = exception_keeper_lineno_2;

                goto frame_exception_exit_1;
                // End of try:
                try_end_2:;
                Py_XDECREF( tmp_for_loop_1__iter_value );
                tmp_for_loop_1__iter_value = NULL;

                CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
                Py_DECREF( tmp_for_loop_1__for_iterator );
                tmp_for_loop_1__for_iterator = NULL;

                goto branch_end_4;
                branch_no_4:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 543;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_de0a49d0e64ad2a52d795816c59b5228->m_frame) frame_de0a49d0e64ad2a52d795816c59b5228->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
                branch_end_4:;
            }
            goto try_end_1;
            // exception handler codes exits in all cases
            NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_49_merge_cookies );
            return NULL;
            // End of try:
            try_end_1:;
            branch_no_3:;
        }
        branch_end_2:;
    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_de0a49d0e64ad2a52d795816c59b5228 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_de0a49d0e64ad2a52d795816c59b5228 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_de0a49d0e64ad2a52d795816c59b5228, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_de0a49d0e64ad2a52d795816c59b5228->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_de0a49d0e64ad2a52d795816c59b5228, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_de0a49d0e64ad2a52d795816c59b5228,
        type_description_1,
        par_cookiejar,
        par_cookies,
        var_cookie_in_jar
    );


    // Release cached frame.
    if ( frame_de0a49d0e64ad2a52d795816c59b5228 == cache_frame_de0a49d0e64ad2a52d795816c59b5228 )
    {
        Py_DECREF( frame_de0a49d0e64ad2a52d795816c59b5228 );
    }
    cache_frame_de0a49d0e64ad2a52d795816c59b5228 = NULL;

    assertFrameObject( frame_de0a49d0e64ad2a52d795816c59b5228 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_cookiejar );
    tmp_return_value = par_cookiejar;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_49_merge_cookies );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cookies );
    Py_DECREF( par_cookies );
    par_cookies = NULL;

    Py_XDECREF( var_cookie_in_jar );
    var_cookie_in_jar = NULL;

    CHECK_OBJECT( (PyObject *)par_cookiejar );
    Py_DECREF( par_cookiejar );
    par_cookiejar = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cookies );
    Py_DECREF( par_cookies );
    par_cookies = NULL;

    Py_XDECREF( var_cookie_in_jar );
    var_cookie_in_jar = NULL;

    CHECK_OBJECT( (PyObject *)par_cookiejar );
    Py_DECREF( par_cookiejar );
    par_cookiejar = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$cookies$$$function_49_merge_cookies );
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



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_10_add_unredirected_header(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_10_add_unredirected_header,
        const_str_plain_add_unredirected_header,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_61b127473fb0aee214b03cd821d42555,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_11_get_new_headers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_11_get_new_headers,
        const_str_plain_get_new_headers,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_67518c8f2ed686d9abb9abc3c09cc1a0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_12_unverifiable(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_12_unverifiable,
        const_str_plain_unverifiable,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_26250e413c3c3fe5c0af44b9850c30b8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_13_origin_req_host(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_13_origin_req_host,
        const_str_plain_origin_req_host,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7c0c4ced2ec588874b876c295e965f78,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_14_host(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_14_host,
        const_str_plain_host,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4ddf54c81851d86ba9203759ff3319ff,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_15___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_15___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4ba0e401bc9b99fd4d5e282fb082d3f7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_2074f4b4dde671f06897bcc11d0d41da,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_16_info(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_16_info,
        const_str_plain_info,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4f64948cd136e31d8bf437740b850271,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_17_getheaders(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_17_getheaders,
        const_str_plain_getheaders,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_376c02cad049b335b5bc873e2cd62f52,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_18_extract_cookies_to_jar(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_18_extract_cookies_to_jar,
        const_str_plain_extract_cookies_to_jar,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3790fdf113373a6986c475c57c335bb2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_d4e8bce3e52a50e29fc0c09bd0f73e7f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_19_get_cookie_header(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_19_get_cookie_header,
        const_str_plain_get_cookie_header,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0543d2fd4f485d86545d7f352bae132d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_95cacfdffdeafa2154ddb2520f2fb58f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_19ee8ae3bb1dda657e0d47f94bfd4700,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_20_remove_cookie_by_name( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_20_remove_cookie_by_name,
        const_str_plain_remove_cookie_by_name,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_350bf23a08b3616835403c03954ef79a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_a90c9fe31ac91c19721e9fd9e6cf64bd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_21_get( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_21_get,
        const_str_plain_get,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_52c802ee21afe05626c252a4a56f1d9c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_741e4a7055b20857d935a0f7ed1c4abe,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_22_set(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_22_set,
        const_str_plain_set,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e16309c7fc384b702d49541d2cecb5ef,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_573342b2a8e1af18fbe63f15ee63f11b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_23_iterkeys(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_23_iterkeys,
        const_str_plain_iterkeys,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c0bfcdc1b74d1066b2c84b68dde8f210,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_d61c39e15f1f0b76bd46a71165e3bbe6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_24_keys(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_24_keys,
        const_str_plain_keys,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4d9eeca9887b7309418908f098f92366,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_7fad1f4acdf828076344bcbd2f3093fc,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_25_itervalues(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_25_itervalues,
        const_str_plain_itervalues,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0583d5987808e361b09b6f2a9220c8e7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_8282cde113cd2232a516d421ec587b65,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_26_values(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_26_values,
        const_str_plain_values,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bcf31103c980504474b839f982cea098,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_58ff5aeca7b13e22937ae8b6a9a6b876,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_27_iteritems(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_27_iteritems,
        const_str_plain_iteritems,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3a0b35a31cd8924a0167a5971c698ab4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_94ebad60c38a4f103db32744a5bab84d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_28_items(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_28_items,
        const_str_plain_items,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_95f49bc8d7100729b16009fd9e1af3a6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_b04a12651fd966784023636e22761d12,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_29_list_domains(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_29_list_domains,
        const_str_plain_list_domains,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c613e039ae3d9aad157f752f9d50ceb2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_5266e491bdb204b2a45e0a788e9bac94,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_2_get_type(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_2_get_type,
        const_str_plain_get_type,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_efc3ae75056dc200b0ce5ea54734123b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_30_list_paths(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_30_list_paths,
        const_str_plain_list_paths,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ebd610336330c4244c062091d4674d05,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_58821042b0e0d98cc3b40076b38affdd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_31_multiple_domains(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_31_multiple_domains,
        const_str_plain_multiple_domains,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_31c1677bdaf3181e74f5175cd2f18a24,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_dd3cc005839efdfe1c3c0f3b070086ba,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_32_get_dict( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_32_get_dict,
        const_str_plain_get_dict,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_35935570550094e38a6714401daf1bfd,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_d3a4a40c67458b1207db4bc7ab20d310,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_33___contains__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_33___contains__,
        const_str_plain___contains__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9ea89b7a132c9f783ef3ec5f9df44b49,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_34___getitem__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_34___getitem__,
        const_str_plain___getitem__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ef5acc30962009558a782d38bb09eeab,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_08b25300475453472c10345ee7168b50,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_35___setitem__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_35___setitem__,
        const_str_plain___setitem__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_be1d0363e4c39f971bb8246d37c7c858,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_bb11d917f97bb6215fd11706382927d9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_36___delitem__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_36___delitem__,
        const_str_plain___delitem__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7fe301af9a9c16f5ea161a2836d06e39,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_101fa36882b0f5da69e72374403c2c30,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_37_set_cookie(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_37_set_cookie,
        const_str_plain_set_cookie,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_628d005596f876e0d8a774c29ad8dc54,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_38_update(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_38_update,
        const_str_plain_update,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ba6793ba5844d637cacb95481f7e2edc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_5c9dad01a3c84d4b998a25c6f245d693,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_39__find( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_39__find,
        const_str_plain__find,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0dfa8aaa7580004bbd27cb7c38611e4c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_2aa7f18650b70bafed61b449ab43cbad,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_3_get_host(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_3_get_host,
        const_str_plain_get_host,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_60f9315d089254062271db219841fec3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_40__find_no_duplicates( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_40__find_no_duplicates,
        const_str_plain__find_no_duplicates,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b0910d3fb21ca7672598327e935ce232,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_dcd45b6ff6ecc7b26e302a149b58c85c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_41___getstate__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_41___getstate__,
        const_str_plain___getstate__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_660ec21aa16ac133d331a9c39308c93f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_59021ee0ac4a578b9169d1a96b78e1da,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_42___setstate__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_42___setstate__,
        const_str_plain___setstate__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d61891d38faeb7479b0997dfc2d435fd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_59021ee0ac4a578b9169d1a96b78e1da,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_43_copy(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_43_copy,
        const_str_plain_copy,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f1cf3648295cf8710370bb4207467241,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_ef5ef54fd7fab3dbc34eb13a254678ee,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_44_get_policy(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_44_get_policy,
        const_str_plain_get_policy,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5a3e1ac27c82fd06c724bfb6626377f6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_05ffb5bc39cd46e6936de7ec055f15aa,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_45__copy_cookie_jar(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_45__copy_cookie_jar,
        const_str_plain__copy_cookie_jar,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f68811eaf09fad53c1b236ae40fbc349,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_46_create_cookie(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_46_create_cookie,
        const_str_plain_create_cookie,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4431e8ea73cb3d149c8fcdbbb957c0bc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_8aeec5b3f7298c5bac1e129b6ee9f59f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_47_morsel_to_cookie(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_47_morsel_to_cookie,
        const_str_plain_morsel_to_cookie,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_29c90574d842c9822feb17c9d2a45738,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_b32fff81b34b2c7f10c1d1dc66bbef6d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_48_cookiejar_from_dict( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_48_cookiejar_from_dict,
        const_str_plain_cookiejar_from_dict,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b3d2d06fb7011b6a74dd316dcefd1a92,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_85e0ea626320458ddd4363cffbfdc559,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_49_merge_cookies(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_49_merge_cookies,
        const_str_plain_merge_cookies,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_de0a49d0e64ad2a52d795816c59b5228,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_f0c7ff82cbfe26b2f3f1df333f77ef1b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_4_get_origin_req_host(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_4_get_origin_req_host,
        const_str_plain_get_origin_req_host,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3b17b91b04203fe3cf921d4b1b5fb192,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_5_get_full_url(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_5_get_full_url,
        const_str_plain_get_full_url,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4223c17850eb1ab7acbf6e35d1096f7f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_6_is_unverifiable(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_6_is_unverifiable,
        const_str_plain_is_unverifiable,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a0ea98de0913f7b96966486dc0958bda,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_7_has_header(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_7_has_header,
        const_str_plain_has_header,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0a7009ddb3ade6e83cafc7036c31aa44,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_8_get_header( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_8_get_header,
        const_str_plain_get_header,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_34c8060f7c2cbfafaba0744715cca7fe,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_9_add_header(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_9_add_header,
        const_str_plain_add_header,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_52c70a9baf3f3bc12e38902218545b3a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_138ef95cec671591d9bedfa7e0898703,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$cookies =
{
    PyModuleDef_HEAD_INIT,
    "requests.cookies",
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

MOD_INIT_DECL( requests$cookies )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_requests$cookies );
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
    puts("requests.cookies: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.cookies: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.cookies: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrequests$cookies" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$cookies = Py_InitModule4(
        "requests.cookies",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_requests$cookies = PyModule_Create( &mdef_requests$cookies );
#endif

    moduledict_requests$cookies = MODULE_DICT( module_requests$cookies );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_requests$cookies,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$cookies,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$cookies,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_requests$cookies );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_12188133309ffc390643b7a732954d08, module_requests$cookies );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
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
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_locals_requests$cookies_97_key___init__ = NULL;
    PyObject *tmp_locals_requests$cookies_97_key_getheaders = NULL;
    PyObject *tmp_locals_requests$cookies_97_key_info = NULL;
    PyObject *tmp_select_metaclass_4__base = NULL;
    struct Nuitka_FrameObject *frame_f239adae68e304790d6aa9a39c23e7b9;
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
    bool tmp_result;
    PyObject *locals_requests$cookies_25 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_90e798895b61d1ad0e1434f5f7478faa_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_90e798895b61d1ad0e1434f5f7478faa_2 = NULL;
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
    PyObject *locals_requests$cookies_171 = NULL;
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
        tmp_assign_source_1 = const_str_digest_955b7d6fef0bcb66b462d15cb6f41169;
        UPDATE_STRING_DICT0( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_c251a6c94c6e10269ce10063ac8b5e24;
        UPDATE_STRING_DICT0( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_f239adae68e304790d6aa9a39c23e7b9 = MAKE_MODULE_FRAME( codeobj_f239adae68e304790d6aa9a39c23e7b9, module_requests$cookies );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_f239adae68e304790d6aa9a39c23e7b9 );
    assert( Py_REFCNT( frame_f239adae68e304790d6aa9a39c23e7b9 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_plain_copy;
        tmp_globals_name_1 = (PyObject *)moduledict_requests$cookies;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        frame_f239adae68e304790d6aa9a39c23e7b9->m_frame.f_lineno = 12;
        tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_copy, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_2 = const_str_plain_time;
        tmp_globals_name_2 = (PyObject *)moduledict_requests$cookies;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        frame_f239adae68e304790d6aa9a39c23e7b9->m_frame.f_lineno = 13;
        tmp_assign_source_4 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
        assert( !(tmp_assign_source_4 == NULL) );
        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        tmp_name_name_3 = const_str_plain_calendar;
        tmp_globals_name_3 = (PyObject *)moduledict_requests$cookies;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        frame_f239adae68e304790d6aa9a39c23e7b9->m_frame.f_lineno = 14;
        tmp_assign_source_5 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_calendar, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_1;
        tmp_name_name_4 = const_str_plain__internal_utils;
        tmp_globals_name_4 = (PyObject *)moduledict_requests$cookies;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_to_native_string_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_f239adae68e304790d6aa9a39c23e7b9->m_frame.f_lineno = 16;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_to_native_string );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_to_native_string, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_2;
        tmp_name_name_5 = const_str_plain_compat;
        tmp_globals_name_5 = (PyObject *)moduledict_requests$cookies;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_831032f065cd3258ed8a4829c50bfee2_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_f239adae68e304790d6aa9a39c23e7b9->m_frame.f_lineno = 17;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_cookielib );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_cookielib, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_urlparse );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_urlparse, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_4 = tmp_import_from_1__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_urlunparse );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_urlunparse, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_5 = tmp_import_from_1__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_Morsel );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_Morsel, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_6 = tmp_import_from_1__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_MutableMapping );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_MutableMapping, tmp_assign_source_12 );
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

    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        tmp_name_name_6 = const_str_plain_threading;
        tmp_globals_name_6 = (PyObject *)moduledict_requests$cookies;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = Py_None;
        frame_f239adae68e304790d6aa9a39c23e7b9->m_frame.f_lineno = 20;
        tmp_assign_source_13 = IMPORT_MODULE4( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_threading, tmp_assign_source_13 );
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
    PRESERVE_FRAME_EXCEPTION( frame_f239adae68e304790d6aa9a39c23e7b9 );
    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_f239adae68e304790d6aa9a39c23e7b9, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_f239adae68e304790d6aa9a39c23e7b9, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
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


            exception_lineno = 21;

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
            PyObject *tmp_assign_source_14;
            PyObject *tmp_name_name_7;
            PyObject *tmp_globals_name_7;
            PyObject *tmp_locals_name_7;
            PyObject *tmp_fromlist_name_7;
            tmp_name_name_7 = const_str_plain_dummy_threading;
            tmp_globals_name_7 = (PyObject *)moduledict_requests$cookies;
            tmp_locals_name_7 = Py_None;
            tmp_fromlist_name_7 = Py_None;
            frame_f239adae68e304790d6aa9a39c23e7b9->m_frame.f_lineno = 22;
            tmp_assign_source_14 = IMPORT_MODULE4( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_threading, tmp_assign_source_14 );
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 19;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_f239adae68e304790d6aa9a39c23e7b9->m_frame) frame_f239adae68e304790d6aa9a39c23e7b9->m_frame.f_lineno = exception_tb->tb_lineno;

        goto frame_exception_exit_1;
        branch_end_1:;
    }
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$cookies );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_requests$cookies_25 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_12188133309ffc390643b7a732954d08;
        tmp_res = PyDict_SetItem( locals_requests$cookies_25, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_33e1091efb89a5aa5c06480eca194fed;
        tmp_res = PyDict_SetItem( locals_requests$cookies_25, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_1___init__(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_25, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_2_get_type(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_25, const_str_plain_get_type, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_3_get_host(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_25, const_str_plain_get_host, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_4_get_origin_req_host(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_25, const_str_plain_get_origin_req_host, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_5_get_full_url(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_25, const_str_plain_get_full_url, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_6_is_unverifiable(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_25, const_str_plain_is_unverifiable, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_7_has_header(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_25, const_str_plain_has_header, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_8_get_header( tmp_defaults_1 );



            tmp_res = PyDict_SetItem( locals_requests$cookies_25, const_str_plain_get_header, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_9_add_header(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_25, const_str_plain_add_header, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_10_add_unredirected_header(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_25, const_str_plain_add_unredirected_header, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_11_get_new_headers(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_25, const_str_plain_get_new_headers, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_90e798895b61d1ad0e1434f5f7478faa_2, codeobj_90e798895b61d1ad0e1434f5f7478faa, module_requests$cookies, 0 );
        frame_90e798895b61d1ad0e1434f5f7478faa_2 = cache_frame_90e798895b61d1ad0e1434f5f7478faa_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_90e798895b61d1ad0e1434f5f7478faa_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_90e798895b61d1ad0e1434f5f7478faa_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            tmp_called_name_1 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_1 = MAKE_FUNCTION_requests$cookies$$$function_12_unverifiable(  );



            frame_90e798895b61d1ad0e1434f5f7478faa_2->m_frame.f_lineno = 84;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem( locals_requests$cookies_25, const_str_plain_unverifiable, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_2;
            tmp_called_name_2 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_2 = MAKE_FUNCTION_requests$cookies$$$function_13_origin_req_host(  );



            frame_90e798895b61d1ad0e1434f5f7478faa_2->m_frame.f_lineno = 88;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem( locals_requests$cookies_25, const_str_plain_origin_req_host, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_3;
            tmp_called_name_3 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_3 = MAKE_FUNCTION_requests$cookies$$$function_14_host(  );



            frame_90e798895b61d1ad0e1434f5f7478faa_2->m_frame.f_lineno = 92;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem( locals_requests$cookies_25, const_str_plain_host, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_90e798895b61d1ad0e1434f5f7478faa_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_90e798895b61d1ad0e1434f5f7478faa_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_90e798895b61d1ad0e1434f5f7478faa_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_90e798895b61d1ad0e1434f5f7478faa_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_90e798895b61d1ad0e1434f5f7478faa_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_90e798895b61d1ad0e1434f5f7478faa_2,
            type_description_2
        );


        // Release cached frame.
        if ( frame_90e798895b61d1ad0e1434f5f7478faa_2 == cache_frame_90e798895b61d1ad0e1434f5f7478faa_2 )
        {
            Py_DECREF( frame_90e798895b61d1ad0e1434f5f7478faa_2 );
        }
        cache_frame_90e798895b61d1ad0e1434f5f7478faa_2 = NULL;

        assertFrameObject( frame_90e798895b61d1ad0e1434f5f7478faa_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        tmp_assign_source_15 = locals_requests$cookies_25;
        Py_INCREF( tmp_assign_source_15 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$cookies );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_requests$cookies_25 );
        locals_requests$cookies_25 = NULL;
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

        Py_DECREF( locals_requests$cookies_25 );
        locals_requests$cookies_25 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$cookies );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 25;
        goto try_except_handler_3;
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
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


            exception_lineno = 25;

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
        tmp_assign_source_16 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_16 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_16 );
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_4 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_4 = const_str_plain_MockRequest;
        tmp_args_element_name_5 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_6 = tmp_class_creation_1__class_dict;
        frame_f239adae68e304790d6aa9a39c23e7b9->m_frame.f_lineno = 25;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_3;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_17;
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
        UPDATE_STRING_DICT0( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_MockRequest, tmp_assign_source_18 );
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
        PyObject *tmp_assign_source_19;
        {
            PyObject *tmp_assign_source_20;
            tmp_assign_source_20 = MAKE_FUNCTION_requests$cookies$$$function_15___init__(  );



            assert( tmp_locals_requests$cookies_97_key___init__ == NULL );
            tmp_locals_requests$cookies_97_key___init__ = tmp_assign_source_20;
        }
        {
            PyObject *tmp_assign_source_21;
            tmp_assign_source_21 = MAKE_FUNCTION_requests$cookies$$$function_16_info(  );



            assert( tmp_locals_requests$cookies_97_key_info == NULL );
            tmp_locals_requests$cookies_97_key_info = tmp_assign_source_21;
        }
        {
            PyObject *tmp_assign_source_22;
            tmp_assign_source_22 = MAKE_FUNCTION_requests$cookies$$$function_17_getheaders(  );



            assert( tmp_locals_requests$cookies_97_key_getheaders == NULL );
            tmp_locals_requests$cookies_97_key_getheaders = tmp_assign_source_22;
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
            tmp_dict_value_1 = const_str_digest_12188133309ffc390643b7a732954d08;
            tmp_dict_key_1 = const_str_plain___module__;
            tmp_assign_source_19 = _PyDict_NewPresized( 5 );
            tmp_res = PyDict_SetItem( tmp_assign_source_19, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_2 = const_str_digest_e02118ec259954e10ca6d6356803797f;
            tmp_dict_key_2 = const_str_plain___doc__;
            tmp_res = PyDict_SetItem( tmp_assign_source_19, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_requests$cookies_97_key___init__ );
            tmp_dict_value_3 = tmp_locals_requests$cookies_97_key___init__;
            tmp_dict_key_3 = const_str_plain___init__;
            tmp_res = PyDict_SetItem( tmp_assign_source_19, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_requests$cookies_97_key_info );
            tmp_dict_value_4 = tmp_locals_requests$cookies_97_key_info;
            tmp_dict_key_4 = const_str_plain_info;
            tmp_res = PyDict_SetItem( tmp_assign_source_19, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_requests$cookies_97_key_getheaders );
            tmp_dict_value_5 = tmp_locals_requests$cookies_97_key_getheaders;
            tmp_dict_key_5 = const_str_plain_getheaders;
            tmp_res = PyDict_SetItem( tmp_assign_source_19, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            goto try_return_handler_5;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$cookies );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT( (PyObject *)tmp_locals_requests$cookies_97_key___init__ );
        Py_DECREF( tmp_locals_requests$cookies_97_key___init__ );
        tmp_locals_requests$cookies_97_key___init__ = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_requests$cookies_97_key_info );
        Py_DECREF( tmp_locals_requests$cookies_97_key_info );
        tmp_locals_requests$cookies_97_key_info = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_requests$cookies_97_key_getheaders );
        Py_DECREF( tmp_locals_requests$cookies_97_key_getheaders );
        tmp_locals_requests$cookies_97_key_getheaders = NULL;

        goto outline_result_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$cookies );
        return MOD_RETURN_VALUE( NULL );
        outline_result_2:;
        assert( tmp_class_creation_2__class_dict == NULL );
        tmp_class_creation_2__class_dict = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
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


            exception_lineno = 97;

            goto try_except_handler_6;
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
        tmp_assign_source_23 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;

            goto try_except_handler_6;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_23 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_23 );
        condexpr_end_2:;
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_called_name_5 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_7 = const_str_plain_MockResponse;
        tmp_args_element_name_8 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_2__class_dict );
        tmp_args_element_name_9 = tmp_class_creation_2__class_dict;
        frame_f239adae68e304790d6aa9a39c23e7b9->m_frame.f_lineno = 97;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;

            goto try_except_handler_6;
        }
        assert( tmp_class_creation_2__class == NULL );
        tmp_class_creation_2__class = tmp_assign_source_24;
    }
    goto try_end_4;
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
    try_end_4:;
    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT( tmp_class_creation_2__class );
        tmp_assign_source_25 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_MockResponse, tmp_assign_source_25 );
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
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_FUNCTION_requests$cookies$$$function_18_extract_cookies_to_jar(  );



        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_FUNCTION_requests$cookies$$$function_19_get_cookie_header(  );



        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_get_cookie_header, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_none_none_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_28 = MAKE_FUNCTION_requests$cookies$$$function_20_remove_cookie_by_name( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_remove_cookie_by_name, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = PyDict_Copy( const_dict_8bb618981da06812b982ce6e43eb28e7 );
        assert( tmp_class_creation_3__class_dict == NULL );
        tmp_class_creation_3__class_dict = tmp_assign_source_29;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        nuitka_bool tmp_condition_result_4;
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


            exception_lineno = 165;

            goto try_except_handler_7;
        }
        tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
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
        tmp_assign_source_30 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;

            goto try_except_handler_7;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_assign_source_30 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_30 );
        condexpr_end_3:;
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_called_name_6 = tmp_class_creation_3__metaclass;
        tmp_args_element_name_10 = const_str_plain_CookieConflictError;
        tmp_args_element_name_11 = const_tuple_type_RuntimeError_tuple;
        CHECK_OBJECT( tmp_class_creation_3__class_dict );
        tmp_args_element_name_12 = tmp_class_creation_3__class_dict;
        frame_f239adae68e304790d6aa9a39c23e7b9->m_frame.f_lineno = 165;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
        }

        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;

            goto try_except_handler_7;
        }
        assert( tmp_class_creation_3__class == NULL );
        tmp_class_creation_3__class = tmp_assign_source_31;
    }
    goto try_end_5;
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
    Py_DECREF( tmp_class_creation_3__class_dict );
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
    try_end_5:;
    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT( tmp_class_creation_3__class );
        tmp_assign_source_32 = tmp_class_creation_3__class;
        UPDATE_STRING_DICT0( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_CookieConflictError, tmp_assign_source_32 );
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
        PyObject *tmp_assign_source_33;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_cookielib );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cookielib );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "cookielib" );
            exception_tb = NULL;

            exception_lineno = 171;

            goto try_except_handler_8;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_CookieJar );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;

            goto try_except_handler_8;
        }
        tmp_assign_source_33 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_assign_source_33, 0, tmp_tuple_element_1 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_MutableMapping );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MutableMapping );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_assign_source_33 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "MutableMapping" );
            exception_tb = NULL;

            exception_lineno = 171;

            goto try_except_handler_8;
        }

        tmp_tuple_element_1 = tmp_mvar_value_2;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_33, 1, tmp_tuple_element_1 );
        assert( tmp_class_creation_4__bases == NULL );
        tmp_class_creation_4__bases = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        {
            PyObject *tmp_set_locals_2;
            tmp_set_locals_2 = PyDict_New();
            locals_requests$cookies_171 = tmp_set_locals_2;
        }
        tmp_dictset_value = const_str_digest_12188133309ffc390643b7a732954d08;
        tmp_res = PyDict_SetItem( locals_requests$cookies_171, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_c6a3c61d8189ea3789c38808f9f3af27;
        tmp_res = PyDict_SetItem( locals_requests$cookies_171, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_none_none_none_tuple;
            Py_INCREF( tmp_defaults_3 );
            tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_21_get( tmp_defaults_3 );



            tmp_res = PyDict_SetItem( locals_requests$cookies_171, const_str_plain_get, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_22_set(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_171, const_str_plain_set, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_23_iterkeys(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_171, const_str_plain_iterkeys, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_24_keys(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_171, const_str_plain_keys, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_25_itervalues(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_171, const_str_plain_itervalues, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_26_values(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_171, const_str_plain_values, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_27_iteritems(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_171, const_str_plain_iteritems, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_28_items(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_171, const_str_plain_items, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_29_list_domains(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_171, const_str_plain_list_domains, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_30_list_paths(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_171, const_str_plain_list_paths, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_31_multiple_domains(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_171, const_str_plain_multiple_domains, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = const_tuple_none_none_tuple;
            Py_INCREF( tmp_defaults_4 );
            tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_32_get_dict( tmp_defaults_4 );



            tmp_res = PyDict_SetItem( locals_requests$cookies_171, const_str_plain_get_dict, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_33___contains__(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_171, const_str_plain___contains__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_34___getitem__(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_171, const_str_plain___getitem__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_35___setitem__(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_171, const_str_plain___setitem__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_36___delitem__(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_171, const_str_plain___delitem__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_37_set_cookie(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_171, const_str_plain_set_cookie, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_38_update(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_171, const_str_plain_update, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = const_tuple_none_none_tuple;
            Py_INCREF( tmp_defaults_5 );
            tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_39__find( tmp_defaults_5 );



            tmp_res = PyDict_SetItem( locals_requests$cookies_171, const_str_plain__find, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = const_tuple_none_none_tuple;
            Py_INCREF( tmp_defaults_6 );
            tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_40__find_no_duplicates( tmp_defaults_6 );



            tmp_res = PyDict_SetItem( locals_requests$cookies_171, const_str_plain__find_no_duplicates, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_41___getstate__(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_171, const_str_plain___getstate__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_42___setstate__(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_171, const_str_plain___setstate__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_43_copy(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_171, const_str_plain_copy, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_44_get_policy(  );



        tmp_res = PyDict_SetItem( locals_requests$cookies_171, const_str_plain_get_policy, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_34 = locals_requests$cookies_171;
        Py_INCREF( tmp_assign_source_34 );
        goto try_return_handler_9;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$cookies );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF( locals_requests$cookies_171 );
        locals_requests$cookies_171 = NULL;
        goto outline_result_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$cookies );
        return MOD_RETURN_VALUE( NULL );
        outline_result_3:;
        assert( tmp_class_creation_4__class_dict == NULL );
        tmp_class_creation_4__class_dict = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        nuitka_bool tmp_condition_result_5;
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


            exception_lineno = 171;

            goto try_except_handler_8;
        }
        tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
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
        tmp_assign_source_35 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;

            goto try_except_handler_8;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_subscribed_name_1 = tmp_class_creation_4__bases;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_36 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_assign_source_36 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;

                goto try_except_handler_8;
            }
            assert( tmp_select_metaclass_4__base == NULL );
            tmp_select_metaclass_4__base = tmp_assign_source_36;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( tmp_select_metaclass_4__base );
            tmp_source_name_2 = tmp_select_metaclass_4__base;
            tmp_assign_source_35 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
            if ( tmp_assign_source_35 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;

                goto try_except_handler_11;
            }
            goto try_return_handler_10;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$cookies );
        return MOD_RETURN_VALUE( NULL );
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

        {
            PyObject *tmp_type_arg_1;
            Py_DECREF( exception_keeper_type_7 );
            Py_XDECREF( exception_keeper_value_7 );
            Py_XDECREF( exception_keeper_tb_7 );
            CHECK_OBJECT( tmp_select_metaclass_4__base );
            tmp_type_arg_1 = tmp_select_metaclass_4__base;
            tmp_assign_source_35 = BUILTIN_TYPE1( tmp_type_arg_1 );
            assert( !(tmp_assign_source_35 == NULL) );
            goto try_return_handler_10;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$cookies );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
        Py_DECREF( tmp_select_metaclass_4__base );
        tmp_select_metaclass_4__base = NULL;

        goto outline_result_4;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
        Py_DECREF( tmp_select_metaclass_4__base );
        tmp_select_metaclass_4__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$cookies );
        return MOD_RETURN_VALUE( NULL );
        outline_result_4:;
        condexpr_end_4:;
        assert( tmp_class_creation_4__metaclass == NULL );
        tmp_class_creation_4__metaclass = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        CHECK_OBJECT( tmp_class_creation_4__metaclass );
        tmp_called_name_7 = tmp_class_creation_4__metaclass;
        tmp_args_element_name_13 = const_str_plain_RequestsCookieJar;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_args_element_name_14 = tmp_class_creation_4__bases;
        CHECK_OBJECT( tmp_class_creation_4__class_dict );
        tmp_args_element_name_15 = tmp_class_creation_4__class_dict;
        frame_f239adae68e304790d6aa9a39c23e7b9->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
            tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
        }

        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;

            goto try_except_handler_8;
        }
        assert( tmp_class_creation_4__class == NULL );
        tmp_class_creation_4__class = tmp_assign_source_37;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
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
    try_end_6:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_f239adae68e304790d6aa9a39c23e7b9 );
#endif
    popFrameStack();

    assertFrameObject( frame_f239adae68e304790d6aa9a39c23e7b9 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_f239adae68e304790d6aa9a39c23e7b9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f239adae68e304790d6aa9a39c23e7b9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f239adae68e304790d6aa9a39c23e7b9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f239adae68e304790d6aa9a39c23e7b9, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_38;
        CHECK_OBJECT( tmp_class_creation_4__class );
        tmp_assign_source_38 = tmp_class_creation_4__class;
        UPDATE_STRING_DICT0( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar, tmp_assign_source_38 );
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

    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_FUNCTION_requests$cookies$$$function_45__copy_cookie_jar(  );



        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain__copy_cookie_jar, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_FUNCTION_requests$cookies$$$function_46_create_cookie(  );



        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_create_cookie, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_FUNCTION_requests$cookies$$$function_47_morsel_to_cookie(  );



        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_morsel_to_cookie, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_defaults_7;
        tmp_defaults_7 = const_tuple_none_true_tuple;
        Py_INCREF( tmp_defaults_7 );
        tmp_assign_source_42 = MAKE_FUNCTION_requests$cookies$$$function_48_cookiejar_from_dict( tmp_defaults_7 );



        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_cookiejar_from_dict, tmp_assign_source_42 );
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_FUNCTION_requests$cookies$$$function_49_merge_cookies(  );



        UPDATE_STRING_DICT1( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_merge_cookies, tmp_assign_source_43 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_requests$cookies );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
