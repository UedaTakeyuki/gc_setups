/* Generated code for Python module 'asn1crypto._teletex_codec'
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

/* The "_module_asn1crypto$_teletex_codec" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_asn1crypto$_teletex_codec;
PyDictObject *moduledict_asn1crypto$_teletex_codec;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_register;
extern PyObject *const_unicode_plain_strict;
extern PyObject *const_str_plain_CodecInfo;
static PyObject *const_unicode_digest_69d90d3f398e999ba1cda77b2248e8a6;
static PyObject *const_str_digest_4c961b927fab80b59ab43173569fa320;
extern PyObject *const_str_plain_Codec;
extern PyObject *const_str_plain_StreamWriter;
static PyObject *const_tuple_str_plain_self_str_plain_input__str_plain_errors_tuple;
extern PyObject *const_str_plain_codecs;
extern PyObject *const_str_plain_encode;
static PyObject *const_str_plain_TeletexStreamReader;
extern PyObject *const_str_plain_decode;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_teletex_search_function;
extern PyObject *const_str_plain_StreamReader;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_incrementalencoder;
extern PyObject *const_str_plain_streamwriter;
extern PyObject *const_str_plain___doc__;
static PyObject *const_unicode_digest_31cca222e854a1d03cf5ba54992b8728;
static PyObject *const_unicode_digest_b835e43376af35552cd1cb2fd5a7a2b8;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_final;
static PyObject *const_tuple_str_plain_self_str_plain_input__str_plain_final_tuple;
static PyObject *const_str_plain_DECODING_TABLE;
extern PyObject *const_str_plain_streamreader;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_charmap_build;
extern PyObject *const_str_plain_errors;
static PyObject *const_str_plain_TeletexIncrementalDecoder;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_a2c2306f691f3841858b2665d47f12f5;
static PyObject *const_str_plain_TeletexStreamWriter;
static PyObject *const_str_plain_ENCODING_TABLE;
extern PyObject *const_unicode_plain_teletex;
extern PyObject *const_str_plain_False;
extern PyObject *const_tuple_unicode_plain_strict_tuple;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_TeletexIncrementalEncoder;
static PyObject *const_unicode_digest_676735eb2d342f7d56c64f97114cdbb6;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain_input_;
extern PyObject *const_str_plain_division;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_str_plain_IncrementalDecoder;
static PyObject *const_str_digest_df04ab0c86140ef59ab4f2b19c29a6e8;
extern PyObject *const_str_plain_charmap_encode;
extern PyObject *const_str_plain_IncrementalEncoder;
extern PyObject *const_tuple_str_plain_name_tuple;
extern PyObject *const_str_plain_charmap_decode;
static PyObject *const_str_plain_TeletexCodec;
extern PyObject *const_str_plain_incrementaldecoder;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_unicode_digest_69d90d3f398e999ba1cda77b2248e8a6 = UNSTREAM_UNICODE( &constant_bin[ 98562 ], 427 );
    const_str_digest_4c961b927fab80b59ab43173569fa320 = UNSTREAM_STRING( &constant_bin[ 98989 ], 25, 0 );
    const_tuple_str_plain_self_str_plain_input__str_plain_errors_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_input__str_plain_errors_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_input_ = UNSTREAM_STRING( &constant_bin[ 28890 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_input__str_plain_errors_tuple, 1, const_str_plain_input_ ); Py_INCREF( const_str_plain_input_ );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_input__str_plain_errors_tuple, 2, const_str_plain_errors ); Py_INCREF( const_str_plain_errors );
    const_str_plain_TeletexStreamReader = UNSTREAM_STRING( &constant_bin[ 99014 ], 19, 1 );
    const_str_plain_teletex_search_function = UNSTREAM_STRING( &constant_bin[ 99033 ], 23, 1 );
    const_unicode_digest_31cca222e854a1d03cf5ba54992b8728 = UNSTREAM_UNICODE( &constant_bin[ 99056 ], 87 );
    const_unicode_digest_b835e43376af35552cd1cb2fd5a7a2b8 = UNSTREAM_UNICODE( &constant_bin[ 99143 ], 37 );
    const_tuple_str_plain_self_str_plain_input__str_plain_final_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_input__str_plain_final_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_input__str_plain_final_tuple, 1, const_str_plain_input_ ); Py_INCREF( const_str_plain_input_ );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_input__str_plain_final_tuple, 2, const_str_plain_final ); Py_INCREF( const_str_plain_final );
    const_str_plain_DECODING_TABLE = UNSTREAM_STRING( &constant_bin[ 99180 ], 14, 1 );
    const_str_plain_TeletexIncrementalDecoder = UNSTREAM_STRING( &constant_bin[ 99194 ], 25, 1 );
    const_str_digest_a2c2306f691f3841858b2665d47f12f5 = UNSTREAM_STRING( &constant_bin[ 99219 ], 61, 0 );
    const_str_plain_TeletexStreamWriter = UNSTREAM_STRING( &constant_bin[ 99280 ], 19, 1 );
    const_str_plain_ENCODING_TABLE = UNSTREAM_STRING( &constant_bin[ 99299 ], 14, 1 );
    const_str_plain_TeletexIncrementalEncoder = UNSTREAM_STRING( &constant_bin[ 99313 ], 25, 1 );
    const_unicode_digest_676735eb2d342f7d56c64f97114cdbb6 = UNSTREAM_UNICODE( &constant_bin[ 99338 ], 79 );
    const_str_digest_df04ab0c86140ef59ab4f2b19c29a6e8 = UNSTREAM_STRING( &constant_bin[ 99417 ], 34, 0 );
    const_str_plain_TeletexCodec = UNSTREAM_STRING( &constant_bin[ 99451 ], 12, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_asn1crypto$_teletex_codec( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_89f6af06f2fe88cf4c0fcc589ee1e748;
static PyCodeObject *codeobj_764cf48ea317b2ae6fc254b33b70b889;
static PyCodeObject *codeobj_9615a32fe7a527bab28298b2ad662537;
static PyCodeObject *codeobj_9665ca39b8131e001dbaa5ab4d6fb82c;
static PyCodeObject *codeobj_694b8dd52c483b54ae65f29022137661;
static PyCodeObject *codeobj_15248aa0d4dee7a568fa910308eba2f9;
static PyCodeObject *codeobj_4fc93bcd751c4304612da3e94df07b5f;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_a2c2306f691f3841858b2665d47f12f5;
    codeobj_89f6af06f2fe88cf4c0fcc589ee1e748 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_df04ab0c86140ef59ab4f2b19c29a6e8, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_764cf48ea317b2ae6fc254b33b70b889 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decode, 19, const_tuple_str_plain_self_str_plain_input__str_plain_errors_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9615a32fe7a527bab28298b2ad662537 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decode, 31, const_tuple_str_plain_self_str_plain_input__str_plain_final_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9665ca39b8131e001dbaa5ab4d6fb82c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encode, 16, const_tuple_str_plain_self_str_plain_input__str_plain_errors_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_694b8dd52c483b54ae65f29022137661 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encode, 25, const_tuple_str_plain_self_str_plain_input__str_plain_final_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_15248aa0d4dee7a568fa910308eba2f9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_register, 64, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4fc93bcd751c4304612da3e94df07b5f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_teletex_search_function, 45, const_tuple_str_plain_name_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_asn1crypto$_teletex_codec$$$function_1_encode( PyObject *defaults );


static PyObject *MAKE_FUNCTION_asn1crypto$_teletex_codec$$$function_2_decode( PyObject *defaults );


static PyObject *MAKE_FUNCTION_asn1crypto$_teletex_codec$$$function_3_encode( PyObject *defaults );


static PyObject *MAKE_FUNCTION_asn1crypto$_teletex_codec$$$function_4_decode( PyObject *defaults );


static PyObject *MAKE_FUNCTION_asn1crypto$_teletex_codec$$$function_5_teletex_search_function(  );


static PyObject *MAKE_FUNCTION_asn1crypto$_teletex_codec$$$function_6_register(  );


// The module function definitions.
static PyObject *impl_asn1crypto$_teletex_codec$$$function_1_encode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_input_ = python_pars[ 1 ];
    PyObject *par_errors = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_9665ca39b8131e001dbaa5ab4d6fb82c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9665ca39b8131e001dbaa5ab4d6fb82c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9665ca39b8131e001dbaa5ab4d6fb82c, codeobj_9665ca39b8131e001dbaa5ab4d6fb82c, module_asn1crypto$_teletex_codec, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9665ca39b8131e001dbaa5ab4d6fb82c = cache_frame_9665ca39b8131e001dbaa5ab4d6fb82c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9665ca39b8131e001dbaa5ab4d6fb82c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9665ca39b8131e001dbaa5ab4d6fb82c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_codecs );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "codecs" );
            exception_tb = NULL;

            exception_lineno = 17;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_charmap_encode );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_input_ );
        tmp_args_element_name_1 = par_input_;
        CHECK_OBJECT( par_errors );
        tmp_args_element_name_2 = par_errors;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_ENCODING_TABLE );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ENCODING_TABLE );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ENCODING_TABLE" );
            exception_tb = NULL;

            exception_lineno = 17;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_2;
        frame_9665ca39b8131e001dbaa5ab4d6fb82c->m_frame.f_lineno = 17;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9665ca39b8131e001dbaa5ab4d6fb82c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9665ca39b8131e001dbaa5ab4d6fb82c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9665ca39b8131e001dbaa5ab4d6fb82c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9665ca39b8131e001dbaa5ab4d6fb82c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9665ca39b8131e001dbaa5ab4d6fb82c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9665ca39b8131e001dbaa5ab4d6fb82c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9665ca39b8131e001dbaa5ab4d6fb82c,
        type_description_1,
        par_self,
        par_input_,
        par_errors
    );


    // Release cached frame.
    if ( frame_9665ca39b8131e001dbaa5ab4d6fb82c == cache_frame_9665ca39b8131e001dbaa5ab4d6fb82c )
    {
        Py_DECREF( frame_9665ca39b8131e001dbaa5ab4d6fb82c );
    }
    cache_frame_9665ca39b8131e001dbaa5ab4d6fb82c = NULL;

    assertFrameObject( frame_9665ca39b8131e001dbaa5ab4d6fb82c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec$$$function_1_encode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_errors );
    Py_DECREF( par_errors );
    par_errors = NULL;

    CHECK_OBJECT( (PyObject *)par_input_ );
    Py_DECREF( par_input_ );
    par_input_ = NULL;

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

    CHECK_OBJECT( (PyObject *)par_errors );
    Py_DECREF( par_errors );
    par_errors = NULL;

    CHECK_OBJECT( (PyObject *)par_input_ );
    Py_DECREF( par_input_ );
    par_input_ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec$$$function_1_encode );
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


static PyObject *impl_asn1crypto$_teletex_codec$$$function_2_decode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_input_ = python_pars[ 1 ];
    PyObject *par_errors = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_764cf48ea317b2ae6fc254b33b70b889;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_764cf48ea317b2ae6fc254b33b70b889 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_764cf48ea317b2ae6fc254b33b70b889, codeobj_764cf48ea317b2ae6fc254b33b70b889, module_asn1crypto$_teletex_codec, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_764cf48ea317b2ae6fc254b33b70b889 = cache_frame_764cf48ea317b2ae6fc254b33b70b889;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_764cf48ea317b2ae6fc254b33b70b889 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_764cf48ea317b2ae6fc254b33b70b889 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_codecs );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "codecs" );
            exception_tb = NULL;

            exception_lineno = 20;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_charmap_decode );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_input_ );
        tmp_args_element_name_1 = par_input_;
        CHECK_OBJECT( par_errors );
        tmp_args_element_name_2 = par_errors;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_DECODING_TABLE );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DECODING_TABLE );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "DECODING_TABLE" );
            exception_tb = NULL;

            exception_lineno = 20;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_2;
        frame_764cf48ea317b2ae6fc254b33b70b889->m_frame.f_lineno = 20;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_764cf48ea317b2ae6fc254b33b70b889 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_764cf48ea317b2ae6fc254b33b70b889 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_764cf48ea317b2ae6fc254b33b70b889 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_764cf48ea317b2ae6fc254b33b70b889, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_764cf48ea317b2ae6fc254b33b70b889->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_764cf48ea317b2ae6fc254b33b70b889, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_764cf48ea317b2ae6fc254b33b70b889,
        type_description_1,
        par_self,
        par_input_,
        par_errors
    );


    // Release cached frame.
    if ( frame_764cf48ea317b2ae6fc254b33b70b889 == cache_frame_764cf48ea317b2ae6fc254b33b70b889 )
    {
        Py_DECREF( frame_764cf48ea317b2ae6fc254b33b70b889 );
    }
    cache_frame_764cf48ea317b2ae6fc254b33b70b889 = NULL;

    assertFrameObject( frame_764cf48ea317b2ae6fc254b33b70b889 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec$$$function_2_decode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_errors );
    Py_DECREF( par_errors );
    par_errors = NULL;

    CHECK_OBJECT( (PyObject *)par_input_ );
    Py_DECREF( par_input_ );
    par_input_ = NULL;

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

    CHECK_OBJECT( (PyObject *)par_errors );
    Py_DECREF( par_errors );
    par_errors = NULL;

    CHECK_OBJECT( (PyObject *)par_input_ );
    Py_DECREF( par_input_ );
    par_input_ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec$$$function_2_decode );
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


static PyObject *impl_asn1crypto$_teletex_codec$$$function_3_encode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_input_ = python_pars[ 1 ];
    PyObject *par_final = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_694b8dd52c483b54ae65f29022137661;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_694b8dd52c483b54ae65f29022137661 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_694b8dd52c483b54ae65f29022137661, codeobj_694b8dd52c483b54ae65f29022137661, module_asn1crypto$_teletex_codec, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_694b8dd52c483b54ae65f29022137661 = cache_frame_694b8dd52c483b54ae65f29022137661;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_694b8dd52c483b54ae65f29022137661 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_694b8dd52c483b54ae65f29022137661 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_codecs );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "codecs" );
            exception_tb = NULL;

            exception_lineno = 26;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_charmap_encode );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_input_ );
        tmp_args_element_name_1 = par_input_;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_errors );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 26;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_ENCODING_TABLE );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ENCODING_TABLE );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ENCODING_TABLE" );
            exception_tb = NULL;

            exception_lineno = 26;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_2;
        frame_694b8dd52c483b54ae65f29022137661->m_frame.f_lineno = 26;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_694b8dd52c483b54ae65f29022137661 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_694b8dd52c483b54ae65f29022137661 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_694b8dd52c483b54ae65f29022137661 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_694b8dd52c483b54ae65f29022137661, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_694b8dd52c483b54ae65f29022137661->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_694b8dd52c483b54ae65f29022137661, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_694b8dd52c483b54ae65f29022137661,
        type_description_1,
        par_self,
        par_input_,
        par_final
    );


    // Release cached frame.
    if ( frame_694b8dd52c483b54ae65f29022137661 == cache_frame_694b8dd52c483b54ae65f29022137661 )
    {
        Py_DECREF( frame_694b8dd52c483b54ae65f29022137661 );
    }
    cache_frame_694b8dd52c483b54ae65f29022137661 = NULL;

    assertFrameObject( frame_694b8dd52c483b54ae65f29022137661 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec$$$function_3_encode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_input_ );
    Py_DECREF( par_input_ );
    par_input_ = NULL;

    CHECK_OBJECT( (PyObject *)par_final );
    Py_DECREF( par_final );
    par_final = NULL;

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

    CHECK_OBJECT( (PyObject *)par_input_ );
    Py_DECREF( par_input_ );
    par_input_ = NULL;

    CHECK_OBJECT( (PyObject *)par_final );
    Py_DECREF( par_final );
    par_final = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec$$$function_3_encode );
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


static PyObject *impl_asn1crypto$_teletex_codec$$$function_4_decode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_input_ = python_pars[ 1 ];
    PyObject *par_final = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_9615a32fe7a527bab28298b2ad662537;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9615a32fe7a527bab28298b2ad662537 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9615a32fe7a527bab28298b2ad662537, codeobj_9615a32fe7a527bab28298b2ad662537, module_asn1crypto$_teletex_codec, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9615a32fe7a527bab28298b2ad662537 = cache_frame_9615a32fe7a527bab28298b2ad662537;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9615a32fe7a527bab28298b2ad662537 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9615a32fe7a527bab28298b2ad662537 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_codecs );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "codecs" );
            exception_tb = NULL;

            exception_lineno = 32;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_charmap_decode );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_input_ );
        tmp_args_element_name_1 = par_input_;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_errors );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 32;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_DECODING_TABLE );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DECODING_TABLE );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "DECODING_TABLE" );
            exception_tb = NULL;

            exception_lineno = 32;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_2;
        frame_9615a32fe7a527bab28298b2ad662537->m_frame.f_lineno = 32;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9615a32fe7a527bab28298b2ad662537 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9615a32fe7a527bab28298b2ad662537 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9615a32fe7a527bab28298b2ad662537 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9615a32fe7a527bab28298b2ad662537, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9615a32fe7a527bab28298b2ad662537->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9615a32fe7a527bab28298b2ad662537, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9615a32fe7a527bab28298b2ad662537,
        type_description_1,
        par_self,
        par_input_,
        par_final
    );


    // Release cached frame.
    if ( frame_9615a32fe7a527bab28298b2ad662537 == cache_frame_9615a32fe7a527bab28298b2ad662537 )
    {
        Py_DECREF( frame_9615a32fe7a527bab28298b2ad662537 );
    }
    cache_frame_9615a32fe7a527bab28298b2ad662537 = NULL;

    assertFrameObject( frame_9615a32fe7a527bab28298b2ad662537 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec$$$function_4_decode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_input_ );
    Py_DECREF( par_input_ );
    par_input_ = NULL;

    CHECK_OBJECT( (PyObject *)par_final );
    Py_DECREF( par_final );
    par_final = NULL;

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

    CHECK_OBJECT( (PyObject *)par_input_ );
    Py_DECREF( par_input_ );
    par_input_ = NULL;

    CHECK_OBJECT( (PyObject *)par_final );
    Py_DECREF( par_final );
    par_final = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec$$$function_4_decode );
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


static PyObject *impl_asn1crypto$_teletex_codec$$$function_5_teletex_search_function( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_4fc93bcd751c4304612da3e94df07b5f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4fc93bcd751c4304612da3e94df07b5f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4fc93bcd751c4304612da3e94df07b5f, codeobj_4fc93bcd751c4304612da3e94df07b5f, module_asn1crypto$_teletex_codec, sizeof(void *) );
    frame_4fc93bcd751c4304612da3e94df07b5f = cache_frame_4fc93bcd751c4304612da3e94df07b5f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4fc93bcd751c4304612da3e94df07b5f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4fc93bcd751c4304612da3e94df07b5f ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_name );
        tmp_compexpr_left_1 = par_name;
        tmp_compexpr_right_1 = const_unicode_plain_teletex;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
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
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_called_name_3;
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
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_codecs );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "codecs" );
            exception_tb = NULL;

            exception_lineno = 53;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_CodecInfo );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = const_unicode_plain_teletex;
        tmp_dict_key_1 = const_str_plain_name;
        tmp_kw_name_1 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_TeletexCodec );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TeletexCodec );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "TeletexCodec" );
            exception_tb = NULL;

            exception_lineno = 55;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        frame_4fc93bcd751c4304612da3e94df07b5f->m_frame.f_lineno = 55;
        tmp_source_name_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 55;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_encode );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 55;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = const_str_plain_encode;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_TeletexCodec );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TeletexCodec );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "TeletexCodec" );
            exception_tb = NULL;

            exception_lineno = 56;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        frame_4fc93bcd751c4304612da3e94df07b5f->m_frame.f_lineno = 56;
        tmp_source_name_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 56;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_decode );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 56;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_3 = const_str_plain_decode;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_TeletexIncrementalEncoder );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TeletexIncrementalEncoder );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "TeletexIncrementalEncoder" );
            exception_tb = NULL;

            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_4 = tmp_mvar_value_4;
        tmp_dict_key_4 = const_str_plain_incrementalencoder;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_TeletexIncrementalDecoder );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TeletexIncrementalDecoder );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "TeletexIncrementalDecoder" );
            exception_tb = NULL;

            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_5 = tmp_mvar_value_5;
        tmp_dict_key_5 = const_str_plain_incrementaldecoder;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_TeletexStreamReader );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TeletexStreamReader );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "TeletexStreamReader" );
            exception_tb = NULL;

            exception_lineno = 59;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_6 = tmp_mvar_value_6;
        tmp_dict_key_6 = const_str_plain_streamreader;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_TeletexStreamWriter );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TeletexStreamWriter );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "TeletexStreamWriter" );
            exception_tb = NULL;

            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_7 = tmp_mvar_value_7;
        tmp_dict_key_7 = const_str_plain_streamwriter;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        frame_4fc93bcd751c4304612da3e94df07b5f->m_frame.f_lineno = 53;
        tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4fc93bcd751c4304612da3e94df07b5f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4fc93bcd751c4304612da3e94df07b5f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4fc93bcd751c4304612da3e94df07b5f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4fc93bcd751c4304612da3e94df07b5f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4fc93bcd751c4304612da3e94df07b5f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4fc93bcd751c4304612da3e94df07b5f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4fc93bcd751c4304612da3e94df07b5f,
        type_description_1,
        par_name
    );


    // Release cached frame.
    if ( frame_4fc93bcd751c4304612da3e94df07b5f == cache_frame_4fc93bcd751c4304612da3e94df07b5f )
    {
        Py_DECREF( frame_4fc93bcd751c4304612da3e94df07b5f );
    }
    cache_frame_4fc93bcd751c4304612da3e94df07b5f = NULL;

    assertFrameObject( frame_4fc93bcd751c4304612da3e94df07b5f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec$$$function_5_teletex_search_function );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
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
    NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec$$$function_5_teletex_search_function );
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


static PyObject *impl_asn1crypto$_teletex_codec$$$function_6_register( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_15248aa0d4dee7a568fa910308eba2f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_15248aa0d4dee7a568fa910308eba2f9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_15248aa0d4dee7a568fa910308eba2f9, codeobj_15248aa0d4dee7a568fa910308eba2f9, module_asn1crypto$_teletex_codec, 0 );
    frame_15248aa0d4dee7a568fa910308eba2f9 = cache_frame_15248aa0d4dee7a568fa910308eba2f9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_15248aa0d4dee7a568fa910308eba2f9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_15248aa0d4dee7a568fa910308eba2f9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_codecs );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "codecs" );
            exception_tb = NULL;

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_register );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_teletex_search_function );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_teletex_search_function );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "teletex_search_function" );
            exception_tb = NULL;

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_2;
        frame_15248aa0d4dee7a568fa910308eba2f9->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_15248aa0d4dee7a568fa910308eba2f9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_15248aa0d4dee7a568fa910308eba2f9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_15248aa0d4dee7a568fa910308eba2f9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_15248aa0d4dee7a568fa910308eba2f9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_15248aa0d4dee7a568fa910308eba2f9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_15248aa0d4dee7a568fa910308eba2f9,
        type_description_1
    );


    // Release cached frame.
    if ( frame_15248aa0d4dee7a568fa910308eba2f9 == cache_frame_15248aa0d4dee7a568fa910308eba2f9 )
    {
        Py_DECREF( frame_15248aa0d4dee7a568fa910308eba2f9 );
    }
    cache_frame_15248aa0d4dee7a568fa910308eba2f9 = NULL;

    assertFrameObject( frame_15248aa0d4dee7a568fa910308eba2f9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec$$$function_6_register );
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



static PyObject *MAKE_FUNCTION_asn1crypto$_teletex_codec$$$function_1_encode( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_asn1crypto$_teletex_codec$$$function_1_encode,
        const_str_plain_encode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9665ca39b8131e001dbaa5ab4d6fb82c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_asn1crypto$_teletex_codec,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_asn1crypto$_teletex_codec$$$function_2_decode( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_asn1crypto$_teletex_codec$$$function_2_decode,
        const_str_plain_decode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_764cf48ea317b2ae6fc254b33b70b889,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_asn1crypto$_teletex_codec,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_asn1crypto$_teletex_codec$$$function_3_encode( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_asn1crypto$_teletex_codec$$$function_3_encode,
        const_str_plain_encode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_694b8dd52c483b54ae65f29022137661,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_asn1crypto$_teletex_codec,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_asn1crypto$_teletex_codec$$$function_4_decode( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_asn1crypto$_teletex_codec$$$function_4_decode,
        const_str_plain_decode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9615a32fe7a527bab28298b2ad662537,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_asn1crypto$_teletex_codec,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_asn1crypto$_teletex_codec$$$function_5_teletex_search_function(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_asn1crypto$_teletex_codec$$$function_5_teletex_search_function,
        const_str_plain_teletex_search_function,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4fc93bcd751c4304612da3e94df07b5f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_asn1crypto$_teletex_codec,
        const_unicode_digest_676735eb2d342f7d56c64f97114cdbb6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_asn1crypto$_teletex_codec$$$function_6_register(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_asn1crypto$_teletex_codec$$$function_6_register,
        const_str_plain_register,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_15248aa0d4dee7a568fa910308eba2f9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_asn1crypto$_teletex_codec,
        const_unicode_digest_b835e43376af35552cd1cb2fd5a7a2b8,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_asn1crypto$_teletex_codec =
{
    PyModuleDef_HEAD_INIT,
    "asn1crypto._teletex_codec",
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

MOD_INIT_DECL( asn1crypto$_teletex_codec )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_asn1crypto$_teletex_codec );
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
    puts("asn1crypto._teletex_codec: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("asn1crypto._teletex_codec: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("asn1crypto._teletex_codec: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initasn1crypto$_teletex_codec" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_asn1crypto$_teletex_codec = Py_InitModule4(
        "asn1crypto._teletex_codec",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_asn1crypto$_teletex_codec = PyModule_Create( &mdef_asn1crypto$_teletex_codec );
#endif

    moduledict_asn1crypto$_teletex_codec = MODULE_DICT( module_asn1crypto$_teletex_codec );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_asn1crypto$_teletex_codec,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_asn1crypto$_teletex_codec,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_asn1crypto$_teletex_codec,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_asn1crypto$_teletex_codec );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_4c961b927fab80b59ab43173569fa320, module_asn1crypto$_teletex_codec );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
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
    PyObject *tmp_select_metaclass_1__base = NULL;
    PyObject *tmp_select_metaclass_2__base = NULL;
    PyObject *tmp_select_metaclass_3__base = NULL;
    PyObject *tmp_select_metaclass_4__base = NULL;
    PyObject *tmp_select_metaclass_5__base = NULL;
    struct Nuitka_FrameObject *frame_89f6af06f2fe88cf4c0fcc589ee1e748;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *locals_asn1crypto$_teletex_codec_14 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_asn1crypto$_teletex_codec_23 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *locals_asn1crypto$_teletex_codec_29 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *locals_asn1crypto$_teletex_codec_35 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_asn1crypto$_teletex_codec_40 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_unicode_digest_31cca222e854a1d03cf5ba54992b8728;
        UPDATE_STRING_DICT0( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_a2c2306f691f3841858b2665d47f12f5;
        UPDATE_STRING_DICT0( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
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
    frame_89f6af06f2fe88cf4c0fcc589ee1e748 = MAKE_MODULE_FRAME( codeobj_89f6af06f2fe88cf4c0fcc589ee1e748, module_asn1crypto$_teletex_codec );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_89f6af06f2fe88cf4c0fcc589ee1e748 );
    assert( Py_REFCNT( frame_89f6af06f2fe88cf4c0fcc589ee1e748 ) == 2 );

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_unicode_literals );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_4 );
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


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_absolute_import );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_4 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_print_function );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_codecs;
        tmp_globals_name_1 = (PyObject *)moduledict_asn1crypto$_teletex_codec;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_89f6af06f2fe88cf4c0fcc589ee1e748->m_frame.f_lineno = 11;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_codecs, tmp_assign_source_8 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_codecs );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
        }

        CHECK_OBJECT( tmp_mvar_value_1 );
        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Codec );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        tmp_assign_source_9 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_9, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_asn1crypto$_teletex_codec_14 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_4c961b927fab80b59ab43173569fa320;
        tmp_res = PyDict_SetItem( locals_asn1crypto$_teletex_codec_14, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_unicode_plain_strict_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_asn1crypto$_teletex_codec$$$function_1_encode( tmp_defaults_1 );



            tmp_res = PyDict_SetItem( locals_asn1crypto$_teletex_codec_14, const_str_plain_encode, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_unicode_plain_strict_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_dictset_value = MAKE_FUNCTION_asn1crypto$_teletex_codec$$$function_2_decode( tmp_defaults_2 );



            tmp_res = PyDict_SetItem( locals_asn1crypto$_teletex_codec_14, const_str_plain_decode, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        // Tried code:
        tmp_assign_source_10 = locals_asn1crypto$_teletex_codec_14;
        Py_INCREF( tmp_assign_source_10 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_asn1crypto$_teletex_codec_14 );
        locals_asn1crypto$_teletex_codec_14 = NULL;
        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec );
        return MOD_RETURN_VALUE( NULL );
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
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


            exception_lineno = 14;

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
        tmp_assign_source_11 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_subscribed_name_1 = tmp_class_creation_1__bases;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_12 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 14;

                goto try_except_handler_2;
            }
            assert( tmp_select_metaclass_1__base == NULL );
            tmp_select_metaclass_1__base = tmp_assign_source_12;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( tmp_select_metaclass_1__base );
            tmp_source_name_2 = tmp_select_metaclass_1__base;
            tmp_assign_source_11 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 14;

                goto try_except_handler_5;
            }
            goto try_return_handler_4;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec );
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
            CHECK_OBJECT( tmp_select_metaclass_1__base );
            tmp_type_arg_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_11 = BUILTIN_TYPE1( tmp_type_arg_1 );
            assert( !(tmp_assign_source_11 == NULL) );
            goto try_return_handler_4;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
        Py_DECREF( tmp_select_metaclass_1__base );
        tmp_select_metaclass_1__base = NULL;

        goto outline_result_2;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
        Py_DECREF( tmp_select_metaclass_1__base );
        tmp_select_metaclass_1__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec );
        return MOD_RETURN_VALUE( NULL );
        outline_result_2:;
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_TeletexCodec;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_args_element_name_2 = tmp_class_creation_1__bases;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_89f6af06f2fe88cf4c0fcc589ee1e748->m_frame.f_lineno = 14;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_13;
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict );
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
    try_end_2:;
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_14 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_TeletexCodec, tmp_assign_source_14 );
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
        PyObject *tmp_assign_source_15;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_codecs );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "codecs" );
            exception_tb = NULL;

            exception_lineno = 23;

            goto try_except_handler_6;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_IncrementalEncoder );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto try_except_handler_6;
        }
        tmp_assign_source_15 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 0, tmp_tuple_element_2 );
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        {
            PyObject *tmp_set_locals_2;
            tmp_set_locals_2 = PyDict_New();
            locals_asn1crypto$_teletex_codec_23 = tmp_set_locals_2;
        }
        tmp_dictset_value = const_str_digest_4c961b927fab80b59ab43173569fa320;
        tmp_res = PyDict_SetItem( locals_asn1crypto$_teletex_codec_23, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_false_tuple;
            Py_INCREF( tmp_defaults_3 );
            tmp_dictset_value = MAKE_FUNCTION_asn1crypto$_teletex_codec$$$function_3_encode( tmp_defaults_3 );



            tmp_res = PyDict_SetItem( locals_asn1crypto$_teletex_codec_23, const_str_plain_encode, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        // Tried code:
        tmp_assign_source_16 = locals_asn1crypto$_teletex_codec_23;
        Py_INCREF( tmp_assign_source_16 );
        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF( locals_asn1crypto$_teletex_codec_23 );
        locals_asn1crypto$_teletex_codec_23 = NULL;
        goto outline_result_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec );
        return MOD_RETURN_VALUE( NULL );
        outline_result_3:;
        assert( tmp_class_creation_2__class_dict == NULL );
        tmp_class_creation_2__class_dict = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
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


            exception_lineno = 23;

            goto try_except_handler_6;
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
        tmp_assign_source_17 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto try_except_handler_6;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_subscribed_name_2 = tmp_class_creation_2__bases;
            tmp_subscript_name_2 = const_int_0;
            tmp_assign_source_18 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;

                goto try_except_handler_6;
            }
            assert( tmp_select_metaclass_2__base == NULL );
            tmp_select_metaclass_2__base = tmp_assign_source_18;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( tmp_select_metaclass_2__base );
            tmp_source_name_4 = tmp_select_metaclass_2__base;
            tmp_assign_source_17 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;

                goto try_except_handler_9;
            }
            goto try_return_handler_8;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec );
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
            CHECK_OBJECT( tmp_select_metaclass_2__base );
            tmp_type_arg_2 = tmp_select_metaclass_2__base;
            tmp_assign_source_17 = BUILTIN_TYPE1( tmp_type_arg_2 );
            assert( !(tmp_assign_source_17 == NULL) );
            goto try_return_handler_8;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
        Py_DECREF( tmp_select_metaclass_2__base );
        tmp_select_metaclass_2__base = NULL;

        goto outline_result_4;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
        Py_DECREF( tmp_select_metaclass_2__base );
        tmp_select_metaclass_2__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec );
        return MOD_RETURN_VALUE( NULL );
        outline_result_4:;
        condexpr_end_2:;
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_called_name_2 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_4 = const_str_plain_TeletexIncrementalEncoder;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_args_element_name_5 = tmp_class_creation_2__bases;
        CHECK_OBJECT( tmp_class_creation_2__class_dict );
        tmp_args_element_name_6 = tmp_class_creation_2__class_dict;
        frame_89f6af06f2fe88cf4c0fcc589ee1e748->m_frame.f_lineno = 23;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto try_except_handler_6;
        }
        assert( tmp_class_creation_2__class == NULL );
        tmp_class_creation_2__class = tmp_assign_source_19;
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

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_dict );
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
    try_end_3:;
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT( tmp_class_creation_2__class );
        tmp_assign_source_20 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_TeletexIncrementalEncoder, tmp_assign_source_20 );
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
        PyObject *tmp_assign_source_21;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_codecs );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "codecs" );
            exception_tb = NULL;

            exception_lineno = 29;

            goto try_except_handler_10;
        }

        tmp_source_name_5 = tmp_mvar_value_3;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_IncrementalDecoder );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_10;
        }
        tmp_assign_source_21 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_21, 0, tmp_tuple_element_3 );
        assert( tmp_class_creation_3__bases == NULL );
        tmp_class_creation_3__bases = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_set_locals_3;
            tmp_set_locals_3 = PyDict_New();
            locals_asn1crypto$_teletex_codec_29 = tmp_set_locals_3;
        }
        tmp_dictset_value = const_str_digest_4c961b927fab80b59ab43173569fa320;
        tmp_res = PyDict_SetItem( locals_asn1crypto$_teletex_codec_29, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = const_tuple_false_tuple;
            Py_INCREF( tmp_defaults_4 );
            tmp_dictset_value = MAKE_FUNCTION_asn1crypto$_teletex_codec$$$function_4_decode( tmp_defaults_4 );



            tmp_res = PyDict_SetItem( locals_asn1crypto$_teletex_codec_29, const_str_plain_decode, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        // Tried code:
        tmp_assign_source_22 = locals_asn1crypto$_teletex_codec_29;
        Py_INCREF( tmp_assign_source_22 );
        goto try_return_handler_11;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF( locals_asn1crypto$_teletex_codec_29 );
        locals_asn1crypto$_teletex_codec_29 = NULL;
        goto outline_result_5;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec );
        return MOD_RETURN_VALUE( NULL );
        outline_result_5:;
        assert( tmp_class_creation_3__class_dict == NULL );
        tmp_class_creation_3__class_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
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


            exception_lineno = 29;

            goto try_except_handler_10;
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
        tmp_assign_source_23 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_10;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_subscribed_name_3 = tmp_class_creation_3__bases;
            tmp_subscript_name_3 = const_int_0;
            tmp_assign_source_24 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 29;

                goto try_except_handler_10;
            }
            assert( tmp_select_metaclass_3__base == NULL );
            tmp_select_metaclass_3__base = tmp_assign_source_24;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( tmp_select_metaclass_3__base );
            tmp_source_name_6 = tmp_select_metaclass_3__base;
            tmp_assign_source_23 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_6 );
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
        NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec );
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
            CHECK_OBJECT( tmp_select_metaclass_3__base );
            tmp_type_arg_3 = tmp_select_metaclass_3__base;
            tmp_assign_source_23 = BUILTIN_TYPE1( tmp_type_arg_3 );
            assert( !(tmp_assign_source_23 == NULL) );
            goto try_return_handler_12;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
        Py_DECREF( tmp_select_metaclass_3__base );
        tmp_select_metaclass_3__base = NULL;

        goto outline_result_6;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
        Py_DECREF( tmp_select_metaclass_3__base );
        tmp_select_metaclass_3__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec );
        return MOD_RETURN_VALUE( NULL );
        outline_result_6:;
        condexpr_end_3:;
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_called_name_3 = tmp_class_creation_3__metaclass;
        tmp_args_element_name_7 = const_str_plain_TeletexIncrementalDecoder;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_args_element_name_8 = tmp_class_creation_3__bases;
        CHECK_OBJECT( tmp_class_creation_3__class_dict );
        tmp_args_element_name_9 = tmp_class_creation_3__class_dict;
        frame_89f6af06f2fe88cf4c0fcc589ee1e748->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_10;
        }
        assert( tmp_class_creation_3__class == NULL );
        tmp_class_creation_3__class = tmp_assign_source_25;
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

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

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
        CHECK_OBJECT( tmp_class_creation_3__class );
        tmp_assign_source_26 = tmp_class_creation_3__class;
        UPDATE_STRING_DICT0( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_TeletexIncrementalDecoder, tmp_assign_source_26 );
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
        PyObject *tmp_assign_source_27;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_TeletexCodec );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TeletexCodec );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "TeletexCodec" );
            exception_tb = NULL;

            exception_lineno = 35;

            goto try_except_handler_14;
        }

        tmp_tuple_element_4 = tmp_mvar_value_4;
        tmp_assign_source_27 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_assign_source_27, 0, tmp_tuple_element_4 );
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_codecs );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_assign_source_27 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "codecs" );
            exception_tb = NULL;

            exception_lineno = 35;

            goto try_except_handler_14;
        }

        tmp_source_name_7 = tmp_mvar_value_5;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_StreamWriter );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_27 );

            exception_lineno = 35;

            goto try_except_handler_14;
        }
        PyTuple_SET_ITEM( tmp_assign_source_27, 1, tmp_tuple_element_4 );
        assert( tmp_class_creation_4__bases == NULL );
        tmp_class_creation_4__bases = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        {
            PyObject *tmp_set_locals_4;
            tmp_set_locals_4 = PyDict_New();
            locals_asn1crypto$_teletex_codec_35 = tmp_set_locals_4;
        }
        tmp_dictset_value = const_str_digest_4c961b927fab80b59ab43173569fa320;
        tmp_res = PyDict_SetItem( locals_asn1crypto$_teletex_codec_35, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_28 = locals_asn1crypto$_teletex_codec_35;
        Py_INCREF( tmp_assign_source_28 );
        goto try_return_handler_15;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF( locals_asn1crypto$_teletex_codec_35 );
        locals_asn1crypto$_teletex_codec_35 = NULL;
        goto outline_result_7;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec );
        return MOD_RETURN_VALUE( NULL );
        outline_result_7:;
        assert( tmp_class_creation_4__class_dict == NULL );
        tmp_class_creation_4__class_dict = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
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


            exception_lineno = 35;

            goto try_except_handler_14;
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
        tmp_assign_source_29 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto try_except_handler_14;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_subscribed_name_4 = tmp_class_creation_4__bases;
            tmp_subscript_name_4 = const_int_0;
            tmp_assign_source_30 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
            if ( tmp_assign_source_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;

                goto try_except_handler_14;
            }
            assert( tmp_select_metaclass_4__base == NULL );
            tmp_select_metaclass_4__base = tmp_assign_source_30;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( tmp_select_metaclass_4__base );
            tmp_source_name_8 = tmp_select_metaclass_4__base;
            tmp_assign_source_29 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_8 );
            if ( tmp_assign_source_29 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;

                goto try_except_handler_17;
            }
            goto try_return_handler_16;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec );
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
            CHECK_OBJECT( tmp_select_metaclass_4__base );
            tmp_type_arg_4 = tmp_select_metaclass_4__base;
            tmp_assign_source_29 = BUILTIN_TYPE1( tmp_type_arg_4 );
            assert( !(tmp_assign_source_29 == NULL) );
            goto try_return_handler_16;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_16:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
        Py_DECREF( tmp_select_metaclass_4__base );
        tmp_select_metaclass_4__base = NULL;

        goto outline_result_8;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
        Py_DECREF( tmp_select_metaclass_4__base );
        tmp_select_metaclass_4__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec );
        return MOD_RETURN_VALUE( NULL );
        outline_result_8:;
        condexpr_end_4:;
        assert( tmp_class_creation_4__metaclass == NULL );
        tmp_class_creation_4__metaclass = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        CHECK_OBJECT( tmp_class_creation_4__metaclass );
        tmp_called_name_4 = tmp_class_creation_4__metaclass;
        tmp_args_element_name_10 = const_str_plain_TeletexStreamWriter;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_args_element_name_11 = tmp_class_creation_4__bases;
        CHECK_OBJECT( tmp_class_creation_4__class_dict );
        tmp_args_element_name_12 = tmp_class_creation_4__class_dict;
        frame_89f6af06f2fe88cf4c0fcc589ee1e748->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto try_except_handler_14;
        }
        assert( tmp_class_creation_4__class == NULL );
        tmp_class_creation_4__class = tmp_assign_source_31;
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

    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_dict );
    tmp_class_creation_4__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

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
        CHECK_OBJECT( tmp_class_creation_4__class );
        tmp_assign_source_32 = tmp_class_creation_4__class;
        UPDATE_STRING_DICT0( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_TeletexStreamWriter, tmp_assign_source_32 );
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
        PyObject *tmp_assign_source_33;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_TeletexCodec );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TeletexCodec );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "TeletexCodec" );
            exception_tb = NULL;

            exception_lineno = 40;

            goto try_except_handler_18;
        }

        tmp_tuple_element_5 = tmp_mvar_value_6;
        tmp_assign_source_33 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_assign_source_33, 0, tmp_tuple_element_5 );
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_codecs );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_assign_source_33 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "codecs" );
            exception_tb = NULL;

            exception_lineno = 40;

            goto try_except_handler_18;
        }

        tmp_source_name_9 = tmp_mvar_value_7;
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_StreamReader );
        if ( tmp_tuple_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_33 );

            exception_lineno = 40;

            goto try_except_handler_18;
        }
        PyTuple_SET_ITEM( tmp_assign_source_33, 1, tmp_tuple_element_5 );
        assert( tmp_class_creation_5__bases == NULL );
        tmp_class_creation_5__bases = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        {
            PyObject *tmp_set_locals_5;
            tmp_set_locals_5 = PyDict_New();
            locals_asn1crypto$_teletex_codec_40 = tmp_set_locals_5;
        }
        tmp_dictset_value = const_str_digest_4c961b927fab80b59ab43173569fa320;
        tmp_res = PyDict_SetItem( locals_asn1crypto$_teletex_codec_40, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_34 = locals_asn1crypto$_teletex_codec_40;
        Py_INCREF( tmp_assign_source_34 );
        goto try_return_handler_19;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF( locals_asn1crypto$_teletex_codec_40 );
        locals_asn1crypto$_teletex_codec_40 = NULL;
        goto outline_result_9;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec );
        return MOD_RETURN_VALUE( NULL );
        outline_result_9:;
        assert( tmp_class_creation_5__class_dict == NULL );
        tmp_class_creation_5__class_dict = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
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

            goto try_except_handler_18;
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
        tmp_assign_source_35 = DICT_GET_ITEM( tmp_dict_name_10, tmp_key_name_10 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_18;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            CHECK_OBJECT( tmp_class_creation_5__bases );
            tmp_subscribed_name_5 = tmp_class_creation_5__bases;
            tmp_subscript_name_5 = const_int_0;
            tmp_assign_source_36 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
            if ( tmp_assign_source_36 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;

                goto try_except_handler_18;
            }
            assert( tmp_select_metaclass_5__base == NULL );
            tmp_select_metaclass_5__base = tmp_assign_source_36;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_10;
            CHECK_OBJECT( tmp_select_metaclass_5__base );
            tmp_source_name_10 = tmp_select_metaclass_5__base;
            tmp_assign_source_35 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_10 );
            if ( tmp_assign_source_35 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;

                goto try_except_handler_21;
            }
            goto try_return_handler_20;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec );
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
            CHECK_OBJECT( tmp_select_metaclass_5__base );
            tmp_type_arg_5 = tmp_select_metaclass_5__base;
            tmp_assign_source_35 = BUILTIN_TYPE1( tmp_type_arg_5 );
            assert( !(tmp_assign_source_35 == NULL) );
            goto try_return_handler_20;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_20:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_5__base );
        Py_DECREF( tmp_select_metaclass_5__base );
        tmp_select_metaclass_5__base = NULL;

        goto outline_result_10;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_5__base );
        Py_DECREF( tmp_select_metaclass_5__base );
        tmp_select_metaclass_5__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( asn1crypto$_teletex_codec );
        return MOD_RETURN_VALUE( NULL );
        outline_result_10:;
        condexpr_end_5:;
        assert( tmp_class_creation_5__metaclass == NULL );
        tmp_class_creation_5__metaclass = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        CHECK_OBJECT( tmp_class_creation_5__metaclass );
        tmp_called_name_5 = tmp_class_creation_5__metaclass;
        tmp_args_element_name_13 = const_str_plain_TeletexStreamReader;
        CHECK_OBJECT( tmp_class_creation_5__bases );
        tmp_args_element_name_14 = tmp_class_creation_5__bases;
        CHECK_OBJECT( tmp_class_creation_5__class_dict );
        tmp_args_element_name_15 = tmp_class_creation_5__class_dict;
        frame_89f6af06f2fe88cf4c0fcc589ee1e748->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
            tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_18;
        }
        assert( tmp_class_creation_5__class == NULL );
        tmp_class_creation_5__class = tmp_assign_source_37;
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

    Py_XDECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_class_creation_5__class_dict );
    tmp_class_creation_5__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

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
        CHECK_OBJECT( tmp_class_creation_5__class );
        tmp_assign_source_38 = tmp_class_creation_5__class;
        UPDATE_STRING_DICT0( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_TeletexStreamReader, tmp_assign_source_38 );
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

    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_FUNCTION_asn1crypto$_teletex_codec$$$function_5_teletex_search_function(  );



        UPDATE_STRING_DICT1( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_teletex_search_function, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_FUNCTION_asn1crypto$_teletex_codec$$$function_6_register(  );



        UPDATE_STRING_DICT1( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_register, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = const_unicode_digest_69d90d3f398e999ba1cda77b2248e8a6;
        UPDATE_STRING_DICT0( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_DECODING_TABLE, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_codecs );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "codecs" );
            exception_tb = NULL;

            exception_lineno = 331;

            goto frame_exception_exit_1;
        }

        tmp_source_name_11 = tmp_mvar_value_8;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_charmap_build );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_DECODING_TABLE );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DECODING_TABLE );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_called_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "DECODING_TABLE" );
            exception_tb = NULL;

            exception_lineno = 331;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_16 = tmp_mvar_value_9;
        frame_89f6af06f2fe88cf4c0fcc589ee1e748->m_frame.f_lineno = 331;
        {
            PyObject *call_args[] = { tmp_args_element_name_16 };
            tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        if ( tmp_assign_source_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain_ENCODING_TABLE, tmp_assign_source_42 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_89f6af06f2fe88cf4c0fcc589ee1e748 );
#endif
    popFrameStack();

    assertFrameObject( frame_89f6af06f2fe88cf4c0fcc589ee1e748 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_89f6af06f2fe88cf4c0fcc589ee1e748 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_89f6af06f2fe88cf4c0fcc589ee1e748, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_89f6af06f2fe88cf4c0fcc589ee1e748->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_89f6af06f2fe88cf4c0fcc589ee1e748, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_teletex_codec, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_asn1crypto$_teletex_codec );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
