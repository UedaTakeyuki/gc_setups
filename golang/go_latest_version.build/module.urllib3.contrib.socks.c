/* Generated code for Python module 'urllib3.contrib.socks'
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

/* The "_module_urllib3$contrib$socks" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$contrib$socks;
PyDictObject *moduledict_urllib3$contrib$socks;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_digest_a8c5d5819c4db6abb50fe4e24bb09b9d;
extern PyObject *const_str_plain_ProxyError;
static PyObject *const_str_plain_SOCKSConnection;
static PyObject *const_str_plain_proxy_password;
extern PyObject *const_str_plain_socks;
extern PyObject *const_str_plain_ConnectTimeoutError;
extern PyObject *const_str_plain_poolmanager;
extern PyObject *const_str_plain_rdns;
static PyObject *const_str_plain_SOCKSHTTPSConnection;
static PyObject *const_str_plain_SOCKSHTTPSConnectionPool;
static PyObject *const_tuple_none_none_int_pos_10_none_tuple;
static PyObject *const_str_digest_dc47b5c985c62efa64cf26cdf57dd814;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_warn;
static PyObject *const_tuple_str_plain_PoolManager_tuple;
static PyObject *const_tuple_str_plain__socks_options_tuple;
extern PyObject *const_str_plain_parsed;
static PyObject *const_tuple_ef8b9c61eea8b793f4161bd4f2284837_tuple;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_scheme;
static PyObject *const_tuple_str_plain_ConnectTimeoutError_str_plain_NewConnectionError_tuple;
extern PyObject *const_tuple_str_plain_DependencyWarning_tuple;
extern PyObject *const_str_plain__new_conn;
extern PyObject *const_str_plain_NewConnectionError;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_HTTPConnectionPool;
extern PyObject *const_str_plain_connection;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_socket;
extern PyObject *const_str_plain_http;
extern PyObject *const_str_plain_parse_url;
extern PyObject *const_str_digest_a93bc1dc732be398b86f8538baa37185;
extern PyObject *const_str_digest_03224f9e3167cae45c1e00020c2975eb;
extern PyObject *const_str_plain_num_pools;
extern PyObject *const_str_plain_conn;
static PyObject *const_str_digest_f72fad5ee1f5fa45bf4f9a22d2727edb;
static PyObject *const_str_plain_SOCKSHTTPConnectionPool;
extern PyObject *const_str_digest_d0cac7c67d1189a986b25b7cf105347d;
static PyObject *const_str_plain_proxy_addr;
static PyObject *const_str_plain_proxy_port;
static PyObject *const_str_digest_eeea122c4ef21297597db82f300a3894;
static PyObject *const_str_digest_3323bc4cc47b9429964d3b0b5a0ed4eb;
extern PyObject *const_str_plain_proxy_url;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_int_pos_10;
extern PyObject *const_str_plain_split;
extern PyObject *const_tuple_str_chr_58_tuple;
static PyObject *const_tuple_f104d233969f90153cff675de5d1321e_tuple;
static PyObject *const_str_digest_f78fd7e71ec8b1168658a1182c635393;
extern PyObject *const_tuple_str_plain_error_str_plain_timeout_tuple;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain_HTTPSConnectionPool;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_proxy_type;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_PoolManager;
extern PyObject *const_str_plain___module__;
static PyObject *const_tuple_str_plain_HTTPConnection_str_plain_HTTPSConnection_tuple;
extern PyObject *const_str_plain_connectionpool;
extern PyObject *const_str_plain_HTTPConnection;
extern PyObject *const_str_plain_SocketTimeout;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_extra_kw;
static PyObject *const_str_plain_proxy_rdns;
extern PyObject *const_str_plain___init__;
extern PyObject *const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_tuple;
extern PyObject *const_str_plain_connection_pool_kw;
static PyObject *const_str_plain_socks_version;
extern PyObject *const_str_plain_DependencyWarning;
extern PyObject *const_str_plain_ssl;
extern PyObject *const_str_plain_auth;
static PyObject *const_str_digest_75fb4308a53d1e344eda8ae00b794973;
extern PyObject *const_str_plain_password;
extern PyObject *const_str_plain__socks_options;
static PyObject *const_str_plain_socks4a;
extern PyObject *const_str_chr_58;
static PyObject *const_str_plain_socket_err;
static PyObject *const_str_plain_socks_options;
extern PyObject *const_str_plain_headers;
extern PyObject *const_str_plain_https;
extern PyObject *const_tuple_str_plain_HTTPConnectionPool_str_plain_HTTPSConnectionPool_tuple;
extern PyObject *const_str_plain_pool_classes_by_scheme;
static PyObject *const_str_plain_PROXY_TYPE_SOCKS5;
static PyObject *const_str_plain_PROXY_TYPE_SOCKS4;
static PyObject *const_str_plain_proxy_host;
extern PyObject *const_str_plain_username;
static PyObject *const_str_digest_b03980105d8ed0a56e9e14d3250ee347;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_SocketError;
extern PyObject *const_str_plain_create_connection;
extern PyObject *const_str_plain_ConnectionCls;
static PyObject *const_str_plain_proxy_username;
extern PyObject *const_tuple_str_plain_parse_url_tuple;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_port;
extern PyObject *const_str_plain_SOCKSProxyManager;
extern PyObject *const_str_plain_host;
extern PyObject *const_str_plain_source_address;
extern PyObject *const_str_plain_pop;
extern PyObject *const_str_plain_socket_options;
static PyObject *const_str_digest_d2feb5bdfccf41aa10971180163e4a5d;
extern PyObject *const_str_plain_HTTPSConnection;
static PyObject *const_str_plain_socks5h;
static PyObject *const_str_plain_socks4;
static PyObject *const_str_plain_socks5;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_SOCKSConnection = UNSTREAM_STRING( &constant_bin[ 1067116 ], 15, 1 );
    const_str_plain_proxy_password = UNSTREAM_STRING( &constant_bin[ 1067131 ], 14, 1 );
    const_str_plain_SOCKSHTTPSConnection = UNSTREAM_STRING( &constant_bin[ 1067145 ], 20, 1 );
    const_str_plain_SOCKSHTTPSConnectionPool = UNSTREAM_STRING( &constant_bin[ 1067165 ], 24, 1 );
    const_tuple_none_none_int_pos_10_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_none_none_int_pos_10_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_int_pos_10_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_int_pos_10_none_tuple, 2, const_int_pos_10 ); Py_INCREF( const_int_pos_10 );
    PyTuple_SET_ITEM( const_tuple_none_none_int_pos_10_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_str_digest_dc47b5c985c62efa64cf26cdf57dd814 = UNSTREAM_STRING( &constant_bin[ 1067189 ], 30, 0 );
    const_tuple_str_plain_PoolManager_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PoolManager_tuple, 0, const_str_plain_PoolManager ); Py_INCREF( const_str_plain_PoolManager );
    const_tuple_str_plain__socks_options_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__socks_options_tuple, 0, const_str_plain__socks_options ); Py_INCREF( const_str_plain__socks_options );
    const_tuple_ef8b9c61eea8b793f4161bd4f2284837_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_ef8b9c61eea8b793f4161bd4f2284837_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_ef8b9c61eea8b793f4161bd4f2284837_tuple, 1, const_str_plain_proxy_url ); Py_INCREF( const_str_plain_proxy_url );
    PyTuple_SET_ITEM( const_tuple_ef8b9c61eea8b793f4161bd4f2284837_tuple, 2, const_str_plain_username ); Py_INCREF( const_str_plain_username );
    PyTuple_SET_ITEM( const_tuple_ef8b9c61eea8b793f4161bd4f2284837_tuple, 3, const_str_plain_password ); Py_INCREF( const_str_plain_password );
    PyTuple_SET_ITEM( const_tuple_ef8b9c61eea8b793f4161bd4f2284837_tuple, 4, const_str_plain_num_pools ); Py_INCREF( const_str_plain_num_pools );
    PyTuple_SET_ITEM( const_tuple_ef8b9c61eea8b793f4161bd4f2284837_tuple, 5, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_ef8b9c61eea8b793f4161bd4f2284837_tuple, 6, const_str_plain_connection_pool_kw ); Py_INCREF( const_str_plain_connection_pool_kw );
    const_str_plain_socks_options = UNSTREAM_STRING( &constant_bin[ 1067219 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_ef8b9c61eea8b793f4161bd4f2284837_tuple, 7, const_str_plain_socks_options ); Py_INCREF( const_str_plain_socks_options );
    PyTuple_SET_ITEM( const_tuple_ef8b9c61eea8b793f4161bd4f2284837_tuple, 8, const_str_plain_rdns ); Py_INCREF( const_str_plain_rdns );
    PyTuple_SET_ITEM( const_tuple_ef8b9c61eea8b793f4161bd4f2284837_tuple, 9, const_str_plain_split ); Py_INCREF( const_str_plain_split );
    PyTuple_SET_ITEM( const_tuple_ef8b9c61eea8b793f4161bd4f2284837_tuple, 10, const_str_plain_parsed ); Py_INCREF( const_str_plain_parsed );
    const_str_plain_socks_version = UNSTREAM_STRING( &constant_bin[ 1067232 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_ef8b9c61eea8b793f4161bd4f2284837_tuple, 11, const_str_plain_socks_version ); Py_INCREF( const_str_plain_socks_version );
    const_tuple_str_plain_ConnectTimeoutError_str_plain_NewConnectionError_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ConnectTimeoutError_str_plain_NewConnectionError_tuple, 0, const_str_plain_ConnectTimeoutError ); Py_INCREF( const_str_plain_ConnectTimeoutError );
    PyTuple_SET_ITEM( const_tuple_str_plain_ConnectTimeoutError_str_plain_NewConnectionError_tuple, 1, const_str_plain_NewConnectionError ); Py_INCREF( const_str_plain_NewConnectionError );
    const_str_digest_f72fad5ee1f5fa45bf4f9a22d2727edb = UNSTREAM_STRING( &constant_bin[ 1067245 ], 65, 0 );
    const_str_plain_SOCKSHTTPConnectionPool = UNSTREAM_STRING( &constant_bin[ 1067310 ], 23, 1 );
    const_str_plain_proxy_addr = UNSTREAM_STRING( &constant_bin[ 1067333 ], 10, 1 );
    const_str_plain_proxy_port = UNSTREAM_STRING( &constant_bin[ 1067343 ], 10, 1 );
    const_str_digest_eeea122c4ef21297597db82f300a3894 = UNSTREAM_STRING( &constant_bin[ 1067353 ], 104, 0 );
    const_str_digest_3323bc4cc47b9429964d3b0b5a0ed4eb = UNSTREAM_STRING( &constant_bin[ 1067457 ], 57, 0 );
    const_tuple_f104d233969f90153cff675de5d1321e_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_f104d233969f90153cff675de5d1321e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_f104d233969f90153cff675de5d1321e_tuple, 1, const_str_plain_error ); Py_INCREF( const_str_plain_error );
    PyTuple_SET_ITEM( const_tuple_f104d233969f90153cff675de5d1321e_tuple, 2, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    PyTuple_SET_ITEM( const_tuple_f104d233969f90153cff675de5d1321e_tuple, 3, const_str_plain_conn ); Py_INCREF( const_str_plain_conn );
    PyTuple_SET_ITEM( const_tuple_f104d233969f90153cff675de5d1321e_tuple, 4, const_str_plain_extra_kw ); Py_INCREF( const_str_plain_extra_kw );
    const_str_digest_f78fd7e71ec8b1168658a1182c635393 = UNSTREAM_STRING( &constant_bin[ 1067514 ], 194, 0 );
    const_str_plain_proxy_type = UNSTREAM_STRING( &constant_bin[ 1067708 ], 10, 1 );
    const_tuple_str_plain_HTTPConnection_str_plain_HTTPSConnection_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HTTPConnection_str_plain_HTTPSConnection_tuple, 0, const_str_plain_HTTPConnection ); Py_INCREF( const_str_plain_HTTPConnection );
    PyTuple_SET_ITEM( const_tuple_str_plain_HTTPConnection_str_plain_HTTPSConnection_tuple, 1, const_str_plain_HTTPSConnection ); Py_INCREF( const_str_plain_HTTPSConnection );
    const_str_plain_proxy_rdns = UNSTREAM_STRING( &constant_bin[ 1067718 ], 10, 1 );
    const_str_digest_75fb4308a53d1e344eda8ae00b794973 = UNSTREAM_STRING( &constant_bin[ 1067728 ], 71, 0 );
    const_str_plain_socks4a = UNSTREAM_STRING( &constant_bin[ 1067799 ], 7, 1 );
    const_str_plain_socket_err = UNSTREAM_STRING( &constant_bin[ 1067806 ], 10, 1 );
    const_str_plain_PROXY_TYPE_SOCKS5 = UNSTREAM_STRING( &constant_bin[ 1067816 ], 17, 1 );
    const_str_plain_PROXY_TYPE_SOCKS4 = UNSTREAM_STRING( &constant_bin[ 1067833 ], 17, 1 );
    const_str_plain_proxy_host = UNSTREAM_STRING( &constant_bin[ 1056128 ], 10, 1 );
    const_str_digest_b03980105d8ed0a56e9e14d3250ee347 = UNSTREAM_STRING( &constant_bin[ 1067850 ], 749, 0 );
    const_str_plain_proxy_username = UNSTREAM_STRING( &constant_bin[ 1068599 ], 14, 1 );
    const_str_digest_d2feb5bdfccf41aa10971180163e4a5d = UNSTREAM_STRING( &constant_bin[ 1068613 ], 41, 0 );
    const_str_plain_socks5h = UNSTREAM_STRING( &constant_bin[ 1068654 ], 7, 1 );
    const_str_plain_socks4 = UNSTREAM_STRING( &constant_bin[ 1067799 ], 6, 1 );
    const_str_plain_socks5 = UNSTREAM_STRING( &constant_bin[ 1068654 ], 6, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$contrib$socks( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_fbd0aab2a3c167b4be6c0f4c172352ec;
static PyCodeObject *codeobj_ad854a96092db35d74e034f060be18ab;
static PyCodeObject *codeobj_75ca5ec2b97ac9d485a25d2f8d91beeb;
static PyCodeObject *codeobj_db5a67bba8f207053457f6a9ac81565d;
static PyCodeObject *codeobj_67244cb95978041f2d894be101c44e62;
static PyCodeObject *codeobj_23c371fa484d489dc79b19eda560489f;
static PyCodeObject *codeobj_8f3969a05a4899961fc337b0c8b20545;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_3323bc4cc47b9429964d3b0b5a0ed4eb;
    codeobj_fbd0aab2a3c167b4be6c0f4c172352ec = MAKE_CODEOBJ( module_filename_obj, const_str_digest_dc47b5c985c62efa64cf26cdf57dd814, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_ad854a96092db35d74e034f060be18ab = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SOCKSHTTPConnectionPool, 133, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_75ca5ec2b97ac9d485a25d2f8d91beeb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SOCKSHTTPSConnectionPool, 137, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_db5a67bba8f207053457f6a9ac81565d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SOCKSProxyManager, 141, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_67244cb95978041f2d894be101c44e62 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 63, const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_23c371fa484d489dc79b19eda560489f = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 151, const_tuple_ef8b9c61eea8b793f4161bd4f2284837_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_8f3969a05a4899961fc337b0c8b20545 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__new_conn, 67, const_tuple_f104d233969f90153cff675de5d1321e_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3_complex_call_helper_star_list_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_7_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_pos_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_urllib3$contrib$socks$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$socks$$$function_2__new_conn(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$socks$$$function_3___init__( PyObject *defaults );


// The module function definitions.
static PyObject *impl_urllib3$contrib$socks$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_67244cb95978041f2d894be101c44e62;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_67244cb95978041f2d894be101c44e62 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_67244cb95978041f2d894be101c44e62, codeobj_67244cb95978041f2d894be101c44e62, module_urllib3$contrib$socks, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_67244cb95978041f2d894be101c44e62 = cache_frame_67244cb95978041f2d894be101c44e62;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_67244cb95978041f2d894be101c44e62 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_67244cb95978041f2d894be101c44e62 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_kwargs );
        tmp_called_instance_1 = par_kwargs;
        frame_67244cb95978041f2d894be101c44e62->m_frame.f_lineno = 64;
        tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain__socks_options_tuple, 0 ) );

        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__socks_options, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSConnection );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SOCKSConnection );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "SOCKSConnection" );
            exception_tb = NULL;

            exception_lineno = 65;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_args );
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg2_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___internal__$$$function_3_complex_call_helper_star_list_star_dict( dir_call_args );
        }
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67244cb95978041f2d894be101c44e62 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67244cb95978041f2d894be101c44e62 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_67244cb95978041f2d894be101c44e62, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_67244cb95978041f2d894be101c44e62->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_67244cb95978041f2d894be101c44e62, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_67244cb95978041f2d894be101c44e62,
        type_description_1,
        par_self,
        par_args,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_67244cb95978041f2d894be101c44e62 == cache_frame_67244cb95978041f2d894be101c44e62 )
    {
        Py_DECREF( frame_67244cb95978041f2d894be101c44e62 );
    }
    cache_frame_67244cb95978041f2d894be101c44e62 = NULL;

    assertFrameObject( frame_67244cb95978041f2d894be101c44e62 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

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
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks$$$function_1___init__ );
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


static PyObject *impl_urllib3$contrib$socks$$$function_2__new_conn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_error = NULL;
    PyObject *var_e = NULL;
    PyObject *var_conn = NULL;
    PyObject *var_extra_kw = NULL;
    struct Nuitka_FrameObject *frame_8f3969a05a4899961fc337b0c8b20545;
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
    static struct Nuitka_FrameObject *cache_frame_8f3969a05a4899961fc337b0c8b20545 = NULL;
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
    MAKE_OR_REUSE_FRAME( cache_frame_8f3969a05a4899961fc337b0c8b20545, codeobj_8f3969a05a4899961fc337b0c8b20545, module_urllib3$contrib$socks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8f3969a05a4899961fc337b0c8b20545 = cache_frame_8f3969a05a4899961fc337b0c8b20545;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8f3969a05a4899961fc337b0c8b20545 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8f3969a05a4899961fc337b0c8b20545 ) == 2 ); // Frame stack

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


            exception_lineno = 72;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 72;
            type_description_1 = "ooooo";
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


                exception_lineno = 73;
                type_description_1 = "ooooo";
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


            exception_lineno = 75;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_attribute_value_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_2 );

            exception_lineno = 75;
            type_description_1 = "ooooo";
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


                exception_lineno = 76;
                type_description_1 = "ooooo";
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
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_8;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_9;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_source_name_10;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_source_name_11;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_source_name_12;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_source_name_13;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_source_name_14;
        PyObject *tmp_dircall_arg4_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_socks );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socks );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "socks" );
            exception_tb = NULL;

            exception_lineno = 79;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_5 = tmp_mvar_value_1;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_create_connection );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_host );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );

            exception_lineno = 80;
            type_description_1 = "ooooo";
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

            exception_lineno = 80;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
        tmp_dircall_arg2_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__socks_options );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );

            exception_lineno = 81;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_name_1 = const_str_plain_socks_version;
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );

            exception_lineno = 81;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_dict_key_1 = const_str_plain_proxy_type;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_self );
        tmp_source_name_9 = par_self;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__socks_options );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            Py_DECREF( tmp_dircall_arg3_1 );

            exception_lineno = 82;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_name_2 = const_str_plain_proxy_host;
        tmp_dict_value_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            Py_DECREF( tmp_dircall_arg3_1 );

            exception_lineno = 82;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_dict_key_2 = const_str_plain_proxy_addr;
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__socks_options );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            Py_DECREF( tmp_dircall_arg3_1 );

            exception_lineno = 83;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_name_3 = const_str_plain_proxy_port;
        tmp_dict_value_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            Py_DECREF( tmp_dircall_arg3_1 );

            exception_lineno = 83;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_dict_key_3 = const_str_plain_proxy_port;
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_self );
        tmp_source_name_11 = par_self;
        tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__socks_options );
        if ( tmp_subscribed_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            Py_DECREF( tmp_dircall_arg3_1 );

            exception_lineno = 84;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_name_4 = const_str_plain_username;
        tmp_dict_value_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        Py_DECREF( tmp_subscribed_name_4 );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            Py_DECREF( tmp_dircall_arg3_1 );

            exception_lineno = 84;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_dict_key_4 = const_str_plain_proxy_username;
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_self );
        tmp_source_name_12 = par_self;
        tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__socks_options );
        if ( tmp_subscribed_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            Py_DECREF( tmp_dircall_arg3_1 );

            exception_lineno = 85;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_name_5 = const_str_plain_password;
        tmp_dict_value_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        Py_DECREF( tmp_subscribed_name_5 );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            Py_DECREF( tmp_dircall_arg3_1 );

            exception_lineno = 85;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_dict_key_5 = const_str_plain_proxy_password;
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_self );
        tmp_source_name_13 = par_self;
        tmp_subscribed_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__socks_options );
        if ( tmp_subscribed_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            Py_DECREF( tmp_dircall_arg3_1 );

            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_name_6 = const_str_plain_rdns;
        tmp_dict_value_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        Py_DECREF( tmp_subscribed_name_6 );
        if ( tmp_dict_value_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            Py_DECREF( tmp_dircall_arg3_1 );

            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_dict_key_6 = const_str_plain_proxy_rdns;
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_self );
        tmp_source_name_14 = par_self;
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_timeout );
        if ( tmp_dict_value_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            Py_DECREF( tmp_dircall_arg3_1 );

            exception_lineno = 87;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_dict_key_7 = const_str_plain_timeout;
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( var_extra_kw );
        tmp_dircall_arg4_1 = var_extra_kw;
        Py_INCREF( tmp_dircall_arg4_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assign_source_2 = impl___internal__$$$function_7_complex_call_helper_pos_keywords_star_dict( dir_call_args );
        }
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ooooo";
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
    PRESERVE_FRAME_EXCEPTION( frame_8f3969a05a4899961fc337b0c8b20545 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_8f3969a05a4899961fc337b0c8b20545, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_8f3969a05a4899961fc337b0c8b20545, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_2;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SocketTimeout );

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

            exception_lineno = 91;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_2;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_source_name_15;
            PyObject *tmp_source_name_16;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );

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

                exception_lineno = 92;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_3;
            CHECK_OBJECT( par_self );
            tmp_args_element_name_1 = par_self;
            tmp_left_name_1 = const_str_digest_03224f9e3167cae45c1e00020c2975eb;
            CHECK_OBJECT( par_self );
            tmp_source_name_15 = par_self;
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_host );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( par_self );
            tmp_source_name_16 = par_self;
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_timeout );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_right_name_1 );

                exception_lineno = 94;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
            tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 93;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_8f3969a05a4899961fc337b0c8b20545->m_frame.f_lineno = 92;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 92;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_17;
            PyObject *tmp_mvar_value_4;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_socks );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socks );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "socks" );
                exception_tb = NULL;

                exception_lineno = 96;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_17 = tmp_mvar_value_4;
            tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_ProxyError );
            if ( tmp_compexpr_right_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 96;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 96;
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
            {
                PyObject *tmp_assign_source_4;
                tmp_assign_source_4 = EXC_VALUE(PyThreadState_GET());
                assert( var_e == NULL );
                Py_INCREF( tmp_assign_source_4 );
                var_e = tmp_assign_source_4;
            }
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_source_name_18;
                PyObject *tmp_attribute_value_3;
                int tmp_truth_name_3;
                CHECK_OBJECT( var_e );
                tmp_source_name_18 = var_e;
                tmp_attribute_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_socket_err );
                if ( tmp_attribute_value_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 99;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_3 = CHECK_IF_TRUE( tmp_attribute_value_3 );
                if ( tmp_truth_name_3 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_attribute_value_3 );

                    exception_lineno = 99;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_5 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_attribute_value_3 );
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
                    PyObject *tmp_assign_source_5;
                    PyObject *tmp_source_name_19;
                    CHECK_OBJECT( var_e );
                    tmp_source_name_19 = var_e;
                    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_socket_err );
                    if ( tmp_assign_source_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 100;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_error == NULL );
                    var_error = tmp_assign_source_5;
                }
                {
                    nuitka_bool tmp_condition_result_6;
                    PyObject *tmp_isinstance_inst_1;
                    PyObject *tmp_isinstance_cls_1;
                    PyObject *tmp_mvar_value_5;
                    CHECK_OBJECT( var_error );
                    tmp_isinstance_inst_1 = var_error;
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SocketTimeout );

                    if (unlikely( tmp_mvar_value_5 == NULL ))
                    {
                        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketTimeout );
                    }

                    if ( tmp_mvar_value_5 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SocketTimeout" );
                        exception_tb = NULL;

                        exception_lineno = 101;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_isinstance_cls_1 = tmp_mvar_value_5;
                    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 101;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
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
                        PyObject *tmp_raise_type_2;
                        PyObject *tmp_called_name_2;
                        PyObject *tmp_mvar_value_6;
                        PyObject *tmp_args_element_name_3;
                        PyObject *tmp_args_element_name_4;
                        PyObject *tmp_left_name_2;
                        PyObject *tmp_right_name_2;
                        PyObject *tmp_tuple_element_4;
                        PyObject *tmp_source_name_20;
                        PyObject *tmp_source_name_21;
                        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );

                        if (unlikely( tmp_mvar_value_6 == NULL ))
                        {
                            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );
                        }

                        if ( tmp_mvar_value_6 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ConnectTimeoutError" );
                            exception_tb = NULL;

                            exception_lineno = 102;
                            type_description_1 = "ooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_name_2 = tmp_mvar_value_6;
                        CHECK_OBJECT( par_self );
                        tmp_args_element_name_3 = par_self;
                        tmp_left_name_2 = const_str_digest_03224f9e3167cae45c1e00020c2975eb;
                        CHECK_OBJECT( par_self );
                        tmp_source_name_20 = par_self;
                        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_host );
                        if ( tmp_tuple_element_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 105;
                            type_description_1 = "ooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_right_name_2 = PyTuple_New( 2 );
                        PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_4 );
                        CHECK_OBJECT( par_self );
                        tmp_source_name_21 = par_self;
                        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_timeout );
                        if ( tmp_tuple_element_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_right_name_2 );

                            exception_lineno = 105;
                            type_description_1 = "ooooo";
                            goto frame_exception_exit_1;
                        }
                        PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_4 );
                        tmp_args_element_name_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                        Py_DECREF( tmp_right_name_2 );
                        if ( tmp_args_element_name_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 104;
                            type_description_1 = "ooooo";
                            goto frame_exception_exit_1;
                        }
                        frame_8f3969a05a4899961fc337b0c8b20545->m_frame.f_lineno = 102;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                            tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                        }

                        Py_DECREF( tmp_args_element_name_4 );
                        if ( tmp_raise_type_2 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 102;
                            type_description_1 = "ooooo";
                            goto frame_exception_exit_1;
                        }
                        exception_type = tmp_raise_type_2;
                        exception_lineno = 102;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    goto branch_end_6;
                    branch_no_6:;
                    {
                        PyObject *tmp_raise_type_3;
                        PyObject *tmp_called_name_3;
                        PyObject *tmp_mvar_value_7;
                        PyObject *tmp_args_element_name_5;
                        PyObject *tmp_args_element_name_6;
                        PyObject *tmp_left_name_3;
                        PyObject *tmp_right_name_3;
                        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_NewConnectionError );

                        if (unlikely( tmp_mvar_value_7 == NULL ))
                        {
                            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NewConnectionError );
                        }

                        if ( tmp_mvar_value_7 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyString_FromFormat( "global name '%s' is not defined", "NewConnectionError" );
                            exception_tb = NULL;

                            exception_lineno = 108;
                            type_description_1 = "ooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_name_3 = tmp_mvar_value_7;
                        CHECK_OBJECT( par_self );
                        tmp_args_element_name_5 = par_self;
                        tmp_left_name_3 = const_str_digest_a93bc1dc732be398b86f8538baa37185;
                        CHECK_OBJECT( var_error );
                        tmp_right_name_3 = var_error;
                        tmp_args_element_name_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                        if ( tmp_args_element_name_6 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 110;
                            type_description_1 = "ooooo";
                            goto frame_exception_exit_1;
                        }
                        frame_8f3969a05a4899961fc337b0c8b20545->m_frame.f_lineno = 108;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                            tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                        }

                        Py_DECREF( tmp_args_element_name_6 );
                        if ( tmp_raise_type_3 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 108;
                            type_description_1 = "ooooo";
                            goto frame_exception_exit_1;
                        }
                        exception_type = tmp_raise_type_3;
                        exception_lineno = 108;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    branch_end_6:;
                }
                goto branch_end_5;
                branch_no_5:;
                {
                    PyObject *tmp_raise_type_4;
                    PyObject *tmp_called_name_4;
                    PyObject *tmp_mvar_value_8;
                    PyObject *tmp_args_element_name_7;
                    PyObject *tmp_args_element_name_8;
                    PyObject *tmp_left_name_4;
                    PyObject *tmp_right_name_4;
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_NewConnectionError );

                    if (unlikely( tmp_mvar_value_8 == NULL ))
                    {
                        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NewConnectionError );
                    }

                    if ( tmp_mvar_value_8 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NewConnectionError" );
                        exception_tb = NULL;

                        exception_lineno = 113;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_4 = tmp_mvar_value_8;
                    CHECK_OBJECT( par_self );
                    tmp_args_element_name_7 = par_self;
                    tmp_left_name_4 = const_str_digest_a93bc1dc732be398b86f8538baa37185;
                    CHECK_OBJECT( var_e );
                    tmp_right_name_4 = var_e;
                    tmp_args_element_name_8 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
                    if ( tmp_args_element_name_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 115;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_8f3969a05a4899961fc337b0c8b20545->m_frame.f_lineno = 113;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_8 );
                    if ( tmp_raise_type_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 113;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    exception_type = tmp_raise_type_4;
                    exception_lineno = 113;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                branch_end_5:;
            }
            goto branch_end_4;
            branch_no_4:;
            {
                nuitka_bool tmp_condition_result_7;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_mvar_value_9;
                tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SocketError );

                if (unlikely( tmp_mvar_value_9 == NULL ))
                {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketError );
                }

                if ( tmp_mvar_value_9 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "SocketError" );
                    exception_tb = NULL;

                    exception_lineno = 118;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_compexpr_right_3 = tmp_mvar_value_9;
                tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 118;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
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
                    PyObject *tmp_assign_source_6;
                    tmp_assign_source_6 = EXC_VALUE(PyThreadState_GET());
                    assert( var_e == NULL );
                    Py_INCREF( tmp_assign_source_6 );
                    var_e = tmp_assign_source_6;
                }
                {
                    PyObject *tmp_raise_type_5;
                    PyObject *tmp_called_name_5;
                    PyObject *tmp_mvar_value_10;
                    PyObject *tmp_args_element_name_9;
                    PyObject *tmp_args_element_name_10;
                    PyObject *tmp_left_name_5;
                    PyObject *tmp_right_name_5;
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_NewConnectionError );

                    if (unlikely( tmp_mvar_value_10 == NULL ))
                    {
                        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NewConnectionError );
                    }

                    if ( tmp_mvar_value_10 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NewConnectionError" );
                        exception_tb = NULL;

                        exception_lineno = 119;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_5 = tmp_mvar_value_10;
                    CHECK_OBJECT( par_self );
                    tmp_args_element_name_9 = par_self;
                    tmp_left_name_5 = const_str_digest_a93bc1dc732be398b86f8538baa37185;
                    CHECK_OBJECT( var_e );
                    tmp_right_name_5 = var_e;
                    tmp_args_element_name_10 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
                    if ( tmp_args_element_name_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 120;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_8f3969a05a4899961fc337b0c8b20545->m_frame.f_lineno = 119;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
                        tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_10 );
                    if ( tmp_raise_type_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 119;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    exception_type = tmp_raise_type_5;
                    exception_lineno = 119;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                goto branch_end_7;
                branch_no_7:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 78;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_8f3969a05a4899961fc337b0c8b20545->m_frame) frame_8f3969a05a4899961fc337b0c8b20545->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
                branch_end_7:;
            }
            branch_end_4:;
        }
        branch_end_3:;
    }
    // End of try:
    try_end_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_8f3969a05a4899961fc337b0c8b20545 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_8f3969a05a4899961fc337b0c8b20545 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8f3969a05a4899961fc337b0c8b20545, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8f3969a05a4899961fc337b0c8b20545->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8f3969a05a4899961fc337b0c8b20545, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8f3969a05a4899961fc337b0c8b20545,
        type_description_1,
        par_self,
        var_error,
        var_e,
        var_conn,
        var_extra_kw
    );


    // Release cached frame.
    if ( frame_8f3969a05a4899961fc337b0c8b20545 == cache_frame_8f3969a05a4899961fc337b0c8b20545 )
    {
        Py_DECREF( frame_8f3969a05a4899961fc337b0c8b20545 );
    }
    cache_frame_8f3969a05a4899961fc337b0c8b20545 = NULL;

    assertFrameObject( frame_8f3969a05a4899961fc337b0c8b20545 );

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
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks$$$function_2__new_conn );
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

    Py_XDECREF( var_error );
    var_error = NULL;

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
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks$$$function_2__new_conn );
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


static PyObject *impl_urllib3$contrib$socks$$$function_3___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_proxy_url = python_pars[ 1 ];
    PyObject *par_username = python_pars[ 2 ];
    PyObject *par_password = python_pars[ 3 ];
    PyObject *par_num_pools = python_pars[ 4 ];
    PyObject *par_headers = python_pars[ 5 ];
    PyObject *par_connection_pool_kw = python_pars[ 6 ];
    PyObject *var_socks_options = NULL;
    PyObject *var_rdns = NULL;
    PyObject *var_split = NULL;
    PyObject *var_parsed = NULL;
    PyObject *var_socks_version = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_23c371fa484d489dc79b19eda560489f;
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
    static struct Nuitka_FrameObject *cache_frame_23c371fa484d489dc79b19eda560489f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_23c371fa484d489dc79b19eda560489f, codeobj_23c371fa484d489dc79b19eda560489f, module_urllib3$contrib$socks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_23c371fa484d489dc79b19eda560489f = cache_frame_23c371fa484d489dc79b19eda560489f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_23c371fa484d489dc79b19eda560489f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_23c371fa484d489dc79b19eda560489f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_parse_url );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_parse_url );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "parse_url" );
            exception_tb = NULL;

            exception_lineno = 153;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_proxy_url );
        tmp_args_element_name_1 = par_proxy_url;
        frame_23c371fa484d489dc79b19eda560489f->m_frame.f_lineno = 153;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_parsed == NULL );
        var_parsed = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_username );
        tmp_compexpr_left_1 = par_username;
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_password );
        tmp_compexpr_left_2 = par_password;
        tmp_compexpr_right_2 = Py_None;
        tmp_and_left_value_2 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_parsed );
        tmp_source_name_1 = var_parsed;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_auth );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = Py_None;
        tmp_and_right_value_2 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_3 );
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( var_parsed );
            tmp_source_name_2 = var_parsed;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_auth );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 156;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_23c371fa484d489dc79b19eda560489f->m_frame.f_lineno = 156;
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_58_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 156;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_split == NULL );
            var_split = tmp_assign_source_2;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_len_arg_1;
            CHECK_OBJECT( var_split );
            tmp_len_arg_1 = var_split;
            tmp_compexpr_left_4 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_compexpr_left_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 157;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_4 = const_int_pos_2;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_left_4 );
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
            // Tried code:
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_iter_arg_1;
                CHECK_OBJECT( var_split );
                tmp_iter_arg_1 = var_split;
                tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 158;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_2;
                }
                assert( tmp_tuple_unpack_1__source_iter == NULL );
                tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
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


                    type_description_1 = "oooooooooooo";
                    exception_lineno = 158;
                    goto try_except_handler_3;
                }
                assert( tmp_tuple_unpack_1__element_1 == NULL );
                tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
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


                    type_description_1 = "oooooooooooo";
                    exception_lineno = 158;
                    goto try_except_handler_3;
                }
                assert( tmp_tuple_unpack_1__element_2 == NULL );
                tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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

                            type_description_1 = "oooooooooooo";
                            exception_lineno = 158;
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

                    type_description_1 = "oooooooooooo";
                    exception_lineno = 158;
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
                PyObject *tmp_assign_source_6;
                CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
                tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
                {
                    PyObject *old = par_username;
                    assert( old != NULL );
                    par_username = tmp_assign_source_6;
                    Py_INCREF( par_username );
                    Py_DECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_1__element_1 );
            tmp_tuple_unpack_1__element_1 = NULL;

            {
                PyObject *tmp_assign_source_7;
                CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
                tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
                {
                    PyObject *old = par_password;
                    assert( old != NULL );
                    par_password = tmp_assign_source_7;
                    Py_INCREF( par_password );
                    Py_DECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_1__element_2 );
            tmp_tuple_unpack_1__element_2 = NULL;

            branch_no_2:;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( var_parsed );
        tmp_source_name_3 = var_parsed;
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_scheme );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = const_str_plain_socks5;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
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
            PyObject *tmp_assign_source_8;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_socks );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socks );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "socks" );
                exception_tb = NULL;

                exception_lineno = 160;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_2;
            tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_PROXY_TYPE_SOCKS5 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 160;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_socks_version == NULL );
            var_socks_version = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = Py_False;
            assert( var_rdns == NULL );
            Py_INCREF( tmp_assign_source_9 );
            var_rdns = tmp_assign_source_9;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( var_parsed );
            tmp_source_name_5 = var_parsed;
            tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_scheme );
            if ( tmp_compexpr_left_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 162;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_6 = const_str_plain_socks5h;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            Py_DECREF( tmp_compexpr_left_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 162;
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
                PyObject *tmp_assign_source_10;
                PyObject *tmp_source_name_6;
                PyObject *tmp_mvar_value_3;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_socks );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socks );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "socks" );
                    exception_tb = NULL;

                    exception_lineno = 163;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_6 = tmp_mvar_value_3;
                tmp_assign_source_10 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_PROXY_TYPE_SOCKS5 );
                if ( tmp_assign_source_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 163;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_socks_version == NULL );
                var_socks_version = tmp_assign_source_10;
            }
            {
                PyObject *tmp_assign_source_11;
                tmp_assign_source_11 = Py_True;
                assert( var_rdns == NULL );
                Py_INCREF( tmp_assign_source_11 );
                var_rdns = tmp_assign_source_11;
            }
            goto branch_end_4;
            branch_no_4:;
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_7;
                PyObject *tmp_compexpr_right_7;
                PyObject *tmp_source_name_7;
                CHECK_OBJECT( var_parsed );
                tmp_source_name_7 = var_parsed;
                tmp_compexpr_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_scheme );
                if ( tmp_compexpr_left_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 165;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_7 = const_str_plain_socks4;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
                Py_DECREF( tmp_compexpr_left_7 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 165;
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
                    PyObject *tmp_assign_source_12;
                    PyObject *tmp_source_name_8;
                    PyObject *tmp_mvar_value_4;
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_socks );

                    if (unlikely( tmp_mvar_value_4 == NULL ))
                    {
                        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socks );
                    }

                    if ( tmp_mvar_value_4 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "socks" );
                        exception_tb = NULL;

                        exception_lineno = 166;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_8 = tmp_mvar_value_4;
                    tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_PROXY_TYPE_SOCKS4 );
                    if ( tmp_assign_source_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 166;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_socks_version == NULL );
                    var_socks_version = tmp_assign_source_12;
                }
                {
                    PyObject *tmp_assign_source_13;
                    tmp_assign_source_13 = Py_False;
                    assert( var_rdns == NULL );
                    Py_INCREF( tmp_assign_source_13 );
                    var_rdns = tmp_assign_source_13;
                }
                goto branch_end_5;
                branch_no_5:;
                {
                    nuitka_bool tmp_condition_result_6;
                    PyObject *tmp_compexpr_left_8;
                    PyObject *tmp_compexpr_right_8;
                    PyObject *tmp_source_name_9;
                    CHECK_OBJECT( var_parsed );
                    tmp_source_name_9 = var_parsed;
                    tmp_compexpr_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_scheme );
                    if ( tmp_compexpr_left_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 168;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_8 = const_str_plain_socks4a;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
                    Py_DECREF( tmp_compexpr_left_8 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 168;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
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
                        PyObject *tmp_assign_source_14;
                        PyObject *tmp_source_name_10;
                        PyObject *tmp_mvar_value_5;
                        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_socks );

                        if (unlikely( tmp_mvar_value_5 == NULL ))
                        {
                            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socks );
                        }

                        if ( tmp_mvar_value_5 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyString_FromFormat( "global name '%s' is not defined", "socks" );
                            exception_tb = NULL;

                            exception_lineno = 169;
                            type_description_1 = "oooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_source_name_10 = tmp_mvar_value_5;
                        tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_PROXY_TYPE_SOCKS4 );
                        if ( tmp_assign_source_14 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 169;
                            type_description_1 = "oooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        assert( var_socks_version == NULL );
                        var_socks_version = tmp_assign_source_14;
                    }
                    {
                        PyObject *tmp_assign_source_15;
                        tmp_assign_source_15 = Py_True;
                        assert( var_rdns == NULL );
                        Py_INCREF( tmp_assign_source_15 );
                        var_rdns = tmp_assign_source_15;
                    }
                    goto branch_end_6;
                    branch_no_6:;
                    {
                        PyObject *tmp_raise_type_1;
                        PyObject *tmp_make_exception_arg_1;
                        PyObject *tmp_left_name_1;
                        PyObject *tmp_right_name_1;
                        tmp_left_name_1 = const_str_digest_d2feb5bdfccf41aa10971180163e4a5d;
                        CHECK_OBJECT( par_proxy_url );
                        tmp_right_name_1 = par_proxy_url;
                        tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                        if ( tmp_make_exception_arg_1 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 173;
                            type_description_1 = "oooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        frame_23c371fa484d489dc79b19eda560489f->m_frame.f_lineno = 172;
                        {
                            PyObject *call_args[] = { tmp_make_exception_arg_1 };
                            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                        }

                        Py_DECREF( tmp_make_exception_arg_1 );
                        assert( !(tmp_raise_type_1 == NULL) );
                        exception_type = tmp_raise_type_1;
                        exception_lineno = 172;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    branch_end_6:;
                }
                branch_end_5:;
            }
            branch_end_4:;
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_proxy_url );
        tmp_assattr_name_1 = par_proxy_url;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_proxy_url, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_11;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_source_name_12;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        if ( var_socks_version == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "socks_version" );
            exception_tb = NULL;

            exception_lineno = 179;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_1 = var_socks_version;
        tmp_dict_key_1 = const_str_plain_socks_version;
        tmp_assign_source_16 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem( tmp_assign_source_16, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( var_parsed );
        tmp_source_name_11 = var_parsed;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_host );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_16 );

            exception_lineno = 180;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = const_str_plain_proxy_host;
        tmp_res = PyDict_SetItem( tmp_assign_source_16, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( var_parsed );
        tmp_source_name_12 = var_parsed;
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_port );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_16 );

            exception_lineno = 181;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_3 = const_str_plain_proxy_port;
        tmp_res = PyDict_SetItem( tmp_assign_source_16, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        if ( par_username == NULL )
        {
            Py_DECREF( tmp_assign_source_16 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "username" );
            exception_tb = NULL;

            exception_lineno = 182;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_4 = par_username;
        tmp_dict_key_4 = const_str_plain_username;
        tmp_res = PyDict_SetItem( tmp_assign_source_16, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        if ( par_password == NULL )
        {
            Py_DECREF( tmp_assign_source_16 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "password" );
            exception_tb = NULL;

            exception_lineno = 183;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_5 = par_password;
        tmp_dict_key_5 = const_str_plain_password;
        tmp_res = PyDict_SetItem( tmp_assign_source_16, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        if ( var_rdns == NULL )
        {
            Py_DECREF( tmp_assign_source_16 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "rdns" );
            exception_tb = NULL;

            exception_lineno = 184;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_6 = var_rdns;
        tmp_dict_key_6 = const_str_plain_rdns;
        tmp_res = PyDict_SetItem( tmp_assign_source_16, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        assert( var_socks_options == NULL );
        var_socks_options = tmp_assign_source_16;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( var_socks_options );
        tmp_ass_subvalue_1 = var_socks_options;
        CHECK_OBJECT( par_connection_pool_kw );
        tmp_ass_subscribed_1 = par_connection_pool_kw;
        tmp_ass_subscript_1 = const_str_plain__socks_options;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_13;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_object_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSProxyManager );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SOCKSProxyManager );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "SOCKSProxyManager" );
            exception_tb = NULL;

            exception_lineno = 188;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_6;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_source_name_13 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_source_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain___init__ );
        Py_DECREF( tmp_source_name_13 );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_num_pools );
        tmp_tuple_element_1 = par_num_pools;
        tmp_dircall_arg2_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_headers );
        tmp_tuple_element_1 = par_headers;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_connection_pool_kw );
        tmp_dircall_arg3_1 = par_connection_pool_kw;
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___internal__$$$function_4_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_source_name_14;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_assattr_target_2;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSProxyManager );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SOCKSProxyManager );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "SOCKSProxyManager" );
            exception_tb = NULL;

            exception_lineno = 192;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_14 = tmp_mvar_value_7;
        tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_pool_classes_by_scheme );
        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_pool_classes_by_scheme, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_23c371fa484d489dc79b19eda560489f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_23c371fa484d489dc79b19eda560489f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_23c371fa484d489dc79b19eda560489f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_23c371fa484d489dc79b19eda560489f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_23c371fa484d489dc79b19eda560489f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_23c371fa484d489dc79b19eda560489f,
        type_description_1,
        par_self,
        par_proxy_url,
        par_username,
        par_password,
        par_num_pools,
        par_headers,
        par_connection_pool_kw,
        var_socks_options,
        var_rdns,
        var_split,
        var_parsed,
        var_socks_version
    );


    // Release cached frame.
    if ( frame_23c371fa484d489dc79b19eda560489f == cache_frame_23c371fa484d489dc79b19eda560489f )
    {
        Py_DECREF( frame_23c371fa484d489dc79b19eda560489f );
    }
    cache_frame_23c371fa484d489dc79b19eda560489f = NULL;

    assertFrameObject( frame_23c371fa484d489dc79b19eda560489f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks$$$function_3___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_username );
    par_username = NULL;

    CHECK_OBJECT( (PyObject *)var_socks_options );
    Py_DECREF( var_socks_options );
    var_socks_options = NULL;

    CHECK_OBJECT( (PyObject *)par_num_pools );
    Py_DECREF( par_num_pools );
    par_num_pools = NULL;

    CHECK_OBJECT( (PyObject *)par_connection_pool_kw );
    Py_DECREF( par_connection_pool_kw );
    par_connection_pool_kw = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_proxy_url );
    Py_DECREF( par_proxy_url );
    par_proxy_url = NULL;

    Py_XDECREF( var_rdns );
    var_rdns = NULL;

    CHECK_OBJECT( (PyObject *)par_headers );
    Py_DECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( var_split );
    var_split = NULL;

    Py_XDECREF( par_password );
    par_password = NULL;

    CHECK_OBJECT( (PyObject *)var_parsed );
    Py_DECREF( var_parsed );
    var_parsed = NULL;

    Py_XDECREF( var_socks_version );
    var_socks_version = NULL;

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

    Py_XDECREF( par_username );
    par_username = NULL;

    Py_XDECREF( var_socks_options );
    var_socks_options = NULL;

    CHECK_OBJECT( (PyObject *)par_num_pools );
    Py_DECREF( par_num_pools );
    par_num_pools = NULL;

    CHECK_OBJECT( (PyObject *)par_connection_pool_kw );
    Py_DECREF( par_connection_pool_kw );
    par_connection_pool_kw = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_proxy_url );
    Py_DECREF( par_proxy_url );
    par_proxy_url = NULL;

    Py_XDECREF( var_rdns );
    var_rdns = NULL;

    CHECK_OBJECT( (PyObject *)par_headers );
    Py_DECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( var_split );
    var_split = NULL;

    Py_XDECREF( par_password );
    par_password = NULL;

    Py_XDECREF( var_parsed );
    var_parsed = NULL;

    Py_XDECREF( var_socks_version );
    var_socks_version = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks$$$function_3___init__ );
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



static PyObject *MAKE_FUNCTION_urllib3$contrib$socks$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$socks$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_67244cb95978041f2d894be101c44e62,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$socks,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$socks$$$function_2__new_conn(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$socks$$$function_2__new_conn,
        const_str_plain__new_conn,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8f3969a05a4899961fc337b0c8b20545,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$socks,
        const_str_digest_f72fad5ee1f5fa45bf4f9a22d2727edb,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$socks$$$function_3___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$socks$$$function_3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_23c371fa484d489dc79b19eda560489f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$socks,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$contrib$socks =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.contrib.socks",
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

MOD_INIT_DECL( urllib3$contrib$socks )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$contrib$socks );
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
    puts("urllib3.contrib.socks: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.contrib.socks: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.contrib.socks: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$contrib$socks" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$contrib$socks = Py_InitModule4(
        "urllib3.contrib.socks",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$contrib$socks = PyModule_Create( &mdef_urllib3$contrib$socks );
#endif

    moduledict_urllib3$contrib$socks = MODULE_DICT( module_urllib3$contrib$socks );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$contrib$socks,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$contrib$socks,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$contrib$socks,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$contrib$socks );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_d0cac7c67d1189a986b25b7cf105347d, module_urllib3$contrib$socks );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__bases = NULL;
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
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__class = NULL;
    PyObject *tmp_class_creation_5__class_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
    PyObject *tmp_select_metaclass_2__base = NULL;
    PyObject *tmp_select_metaclass_3__base = NULL;
    PyObject *tmp_select_metaclass_4__base = NULL;
    PyObject *tmp_select_metaclass_5__base = NULL;
    struct Nuitka_FrameObject *frame_fbd0aab2a3c167b4be6c0f4c172352ec;
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
    PyObject *locals_urllib3$contrib$socks_59 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *locals_urllib3$contrib$socks_129 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *locals_urllib3$contrib$socks_133 = NULL;
    struct Nuitka_FrameObject *frame_ad854a96092db35d74e034f060be18ab_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_ad854a96092db35d74e034f060be18ab_2 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *locals_urllib3$contrib$socks_137 = NULL;
    struct Nuitka_FrameObject *frame_75ca5ec2b97ac9d485a25d2f8d91beeb_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_75ca5ec2b97ac9d485a25d2f8d91beeb_3 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *locals_urllib3$contrib$socks_141 = NULL;
    struct Nuitka_FrameObject *frame_db5a67bba8f207053457f6a9ac81565d_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_db5a67bba8f207053457f6a9ac81565d_4 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_b03980105d8ed0a56e9e14d3250ee347;
        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_3323bc4cc47b9429964d3b0b5a0ed4eb;
        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_fbd0aab2a3c167b4be6c0f4c172352ec = MAKE_MODULE_FRAME( codeobj_fbd0aab2a3c167b4be6c0f4c172352ec, module_urllib3$contrib$socks );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_fbd0aab2a3c167b4be6c0f4c172352ec );
    assert( Py_REFCNT( frame_fbd0aab2a3c167b4be6c0f4c172352ec ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        frame_fbd0aab2a3c167b4be6c0f4c172352ec->m_frame.f_lineno = 24;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert( !(tmp_import_name_from_1 == NULL) );
        tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_3 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_socks;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$contrib$socks;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_fbd0aab2a3c167b4be6c0f4c172352ec->m_frame.f_lineno = 27;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_socks, tmp_assign_source_4 );
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
    PRESERVE_FRAME_EXCEPTION( frame_fbd0aab2a3c167b4be6c0f4c172352ec );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_fbd0aab2a3c167b4be6c0f4c172352ec, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_fbd0aab2a3c167b4be6c0f4c172352ec, exception_keeper_lineno_1 );
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


            exception_lineno = 28;

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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_name_name_2;
            PyObject *tmp_globals_name_2;
            PyObject *tmp_locals_name_2;
            PyObject *tmp_fromlist_name_2;
            PyObject *tmp_level_name_2;
            tmp_name_name_2 = const_str_plain_warnings;
            tmp_globals_name_2 = (PyObject *)moduledict_urllib3$contrib$socks;
            tmp_locals_name_2 = Py_None;
            tmp_fromlist_name_2 = Py_None;
            tmp_level_name_2 = const_int_0;
            frame_fbd0aab2a3c167b4be6c0f4c172352ec->m_frame.f_lineno = 29;
            tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 29;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_5 );
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_import_name_from_2;
            PyObject *tmp_name_name_3;
            PyObject *tmp_globals_name_3;
            PyObject *tmp_locals_name_3;
            PyObject *tmp_fromlist_name_3;
            PyObject *tmp_level_name_3;
            tmp_name_name_3 = const_str_plain_exceptions;
            tmp_globals_name_3 = (PyObject *)moduledict_urllib3$contrib$socks;
            tmp_locals_name_3 = Py_None;
            tmp_fromlist_name_3 = const_tuple_str_plain_DependencyWarning_tuple;
            tmp_level_name_3 = const_int_pos_2;
            frame_fbd0aab2a3c167b4be6c0f4c172352ec->m_frame.f_lineno = 30;
            tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
            if ( tmp_import_name_from_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 30;

                goto frame_exception_exit_1;
            }
            tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_DependencyWarning );
            Py_DECREF( tmp_import_name_from_2 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 30;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_DependencyWarning, tmp_assign_source_6 );
        }
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_warnings );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "warnings" );
                exception_tb = NULL;

                exception_lineno = 32;

                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 32;

                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = const_str_digest_f78fd7e71ec8b1168658a1182c635393;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_DependencyWarning );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DependencyWarning );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "DependencyWarning" );
                exception_tb = NULL;

                exception_lineno = 37;

                goto frame_exception_exit_1;
            }

            tmp_args_element_name_2 = tmp_mvar_value_2;
            frame_fbd0aab2a3c167b4be6c0f4c172352ec->m_frame.f_lineno = 32;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 32;

                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 39;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_fbd0aab2a3c167b4be6c0f4c172352ec->m_frame) frame_fbd0aab2a3c167b4be6c0f4c172352ec->m_frame.f_lineno = exception_tb->tb_lineno;

        goto frame_exception_exit_1;
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 26;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_fbd0aab2a3c167b4be6c0f4c172352ec->m_frame) frame_fbd0aab2a3c167b4be6c0f4c172352ec->m_frame.f_lineno = exception_tb->tb_lineno;

        goto frame_exception_exit_1;
        branch_end_1:;
    }
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_socket;
        tmp_globals_name_4 = (PyObject *)moduledict_urllib3$contrib$socks;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_error_str_plain_timeout_tuple;
        tmp_level_name_4 = const_int_0;
        frame_fbd0aab2a3c167b4be6c0f4c172352ec->m_frame.f_lineno = 41;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_error );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SocketError, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_4 = tmp_import_from_1__module;
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_timeout );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SocketTimeout, tmp_assign_source_9 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_connection;
        tmp_globals_name_5 = (PyObject *)moduledict_urllib3$contrib$socks;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_HTTPConnection_str_plain_HTTPSConnection_tuple;
        tmp_level_name_5 = const_int_pos_2;
        frame_fbd0aab2a3c167b4be6c0f4c172352ec->m_frame.f_lineno = 43;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_HTTPConnection );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_HTTPConnection, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_HTTPSConnection );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_HTTPSConnection, tmp_assign_source_12 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_connectionpool;
        tmp_globals_name_6 = (PyObject *)moduledict_urllib3$contrib$socks;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_HTTPConnectionPool_str_plain_HTTPSConnectionPool_tuple;
        tmp_level_name_6 = const_int_pos_2;
        frame_fbd0aab2a3c167b4be6c0f4c172352ec->m_frame.f_lineno = 46;
        tmp_assign_source_13 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_7 = tmp_import_from_3__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_HTTPConnectionPool );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_8 = tmp_import_from_3__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_HTTPSConnectionPool );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_HTTPSConnectionPool, tmp_assign_source_15 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_exceptions;
        tmp_globals_name_7 = (PyObject *)moduledict_urllib3$contrib$socks;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_ConnectTimeoutError_str_plain_NewConnectionError_tuple;
        tmp_level_name_7 = const_int_pos_2;
        frame_fbd0aab2a3c167b4be6c0f4c172352ec->m_frame.f_lineno = 49;
        tmp_assign_source_16 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_4__module == NULL );
        tmp_import_from_4__module = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_9 = tmp_import_from_4__module;
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_ConnectTimeoutError );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_10 = tmp_import_from_4__module;
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_NewConnectionError );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_NewConnectionError, tmp_assign_source_18 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain_poolmanager;
        tmp_globals_name_8 = (PyObject *)moduledict_urllib3$contrib$socks;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_PoolManager_tuple;
        tmp_level_name_8 = const_int_pos_2;
        frame_fbd0aab2a3c167b4be6c0f4c172352ec->m_frame.f_lineno = 50;
        tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_import_name_from_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_PoolManager );
        Py_DECREF( tmp_import_name_from_11 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_PoolManager, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_digest_a8c5d5819c4db6abb50fe4e24bb09b9d;
        tmp_globals_name_9 = (PyObject *)moduledict_urllib3$contrib$socks;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain_parse_url_tuple;
        tmp_level_name_9 = const_int_pos_2;
        frame_fbd0aab2a3c167b4be6c0f4c172352ec->m_frame.f_lineno = 51;
        tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
        if ( tmp_import_name_from_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_parse_url );
        Py_DECREF( tmp_import_name_from_12 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_parse_url, tmp_assign_source_20 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_plain_ssl;
        tmp_globals_name_10 = (PyObject *)moduledict_urllib3$contrib$socks;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = Py_None;
        tmp_level_name_10 = const_int_0;
        frame_fbd0aab2a3c167b4be6c0f4c172352ec->m_frame.f_lineno = 54;
        tmp_assign_source_21 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_ssl, tmp_assign_source_21 );
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_fbd0aab2a3c167b4be6c0f4c172352ec );
    if ( exception_keeper_tb_6 == NULL )
    {
        exception_keeper_tb_6 = MAKE_TRACEBACK( frame_fbd0aab2a3c167b4be6c0f4c172352ec, exception_keeper_lineno_6 );
    }
    else if ( exception_keeper_lineno_6 != 0 )
    {
        exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, frame_fbd0aab2a3c167b4be6c0f4c172352ec, exception_keeper_lineno_6 );
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


            exception_lineno = 55;

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
            PyObject *tmp_assign_source_22;
            tmp_assign_source_22 = Py_None;
            UPDATE_STRING_DICT0( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_ssl, tmp_assign_source_22 );
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 53;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_fbd0aab2a3c167b4be6c0f4c172352ec->m_frame) frame_fbd0aab2a3c167b4be6c0f4c172352ec->m_frame.f_lineno = exception_tb->tb_lineno;

        goto frame_exception_exit_1;
        branch_end_2:;
    }
    goto try_end_6;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_6:;
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_HTTPConnection );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPConnection );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPConnection" );
            exception_tb = NULL;

            exception_lineno = 59;

            goto try_except_handler_7;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        tmp_assign_source_23 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_23, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_urllib3$contrib$socks_59 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_d0cac7c67d1189a986b25b7cf105347d;
        tmp_res = PyDict_SetItem( locals_urllib3$contrib$socks_59, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_75fb4308a53d1e344eda8ae00b794973;
        tmp_res = PyDict_SetItem( locals_urllib3$contrib$socks_59, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$socks$$$function_1___init__(  );



        tmp_res = PyDict_SetItem( locals_urllib3$contrib$socks_59, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$socks$$$function_2__new_conn(  );



        tmp_res = PyDict_SetItem( locals_urllib3$contrib$socks_59, const_str_plain__new_conn, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_24 = locals_urllib3$contrib$socks_59;
        Py_INCREF( tmp_assign_source_24 );
        goto try_return_handler_8;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF( locals_urllib3$contrib$socks_59 );
        locals_urllib3$contrib$socks_59 = NULL;
        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
        return MOD_RETURN_VALUE( NULL );
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        nuitka_bool tmp_condition_result_3;
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


            exception_lineno = 59;

            goto try_except_handler_7;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
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
        tmp_assign_source_25 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;

            goto try_except_handler_7;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_subscribed_name_1 = tmp_class_creation_1__bases;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_26 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_assign_source_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 59;

                goto try_except_handler_7;
            }
            assert( tmp_select_metaclass_1__base == NULL );
            tmp_select_metaclass_1__base = tmp_assign_source_26;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( tmp_select_metaclass_1__base );
            tmp_source_name_2 = tmp_select_metaclass_1__base;
            tmp_assign_source_25 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 59;

                goto try_except_handler_10;
            }
            goto try_return_handler_9;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
        return MOD_RETURN_VALUE( NULL );
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

        {
            PyObject *tmp_type_arg_1;
            Py_DECREF( exception_keeper_type_7 );
            Py_XDECREF( exception_keeper_value_7 );
            Py_XDECREF( exception_keeper_tb_7 );
            CHECK_OBJECT( tmp_select_metaclass_1__base );
            tmp_type_arg_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_25 = BUILTIN_TYPE1( tmp_type_arg_1 );
            assert( !(tmp_assign_source_25 == NULL) );
            goto try_return_handler_9;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
        Py_DECREF( tmp_select_metaclass_1__base );
        tmp_select_metaclass_1__base = NULL;

        goto outline_result_2;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
        Py_DECREF( tmp_select_metaclass_1__base );
        tmp_select_metaclass_1__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
        return MOD_RETURN_VALUE( NULL );
        outline_result_2:;
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_2 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_3 = const_str_plain_SOCKSConnection;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_args_element_name_4 = tmp_class_creation_1__bases;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_5 = tmp_class_creation_1__class_dict;
        frame_fbd0aab2a3c167b4be6c0f4c172352ec->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;

            goto try_except_handler_7;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_27;
    }
    goto try_end_7;
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_28 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSConnection, tmp_assign_source_28 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSConnection );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SOCKSConnection );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "SOCKSConnection" );
            exception_tb = NULL;

            exception_lineno = 129;

            goto try_except_handler_11;
        }

        tmp_tuple_element_2 = tmp_mvar_value_4;
        tmp_assign_source_29 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_assign_source_29, 0, tmp_tuple_element_2 );
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_HTTPSConnection );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPSConnection );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_assign_source_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPSConnection" );
            exception_tb = NULL;

            exception_lineno = 129;

            goto try_except_handler_11;
        }

        tmp_tuple_element_2 = tmp_mvar_value_5;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_assign_source_29, 1, tmp_tuple_element_2 );
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        {
            PyObject *tmp_set_locals_2;
            tmp_set_locals_2 = PyDict_New();
            locals_urllib3$contrib$socks_129 = tmp_set_locals_2;
        }
        tmp_dictset_value = const_str_digest_d0cac7c67d1189a986b25b7cf105347d;
        tmp_res = PyDict_SetItem( locals_urllib3$contrib$socks_129, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_30 = locals_urllib3$contrib$socks_129;
        Py_INCREF( tmp_assign_source_30 );
        goto try_return_handler_12;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF( locals_urllib3$contrib$socks_129 );
        locals_urllib3$contrib$socks_129 = NULL;
        goto outline_result_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
        return MOD_RETURN_VALUE( NULL );
        outline_result_3:;
        assert( tmp_class_creation_2__class_dict == NULL );
        tmp_class_creation_2__class_dict = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
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


            exception_lineno = 129;

            goto try_except_handler_11;
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
        tmp_assign_source_31 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;

            goto try_except_handler_11;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_subscribed_name_2 = tmp_class_creation_2__bases;
            tmp_subscript_name_2 = const_int_0;
            tmp_assign_source_32 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
            if ( tmp_assign_source_32 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 129;

                goto try_except_handler_11;
            }
            assert( tmp_select_metaclass_2__base == NULL );
            tmp_select_metaclass_2__base = tmp_assign_source_32;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( tmp_select_metaclass_2__base );
            tmp_source_name_3 = tmp_select_metaclass_2__base;
            tmp_assign_source_31 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 129;

                goto try_except_handler_14;
            }
            goto try_return_handler_13;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
        return MOD_RETURN_VALUE( NULL );
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

        {
            PyObject *tmp_type_arg_2;
            Py_DECREF( exception_keeper_type_9 );
            Py_XDECREF( exception_keeper_value_9 );
            Py_XDECREF( exception_keeper_tb_9 );
            CHECK_OBJECT( tmp_select_metaclass_2__base );
            tmp_type_arg_2 = tmp_select_metaclass_2__base;
            tmp_assign_source_31 = BUILTIN_TYPE1( tmp_type_arg_2 );
            assert( !(tmp_assign_source_31 == NULL) );
            goto try_return_handler_13;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
        Py_DECREF( tmp_select_metaclass_2__base );
        tmp_select_metaclass_2__base = NULL;

        goto outline_result_4;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
        Py_DECREF( tmp_select_metaclass_2__base );
        tmp_select_metaclass_2__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
        return MOD_RETURN_VALUE( NULL );
        outline_result_4:;
        condexpr_end_2:;
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_called_name_3 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_6 = const_str_plain_SOCKSHTTPSConnection;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_args_element_name_7 = tmp_class_creation_2__bases;
        CHECK_OBJECT( tmp_class_creation_2__class_dict );
        tmp_args_element_name_8 = tmp_class_creation_2__class_dict;
        frame_fbd0aab2a3c167b4be6c0f4c172352ec->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;

            goto try_except_handler_11;
        }
        assert( tmp_class_creation_2__class == NULL );
        tmp_class_creation_2__class = tmp_assign_source_33;
    }
    goto try_end_8;
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

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    {
        PyObject *tmp_assign_source_34;
        CHECK_OBJECT( tmp_class_creation_2__class );
        tmp_assign_source_34 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSHTTPSConnection, tmp_assign_source_34 );
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
        PyObject *tmp_assign_source_35;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPConnectionPool" );
            exception_tb = NULL;

            exception_lineno = 133;

            goto try_except_handler_15;
        }

        tmp_tuple_element_3 = tmp_mvar_value_6;
        tmp_assign_source_35 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_assign_source_35, 0, tmp_tuple_element_3 );
        assert( tmp_class_creation_3__bases == NULL );
        tmp_class_creation_3__bases = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        {
            PyObject *tmp_set_locals_3;
            tmp_set_locals_3 = PyDict_New();
            locals_urllib3$contrib$socks_133 = tmp_set_locals_3;
        }
        tmp_dictset_value = const_str_digest_d0cac7c67d1189a986b25b7cf105347d;
        tmp_res = PyDict_SetItem( locals_urllib3$contrib$socks_133, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_ad854a96092db35d74e034f060be18ab_2, codeobj_ad854a96092db35d74e034f060be18ab, module_urllib3$contrib$socks, 0 );
        frame_ad854a96092db35d74e034f060be18ab_2 = cache_frame_ad854a96092db35d74e034f060be18ab_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_ad854a96092db35d74e034f060be18ab_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_ad854a96092db35d74e034f060be18ab_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_mvar_value_7;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSConnection );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SOCKSConnection );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "SOCKSConnection" );
                exception_tb = NULL;

                exception_lineno = 134;

                goto frame_exception_exit_2;
            }

            tmp_dictset_value = tmp_mvar_value_7;
            tmp_res = PyDict_SetItem( locals_urllib3$contrib$socks_133, const_str_plain_ConnectionCls, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 134;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_ad854a96092db35d74e034f060be18ab_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_ad854a96092db35d74e034f060be18ab_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_ad854a96092db35d74e034f060be18ab_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_ad854a96092db35d74e034f060be18ab_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_ad854a96092db35d74e034f060be18ab_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_ad854a96092db35d74e034f060be18ab_2,
            type_description_2
        );


        // Release cached frame.
        if ( frame_ad854a96092db35d74e034f060be18ab_2 == cache_frame_ad854a96092db35d74e034f060be18ab_2 )
        {
            Py_DECREF( frame_ad854a96092db35d74e034f060be18ab_2 );
        }
        cache_frame_ad854a96092db35d74e034f060be18ab_2 = NULL;

        assertFrameObject( frame_ad854a96092db35d74e034f060be18ab_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_16;
        skip_nested_handling_1:;
        tmp_assign_source_36 = locals_urllib3$contrib$socks_133;
        Py_INCREF( tmp_assign_source_36 );
        goto try_return_handler_16;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF( locals_urllib3$contrib$socks_133 );
        locals_urllib3$contrib$socks_133 = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_urllib3$contrib$socks_133 );
        locals_urllib3$contrib$socks_133 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 133;
        goto try_except_handler_15;
        outline_result_5:;
        assert( tmp_class_creation_3__class_dict == NULL );
        tmp_class_creation_3__class_dict = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
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


            exception_lineno = 133;

            goto try_except_handler_15;
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
        tmp_assign_source_37 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;

            goto try_except_handler_15;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_subscribed_name_3 = tmp_class_creation_3__bases;
            tmp_subscript_name_3 = const_int_0;
            tmp_assign_source_38 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
            if ( tmp_assign_source_38 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 133;

                goto try_except_handler_15;
            }
            assert( tmp_select_metaclass_3__base == NULL );
            tmp_select_metaclass_3__base = tmp_assign_source_38;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( tmp_select_metaclass_3__base );
            tmp_source_name_4 = tmp_select_metaclass_3__base;
            tmp_assign_source_37 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
            if ( tmp_assign_source_37 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 133;

                goto try_except_handler_18;
            }
            goto try_return_handler_17;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_3;
            Py_DECREF( exception_keeper_type_12 );
            Py_XDECREF( exception_keeper_value_12 );
            Py_XDECREF( exception_keeper_tb_12 );
            CHECK_OBJECT( tmp_select_metaclass_3__base );
            tmp_type_arg_3 = tmp_select_metaclass_3__base;
            tmp_assign_source_37 = BUILTIN_TYPE1( tmp_type_arg_3 );
            assert( !(tmp_assign_source_37 == NULL) );
            goto try_return_handler_17;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
        Py_DECREF( tmp_select_metaclass_3__base );
        tmp_select_metaclass_3__base = NULL;

        goto outline_result_6;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
        Py_DECREF( tmp_select_metaclass_3__base );
        tmp_select_metaclass_3__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
        return MOD_RETURN_VALUE( NULL );
        outline_result_6:;
        condexpr_end_3:;
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_called_name_4 = tmp_class_creation_3__metaclass;
        tmp_args_element_name_9 = const_str_plain_SOCKSHTTPConnectionPool;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_args_element_name_10 = tmp_class_creation_3__bases;
        CHECK_OBJECT( tmp_class_creation_3__class_dict );
        tmp_args_element_name_11 = tmp_class_creation_3__class_dict;
        frame_fbd0aab2a3c167b4be6c0f4c172352ec->m_frame.f_lineno = 133;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;

            goto try_except_handler_15;
        }
        assert( tmp_class_creation_3__class == NULL );
        tmp_class_creation_3__class = tmp_assign_source_39;
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
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
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    {
        PyObject *tmp_assign_source_40;
        CHECK_OBJECT( tmp_class_creation_3__class );
        tmp_assign_source_40 = tmp_class_creation_3__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSHTTPConnectionPool, tmp_assign_source_40 );
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
        PyObject *tmp_assign_source_41;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_HTTPSConnectionPool );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPSConnectionPool );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPSConnectionPool" );
            exception_tb = NULL;

            exception_lineno = 137;

            goto try_except_handler_19;
        }

        tmp_tuple_element_4 = tmp_mvar_value_8;
        tmp_assign_source_41 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_assign_source_41, 0, tmp_tuple_element_4 );
        assert( tmp_class_creation_4__bases == NULL );
        tmp_class_creation_4__bases = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        {
            PyObject *tmp_set_locals_4;
            tmp_set_locals_4 = PyDict_New();
            locals_urllib3$contrib$socks_137 = tmp_set_locals_4;
        }
        tmp_dictset_value = const_str_digest_d0cac7c67d1189a986b25b7cf105347d;
        tmp_res = PyDict_SetItem( locals_urllib3$contrib$socks_137, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_75ca5ec2b97ac9d485a25d2f8d91beeb_3, codeobj_75ca5ec2b97ac9d485a25d2f8d91beeb, module_urllib3$contrib$socks, 0 );
        frame_75ca5ec2b97ac9d485a25d2f8d91beeb_3 = cache_frame_75ca5ec2b97ac9d485a25d2f8d91beeb_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_75ca5ec2b97ac9d485a25d2f8d91beeb_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_75ca5ec2b97ac9d485a25d2f8d91beeb_3 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_mvar_value_9;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSHTTPSConnection );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SOCKSHTTPSConnection );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "SOCKSHTTPSConnection" );
                exception_tb = NULL;

                exception_lineno = 138;

                goto frame_exception_exit_3;
            }

            tmp_dictset_value = tmp_mvar_value_9;
            tmp_res = PyDict_SetItem( locals_urllib3$contrib$socks_137, const_str_plain_ConnectionCls, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 138;

                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_75ca5ec2b97ac9d485a25d2f8d91beeb_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_75ca5ec2b97ac9d485a25d2f8d91beeb_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_75ca5ec2b97ac9d485a25d2f8d91beeb_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_75ca5ec2b97ac9d485a25d2f8d91beeb_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_75ca5ec2b97ac9d485a25d2f8d91beeb_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_75ca5ec2b97ac9d485a25d2f8d91beeb_3,
            type_description_2
        );


        // Release cached frame.
        if ( frame_75ca5ec2b97ac9d485a25d2f8d91beeb_3 == cache_frame_75ca5ec2b97ac9d485a25d2f8d91beeb_3 )
        {
            Py_DECREF( frame_75ca5ec2b97ac9d485a25d2f8d91beeb_3 );
        }
        cache_frame_75ca5ec2b97ac9d485a25d2f8d91beeb_3 = NULL;

        assertFrameObject( frame_75ca5ec2b97ac9d485a25d2f8d91beeb_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_20;
        skip_nested_handling_2:;
        tmp_assign_source_42 = locals_urllib3$contrib$socks_137;
        Py_INCREF( tmp_assign_source_42 );
        goto try_return_handler_20;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_20:;
        Py_DECREF( locals_urllib3$contrib$socks_137 );
        locals_urllib3$contrib$socks_137 = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_urllib3$contrib$socks_137 );
        locals_urllib3$contrib$socks_137 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 137;
        goto try_except_handler_19;
        outline_result_7:;
        assert( tmp_class_creation_4__class_dict == NULL );
        tmp_class_creation_4__class_dict = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
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


            exception_lineno = 137;

            goto try_except_handler_19;
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
        tmp_assign_source_43 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
        if ( tmp_assign_source_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;

            goto try_except_handler_19;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_subscribed_name_4 = tmp_class_creation_4__bases;
            tmp_subscript_name_4 = const_int_0;
            tmp_assign_source_44 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
            if ( tmp_assign_source_44 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 137;

                goto try_except_handler_19;
            }
            assert( tmp_select_metaclass_4__base == NULL );
            tmp_select_metaclass_4__base = tmp_assign_source_44;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( tmp_select_metaclass_4__base );
            tmp_source_name_5 = tmp_select_metaclass_4__base;
            tmp_assign_source_43 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_5 );
            if ( tmp_assign_source_43 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 137;

                goto try_except_handler_22;
            }
            goto try_return_handler_21;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_4;
            Py_DECREF( exception_keeper_type_15 );
            Py_XDECREF( exception_keeper_value_15 );
            Py_XDECREF( exception_keeper_tb_15 );
            CHECK_OBJECT( tmp_select_metaclass_4__base );
            tmp_type_arg_4 = tmp_select_metaclass_4__base;
            tmp_assign_source_43 = BUILTIN_TYPE1( tmp_type_arg_4 );
            assert( !(tmp_assign_source_43 == NULL) );
            goto try_return_handler_21;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_21:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
        Py_DECREF( tmp_select_metaclass_4__base );
        tmp_select_metaclass_4__base = NULL;

        goto outline_result_8;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
        Py_DECREF( tmp_select_metaclass_4__base );
        tmp_select_metaclass_4__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
        return MOD_RETURN_VALUE( NULL );
        outline_result_8:;
        condexpr_end_4:;
        assert( tmp_class_creation_4__metaclass == NULL );
        tmp_class_creation_4__metaclass = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        CHECK_OBJECT( tmp_class_creation_4__metaclass );
        tmp_called_name_5 = tmp_class_creation_4__metaclass;
        tmp_args_element_name_12 = const_str_plain_SOCKSHTTPSConnectionPool;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_args_element_name_13 = tmp_class_creation_4__bases;
        CHECK_OBJECT( tmp_class_creation_4__class_dict );
        tmp_args_element_name_14 = tmp_class_creation_4__class_dict;
        frame_fbd0aab2a3c167b4be6c0f4c172352ec->m_frame.f_lineno = 137;
        {
            PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_45 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;

            goto try_except_handler_19;
        }
        assert( tmp_class_creation_4__class == NULL );
        tmp_class_creation_4__class = tmp_assign_source_45;
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
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
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    {
        PyObject *tmp_assign_source_46;
        CHECK_OBJECT( tmp_class_creation_4__class );
        tmp_assign_source_46 = tmp_class_creation_4__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSHTTPSConnectionPool, tmp_assign_source_46 );
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
        PyObject *tmp_assign_source_47;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_mvar_value_10;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_PoolManager );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolManager );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "PoolManager" );
            exception_tb = NULL;

            exception_lineno = 141;

            goto try_except_handler_23;
        }

        tmp_tuple_element_5 = tmp_mvar_value_10;
        tmp_assign_source_47 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_assign_source_47, 0, tmp_tuple_element_5 );
        assert( tmp_class_creation_5__bases == NULL );
        tmp_class_creation_5__bases = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        {
            PyObject *tmp_set_locals_5;
            tmp_set_locals_5 = PyDict_New();
            locals_urllib3$contrib$socks_141 = tmp_set_locals_5;
        }
        tmp_dictset_value = const_str_digest_d0cac7c67d1189a986b25b7cf105347d;
        tmp_res = PyDict_SetItem( locals_urllib3$contrib$socks_141, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_eeea122c4ef21297597db82f300a3894;
        tmp_res = PyDict_SetItem( locals_urllib3$contrib$socks_141, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_db5a67bba8f207053457f6a9ac81565d_4, codeobj_db5a67bba8f207053457f6a9ac81565d, module_urllib3$contrib$socks, 0 );
        frame_db5a67bba8f207053457f6a9ac81565d_4 = cache_frame_db5a67bba8f207053457f6a9ac81565d_4;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_db5a67bba8f207053457f6a9ac81565d_4 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_db5a67bba8f207053457f6a9ac81565d_4 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_mvar_value_12;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSHTTPConnectionPool );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SOCKSHTTPConnectionPool );
            }

            if ( tmp_mvar_value_11 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "SOCKSHTTPConnectionPool" );
                exception_tb = NULL;

                exception_lineno = 147;

                goto frame_exception_exit_4;
            }

            tmp_dict_value_1 = tmp_mvar_value_11;
            tmp_dict_key_1 = const_str_plain_http;
            tmp_dictset_value = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSHTTPSConnectionPool );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SOCKSHTTPSConnectionPool );
            }

            if ( tmp_mvar_value_12 == NULL )
            {
                Py_DECREF( tmp_dictset_value );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "SOCKSHTTPSConnectionPool" );
                exception_tb = NULL;

                exception_lineno = 148;

                goto frame_exception_exit_4;
            }

            tmp_dict_value_2 = tmp_mvar_value_12;
            tmp_dict_key_2 = const_str_plain_https;
            tmp_res = PyDict_SetItem( tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            tmp_res = PyDict_SetItem( locals_urllib3$contrib$socks_141, const_str_plain_pool_classes_by_scheme, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 146;

                goto frame_exception_exit_4;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_db5a67bba8f207053457f6a9ac81565d_4 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_db5a67bba8f207053457f6a9ac81565d_4 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_db5a67bba8f207053457f6a9ac81565d_4, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_db5a67bba8f207053457f6a9ac81565d_4->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_db5a67bba8f207053457f6a9ac81565d_4, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_db5a67bba8f207053457f6a9ac81565d_4,
            type_description_2
        );


        // Release cached frame.
        if ( frame_db5a67bba8f207053457f6a9ac81565d_4 == cache_frame_db5a67bba8f207053457f6a9ac81565d_4 )
        {
            Py_DECREF( frame_db5a67bba8f207053457f6a9ac81565d_4 );
        }
        cache_frame_db5a67bba8f207053457f6a9ac81565d_4 = NULL;

        assertFrameObject( frame_db5a67bba8f207053457f6a9ac81565d_4 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_24;
        skip_nested_handling_3:;
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_none_none_int_pos_10_none_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$socks$$$function_3___init__( tmp_defaults_1 );



            tmp_res = PyDict_SetItem( locals_urllib3$contrib$socks_141, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        tmp_assign_source_48 = locals_urllib3$contrib$socks_141;
        Py_INCREF( tmp_assign_source_48 );
        goto try_return_handler_24;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_24:;
        Py_DECREF( locals_urllib3$contrib$socks_141 );
        locals_urllib3$contrib$socks_141 = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_urllib3$contrib$socks_141 );
        locals_urllib3$contrib$socks_141 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_3:;
        exception_lineno = 141;
        goto try_except_handler_23;
        outline_result_9:;
        assert( tmp_class_creation_5__class_dict == NULL );
        tmp_class_creation_5__class_dict = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
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


            exception_lineno = 141;

            goto try_except_handler_23;
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
        tmp_assign_source_49 = DICT_GET_ITEM( tmp_dict_name_10, tmp_key_name_10 );
        if ( tmp_assign_source_49 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;

            goto try_except_handler_23;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            CHECK_OBJECT( tmp_class_creation_5__bases );
            tmp_subscribed_name_5 = tmp_class_creation_5__bases;
            tmp_subscript_name_5 = const_int_0;
            tmp_assign_source_50 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
            if ( tmp_assign_source_50 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 141;

                goto try_except_handler_23;
            }
            assert( tmp_select_metaclass_5__base == NULL );
            tmp_select_metaclass_5__base = tmp_assign_source_50;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( tmp_select_metaclass_5__base );
            tmp_source_name_6 = tmp_select_metaclass_5__base;
            tmp_assign_source_49 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_6 );
            if ( tmp_assign_source_49 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 141;

                goto try_except_handler_26;
            }
            goto try_return_handler_25;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_5;
            Py_DECREF( exception_keeper_type_18 );
            Py_XDECREF( exception_keeper_value_18 );
            Py_XDECREF( exception_keeper_tb_18 );
            CHECK_OBJECT( tmp_select_metaclass_5__base );
            tmp_type_arg_5 = tmp_select_metaclass_5__base;
            tmp_assign_source_49 = BUILTIN_TYPE1( tmp_type_arg_5 );
            assert( !(tmp_assign_source_49 == NULL) );
            goto try_return_handler_25;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_25:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_5__base );
        Py_DECREF( tmp_select_metaclass_5__base );
        tmp_select_metaclass_5__base = NULL;

        goto outline_result_10;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_5__base );
        Py_DECREF( tmp_select_metaclass_5__base );
        tmp_select_metaclass_5__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
        return MOD_RETURN_VALUE( NULL );
        outline_result_10:;
        condexpr_end_5:;
        assert( tmp_class_creation_5__metaclass == NULL );
        tmp_class_creation_5__metaclass = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        CHECK_OBJECT( tmp_class_creation_5__metaclass );
        tmp_called_name_6 = tmp_class_creation_5__metaclass;
        tmp_args_element_name_15 = const_str_plain_SOCKSProxyManager;
        CHECK_OBJECT( tmp_class_creation_5__bases );
        tmp_args_element_name_16 = tmp_class_creation_5__bases;
        CHECK_OBJECT( tmp_class_creation_5__class_dict );
        tmp_args_element_name_17 = tmp_class_creation_5__class_dict;
        frame_fbd0aab2a3c167b4be6c0f4c172352ec->m_frame.f_lineno = 141;
        {
            PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17 };
            tmp_assign_source_51 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
        }

        if ( tmp_assign_source_51 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;

            goto try_except_handler_23;
        }
        assert( tmp_class_creation_5__class == NULL );
        tmp_class_creation_5__class = tmp_assign_source_51;
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
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
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_fbd0aab2a3c167b4be6c0f4c172352ec );
#endif
    popFrameStack();

    assertFrameObject( frame_fbd0aab2a3c167b4be6c0f4c172352ec );

    goto frame_no_exception_4;

    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_fbd0aab2a3c167b4be6c0f4c172352ec );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fbd0aab2a3c167b4be6c0f4c172352ec, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fbd0aab2a3c167b4be6c0f4c172352ec->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fbd0aab2a3c167b4be6c0f4c172352ec, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_4:;
    {
        PyObject *tmp_assign_source_52;
        CHECK_OBJECT( tmp_class_creation_5__class );
        tmp_assign_source_52 = tmp_class_creation_5__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSProxyManager, tmp_assign_source_52 );
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


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_urllib3$contrib$socks );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
