/* Generated code for Python module 'requests.exceptions'
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

/* The "_module_requests$exceptions" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$exceptions;
PyDictObject *moduledict_requests$exceptions;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_ProxyError;
extern PyObject *const_tuple_str_plain_HTTPError_tuple;
extern PyObject *const_str_plain_Timeout;
static PyObject *const_str_digest_231982acca444de8f23c0288db53eaef;
extern PyObject *const_str_plain_TooManyRedirects;
extern PyObject *const_str_plain_RetryError;
static PyObject *const_str_digest_35d6e09b700b272e1f4429814168031d;
static PyObject *const_str_digest_cb488f69655ce887e5155c9a2e164928;
static PyObject *const_str_digest_e91f0a06d295e9fdd4c3972666eefa40;
static PyObject *const_str_plain_RequestsWarning;
static PyObject *const_tuple_str_plain_request_none_tuple;
extern PyObject *const_str_plain_InvalidHeader;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_request;
static PyObject *const_str_digest_ade7d7a167d988b8081c48c9a0bed8e8;
static PyObject *const_tuple_str_plain_response_none_tuple;
extern PyObject *const_str_plain_ReadTimeout;
static PyObject *const_str_digest_c5ea8ff3c07b97205cc4ec7f24ad27a2;
static PyObject *const_str_digest_c7a80113e8376f2f52f7ee120f1360d2;
extern PyObject *const_str_plain_StreamConsumedError;
static PyObject *const_str_digest_8b54d81d400c0da933dfb8e36e1ac1f0;
static PyObject *const_str_digest_0689849403be684eb33eb3512cfc2389;
static PyObject *const_str_digest_2ad78bd49ece92478753ce0fc79a6e93;
static PyObject *const_str_digest_4aae44da769befc767278be58ddca255;
extern PyObject *const_str_plain_ConnectionError;
extern PyObject *const_str_plain_InvalidURL;
static PyObject *const_str_digest_3a035decbb1d48c6b204b28e42512076;
extern PyObject *const_str_plain_FileModeWarning;
extern PyObject *const_str_plain_MissingSchema;
extern PyObject *const_str_plain_URLRequired;
extern PyObject *const_str_plain_InvalidProxyURL;
extern PyObject *const_str_plain_RequestException;
static PyObject *const_str_digest_62b56f407a05bf4c50ea2ebf5d0c7b8a;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_Warning;
extern PyObject *const_str_plain_InvalidSchema;
extern PyObject *const_int_0;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_ddf19d9bbf2d99a7777bfd3dcc1db8dc;
extern PyObject *const_str_plain_args;
static PyObject *const_str_digest_b8f960a38723097fb701d7986528073c;
static PyObject *const_str_digest_183e1365483754a66afafc5046591b5f;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_HTTPError;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_digest_30cf8cedfeac36936c731ede1cc0ad0e;
static PyObject *const_str_digest_b3f79f0ff88ef53ddf2012488144e436;
static PyObject *const_tuple_d72518de2df0408e06529d45ae68a282_tuple;
static PyObject *const_tuple_type_IOError_tuple;
extern PyObject *const_str_plain_ContentDecodingError;
static PyObject *const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
extern PyObject *const_str_plain_ConnectTimeout;
extern PyObject *const_str_plain_pop;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_841f485de6d4157389a41ea63dc14155;
static PyObject *const_str_digest_ebfe1b88507a545e917e1953e4bc1d55;
static PyObject *const_str_digest_34a451307fc6aab1649478fed3307568;
static PyObject *const_str_digest_382efa1ab11fb4a35860fc2596b633ab;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_response;
extern PyObject *const_str_digest_c8562bbff9d721153deb2fdd066393d0;
static PyObject *const_str_digest_b2c98825348c9fcd71a85ac1bfc67cf8;
extern PyObject *const_str_plain_DeprecationWarning;
extern PyObject *const_str_plain_ChunkedEncodingError;
extern PyObject *const_str_plain_RequestsDependencyWarning;
extern PyObject *const_str_plain_SSLError;
extern PyObject *const_str_digest_c1f4dcdf3195a093500cff5b8859ecc9;
static PyObject *const_str_digest_225332b778bf59fe5fff32593da4030a;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_3b2add8be5d440c36ae0b41135415fa9;
static PyObject *const_str_digest_3aedd4c9c88f311ca62d0cad34678af2;
extern PyObject *const_str_plain_UnrewindableBodyError;
static PyObject *const_str_plain_BaseHTTPError;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_231982acca444de8f23c0288db53eaef = UNSTREAM_STRING( &constant_bin[ 950099 ], 26, 0 );
    const_str_digest_35d6e09b700b272e1f4429814168031d = UNSTREAM_STRING( &constant_bin[ 950125 ], 22, 0 );
    const_str_digest_cb488f69655ce887e5155c9a2e164928 = UNSTREAM_STRING( &constant_bin[ 950147 ], 66, 0 );
    const_str_digest_e91f0a06d295e9fdd4c3972666eefa40 = UNSTREAM_STRING( &constant_bin[ 950213 ], 33, 0 );
    const_str_plain_RequestsWarning = UNSTREAM_STRING( &constant_bin[ 950246 ], 15, 1 );
    const_tuple_str_plain_request_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_request_none_tuple, 0, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_str_plain_request_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_ade7d7a167d988b8081c48c9a0bed8e8 = UNSTREAM_STRING( &constant_bin[ 950261 ], 130, 0 );
    const_tuple_str_plain_response_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_response_none_tuple, 0, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    PyTuple_SET_ITEM( const_tuple_str_plain_response_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_c5ea8ff3c07b97205cc4ec7f24ad27a2 = UNSTREAM_STRING( &constant_bin[ 950391 ], 74, 0 );
    const_str_digest_c7a80113e8376f2f52f7ee120f1360d2 = UNSTREAM_STRING( &constant_bin[ 950465 ], 47, 0 );
    const_str_digest_8b54d81d400c0da933dfb8e36e1ac1f0 = UNSTREAM_STRING( &constant_bin[ 950512 ], 28, 0 );
    const_str_digest_0689849403be684eb33eb3512cfc2389 = UNSTREAM_STRING( &constant_bin[ 950540 ], 34, 0 );
    const_str_digest_2ad78bd49ece92478753ce0fc79a6e93 = UNSTREAM_STRING( &constant_bin[ 950574 ], 84, 0 );
    const_str_digest_4aae44da769befc767278be58ddca255 = UNSTREAM_STRING( &constant_bin[ 950658 ], 46, 0 );
    const_str_digest_3a035decbb1d48c6b204b28e42512076 = UNSTREAM_STRING( &constant_bin[ 950704 ], 64, 0 );
    const_str_digest_62b56f407a05bf4c50ea2ebf5d0c7b8a = UNSTREAM_STRING( &constant_bin[ 950768 ], 63, 0 );
    const_str_digest_ddf19d9bbf2d99a7777bfd3dcc1db8dc = UNSTREAM_STRING( &constant_bin[ 950831 ], 23, 0 );
    const_str_digest_b8f960a38723097fb701d7986528073c = UNSTREAM_STRING( &constant_bin[ 950854 ], 64, 0 );
    const_str_digest_183e1365483754a66afafc5046591b5f = UNSTREAM_STRING( &constant_bin[ 950918 ], 28, 0 );
    const_str_digest_30cf8cedfeac36936c731ede1cc0ad0e = UNSTREAM_STRING( &constant_bin[ 950946 ], 19, 0 );
    const_str_digest_b3f79f0ff88ef53ddf2012488144e436 = UNSTREAM_STRING( &constant_bin[ 950965 ], 27, 0 );
    const_tuple_d72518de2df0408e06529d45ae68a282_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_d72518de2df0408e06529d45ae68a282_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_d72518de2df0408e06529d45ae68a282_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_d72518de2df0408e06529d45ae68a282_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_d72518de2df0408e06529d45ae68a282_tuple, 3, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    const_tuple_type_IOError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_type_IOError_tuple, 0, (PyObject *)PyExc_IOError ); Py_INCREF( (PyObject *)PyExc_IOError );
    const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2 = UNSTREAM_STRING( &constant_bin[ 950926 ], 19, 0 );
    const_str_digest_841f485de6d4157389a41ea63dc14155 = UNSTREAM_STRING( &constant_bin[ 950992 ], 42, 0 );
    const_str_digest_ebfe1b88507a545e917e1953e4bc1d55 = UNSTREAM_STRING( &constant_bin[ 951034 ], 55, 0 );
    const_str_digest_34a451307fc6aab1649478fed3307568 = UNSTREAM_STRING( &constant_bin[ 951089 ], 171, 0 );
    const_str_digest_382efa1ab11fb4a35860fc2596b633ab = UNSTREAM_STRING( &constant_bin[ 951260 ], 58, 0 );
    const_str_digest_b2c98825348c9fcd71a85ac1bfc67cf8 = UNSTREAM_STRING( &constant_bin[ 951318 ], 96, 0 );
    const_str_digest_225332b778bf59fe5fff32593da4030a = UNSTREAM_STRING( &constant_bin[ 951414 ], 37, 0 );
    const_str_digest_3b2add8be5d440c36ae0b41135415fa9 = UNSTREAM_STRING( &constant_bin[ 951451 ], 34, 0 );
    const_str_digest_3aedd4c9c88f311ca62d0cad34678af2 = UNSTREAM_STRING( &constant_bin[ 951485 ], 23, 0 );
    const_str_plain_BaseHTTPError = UNSTREAM_STRING( &constant_bin[ 951508 ], 13, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$exceptions( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_eb2be7b9000d9b2769842bad7c617b57;
static PyCodeObject *codeobj_fcb03055fa812d40a55f79ae32c5c619;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_ebfe1b88507a545e917e1953e4bc1d55;
    codeobj_eb2be7b9000d9b2769842bad7c617b57 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_183e1365483754a66afafc5046591b5f, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_fcb03055fa812d40a55f79ae32c5c619 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 17, const_tuple_d72518de2df0408e06529d45ae68a282_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_requests$exceptions$$$function_1___init__(  );


// The module function definitions.
static PyObject *impl_requests$exceptions$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_response = NULL;
    struct Nuitka_FrameObject *frame_fcb03055fa812d40a55f79ae32c5c619;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_fcb03055fa812d40a55f79ae32c5c619 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fcb03055fa812d40a55f79ae32c5c619, codeobj_fcb03055fa812d40a55f79ae32c5c619, module_requests$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fcb03055fa812d40a55f79ae32c5c619 = cache_frame_fcb03055fa812d40a55f79ae32c5c619;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fcb03055fa812d40a55f79ae32c5c619 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fcb03055fa812d40a55f79ae32c5c619 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_kwargs );
        tmp_called_instance_1 = par_kwargs;
        frame_fcb03055fa812d40a55f79ae32c5c619->m_frame.f_lineno = 19;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_response_none_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_response == NULL );
        var_response = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( var_response );
        tmp_assattr_name_1 = var_response;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_response, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_kwargs );
        tmp_called_instance_2 = par_kwargs;
        frame_fcb03055fa812d40a55f79ae32c5c619->m_frame.f_lineno = 21;
        tmp_assattr_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_request_none_tuple, 0 ) );

        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_request, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
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
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT( var_response );
        tmp_compexpr_left_1 = var_response;
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_request );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "oooo";
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
        CHECK_OBJECT( var_response );
        tmp_source_name_2 = var_response;
        tmp_attribute_name_1 = const_str_plain_request;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_2, tmp_attribute_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_source_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_assattr_target_3;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_response );
            if ( tmp_source_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 24;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_request );
            Py_DECREF( tmp_source_name_3 );
            if ( tmp_assattr_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 24;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_3 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_request, tmp_assattr_name_3 );
            Py_DECREF( tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 24;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "RequestException" );
            exception_tb = NULL;

            exception_lineno = 25;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_source_name_5 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___init__ );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "oooo";
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


            exception_lineno = 25;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fcb03055fa812d40a55f79ae32c5c619 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fcb03055fa812d40a55f79ae32c5c619 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fcb03055fa812d40a55f79ae32c5c619, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fcb03055fa812d40a55f79ae32c5c619->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fcb03055fa812d40a55f79ae32c5c619, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fcb03055fa812d40a55f79ae32c5c619,
        type_description_1,
        par_self,
        par_args,
        par_kwargs,
        var_response
    );


    // Release cached frame.
    if ( frame_fcb03055fa812d40a55f79ae32c5c619 == cache_frame_fcb03055fa812d40a55f79ae32c5c619 )
    {
        Py_DECREF( frame_fcb03055fa812d40a55f79ae32c5c619 );
    }
    cache_frame_fcb03055fa812d40a55f79ae32c5c619 = NULL;

    assertFrameObject( frame_fcb03055fa812d40a55f79ae32c5c619 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)var_response );
    Py_DECREF( var_response );
    var_response = NULL;

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

    Py_XDECREF( var_response );
    var_response = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$exceptions$$$function_1___init__ );
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



static PyObject *MAKE_FUNCTION_requests$exceptions$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$exceptions$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fcb03055fa812d40a55f79ae32c5c619,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$exceptions,
        const_str_digest_cb488f69655ce887e5155c9a2e164928,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$exceptions =
{
    PyModuleDef_HEAD_INIT,
    "requests.exceptions",
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

MOD_INIT_DECL( requests$exceptions )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_requests$exceptions );
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
    puts("requests.exceptions: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.exceptions: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.exceptions: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrequests$exceptions" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$exceptions = Py_InitModule4(
        "requests.exceptions",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_requests$exceptions = PyModule_Create( &mdef_requests$exceptions );
#endif

    moduledict_requests$exceptions = MODULE_DICT( module_requests$exceptions );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_requests$exceptions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_requests$exceptions );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2, module_requests$exceptions );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
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
    PyObject *tmp_locals_requests$exceptions_12_key___init__ = NULL;
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
    PyObject *tmp_select_metaclass_2__base = NULL;
    PyObject *tmp_select_metaclass_3__base = NULL;
    PyObject *tmp_select_metaclass_4__base = NULL;
    PyObject *tmp_select_metaclass_5__base = NULL;
    PyObject *tmp_select_metaclass_6__base = NULL;
    PyObject *tmp_select_metaclass_7__base = NULL;
    PyObject *tmp_select_metaclass_8__base = NULL;
    PyObject *tmp_select_metaclass_9__base = NULL;
    struct Nuitka_FrameObject *frame_eb2be7b9000d9b2769842bad7c617b57;
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
    PyObject *locals_requests$exceptions_28 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_requests$exceptions_32 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *locals_requests$exceptions_36 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *locals_requests$exceptions_40 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_requests$exceptions_44 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *locals_requests$exceptions_53 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *locals_requests$exceptions_60 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *locals_requests$exceptions_64 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *locals_requests$exceptions_68 = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *locals_requests$exceptions_72 = NULL;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *locals_requests$exceptions_76 = NULL;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *locals_requests$exceptions_80 = NULL;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *locals_requests$exceptions_84 = NULL;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *locals_requests$exceptions_88 = NULL;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *locals_requests$exceptions_92 = NULL;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *locals_requests$exceptions_96 = NULL;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *locals_requests$exceptions_100 = NULL;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *locals_requests$exceptions_104 = NULL;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *locals_requests$exceptions_108 = NULL;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *locals_requests$exceptions_114 = NULL;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *locals_requests$exceptions_119 = NULL;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *locals_requests$exceptions_124 = NULL;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_b2c98825348c9fcd71a85ac1bfc67cf8;
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_ebfe1b88507a545e917e1953e4bc1d55;
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_eb2be7b9000d9b2769842bad7c617b57 = MAKE_MODULE_FRAME( codeobj_eb2be7b9000d9b2769842bad7c617b57, module_requests$exceptions );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_eb2be7b9000d9b2769842bad7c617b57 );
    assert( Py_REFCNT( frame_eb2be7b9000d9b2769842bad7c617b57 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_globals_name_1 = (PyObject *)moduledict_requests$exceptions;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_HTTPError_tuple;
        frame_eb2be7b9000d9b2769842bad7c617b57->m_frame.f_lineno = 9;
        tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_HTTPError );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_BaseHTTPError, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = MAKE_FUNCTION_requests$exceptions$$$function_1___init__(  );



            assert( tmp_locals_requests$exceptions_12_key___init__ == NULL );
            tmp_locals_requests$exceptions_12_key___init__ = tmp_assign_source_5;
        }
        // Tried code:
        {
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_dict_value_1 = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
            tmp_dict_key_1 = const_str_plain___module__;
            tmp_assign_source_4 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem( tmp_assign_source_4, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_2 = const_str_digest_2ad78bd49ece92478753ce0fc79a6e93;
            tmp_dict_key_2 = const_str_plain___doc__;
            tmp_res = PyDict_SetItem( tmp_assign_source_4, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_requests$exceptions_12_key___init__ );
            tmp_dict_value_3 = tmp_locals_requests$exceptions_12_key___init__;
            tmp_dict_key_3 = const_str_plain___init__;
            tmp_res = PyDict_SetItem( tmp_assign_source_4, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            goto try_return_handler_1;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT( (PyObject *)tmp_locals_requests$exceptions_12_key___init__ );
        Py_DECREF( tmp_locals_requests$exceptions_12_key___init__ );
        tmp_locals_requests$exceptions_12_key___init__ = NULL;

        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_4;
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


            exception_lineno = 12;

            goto try_except_handler_2;
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


            exception_lineno = 12;

            goto try_except_handler_2;
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
        tmp_args_element_name_1 = const_str_plain_RequestException;
        tmp_args_element_name_2 = const_tuple_type_IOError_tuple;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_eb2be7b9000d9b2769842bad7c617b57->m_frame.f_lineno = 12;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_7;
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
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException, tmp_assign_source_8 );
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
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;

            exception_lineno = 28;

            goto try_except_handler_3;
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
            locals_requests$exceptions_28 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_28, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_ddf19d9bbf2d99a7777bfd3dcc1db8dc;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_28, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_10 = locals_requests$exceptions_28;
        Py_INCREF( tmp_assign_source_10 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_requests$exceptions_28 );
        locals_requests$exceptions_28 = NULL;
        goto outline_result_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_2:;
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


            exception_lineno = 28;

            goto try_except_handler_3;
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


            exception_lineno = 28;

            goto try_except_handler_3;
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


                exception_lineno = 28;

                goto try_except_handler_3;
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


                exception_lineno = 28;

                goto try_except_handler_6;
            }
            goto try_return_handler_5;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_6:;
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
            goto try_return_handler_5;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
        Py_DECREF( tmp_select_metaclass_2__base );
        tmp_select_metaclass_2__base = NULL;

        goto outline_result_3;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
        Py_DECREF( tmp_select_metaclass_2__base );
        tmp_select_metaclass_2__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_3:;
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
        tmp_args_element_name_4 = const_str_plain_HTTPError;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_args_element_name_5 = tmp_class_creation_2__bases;
        CHECK_OBJECT( tmp_class_creation_2__class_dict );
        tmp_args_element_name_6 = tmp_class_creation_2__class_dict;
        frame_eb2be7b9000d9b2769842bad7c617b57->m_frame.f_lineno = 28;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_3;
        }
        assert( tmp_class_creation_2__class == NULL );
        tmp_class_creation_2__class = tmp_assign_source_13;
    }
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
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError, tmp_assign_source_14 );
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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;

            exception_lineno = 32;

            goto try_except_handler_7;
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
            locals_requests$exceptions_32 = tmp_set_locals_2;
        }
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_32, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_8b54d81d400c0da933dfb8e36e1ac1f0;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_32, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_16 = locals_requests$exceptions_32;
        Py_INCREF( tmp_assign_source_16 );
        goto try_return_handler_8;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF( locals_requests$exceptions_32 );
        locals_requests$exceptions_32 = NULL;
        goto outline_result_4;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_4:;
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


            exception_lineno = 32;

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
        tmp_assign_source_17 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_7;
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


                exception_lineno = 32;

                goto try_except_handler_7;
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


                exception_lineno = 32;

                goto try_except_handler_10;
            }
            goto try_return_handler_9;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_10:;
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
            goto try_return_handler_9;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
        Py_DECREF( tmp_select_metaclass_3__base );
        tmp_select_metaclass_3__base = NULL;

        goto outline_result_5;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
        Py_DECREF( tmp_select_metaclass_3__base );
        tmp_select_metaclass_3__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_5:;
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
        tmp_args_element_name_7 = const_str_plain_ConnectionError;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_args_element_name_8 = tmp_class_creation_3__bases;
        CHECK_OBJECT( tmp_class_creation_3__class_dict );
        tmp_args_element_name_9 = tmp_class_creation_3__class_dict;
        frame_eb2be7b9000d9b2769842bad7c617b57->m_frame.f_lineno = 32;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_7;
        }
        assert( tmp_class_creation_3__class == NULL );
        tmp_class_creation_3__class = tmp_assign_source_19;
    }
    goto try_end_3;
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
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectionError, tmp_assign_source_20 );
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
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectionError );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionError );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ConnectionError" );
            exception_tb = NULL;

            exception_lineno = 36;

            goto try_except_handler_11;
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
            locals_requests$exceptions_36 = tmp_set_locals_3;
        }
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_36, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_3aedd4c9c88f311ca62d0cad34678af2;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_36, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_22 = locals_requests$exceptions_36;
        Py_INCREF( tmp_assign_source_22 );
        goto try_return_handler_12;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF( locals_requests$exceptions_36 );
        locals_requests$exceptions_36 = NULL;
        goto outline_result_6;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_6:;
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


            exception_lineno = 36;

            goto try_except_handler_11;
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


            exception_lineno = 36;

            goto try_except_handler_11;
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


                exception_lineno = 36;

                goto try_except_handler_11;
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


                exception_lineno = 36;

                goto try_except_handler_14;
            }
            goto try_return_handler_13;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_14:;
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
            goto try_return_handler_13;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
        Py_DECREF( tmp_select_metaclass_4__base );
        tmp_select_metaclass_4__base = NULL;

        goto outline_result_7;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
        Py_DECREF( tmp_select_metaclass_4__base );
        tmp_select_metaclass_4__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_7:;
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
        tmp_args_element_name_10 = const_str_plain_ProxyError;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_args_element_name_11 = tmp_class_creation_4__bases;
        CHECK_OBJECT( tmp_class_creation_4__class_dict );
        tmp_args_element_name_12 = tmp_class_creation_4__class_dict;
        frame_eb2be7b9000d9b2769842bad7c617b57->m_frame.f_lineno = 36;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_11;
        }
        assert( tmp_class_creation_4__class == NULL );
        tmp_class_creation_4__class = tmp_assign_source_25;
    }
    goto try_end_4;
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
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ProxyError, tmp_assign_source_26 );
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
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectionError );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionError );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ConnectionError" );
            exception_tb = NULL;

            exception_lineno = 40;

            goto try_except_handler_15;
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
            locals_requests$exceptions_40 = tmp_set_locals_4;
        }
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_40, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_35d6e09b700b272e1f4429814168031d;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_40, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_28 = locals_requests$exceptions_40;
        Py_INCREF( tmp_assign_source_28 );
        goto try_return_handler_16;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF( locals_requests$exceptions_40 );
        locals_requests$exceptions_40 = NULL;
        goto outline_result_8;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_8:;
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

            goto try_except_handler_15;
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

            goto try_except_handler_15;
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

                goto try_except_handler_15;
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

                goto try_except_handler_18;
            }
            goto try_return_handler_17;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_18:;
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
            goto try_return_handler_17;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_5__base );
        Py_DECREF( tmp_select_metaclass_5__base );
        tmp_select_metaclass_5__base = NULL;

        goto outline_result_9;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_5__base );
        Py_DECREF( tmp_select_metaclass_5__base );
        tmp_select_metaclass_5__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_9:;
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
        frame_eb2be7b9000d9b2769842bad7c617b57->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
            tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_15;
        }
        assert( tmp_class_creation_5__class == NULL );
        tmp_class_creation_5__class = tmp_assign_source_31;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_15:;
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
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_SSLError, tmp_assign_source_32 );
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
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;

            exception_lineno = 44;

            goto try_except_handler_19;
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
            locals_requests$exceptions_44 = tmp_set_locals_5;
        }
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_44, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_34a451307fc6aab1649478fed3307568;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_44, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_34 = locals_requests$exceptions_44;
        Py_INCREF( tmp_assign_source_34 );
        goto try_return_handler_20;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_20:;
        Py_DECREF( locals_requests$exceptions_44 );
        locals_requests$exceptions_44 = NULL;
        goto outline_result_10;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_10:;
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


            exception_lineno = 44;

            goto try_except_handler_19;
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


            exception_lineno = 44;

            goto try_except_handler_19;
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


                exception_lineno = 44;

                goto try_except_handler_19;
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


                exception_lineno = 44;

                goto try_except_handler_22;
            }
            goto try_return_handler_21;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_22:;
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
            goto try_return_handler_21;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_21:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_6__base );
        Py_DECREF( tmp_select_metaclass_6__base );
        tmp_select_metaclass_6__base = NULL;

        goto outline_result_11;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_6__base );
        Py_DECREF( tmp_select_metaclass_6__base );
        tmp_select_metaclass_6__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_11:;
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
        tmp_args_element_name_16 = const_str_plain_Timeout;
        CHECK_OBJECT( tmp_class_creation_6__bases );
        tmp_args_element_name_17 = tmp_class_creation_6__bases;
        CHECK_OBJECT( tmp_class_creation_6__class_dict );
        tmp_args_element_name_18 = tmp_class_creation_6__class_dict;
        frame_eb2be7b9000d9b2769842bad7c617b57->m_frame.f_lineno = 44;
        {
            PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18 };
            tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
        }

        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;

            goto try_except_handler_19;
        }
        assert( tmp_class_creation_6__class == NULL );
        tmp_class_creation_6__class = tmp_assign_source_37;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_19:;
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
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_Timeout, tmp_assign_source_38 );
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
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectionError );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionError );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ConnectionError" );
            exception_tb = NULL;

            exception_lineno = 53;

            goto try_except_handler_23;
        }

        tmp_tuple_element_6 = tmp_mvar_value_6;
        tmp_assign_source_39 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_assign_source_39, 0, tmp_tuple_element_6 );
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_Timeout );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Timeout );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_assign_source_39 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "Timeout" );
            exception_tb = NULL;

            exception_lineno = 53;

            goto try_except_handler_23;
        }

        tmp_tuple_element_6 = tmp_mvar_value_7;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_assign_source_39, 1, tmp_tuple_element_6 );
        assert( tmp_class_creation_7__bases == NULL );
        tmp_class_creation_7__bases = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        {
            PyObject *tmp_set_locals_6;
            tmp_set_locals_6 = PyDict_New();
            locals_requests$exceptions_53 = tmp_set_locals_6;
        }
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_53, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_ade7d7a167d988b8081c48c9a0bed8e8;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_53, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_40 = locals_requests$exceptions_53;
        Py_INCREF( tmp_assign_source_40 );
        goto try_return_handler_24;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_24:;
        Py_DECREF( locals_requests$exceptions_53 );
        locals_requests$exceptions_53 = NULL;
        goto outline_result_12;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_12:;
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


            exception_lineno = 53;

            goto try_except_handler_23;
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


            exception_lineno = 53;

            goto try_except_handler_23;
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


                exception_lineno = 53;

                goto try_except_handler_23;
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


                exception_lineno = 53;

                goto try_except_handler_26;
            }
            goto try_return_handler_25;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_26:;
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
            goto try_return_handler_25;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_25:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_7__base );
        Py_DECREF( tmp_select_metaclass_7__base );
        tmp_select_metaclass_7__base = NULL;

        goto outline_result_13;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_7__base );
        Py_DECREF( tmp_select_metaclass_7__base );
        tmp_select_metaclass_7__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_13:;
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
        tmp_args_element_name_19 = const_str_plain_ConnectTimeout;
        CHECK_OBJECT( tmp_class_creation_7__bases );
        tmp_args_element_name_20 = tmp_class_creation_7__bases;
        CHECK_OBJECT( tmp_class_creation_7__class_dict );
        tmp_args_element_name_21 = tmp_class_creation_7__class_dict;
        frame_eb2be7b9000d9b2769842bad7c617b57->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21 };
            tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
        }

        if ( tmp_assign_source_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto try_except_handler_23;
        }
        assert( tmp_class_creation_7__class == NULL );
        tmp_class_creation_7__class = tmp_assign_source_43;
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_23:;
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
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectTimeout, tmp_assign_source_44 );
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
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_Timeout );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Timeout );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "Timeout" );
            exception_tb = NULL;

            exception_lineno = 60;

            goto try_except_handler_27;
        }

        tmp_tuple_element_7 = tmp_mvar_value_8;
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
            locals_requests$exceptions_60 = tmp_set_locals_7;
        }
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_60, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_b8f960a38723097fb701d7986528073c;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_60, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_46 = locals_requests$exceptions_60;
        Py_INCREF( tmp_assign_source_46 );
        goto try_return_handler_28;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_28:;
        Py_DECREF( locals_requests$exceptions_60 );
        locals_requests$exceptions_60 = NULL;
        goto outline_result_14;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_14:;
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


            exception_lineno = 60;

            goto try_except_handler_27;
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


            exception_lineno = 60;

            goto try_except_handler_27;
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


                exception_lineno = 60;

                goto try_except_handler_27;
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


                exception_lineno = 60;

                goto try_except_handler_30;
            }
            goto try_return_handler_29;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_30:;
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
            goto try_return_handler_29;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_29:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_8__base );
        Py_DECREF( tmp_select_metaclass_8__base );
        tmp_select_metaclass_8__base = NULL;

        goto outline_result_15;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_8__base );
        Py_DECREF( tmp_select_metaclass_8__base );
        tmp_select_metaclass_8__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_15:;
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
        tmp_args_element_name_22 = const_str_plain_ReadTimeout;
        CHECK_OBJECT( tmp_class_creation_8__bases );
        tmp_args_element_name_23 = tmp_class_creation_8__bases;
        CHECK_OBJECT( tmp_class_creation_8__class_dict );
        tmp_args_element_name_24 = tmp_class_creation_8__class_dict;
        frame_eb2be7b9000d9b2769842bad7c617b57->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24 };
            tmp_assign_source_49 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_8, call_args );
        }

        if ( tmp_assign_source_49 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;

            goto try_except_handler_27;
        }
        assert( tmp_class_creation_8__class == NULL );
        tmp_class_creation_8__class = tmp_assign_source_49;
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_27:;
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
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ReadTimeout, tmp_assign_source_50 );
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

    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;

            exception_lineno = 64;

            goto try_except_handler_31;
        }

        tmp_tuple_element_8 = tmp_mvar_value_9;
        tmp_assign_source_51 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_assign_source_51, 0, tmp_tuple_element_8 );
        assert( tmp_class_creation_9__bases == NULL );
        tmp_class_creation_9__bases = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        {
            PyObject *tmp_set_locals_8;
            tmp_set_locals_8 = PyDict_New();
            locals_requests$exceptions_64 = tmp_set_locals_8;
        }
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_64, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_841f485de6d4157389a41ea63dc14155;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_64, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_52 = locals_requests$exceptions_64;
        Py_INCREF( tmp_assign_source_52 );
        goto try_return_handler_32;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_32:;
        Py_DECREF( locals_requests$exceptions_64 );
        locals_requests$exceptions_64 = NULL;
        goto outline_result_16;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_16:;
        assert( tmp_class_creation_9__class_dict == NULL );
        tmp_class_creation_9__class_dict = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
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


            exception_lineno = 64;

            goto try_except_handler_31;
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
        tmp_assign_source_53 = DICT_GET_ITEM( tmp_dict_name_18, tmp_key_name_18 );
        if ( tmp_assign_source_53 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;

            goto try_except_handler_31;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_subscribed_name_8;
            PyObject *tmp_subscript_name_8;
            CHECK_OBJECT( tmp_class_creation_9__bases );
            tmp_subscribed_name_8 = tmp_class_creation_9__bases;
            tmp_subscript_name_8 = const_int_0;
            tmp_assign_source_54 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_8, tmp_subscript_name_8, 0 );
            if ( tmp_assign_source_54 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;

                goto try_except_handler_31;
            }
            assert( tmp_select_metaclass_9__base == NULL );
            tmp_select_metaclass_9__base = tmp_assign_source_54;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( tmp_select_metaclass_9__base );
            tmp_source_name_8 = tmp_select_metaclass_9__base;
            tmp_assign_source_53 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_8 );
            if ( tmp_assign_source_53 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;

                goto try_except_handler_34;
            }
            goto try_return_handler_33;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_34:;
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
            tmp_assign_source_53 = BUILTIN_TYPE1( tmp_type_arg_8 );
            assert( !(tmp_assign_source_53 == NULL) );
            goto try_return_handler_33;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_33:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_9__base );
        Py_DECREF( tmp_select_metaclass_9__base );
        tmp_select_metaclass_9__base = NULL;

        goto outline_result_17;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_9__base );
        Py_DECREF( tmp_select_metaclass_9__base );
        tmp_select_metaclass_9__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_17:;
        condexpr_end_9:;
        assert( tmp_class_creation_9__metaclass == NULL );
        tmp_class_creation_9__metaclass = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_args_element_name_27;
        CHECK_OBJECT( tmp_class_creation_9__metaclass );
        tmp_called_name_9 = tmp_class_creation_9__metaclass;
        tmp_args_element_name_25 = const_str_plain_URLRequired;
        CHECK_OBJECT( tmp_class_creation_9__bases );
        tmp_args_element_name_26 = tmp_class_creation_9__bases;
        CHECK_OBJECT( tmp_class_creation_9__class_dict );
        tmp_args_element_name_27 = tmp_class_creation_9__class_dict;
        frame_eb2be7b9000d9b2769842bad7c617b57->m_frame.f_lineno = 64;
        {
            PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27 };
            tmp_assign_source_55 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_9, call_args );
        }

        if ( tmp_assign_source_55 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;

            goto try_except_handler_31;
        }
        assert( tmp_class_creation_9__class == NULL );
        tmp_class_creation_9__class = tmp_assign_source_55;
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_31:;
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
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT( tmp_class_creation_9__class );
        tmp_assign_source_56 = tmp_class_creation_9__class;
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_URLRequired, tmp_assign_source_56 );
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
        PyObject *tmp_assign_source_57;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_mvar_value_10;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;

            exception_lineno = 68;

            goto try_except_handler_35;
        }

        tmp_tuple_element_9 = tmp_mvar_value_10;
        tmp_assign_source_57 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_assign_source_57, 0, tmp_tuple_element_9 );
        assert( tmp_class_creation_10__bases == NULL );
        tmp_class_creation_10__bases = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        {
            PyObject *tmp_set_locals_9;
            tmp_set_locals_9 = PyDict_New();
            locals_requests$exceptions_68 = tmp_set_locals_9;
        }
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_68, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_30cf8cedfeac36936c731ede1cc0ad0e;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_68, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_58 = locals_requests$exceptions_68;
        Py_INCREF( tmp_assign_source_58 );
        goto try_return_handler_36;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_36:;
        Py_DECREF( locals_requests$exceptions_68 );
        locals_requests$exceptions_68 = NULL;
        goto outline_result_18;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_18:;
        assert( tmp_class_creation_10__class_dict == NULL );
        tmp_class_creation_10__class_dict = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_59;
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


            exception_lineno = 68;

            goto try_except_handler_35;
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
        tmp_assign_source_59 = DICT_GET_ITEM( tmp_dict_name_20, tmp_key_name_20 );
        if ( tmp_assign_source_59 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;

            goto try_except_handler_35;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_subscribed_name_9;
            PyObject *tmp_subscript_name_9;
            CHECK_OBJECT( tmp_class_creation_10__bases );
            tmp_subscribed_name_9 = tmp_class_creation_10__bases;
            tmp_subscript_name_9 = const_int_0;
            tmp_assign_source_60 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_9, tmp_subscript_name_9, 0 );
            if ( tmp_assign_source_60 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 68;

                goto try_except_handler_35;
            }
            assert( tmp_select_metaclass_10__base == NULL );
            tmp_select_metaclass_10__base = tmp_assign_source_60;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_9;
            CHECK_OBJECT( tmp_select_metaclass_10__base );
            tmp_source_name_9 = tmp_select_metaclass_10__base;
            tmp_assign_source_59 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_9 );
            if ( tmp_assign_source_59 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 68;

                goto try_except_handler_38;
            }
            goto try_return_handler_37;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_38:;
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
            tmp_assign_source_59 = BUILTIN_TYPE1( tmp_type_arg_9 );
            assert( !(tmp_assign_source_59 == NULL) );
            goto try_return_handler_37;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_37:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_10__base );
        Py_DECREF( tmp_select_metaclass_10__base );
        tmp_select_metaclass_10__base = NULL;

        goto outline_result_19;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_10__base );
        Py_DECREF( tmp_select_metaclass_10__base );
        tmp_select_metaclass_10__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_19:;
        condexpr_end_10:;
        assert( tmp_class_creation_10__metaclass == NULL );
        tmp_class_creation_10__metaclass = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_name_10;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_args_element_name_30;
        CHECK_OBJECT( tmp_class_creation_10__metaclass );
        tmp_called_name_10 = tmp_class_creation_10__metaclass;
        tmp_args_element_name_28 = const_str_plain_TooManyRedirects;
        CHECK_OBJECT( tmp_class_creation_10__bases );
        tmp_args_element_name_29 = tmp_class_creation_10__bases;
        CHECK_OBJECT( tmp_class_creation_10__class_dict );
        tmp_args_element_name_30 = tmp_class_creation_10__class_dict;
        frame_eb2be7b9000d9b2769842bad7c617b57->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = { tmp_args_element_name_28, tmp_args_element_name_29, tmp_args_element_name_30 };
            tmp_assign_source_61 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
        }

        if ( tmp_assign_source_61 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;

            goto try_except_handler_35;
        }
        assert( tmp_class_creation_10__class == NULL );
        tmp_class_creation_10__class = tmp_assign_source_61;
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_35:;
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
        PyObject *tmp_assign_source_62;
        CHECK_OBJECT( tmp_class_creation_10__class );
        tmp_assign_source_62 = tmp_class_creation_10__class;
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_TooManyRedirects, tmp_assign_source_62 );
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
        PyObject *tmp_assign_source_63;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_mvar_value_11;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;

            exception_lineno = 72;

            goto try_except_handler_39;
        }

        tmp_tuple_element_10 = tmp_mvar_value_11;
        tmp_assign_source_63 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_10 );
        PyTuple_SET_ITEM( tmp_assign_source_63, 0, tmp_tuple_element_10 );
        tmp_tuple_element_10 = PyExc_ValueError;
        Py_INCREF( tmp_tuple_element_10 );
        PyTuple_SET_ITEM( tmp_assign_source_63, 1, tmp_tuple_element_10 );
        assert( tmp_class_creation_11__bases == NULL );
        tmp_class_creation_11__bases = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        {
            PyObject *tmp_set_locals_10;
            tmp_set_locals_10 = PyDict_New();
            locals_requests$exceptions_72 = tmp_set_locals_10;
        }
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_72, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_c7a80113e8376f2f52f7ee120f1360d2;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_72, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_64 = locals_requests$exceptions_72;
        Py_INCREF( tmp_assign_source_64 );
        goto try_return_handler_40;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_40:;
        Py_DECREF( locals_requests$exceptions_72 );
        locals_requests$exceptions_72 = NULL;
        goto outline_result_20;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_20:;
        assert( tmp_class_creation_11__class_dict == NULL );
        tmp_class_creation_11__class_dict = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_65;
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


            exception_lineno = 72;

            goto try_except_handler_39;
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
        tmp_assign_source_65 = DICT_GET_ITEM( tmp_dict_name_22, tmp_key_name_22 );
        if ( tmp_assign_source_65 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_39;
        }
        goto condexpr_end_11;
        condexpr_false_11:;
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_subscribed_name_10;
            PyObject *tmp_subscript_name_10;
            CHECK_OBJECT( tmp_class_creation_11__bases );
            tmp_subscribed_name_10 = tmp_class_creation_11__bases;
            tmp_subscript_name_10 = const_int_0;
            tmp_assign_source_66 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_10, tmp_subscript_name_10, 0 );
            if ( tmp_assign_source_66 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_39;
            }
            assert( tmp_select_metaclass_11__base == NULL );
            tmp_select_metaclass_11__base = tmp_assign_source_66;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_10;
            CHECK_OBJECT( tmp_select_metaclass_11__base );
            tmp_source_name_10 = tmp_select_metaclass_11__base;
            tmp_assign_source_65 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_10 );
            if ( tmp_assign_source_65 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_42;
            }
            goto try_return_handler_41;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_42:;
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
            tmp_assign_source_65 = BUILTIN_TYPE1( tmp_type_arg_10 );
            assert( !(tmp_assign_source_65 == NULL) );
            goto try_return_handler_41;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_41:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_11__base );
        Py_DECREF( tmp_select_metaclass_11__base );
        tmp_select_metaclass_11__base = NULL;

        goto outline_result_21;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_11__base );
        Py_DECREF( tmp_select_metaclass_11__base );
        tmp_select_metaclass_11__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_21:;
        condexpr_end_11:;
        assert( tmp_class_creation_11__metaclass == NULL );
        tmp_class_creation_11__metaclass = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_name_11;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_args_element_name_33;
        CHECK_OBJECT( tmp_class_creation_11__metaclass );
        tmp_called_name_11 = tmp_class_creation_11__metaclass;
        tmp_args_element_name_31 = const_str_plain_MissingSchema;
        CHECK_OBJECT( tmp_class_creation_11__bases );
        tmp_args_element_name_32 = tmp_class_creation_11__bases;
        CHECK_OBJECT( tmp_class_creation_11__class_dict );
        tmp_args_element_name_33 = tmp_class_creation_11__class_dict;
        frame_eb2be7b9000d9b2769842bad7c617b57->m_frame.f_lineno = 72;
        {
            PyObject *call_args[] = { tmp_args_element_name_31, tmp_args_element_name_32, tmp_args_element_name_33 };
            tmp_assign_source_67 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_11, call_args );
        }

        if ( tmp_assign_source_67 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_39;
        }
        assert( tmp_class_creation_11__class == NULL );
        tmp_class_creation_11__class = tmp_assign_source_67;
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_39:;
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
        PyObject *tmp_assign_source_68;
        CHECK_OBJECT( tmp_class_creation_11__class );
        tmp_assign_source_68 = tmp_class_creation_11__class;
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_MissingSchema, tmp_assign_source_68 );
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
        PyObject *tmp_assign_source_69;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_mvar_value_12;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;

            exception_lineno = 76;

            goto try_except_handler_43;
        }

        tmp_tuple_element_11 = tmp_mvar_value_12;
        tmp_assign_source_69 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_assign_source_69, 0, tmp_tuple_element_11 );
        tmp_tuple_element_11 = PyExc_ValueError;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_assign_source_69, 1, tmp_tuple_element_11 );
        assert( tmp_class_creation_12__bases == NULL );
        tmp_class_creation_12__bases = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        {
            PyObject *tmp_set_locals_11;
            tmp_set_locals_11 = PyDict_New();
            locals_requests$exceptions_76 = tmp_set_locals_11;
        }
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_76, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_0689849403be684eb33eb3512cfc2389;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_76, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_70 = locals_requests$exceptions_76;
        Py_INCREF( tmp_assign_source_70 );
        goto try_return_handler_44;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_44:;
        Py_DECREF( locals_requests$exceptions_76 );
        locals_requests$exceptions_76 = NULL;
        goto outline_result_22;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_22:;
        assert( tmp_class_creation_12__class_dict == NULL );
        tmp_class_creation_12__class_dict = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
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


            exception_lineno = 76;

            goto try_except_handler_43;
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
        tmp_assign_source_71 = DICT_GET_ITEM( tmp_dict_name_24, tmp_key_name_24 );
        if ( tmp_assign_source_71 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_43;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        {
            PyObject *tmp_assign_source_72;
            PyObject *tmp_subscribed_name_11;
            PyObject *tmp_subscript_name_11;
            CHECK_OBJECT( tmp_class_creation_12__bases );
            tmp_subscribed_name_11 = tmp_class_creation_12__bases;
            tmp_subscript_name_11 = const_int_0;
            tmp_assign_source_72 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_11, tmp_subscript_name_11, 0 );
            if ( tmp_assign_source_72 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;

                goto try_except_handler_43;
            }
            assert( tmp_select_metaclass_12__base == NULL );
            tmp_select_metaclass_12__base = tmp_assign_source_72;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_11;
            CHECK_OBJECT( tmp_select_metaclass_12__base );
            tmp_source_name_11 = tmp_select_metaclass_12__base;
            tmp_assign_source_71 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_11 );
            if ( tmp_assign_source_71 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;

                goto try_except_handler_46;
            }
            goto try_return_handler_45;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_46:;
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
            tmp_assign_source_71 = BUILTIN_TYPE1( tmp_type_arg_11 );
            assert( !(tmp_assign_source_71 == NULL) );
            goto try_return_handler_45;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_45:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_12__base );
        Py_DECREF( tmp_select_metaclass_12__base );
        tmp_select_metaclass_12__base = NULL;

        goto outline_result_23;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_12__base );
        Py_DECREF( tmp_select_metaclass_12__base );
        tmp_select_metaclass_12__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_23:;
        condexpr_end_12:;
        assert( tmp_class_creation_12__metaclass == NULL );
        tmp_class_creation_12__metaclass = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_name_12;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_args_element_name_36;
        CHECK_OBJECT( tmp_class_creation_12__metaclass );
        tmp_called_name_12 = tmp_class_creation_12__metaclass;
        tmp_args_element_name_34 = const_str_plain_InvalidSchema;
        CHECK_OBJECT( tmp_class_creation_12__bases );
        tmp_args_element_name_35 = tmp_class_creation_12__bases;
        CHECK_OBJECT( tmp_class_creation_12__class_dict );
        tmp_args_element_name_36 = tmp_class_creation_12__class_dict;
        frame_eb2be7b9000d9b2769842bad7c617b57->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = { tmp_args_element_name_34, tmp_args_element_name_35, tmp_args_element_name_36 };
            tmp_assign_source_73 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_12, call_args );
        }

        if ( tmp_assign_source_73 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_43;
        }
        assert( tmp_class_creation_12__class == NULL );
        tmp_class_creation_12__class = tmp_assign_source_73;
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_43:;
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
        PyObject *tmp_assign_source_74;
        CHECK_OBJECT( tmp_class_creation_12__class );
        tmp_assign_source_74 = tmp_class_creation_12__class;
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidSchema, tmp_assign_source_74 );
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
        PyObject *tmp_assign_source_75;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_mvar_value_13;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;

            exception_lineno = 80;

            goto try_except_handler_47;
        }

        tmp_tuple_element_12 = tmp_mvar_value_13;
        tmp_assign_source_75 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_12 );
        PyTuple_SET_ITEM( tmp_assign_source_75, 0, tmp_tuple_element_12 );
        tmp_tuple_element_12 = PyExc_ValueError;
        Py_INCREF( tmp_tuple_element_12 );
        PyTuple_SET_ITEM( tmp_assign_source_75, 1, tmp_tuple_element_12 );
        assert( tmp_class_creation_13__bases == NULL );
        tmp_class_creation_13__bases = tmp_assign_source_75;
    }
    {
        PyObject *tmp_assign_source_76;
        {
            PyObject *tmp_set_locals_12;
            tmp_set_locals_12 = PyDict_New();
            locals_requests$exceptions_80 = tmp_set_locals_12;
        }
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_80, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_225332b778bf59fe5fff32593da4030a;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_80, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_76 = locals_requests$exceptions_80;
        Py_INCREF( tmp_assign_source_76 );
        goto try_return_handler_48;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_48:;
        Py_DECREF( locals_requests$exceptions_80 );
        locals_requests$exceptions_80 = NULL;
        goto outline_result_24;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_24:;
        assert( tmp_class_creation_13__class_dict == NULL );
        tmp_class_creation_13__class_dict = tmp_assign_source_76;
    }
    {
        PyObject *tmp_assign_source_77;
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


            exception_lineno = 80;

            goto try_except_handler_47;
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
        tmp_assign_source_77 = DICT_GET_ITEM( tmp_dict_name_26, tmp_key_name_26 );
        if ( tmp_assign_source_77 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;

            goto try_except_handler_47;
        }
        goto condexpr_end_13;
        condexpr_false_13:;
        {
            PyObject *tmp_assign_source_78;
            PyObject *tmp_subscribed_name_12;
            PyObject *tmp_subscript_name_12;
            CHECK_OBJECT( tmp_class_creation_13__bases );
            tmp_subscribed_name_12 = tmp_class_creation_13__bases;
            tmp_subscript_name_12 = const_int_0;
            tmp_assign_source_78 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_12, tmp_subscript_name_12, 0 );
            if ( tmp_assign_source_78 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;

                goto try_except_handler_47;
            }
            assert( tmp_select_metaclass_13__base == NULL );
            tmp_select_metaclass_13__base = tmp_assign_source_78;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_12;
            CHECK_OBJECT( tmp_select_metaclass_13__base );
            tmp_source_name_12 = tmp_select_metaclass_13__base;
            tmp_assign_source_77 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_12 );
            if ( tmp_assign_source_77 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;

                goto try_except_handler_50;
            }
            goto try_return_handler_49;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_50:;
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
            tmp_assign_source_77 = BUILTIN_TYPE1( tmp_type_arg_12 );
            assert( !(tmp_assign_source_77 == NULL) );
            goto try_return_handler_49;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_49:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_13__base );
        Py_DECREF( tmp_select_metaclass_13__base );
        tmp_select_metaclass_13__base = NULL;

        goto outline_result_25;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_13__base );
        Py_DECREF( tmp_select_metaclass_13__base );
        tmp_select_metaclass_13__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_25:;
        condexpr_end_13:;
        assert( tmp_class_creation_13__metaclass == NULL );
        tmp_class_creation_13__metaclass = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_name_13;
        PyObject *tmp_args_element_name_37;
        PyObject *tmp_args_element_name_38;
        PyObject *tmp_args_element_name_39;
        CHECK_OBJECT( tmp_class_creation_13__metaclass );
        tmp_called_name_13 = tmp_class_creation_13__metaclass;
        tmp_args_element_name_37 = const_str_plain_InvalidURL;
        CHECK_OBJECT( tmp_class_creation_13__bases );
        tmp_args_element_name_38 = tmp_class_creation_13__bases;
        CHECK_OBJECT( tmp_class_creation_13__class_dict );
        tmp_args_element_name_39 = tmp_class_creation_13__class_dict;
        frame_eb2be7b9000d9b2769842bad7c617b57->m_frame.f_lineno = 80;
        {
            PyObject *call_args[] = { tmp_args_element_name_37, tmp_args_element_name_38, tmp_args_element_name_39 };
            tmp_assign_source_79 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_13, call_args );
        }

        if ( tmp_assign_source_79 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;

            goto try_except_handler_47;
        }
        assert( tmp_class_creation_13__class == NULL );
        tmp_class_creation_13__class = tmp_assign_source_79;
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_47:;
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
        PyObject *tmp_assign_source_80;
        CHECK_OBJECT( tmp_class_creation_13__class );
        tmp_assign_source_80 = tmp_class_creation_13__class;
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidURL, tmp_assign_source_80 );
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
        PyObject *tmp_assign_source_81;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_mvar_value_14;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;

            exception_lineno = 84;

            goto try_except_handler_51;
        }

        tmp_tuple_element_13 = tmp_mvar_value_14;
        tmp_assign_source_81 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_13 );
        PyTuple_SET_ITEM( tmp_assign_source_81, 0, tmp_tuple_element_13 );
        tmp_tuple_element_13 = PyExc_ValueError;
        Py_INCREF( tmp_tuple_element_13 );
        PyTuple_SET_ITEM( tmp_assign_source_81, 1, tmp_tuple_element_13 );
        assert( tmp_class_creation_14__bases == NULL );
        tmp_class_creation_14__bases = tmp_assign_source_81;
    }
    {
        PyObject *tmp_assign_source_82;
        {
            PyObject *tmp_set_locals_13;
            tmp_set_locals_13 = PyDict_New();
            locals_requests$exceptions_84 = tmp_set_locals_13;
        }
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_84, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_4aae44da769befc767278be58ddca255;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_84, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_82 = locals_requests$exceptions_84;
        Py_INCREF( tmp_assign_source_82 );
        goto try_return_handler_52;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_52:;
        Py_DECREF( locals_requests$exceptions_84 );
        locals_requests$exceptions_84 = NULL;
        goto outline_result_26;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_26:;
        assert( tmp_class_creation_14__class_dict == NULL );
        tmp_class_creation_14__class_dict = tmp_assign_source_82;
    }
    {
        PyObject *tmp_assign_source_83;
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


            exception_lineno = 84;

            goto try_except_handler_51;
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
        tmp_assign_source_83 = DICT_GET_ITEM( tmp_dict_name_28, tmp_key_name_28 );
        if ( tmp_assign_source_83 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;

            goto try_except_handler_51;
        }
        goto condexpr_end_14;
        condexpr_false_14:;
        {
            PyObject *tmp_assign_source_84;
            PyObject *tmp_subscribed_name_13;
            PyObject *tmp_subscript_name_13;
            CHECK_OBJECT( tmp_class_creation_14__bases );
            tmp_subscribed_name_13 = tmp_class_creation_14__bases;
            tmp_subscript_name_13 = const_int_0;
            tmp_assign_source_84 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_13, tmp_subscript_name_13, 0 );
            if ( tmp_assign_source_84 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;

                goto try_except_handler_51;
            }
            assert( tmp_select_metaclass_14__base == NULL );
            tmp_select_metaclass_14__base = tmp_assign_source_84;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_13;
            CHECK_OBJECT( tmp_select_metaclass_14__base );
            tmp_source_name_13 = tmp_select_metaclass_14__base;
            tmp_assign_source_83 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_13 );
            if ( tmp_assign_source_83 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;

                goto try_except_handler_54;
            }
            goto try_return_handler_53;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_54:;
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
            tmp_assign_source_83 = BUILTIN_TYPE1( tmp_type_arg_13 );
            assert( !(tmp_assign_source_83 == NULL) );
            goto try_return_handler_53;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_53:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_14__base );
        Py_DECREF( tmp_select_metaclass_14__base );
        tmp_select_metaclass_14__base = NULL;

        goto outline_result_27;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_14__base );
        Py_DECREF( tmp_select_metaclass_14__base );
        tmp_select_metaclass_14__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_27:;
        condexpr_end_14:;
        assert( tmp_class_creation_14__metaclass == NULL );
        tmp_class_creation_14__metaclass = tmp_assign_source_83;
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_called_name_14;
        PyObject *tmp_args_element_name_40;
        PyObject *tmp_args_element_name_41;
        PyObject *tmp_args_element_name_42;
        CHECK_OBJECT( tmp_class_creation_14__metaclass );
        tmp_called_name_14 = tmp_class_creation_14__metaclass;
        tmp_args_element_name_40 = const_str_plain_InvalidHeader;
        CHECK_OBJECT( tmp_class_creation_14__bases );
        tmp_args_element_name_41 = tmp_class_creation_14__bases;
        CHECK_OBJECT( tmp_class_creation_14__class_dict );
        tmp_args_element_name_42 = tmp_class_creation_14__class_dict;
        frame_eb2be7b9000d9b2769842bad7c617b57->m_frame.f_lineno = 84;
        {
            PyObject *call_args[] = { tmp_args_element_name_40, tmp_args_element_name_41, tmp_args_element_name_42 };
            tmp_assign_source_85 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_14, call_args );
        }

        if ( tmp_assign_source_85 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;

            goto try_except_handler_51;
        }
        assert( tmp_class_creation_14__class == NULL );
        tmp_class_creation_14__class = tmp_assign_source_85;
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_51:;
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
        PyObject *tmp_assign_source_86;
        CHECK_OBJECT( tmp_class_creation_14__class );
        tmp_assign_source_86 = tmp_class_creation_14__class;
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidHeader, tmp_assign_source_86 );
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
        PyObject *tmp_assign_source_87;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_mvar_value_15;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidURL );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidURL );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "InvalidURL" );
            exception_tb = NULL;

            exception_lineno = 88;

            goto try_except_handler_55;
        }

        tmp_tuple_element_14 = tmp_mvar_value_15;
        tmp_assign_source_87 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_14 );
        PyTuple_SET_ITEM( tmp_assign_source_87, 0, tmp_tuple_element_14 );
        assert( tmp_class_creation_15__bases == NULL );
        tmp_class_creation_15__bases = tmp_assign_source_87;
    }
    {
        PyObject *tmp_assign_source_88;
        {
            PyObject *tmp_set_locals_14;
            tmp_set_locals_14 = PyDict_New();
            locals_requests$exceptions_88 = tmp_set_locals_14;
        }
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_88, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_3b2add8be5d440c36ae0b41135415fa9;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_88, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_88 = locals_requests$exceptions_88;
        Py_INCREF( tmp_assign_source_88 );
        goto try_return_handler_56;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_56:;
        Py_DECREF( locals_requests$exceptions_88 );
        locals_requests$exceptions_88 = NULL;
        goto outline_result_28;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_28:;
        assert( tmp_class_creation_15__class_dict == NULL );
        tmp_class_creation_15__class_dict = tmp_assign_source_88;
    }
    {
        PyObject *tmp_assign_source_89;
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


            exception_lineno = 88;

            goto try_except_handler_55;
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
        tmp_assign_source_89 = DICT_GET_ITEM( tmp_dict_name_30, tmp_key_name_30 );
        if ( tmp_assign_source_89 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;

            goto try_except_handler_55;
        }
        goto condexpr_end_15;
        condexpr_false_15:;
        {
            PyObject *tmp_assign_source_90;
            PyObject *tmp_subscribed_name_14;
            PyObject *tmp_subscript_name_14;
            CHECK_OBJECT( tmp_class_creation_15__bases );
            tmp_subscribed_name_14 = tmp_class_creation_15__bases;
            tmp_subscript_name_14 = const_int_0;
            tmp_assign_source_90 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_14, tmp_subscript_name_14, 0 );
            if ( tmp_assign_source_90 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;

                goto try_except_handler_55;
            }
            assert( tmp_select_metaclass_15__base == NULL );
            tmp_select_metaclass_15__base = tmp_assign_source_90;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_14;
            CHECK_OBJECT( tmp_select_metaclass_15__base );
            tmp_source_name_14 = tmp_select_metaclass_15__base;
            tmp_assign_source_89 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_14 );
            if ( tmp_assign_source_89 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;

                goto try_except_handler_58;
            }
            goto try_return_handler_57;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_58:;
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
            tmp_assign_source_89 = BUILTIN_TYPE1( tmp_type_arg_14 );
            assert( !(tmp_assign_source_89 == NULL) );
            goto try_return_handler_57;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_57:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_15__base );
        Py_DECREF( tmp_select_metaclass_15__base );
        tmp_select_metaclass_15__base = NULL;

        goto outline_result_29;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_15__base );
        Py_DECREF( tmp_select_metaclass_15__base );
        tmp_select_metaclass_15__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_29:;
        condexpr_end_15:;
        assert( tmp_class_creation_15__metaclass == NULL );
        tmp_class_creation_15__metaclass = tmp_assign_source_89;
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_name_15;
        PyObject *tmp_args_element_name_43;
        PyObject *tmp_args_element_name_44;
        PyObject *tmp_args_element_name_45;
        CHECK_OBJECT( tmp_class_creation_15__metaclass );
        tmp_called_name_15 = tmp_class_creation_15__metaclass;
        tmp_args_element_name_43 = const_str_plain_InvalidProxyURL;
        CHECK_OBJECT( tmp_class_creation_15__bases );
        tmp_args_element_name_44 = tmp_class_creation_15__bases;
        CHECK_OBJECT( tmp_class_creation_15__class_dict );
        tmp_args_element_name_45 = tmp_class_creation_15__class_dict;
        frame_eb2be7b9000d9b2769842bad7c617b57->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = { tmp_args_element_name_43, tmp_args_element_name_44, tmp_args_element_name_45 };
            tmp_assign_source_91 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_15, call_args );
        }

        if ( tmp_assign_source_91 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;

            goto try_except_handler_55;
        }
        assert( tmp_class_creation_15__class == NULL );
        tmp_class_creation_15__class = tmp_assign_source_91;
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_55:;
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
        PyObject *tmp_assign_source_92;
        CHECK_OBJECT( tmp_class_creation_15__class );
        tmp_assign_source_92 = tmp_class_creation_15__class;
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidProxyURL, tmp_assign_source_92 );
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
        PyObject *tmp_assign_source_93;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_mvar_value_16;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;

            exception_lineno = 92;

            goto try_except_handler_59;
        }

        tmp_tuple_element_15 = tmp_mvar_value_16;
        tmp_assign_source_93 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_15 );
        PyTuple_SET_ITEM( tmp_assign_source_93, 0, tmp_tuple_element_15 );
        assert( tmp_class_creation_16__bases == NULL );
        tmp_class_creation_16__bases = tmp_assign_source_93;
    }
    {
        PyObject *tmp_assign_source_94;
        {
            PyObject *tmp_set_locals_15;
            tmp_set_locals_15 = PyDict_New();
            locals_requests$exceptions_92 = tmp_set_locals_15;
        }
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_92, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_62b56f407a05bf4c50ea2ebf5d0c7b8a;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_92, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_94 = locals_requests$exceptions_92;
        Py_INCREF( tmp_assign_source_94 );
        goto try_return_handler_60;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_60:;
        Py_DECREF( locals_requests$exceptions_92 );
        locals_requests$exceptions_92 = NULL;
        goto outline_result_30;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_30:;
        assert( tmp_class_creation_16__class_dict == NULL );
        tmp_class_creation_16__class_dict = tmp_assign_source_94;
    }
    {
        PyObject *tmp_assign_source_95;
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


            exception_lineno = 92;

            goto try_except_handler_59;
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
        tmp_assign_source_95 = DICT_GET_ITEM( tmp_dict_name_32, tmp_key_name_32 );
        if ( tmp_assign_source_95 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;

            goto try_except_handler_59;
        }
        goto condexpr_end_16;
        condexpr_false_16:;
        {
            PyObject *tmp_assign_source_96;
            PyObject *tmp_subscribed_name_15;
            PyObject *tmp_subscript_name_15;
            CHECK_OBJECT( tmp_class_creation_16__bases );
            tmp_subscribed_name_15 = tmp_class_creation_16__bases;
            tmp_subscript_name_15 = const_int_0;
            tmp_assign_source_96 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_15, tmp_subscript_name_15, 0 );
            if ( tmp_assign_source_96 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;

                goto try_except_handler_59;
            }
            assert( tmp_select_metaclass_16__base == NULL );
            tmp_select_metaclass_16__base = tmp_assign_source_96;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_15;
            CHECK_OBJECT( tmp_select_metaclass_16__base );
            tmp_source_name_15 = tmp_select_metaclass_16__base;
            tmp_assign_source_95 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_15 );
            if ( tmp_assign_source_95 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;

                goto try_except_handler_62;
            }
            goto try_return_handler_61;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_62:;
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
            tmp_assign_source_95 = BUILTIN_TYPE1( tmp_type_arg_15 );
            assert( !(tmp_assign_source_95 == NULL) );
            goto try_return_handler_61;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_61:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_16__base );
        Py_DECREF( tmp_select_metaclass_16__base );
        tmp_select_metaclass_16__base = NULL;

        goto outline_result_31;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_16__base );
        Py_DECREF( tmp_select_metaclass_16__base );
        tmp_select_metaclass_16__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_31:;
        condexpr_end_16:;
        assert( tmp_class_creation_16__metaclass == NULL );
        tmp_class_creation_16__metaclass = tmp_assign_source_95;
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_called_name_16;
        PyObject *tmp_args_element_name_46;
        PyObject *tmp_args_element_name_47;
        PyObject *tmp_args_element_name_48;
        CHECK_OBJECT( tmp_class_creation_16__metaclass );
        tmp_called_name_16 = tmp_class_creation_16__metaclass;
        tmp_args_element_name_46 = const_str_plain_ChunkedEncodingError;
        CHECK_OBJECT( tmp_class_creation_16__bases );
        tmp_args_element_name_47 = tmp_class_creation_16__bases;
        CHECK_OBJECT( tmp_class_creation_16__class_dict );
        tmp_args_element_name_48 = tmp_class_creation_16__class_dict;
        frame_eb2be7b9000d9b2769842bad7c617b57->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = { tmp_args_element_name_46, tmp_args_element_name_47, tmp_args_element_name_48 };
            tmp_assign_source_97 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_16, call_args );
        }

        if ( tmp_assign_source_97 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;

            goto try_except_handler_59;
        }
        assert( tmp_class_creation_16__class == NULL );
        tmp_class_creation_16__class = tmp_assign_source_97;
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_59:;
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
        PyObject *tmp_assign_source_98;
        CHECK_OBJECT( tmp_class_creation_16__class );
        tmp_assign_source_98 = tmp_class_creation_16__class;
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ChunkedEncodingError, tmp_assign_source_98 );
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
        PyObject *tmp_assign_source_99;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_mvar_value_18;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;

            exception_lineno = 96;

            goto try_except_handler_63;
        }

        tmp_tuple_element_16 = tmp_mvar_value_17;
        tmp_assign_source_99 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_16 );
        PyTuple_SET_ITEM( tmp_assign_source_99, 0, tmp_tuple_element_16 );
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_BaseHTTPError );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseHTTPError );
        }

        if ( tmp_mvar_value_18 == NULL )
        {
            Py_DECREF( tmp_assign_source_99 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "BaseHTTPError" );
            exception_tb = NULL;

            exception_lineno = 96;

            goto try_except_handler_63;
        }

        tmp_tuple_element_16 = tmp_mvar_value_18;
        Py_INCREF( tmp_tuple_element_16 );
        PyTuple_SET_ITEM( tmp_assign_source_99, 1, tmp_tuple_element_16 );
        assert( tmp_class_creation_17__bases == NULL );
        tmp_class_creation_17__bases = tmp_assign_source_99;
    }
    {
        PyObject *tmp_assign_source_100;
        {
            PyObject *tmp_set_locals_16;
            tmp_set_locals_16 = PyDict_New();
            locals_requests$exceptions_96 = tmp_set_locals_16;
        }
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_96, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_e91f0a06d295e9fdd4c3972666eefa40;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_96, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_100 = locals_requests$exceptions_96;
        Py_INCREF( tmp_assign_source_100 );
        goto try_return_handler_64;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_64:;
        Py_DECREF( locals_requests$exceptions_96 );
        locals_requests$exceptions_96 = NULL;
        goto outline_result_32;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_32:;
        assert( tmp_class_creation_17__class_dict == NULL );
        tmp_class_creation_17__class_dict = tmp_assign_source_100;
    }
    {
        PyObject *tmp_assign_source_101;
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


            exception_lineno = 96;

            goto try_except_handler_63;
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
        tmp_assign_source_101 = DICT_GET_ITEM( tmp_dict_name_34, tmp_key_name_34 );
        if ( tmp_assign_source_101 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;

            goto try_except_handler_63;
        }
        goto condexpr_end_17;
        condexpr_false_17:;
        {
            PyObject *tmp_assign_source_102;
            PyObject *tmp_subscribed_name_16;
            PyObject *tmp_subscript_name_16;
            CHECK_OBJECT( tmp_class_creation_17__bases );
            tmp_subscribed_name_16 = tmp_class_creation_17__bases;
            tmp_subscript_name_16 = const_int_0;
            tmp_assign_source_102 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_16, tmp_subscript_name_16, 0 );
            if ( tmp_assign_source_102 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 96;

                goto try_except_handler_63;
            }
            assert( tmp_select_metaclass_17__base == NULL );
            tmp_select_metaclass_17__base = tmp_assign_source_102;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_16;
            CHECK_OBJECT( tmp_select_metaclass_17__base );
            tmp_source_name_16 = tmp_select_metaclass_17__base;
            tmp_assign_source_101 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_16 );
            if ( tmp_assign_source_101 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 96;

                goto try_except_handler_66;
            }
            goto try_return_handler_65;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_66:;
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
            tmp_assign_source_101 = BUILTIN_TYPE1( tmp_type_arg_16 );
            assert( !(tmp_assign_source_101 == NULL) );
            goto try_return_handler_65;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_65:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_17__base );
        Py_DECREF( tmp_select_metaclass_17__base );
        tmp_select_metaclass_17__base = NULL;

        goto outline_result_33;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_17__base );
        Py_DECREF( tmp_select_metaclass_17__base );
        tmp_select_metaclass_17__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_33:;
        condexpr_end_17:;
        assert( tmp_class_creation_17__metaclass == NULL );
        tmp_class_creation_17__metaclass = tmp_assign_source_101;
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_called_name_17;
        PyObject *tmp_args_element_name_49;
        PyObject *tmp_args_element_name_50;
        PyObject *tmp_args_element_name_51;
        CHECK_OBJECT( tmp_class_creation_17__metaclass );
        tmp_called_name_17 = tmp_class_creation_17__metaclass;
        tmp_args_element_name_49 = const_str_plain_ContentDecodingError;
        CHECK_OBJECT( tmp_class_creation_17__bases );
        tmp_args_element_name_50 = tmp_class_creation_17__bases;
        CHECK_OBJECT( tmp_class_creation_17__class_dict );
        tmp_args_element_name_51 = tmp_class_creation_17__class_dict;
        frame_eb2be7b9000d9b2769842bad7c617b57->m_frame.f_lineno = 96;
        {
            PyObject *call_args[] = { tmp_args_element_name_49, tmp_args_element_name_50, tmp_args_element_name_51 };
            tmp_assign_source_103 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_17, call_args );
        }

        if ( tmp_assign_source_103 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;

            goto try_except_handler_63;
        }
        assert( tmp_class_creation_17__class == NULL );
        tmp_class_creation_17__class = tmp_assign_source_103;
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_63:;
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
        PyObject *tmp_assign_source_104;
        CHECK_OBJECT( tmp_class_creation_17__class );
        tmp_assign_source_104 = tmp_class_creation_17__class;
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ContentDecodingError, tmp_assign_source_104 );
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
        PyObject *tmp_assign_source_105;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_mvar_value_19;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;

            exception_lineno = 100;

            goto try_except_handler_67;
        }

        tmp_tuple_element_17 = tmp_mvar_value_19;
        tmp_assign_source_105 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_17 );
        PyTuple_SET_ITEM( tmp_assign_source_105, 0, tmp_tuple_element_17 );
        tmp_tuple_element_17 = PyExc_TypeError;
        Py_INCREF( tmp_tuple_element_17 );
        PyTuple_SET_ITEM( tmp_assign_source_105, 1, tmp_tuple_element_17 );
        assert( tmp_class_creation_18__bases == NULL );
        tmp_class_creation_18__bases = tmp_assign_source_105;
    }
    {
        PyObject *tmp_assign_source_106;
        {
            PyObject *tmp_set_locals_17;
            tmp_set_locals_17 = PyDict_New();
            locals_requests$exceptions_100 = tmp_set_locals_17;
        }
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_100, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_c1f4dcdf3195a093500cff5b8859ecc9;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_100, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_106 = locals_requests$exceptions_100;
        Py_INCREF( tmp_assign_source_106 );
        goto try_return_handler_68;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_68:;
        Py_DECREF( locals_requests$exceptions_100 );
        locals_requests$exceptions_100 = NULL;
        goto outline_result_34;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_34:;
        assert( tmp_class_creation_18__class_dict == NULL );
        tmp_class_creation_18__class_dict = tmp_assign_source_106;
    }
    {
        PyObject *tmp_assign_source_107;
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


            exception_lineno = 100;

            goto try_except_handler_67;
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
        tmp_assign_source_107 = DICT_GET_ITEM( tmp_dict_name_36, tmp_key_name_36 );
        if ( tmp_assign_source_107 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;

            goto try_except_handler_67;
        }
        goto condexpr_end_18;
        condexpr_false_18:;
        {
            PyObject *tmp_assign_source_108;
            PyObject *tmp_subscribed_name_17;
            PyObject *tmp_subscript_name_17;
            CHECK_OBJECT( tmp_class_creation_18__bases );
            tmp_subscribed_name_17 = tmp_class_creation_18__bases;
            tmp_subscript_name_17 = const_int_0;
            tmp_assign_source_108 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_17, tmp_subscript_name_17, 0 );
            if ( tmp_assign_source_108 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 100;

                goto try_except_handler_67;
            }
            assert( tmp_select_metaclass_18__base == NULL );
            tmp_select_metaclass_18__base = tmp_assign_source_108;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_17;
            CHECK_OBJECT( tmp_select_metaclass_18__base );
            tmp_source_name_17 = tmp_select_metaclass_18__base;
            tmp_assign_source_107 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_17 );
            if ( tmp_assign_source_107 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 100;

                goto try_except_handler_70;
            }
            goto try_return_handler_69;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_70:;
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
            tmp_assign_source_107 = BUILTIN_TYPE1( tmp_type_arg_17 );
            assert( !(tmp_assign_source_107 == NULL) );
            goto try_return_handler_69;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_69:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_18__base );
        Py_DECREF( tmp_select_metaclass_18__base );
        tmp_select_metaclass_18__base = NULL;

        goto outline_result_35;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_18__base );
        Py_DECREF( tmp_select_metaclass_18__base );
        tmp_select_metaclass_18__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_35:;
        condexpr_end_18:;
        assert( tmp_class_creation_18__metaclass == NULL );
        tmp_class_creation_18__metaclass = tmp_assign_source_107;
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_called_name_18;
        PyObject *tmp_args_element_name_52;
        PyObject *tmp_args_element_name_53;
        PyObject *tmp_args_element_name_54;
        CHECK_OBJECT( tmp_class_creation_18__metaclass );
        tmp_called_name_18 = tmp_class_creation_18__metaclass;
        tmp_args_element_name_52 = const_str_plain_StreamConsumedError;
        CHECK_OBJECT( tmp_class_creation_18__bases );
        tmp_args_element_name_53 = tmp_class_creation_18__bases;
        CHECK_OBJECT( tmp_class_creation_18__class_dict );
        tmp_args_element_name_54 = tmp_class_creation_18__class_dict;
        frame_eb2be7b9000d9b2769842bad7c617b57->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = { tmp_args_element_name_52, tmp_args_element_name_53, tmp_args_element_name_54 };
            tmp_assign_source_109 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_18, call_args );
        }

        if ( tmp_assign_source_109 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;

            goto try_except_handler_67;
        }
        assert( tmp_class_creation_18__class == NULL );
        tmp_class_creation_18__class = tmp_assign_source_109;
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_67:;
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
        PyObject *tmp_assign_source_110;
        CHECK_OBJECT( tmp_class_creation_18__class );
        tmp_assign_source_110 = tmp_class_creation_18__class;
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_StreamConsumedError, tmp_assign_source_110 );
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
        PyObject *tmp_assign_source_111;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_mvar_value_20;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_20 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;

            exception_lineno = 104;

            goto try_except_handler_71;
        }

        tmp_tuple_element_18 = tmp_mvar_value_20;
        tmp_assign_source_111 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_18 );
        PyTuple_SET_ITEM( tmp_assign_source_111, 0, tmp_tuple_element_18 );
        assert( tmp_class_creation_19__bases == NULL );
        tmp_class_creation_19__bases = tmp_assign_source_111;
    }
    {
        PyObject *tmp_assign_source_112;
        {
            PyObject *tmp_set_locals_18;
            tmp_set_locals_18 = PyDict_New();
            locals_requests$exceptions_104 = tmp_set_locals_18;
        }
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_104, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_b3f79f0ff88ef53ddf2012488144e436;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_104, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_112 = locals_requests$exceptions_104;
        Py_INCREF( tmp_assign_source_112 );
        goto try_return_handler_72;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_72:;
        Py_DECREF( locals_requests$exceptions_104 );
        locals_requests$exceptions_104 = NULL;
        goto outline_result_36;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_36:;
        assert( tmp_class_creation_19__class_dict == NULL );
        tmp_class_creation_19__class_dict = tmp_assign_source_112;
    }
    {
        PyObject *tmp_assign_source_113;
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


            exception_lineno = 104;

            goto try_except_handler_71;
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
        tmp_assign_source_113 = DICT_GET_ITEM( tmp_dict_name_38, tmp_key_name_38 );
        if ( tmp_assign_source_113 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_71;
        }
        goto condexpr_end_19;
        condexpr_false_19:;
        {
            PyObject *tmp_assign_source_114;
            PyObject *tmp_subscribed_name_18;
            PyObject *tmp_subscript_name_18;
            CHECK_OBJECT( tmp_class_creation_19__bases );
            tmp_subscribed_name_18 = tmp_class_creation_19__bases;
            tmp_subscript_name_18 = const_int_0;
            tmp_assign_source_114 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_18, tmp_subscript_name_18, 0 );
            if ( tmp_assign_source_114 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;

                goto try_except_handler_71;
            }
            assert( tmp_select_metaclass_19__base == NULL );
            tmp_select_metaclass_19__base = tmp_assign_source_114;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_18;
            CHECK_OBJECT( tmp_select_metaclass_19__base );
            tmp_source_name_18 = tmp_select_metaclass_19__base;
            tmp_assign_source_113 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_18 );
            if ( tmp_assign_source_113 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;

                goto try_except_handler_74;
            }
            goto try_return_handler_73;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_74:;
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
            tmp_assign_source_113 = BUILTIN_TYPE1( tmp_type_arg_18 );
            assert( !(tmp_assign_source_113 == NULL) );
            goto try_return_handler_73;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_73:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_19__base );
        Py_DECREF( tmp_select_metaclass_19__base );
        tmp_select_metaclass_19__base = NULL;

        goto outline_result_37;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_19__base );
        Py_DECREF( tmp_select_metaclass_19__base );
        tmp_select_metaclass_19__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_37:;
        condexpr_end_19:;
        assert( tmp_class_creation_19__metaclass == NULL );
        tmp_class_creation_19__metaclass = tmp_assign_source_113;
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_called_name_19;
        PyObject *tmp_args_element_name_55;
        PyObject *tmp_args_element_name_56;
        PyObject *tmp_args_element_name_57;
        CHECK_OBJECT( tmp_class_creation_19__metaclass );
        tmp_called_name_19 = tmp_class_creation_19__metaclass;
        tmp_args_element_name_55 = const_str_plain_RetryError;
        CHECK_OBJECT( tmp_class_creation_19__bases );
        tmp_args_element_name_56 = tmp_class_creation_19__bases;
        CHECK_OBJECT( tmp_class_creation_19__class_dict );
        tmp_args_element_name_57 = tmp_class_creation_19__class_dict;
        frame_eb2be7b9000d9b2769842bad7c617b57->m_frame.f_lineno = 104;
        {
            PyObject *call_args[] = { tmp_args_element_name_55, tmp_args_element_name_56, tmp_args_element_name_57 };
            tmp_assign_source_115 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_19, call_args );
        }

        if ( tmp_assign_source_115 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_71;
        }
        assert( tmp_class_creation_19__class == NULL );
        tmp_class_creation_19__class = tmp_assign_source_115;
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_71:;
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
        PyObject *tmp_assign_source_116;
        CHECK_OBJECT( tmp_class_creation_19__class );
        tmp_assign_source_116 = tmp_class_creation_19__class;
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RetryError, tmp_assign_source_116 );
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
        PyObject *tmp_assign_source_117;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_mvar_value_21;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
            exception_tb = NULL;

            exception_lineno = 108;

            goto try_except_handler_75;
        }

        tmp_tuple_element_19 = tmp_mvar_value_21;
        tmp_assign_source_117 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_19 );
        PyTuple_SET_ITEM( tmp_assign_source_117, 0, tmp_tuple_element_19 );
        assert( tmp_class_creation_20__bases == NULL );
        tmp_class_creation_20__bases = tmp_assign_source_117;
    }
    {
        PyObject *tmp_assign_source_118;
        {
            PyObject *tmp_set_locals_19;
            tmp_set_locals_19 = PyDict_New();
            locals_requests$exceptions_108 = tmp_set_locals_19;
        }
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_108, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_382efa1ab11fb4a35860fc2596b633ab;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_108, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_118 = locals_requests$exceptions_108;
        Py_INCREF( tmp_assign_source_118 );
        goto try_return_handler_76;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_76:;
        Py_DECREF( locals_requests$exceptions_108 );
        locals_requests$exceptions_108 = NULL;
        goto outline_result_38;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_38:;
        assert( tmp_class_creation_20__class_dict == NULL );
        tmp_class_creation_20__class_dict = tmp_assign_source_118;
    }
    {
        PyObject *tmp_assign_source_119;
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


            exception_lineno = 108;

            goto try_except_handler_75;
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
        tmp_assign_source_119 = DICT_GET_ITEM( tmp_dict_name_40, tmp_key_name_40 );
        if ( tmp_assign_source_119 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;

            goto try_except_handler_75;
        }
        goto condexpr_end_20;
        condexpr_false_20:;
        {
            PyObject *tmp_assign_source_120;
            PyObject *tmp_subscribed_name_19;
            PyObject *tmp_subscript_name_19;
            CHECK_OBJECT( tmp_class_creation_20__bases );
            tmp_subscribed_name_19 = tmp_class_creation_20__bases;
            tmp_subscript_name_19 = const_int_0;
            tmp_assign_source_120 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_19, tmp_subscript_name_19, 0 );
            if ( tmp_assign_source_120 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;

                goto try_except_handler_75;
            }
            assert( tmp_select_metaclass_20__base == NULL );
            tmp_select_metaclass_20__base = tmp_assign_source_120;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_19;
            CHECK_OBJECT( tmp_select_metaclass_20__base );
            tmp_source_name_19 = tmp_select_metaclass_20__base;
            tmp_assign_source_119 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_19 );
            if ( tmp_assign_source_119 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;

                goto try_except_handler_78;
            }
            goto try_return_handler_77;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_78:;
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
            tmp_assign_source_119 = BUILTIN_TYPE1( tmp_type_arg_19 );
            assert( !(tmp_assign_source_119 == NULL) );
            goto try_return_handler_77;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_77:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_20__base );
        Py_DECREF( tmp_select_metaclass_20__base );
        tmp_select_metaclass_20__base = NULL;

        goto outline_result_39;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_20__base );
        Py_DECREF( tmp_select_metaclass_20__base );
        tmp_select_metaclass_20__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_39:;
        condexpr_end_20:;
        assert( tmp_class_creation_20__metaclass == NULL );
        tmp_class_creation_20__metaclass = tmp_assign_source_119;
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_called_name_20;
        PyObject *tmp_args_element_name_58;
        PyObject *tmp_args_element_name_59;
        PyObject *tmp_args_element_name_60;
        CHECK_OBJECT( tmp_class_creation_20__metaclass );
        tmp_called_name_20 = tmp_class_creation_20__metaclass;
        tmp_args_element_name_58 = const_str_plain_UnrewindableBodyError;
        CHECK_OBJECT( tmp_class_creation_20__bases );
        tmp_args_element_name_59 = tmp_class_creation_20__bases;
        CHECK_OBJECT( tmp_class_creation_20__class_dict );
        tmp_args_element_name_60 = tmp_class_creation_20__class_dict;
        frame_eb2be7b9000d9b2769842bad7c617b57->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = { tmp_args_element_name_58, tmp_args_element_name_59, tmp_args_element_name_60 };
            tmp_assign_source_121 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_20, call_args );
        }

        if ( tmp_assign_source_121 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;

            goto try_except_handler_75;
        }
        assert( tmp_class_creation_20__class == NULL );
        tmp_class_creation_20__class = tmp_assign_source_121;
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_75:;
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
        PyObject *tmp_assign_source_122;
        CHECK_OBJECT( tmp_class_creation_20__class );
        tmp_assign_source_122 = tmp_class_creation_20__class;
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_UnrewindableBodyError, tmp_assign_source_122 );
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
        PyObject *tmp_assign_source_123;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_mvar_value_22;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_Warning );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
        }

        if ( tmp_mvar_value_22 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "Warning" );
            exception_tb = NULL;

            exception_lineno = 114;

            goto try_except_handler_79;
        }

        tmp_tuple_element_20 = tmp_mvar_value_22;
        tmp_assign_source_123 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_20 );
        PyTuple_SET_ITEM( tmp_assign_source_123, 0, tmp_tuple_element_20 );
        assert( tmp_class_creation_21__bases == NULL );
        tmp_class_creation_21__bases = tmp_assign_source_123;
    }
    {
        PyObject *tmp_assign_source_124;
        {
            PyObject *tmp_set_locals_20;
            tmp_set_locals_20 = PyDict_New();
            locals_requests$exceptions_114 = tmp_set_locals_20;
        }
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_114, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_231982acca444de8f23c0288db53eaef;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_114, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_124 = locals_requests$exceptions_114;
        Py_INCREF( tmp_assign_source_124 );
        goto try_return_handler_80;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_80:;
        Py_DECREF( locals_requests$exceptions_114 );
        locals_requests$exceptions_114 = NULL;
        goto outline_result_40;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_40:;
        assert( tmp_class_creation_21__class_dict == NULL );
        tmp_class_creation_21__class_dict = tmp_assign_source_124;
    }
    {
        PyObject *tmp_assign_source_125;
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


            exception_lineno = 114;

            goto try_except_handler_79;
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
        tmp_assign_source_125 = DICT_GET_ITEM( tmp_dict_name_42, tmp_key_name_42 );
        if ( tmp_assign_source_125 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;

            goto try_except_handler_79;
        }
        goto condexpr_end_21;
        condexpr_false_21:;
        {
            PyObject *tmp_assign_source_126;
            PyObject *tmp_subscribed_name_20;
            PyObject *tmp_subscript_name_20;
            CHECK_OBJECT( tmp_class_creation_21__bases );
            tmp_subscribed_name_20 = tmp_class_creation_21__bases;
            tmp_subscript_name_20 = const_int_0;
            tmp_assign_source_126 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_20, tmp_subscript_name_20, 0 );
            if ( tmp_assign_source_126 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 114;

                goto try_except_handler_79;
            }
            assert( tmp_select_metaclass_21__base == NULL );
            tmp_select_metaclass_21__base = tmp_assign_source_126;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_20;
            CHECK_OBJECT( tmp_select_metaclass_21__base );
            tmp_source_name_20 = tmp_select_metaclass_21__base;
            tmp_assign_source_125 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_20 );
            if ( tmp_assign_source_125 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 114;

                goto try_except_handler_82;
            }
            goto try_return_handler_81;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_82:;
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
            tmp_assign_source_125 = BUILTIN_TYPE1( tmp_type_arg_20 );
            assert( !(tmp_assign_source_125 == NULL) );
            goto try_return_handler_81;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_81:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_21__base );
        Py_DECREF( tmp_select_metaclass_21__base );
        tmp_select_metaclass_21__base = NULL;

        goto outline_result_41;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_21__base );
        Py_DECREF( tmp_select_metaclass_21__base );
        tmp_select_metaclass_21__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_41:;
        condexpr_end_21:;
        assert( tmp_class_creation_21__metaclass == NULL );
        tmp_class_creation_21__metaclass = tmp_assign_source_125;
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_called_name_21;
        PyObject *tmp_args_element_name_61;
        PyObject *tmp_args_element_name_62;
        PyObject *tmp_args_element_name_63;
        CHECK_OBJECT( tmp_class_creation_21__metaclass );
        tmp_called_name_21 = tmp_class_creation_21__metaclass;
        tmp_args_element_name_61 = const_str_plain_RequestsWarning;
        CHECK_OBJECT( tmp_class_creation_21__bases );
        tmp_args_element_name_62 = tmp_class_creation_21__bases;
        CHECK_OBJECT( tmp_class_creation_21__class_dict );
        tmp_args_element_name_63 = tmp_class_creation_21__class_dict;
        frame_eb2be7b9000d9b2769842bad7c617b57->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = { tmp_args_element_name_61, tmp_args_element_name_62, tmp_args_element_name_63 };
            tmp_assign_source_127 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_21, call_args );
        }

        if ( tmp_assign_source_127 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;

            goto try_except_handler_79;
        }
        assert( tmp_class_creation_21__class == NULL );
        tmp_class_creation_21__class = tmp_assign_source_127;
    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_79:;
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
        PyObject *tmp_assign_source_128;
        CHECK_OBJECT( tmp_class_creation_21__class );
        tmp_assign_source_128 = tmp_class_creation_21__class;
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestsWarning, tmp_assign_source_128 );
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
        PyObject *tmp_assign_source_129;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_mvar_value_24;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestsWarning );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsWarning );
        }

        if ( tmp_mvar_value_23 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestsWarning" );
            exception_tb = NULL;

            exception_lineno = 119;

            goto try_except_handler_83;
        }

        tmp_tuple_element_21 = tmp_mvar_value_23;
        tmp_assign_source_129 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_21 );
        PyTuple_SET_ITEM( tmp_assign_source_129, 0, tmp_tuple_element_21 );
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
        }

        if ( tmp_mvar_value_24 == NULL )
        {
            Py_DECREF( tmp_assign_source_129 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "DeprecationWarning" );
            exception_tb = NULL;

            exception_lineno = 119;

            goto try_except_handler_83;
        }

        tmp_tuple_element_21 = tmp_mvar_value_24;
        Py_INCREF( tmp_tuple_element_21 );
        PyTuple_SET_ITEM( tmp_assign_source_129, 1, tmp_tuple_element_21 );
        assert( tmp_class_creation_22__bases == NULL );
        tmp_class_creation_22__bases = tmp_assign_source_129;
    }
    {
        PyObject *tmp_assign_source_130;
        {
            PyObject *tmp_set_locals_21;
            tmp_set_locals_21 = PyDict_New();
            locals_requests$exceptions_119 = tmp_set_locals_21;
        }
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_119, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_c5ea8ff3c07b97205cc4ec7f24ad27a2;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_119, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_130 = locals_requests$exceptions_119;
        Py_INCREF( tmp_assign_source_130 );
        goto try_return_handler_84;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_84:;
        Py_DECREF( locals_requests$exceptions_119 );
        locals_requests$exceptions_119 = NULL;
        goto outline_result_42;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_42:;
        assert( tmp_class_creation_22__class_dict == NULL );
        tmp_class_creation_22__class_dict = tmp_assign_source_130;
    }
    {
        PyObject *tmp_assign_source_131;
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


            exception_lineno = 119;

            goto try_except_handler_83;
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
        tmp_assign_source_131 = DICT_GET_ITEM( tmp_dict_name_44, tmp_key_name_44 );
        if ( tmp_assign_source_131 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;

            goto try_except_handler_83;
        }
        goto condexpr_end_22;
        condexpr_false_22:;
        {
            PyObject *tmp_assign_source_132;
            PyObject *tmp_subscribed_name_21;
            PyObject *tmp_subscript_name_21;
            CHECK_OBJECT( tmp_class_creation_22__bases );
            tmp_subscribed_name_21 = tmp_class_creation_22__bases;
            tmp_subscript_name_21 = const_int_0;
            tmp_assign_source_132 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_21, tmp_subscript_name_21, 0 );
            if ( tmp_assign_source_132 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 119;

                goto try_except_handler_83;
            }
            assert( tmp_select_metaclass_22__base == NULL );
            tmp_select_metaclass_22__base = tmp_assign_source_132;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_21;
            CHECK_OBJECT( tmp_select_metaclass_22__base );
            tmp_source_name_21 = tmp_select_metaclass_22__base;
            tmp_assign_source_131 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_21 );
            if ( tmp_assign_source_131 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 119;

                goto try_except_handler_86;
            }
            goto try_return_handler_85;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_86:;
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
            tmp_assign_source_131 = BUILTIN_TYPE1( tmp_type_arg_21 );
            assert( !(tmp_assign_source_131 == NULL) );
            goto try_return_handler_85;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_85:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_22__base );
        Py_DECREF( tmp_select_metaclass_22__base );
        tmp_select_metaclass_22__base = NULL;

        goto outline_result_43;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_22__base );
        Py_DECREF( tmp_select_metaclass_22__base );
        tmp_select_metaclass_22__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_43:;
        condexpr_end_22:;
        assert( tmp_class_creation_22__metaclass == NULL );
        tmp_class_creation_22__metaclass = tmp_assign_source_131;
    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_called_name_22;
        PyObject *tmp_args_element_name_64;
        PyObject *tmp_args_element_name_65;
        PyObject *tmp_args_element_name_66;
        CHECK_OBJECT( tmp_class_creation_22__metaclass );
        tmp_called_name_22 = tmp_class_creation_22__metaclass;
        tmp_args_element_name_64 = const_str_plain_FileModeWarning;
        CHECK_OBJECT( tmp_class_creation_22__bases );
        tmp_args_element_name_65 = tmp_class_creation_22__bases;
        CHECK_OBJECT( tmp_class_creation_22__class_dict );
        tmp_args_element_name_66 = tmp_class_creation_22__class_dict;
        frame_eb2be7b9000d9b2769842bad7c617b57->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = { tmp_args_element_name_64, tmp_args_element_name_65, tmp_args_element_name_66 };
            tmp_assign_source_133 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_22, call_args );
        }

        if ( tmp_assign_source_133 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;

            goto try_except_handler_83;
        }
        assert( tmp_class_creation_22__class == NULL );
        tmp_class_creation_22__class = tmp_assign_source_133;
    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_83:;
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
        PyObject *tmp_assign_source_134;
        CHECK_OBJECT( tmp_class_creation_22__class );
        tmp_assign_source_134 = tmp_class_creation_22__class;
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_FileModeWarning, tmp_assign_source_134 );
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
        PyObject *tmp_assign_source_135;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_mvar_value_25;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestsWarning );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsWarning );
        }

        if ( tmp_mvar_value_25 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestsWarning" );
            exception_tb = NULL;

            exception_lineno = 124;

            goto try_except_handler_87;
        }

        tmp_tuple_element_22 = tmp_mvar_value_25;
        tmp_assign_source_135 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_22 );
        PyTuple_SET_ITEM( tmp_assign_source_135, 0, tmp_tuple_element_22 );
        assert( tmp_class_creation_23__bases == NULL );
        tmp_class_creation_23__bases = tmp_assign_source_135;
    }
    {
        PyObject *tmp_assign_source_136;
        {
            PyObject *tmp_set_locals_22;
            tmp_set_locals_22 = PyDict_New();
            locals_requests$exceptions_124 = tmp_set_locals_22;
        }
        tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_124, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_3a035decbb1d48c6b204b28e42512076;
        tmp_res = PyDict_SetItem( locals_requests$exceptions_124, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_136 = locals_requests$exceptions_124;
        Py_INCREF( tmp_assign_source_136 );
        goto try_return_handler_88;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_88:;
        Py_DECREF( locals_requests$exceptions_124 );
        locals_requests$exceptions_124 = NULL;
        goto outline_result_44;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_44:;
        assert( tmp_class_creation_23__class_dict == NULL );
        tmp_class_creation_23__class_dict = tmp_assign_source_136;
    }
    {
        PyObject *tmp_assign_source_137;
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


            exception_lineno = 124;

            goto try_except_handler_87;
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
        tmp_assign_source_137 = DICT_GET_ITEM( tmp_dict_name_46, tmp_key_name_46 );
        if ( tmp_assign_source_137 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;

            goto try_except_handler_87;
        }
        goto condexpr_end_23;
        condexpr_false_23:;
        {
            PyObject *tmp_assign_source_138;
            PyObject *tmp_subscribed_name_22;
            PyObject *tmp_subscript_name_22;
            CHECK_OBJECT( tmp_class_creation_23__bases );
            tmp_subscribed_name_22 = tmp_class_creation_23__bases;
            tmp_subscript_name_22 = const_int_0;
            tmp_assign_source_138 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_22, tmp_subscript_name_22, 0 );
            if ( tmp_assign_source_138 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;

                goto try_except_handler_87;
            }
            assert( tmp_select_metaclass_23__base == NULL );
            tmp_select_metaclass_23__base = tmp_assign_source_138;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_22;
            CHECK_OBJECT( tmp_select_metaclass_23__base );
            tmp_source_name_22 = tmp_select_metaclass_23__base;
            tmp_assign_source_137 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_22 );
            if ( tmp_assign_source_137 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;

                goto try_except_handler_90;
            }
            goto try_return_handler_89;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_90:;
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
            tmp_assign_source_137 = BUILTIN_TYPE1( tmp_type_arg_22 );
            assert( !(tmp_assign_source_137 == NULL) );
            goto try_return_handler_89;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_89:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_23__base );
        Py_DECREF( tmp_select_metaclass_23__base );
        tmp_select_metaclass_23__base = NULL;

        goto outline_result_45;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_23__base );
        Py_DECREF( tmp_select_metaclass_23__base );
        tmp_select_metaclass_23__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_result_45:;
        condexpr_end_23:;
        assert( tmp_class_creation_23__metaclass == NULL );
        tmp_class_creation_23__metaclass = tmp_assign_source_137;
    }
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_called_name_23;
        PyObject *tmp_args_element_name_67;
        PyObject *tmp_args_element_name_68;
        PyObject *tmp_args_element_name_69;
        CHECK_OBJECT( tmp_class_creation_23__metaclass );
        tmp_called_name_23 = tmp_class_creation_23__metaclass;
        tmp_args_element_name_67 = const_str_plain_RequestsDependencyWarning;
        CHECK_OBJECT( tmp_class_creation_23__bases );
        tmp_args_element_name_68 = tmp_class_creation_23__bases;
        CHECK_OBJECT( tmp_class_creation_23__class_dict );
        tmp_args_element_name_69 = tmp_class_creation_23__class_dict;
        frame_eb2be7b9000d9b2769842bad7c617b57->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = { tmp_args_element_name_67, tmp_args_element_name_68, tmp_args_element_name_69 };
            tmp_assign_source_139 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_23, call_args );
        }

        if ( tmp_assign_source_139 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;

            goto try_except_handler_87;
        }
        assert( tmp_class_creation_23__class == NULL );
        tmp_class_creation_23__class = tmp_assign_source_139;
    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_87:;
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb2be7b9000d9b2769842bad7c617b57 );
#endif
    popFrameStack();

    assertFrameObject( frame_eb2be7b9000d9b2769842bad7c617b57 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb2be7b9000d9b2769842bad7c617b57 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eb2be7b9000d9b2769842bad7c617b57, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eb2be7b9000d9b2769842bad7c617b57->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eb2be7b9000d9b2769842bad7c617b57, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_140;
        CHECK_OBJECT( tmp_class_creation_23__class );
        tmp_assign_source_140 = tmp_class_creation_23__class;
        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestsDependencyWarning, tmp_assign_source_140 );
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


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_requests$exceptions );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
