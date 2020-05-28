/* Generated code for Python module 'chardet.latin1prober'
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

/* The "_module_chardet$latin1prober" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$latin1prober;
PyDictObject *moduledict_chardet$latin1prober;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_ACV;
static PyObject *const_str_plain_UDF;
extern PyObject *const_str_plain_byte_str;
extern PyObject *const_tuple_str_plain_ProbingState_tuple;
extern PyObject *const_str_plain_ProbingState;
static PyObject *const_str_plain_char_class;
static PyObject *const_str_plain_CLASS_NUM;
extern PyObject *const_str_plain_total;
extern PyObject *const_list_int_0_list;
extern PyObject *const_str_plain_confidence;
extern PyObject *const_str_plain_CharSetProber;
static PyObject *const_str_plain_ACO;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_filter_with_english_letters;
static PyObject *const_str_plain_ASC;
static PyObject *const_str_plain_freq;
extern PyObject *const_tuple_str_plain_CharSetProber_tuple;
extern PyObject *const_float_0_0;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_property;
static PyObject *const_str_plain_FREQ_CAT_NUM;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_reset;
extern PyObject *const_str_plain_enums;
static PyObject *const_str_plain_Latin1ClassModel;
static PyObject *const_str_digest_ab0dc7de222099cee38cbe8a0bf50535;
extern PyObject *const_str_plain_False;
static PyObject *const_tuple_dd937e22eb0b58a5d558f85613f2a98d_tuple;
static PyObject *const_str_plain_ASO;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_float_0_01;
extern PyObject *const_str_plain_Latin1Prober;
extern PyObject *const_int_0;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain__last_char_class;
static PyObject *const_tuple_str_plain_self_str_plain_total_str_plain_confidence_tuple;
extern PyObject *const_str_plain_NOT_ME;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain__state;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_charsetprober;
extern PyObject *const_int_pos_4;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_get_confidence;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_0434e961e5b15eec3f59fcb2a9640445;
static PyObject *const_float_20_0;
static PyObject *const_str_plain__freq_counter;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_plain_state;
static PyObject *const_str_plain_ASV;
extern PyObject *const_str_plain___module__;
static PyObject *const_float_0_73;
extern PyObject *const_int_pos_7;
extern PyObject *const_str_plain_charset_name;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_language;
static PyObject *const_tuple_f64817a26315f88897e1d0efc67c1c20_tuple;
static PyObject *const_str_plain_OTH;
extern PyObject *const_str_digest_14bf142caba56578f1c00aab6f48a798;
static PyObject *const_str_digest_2c9dfe7ab40b4b3cfd0b77c2f2d5aca8;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_feed;
static PyObject *const_str_plain_Latin1_CharToClass;
static PyObject *const_str_plain_ASS;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_ACV = UNSTREAM_STRING( &constant_bin[ 511062 ], 3, 1 );
    const_str_plain_UDF = UNSTREAM_STRING( &constant_bin[ 511065 ], 3, 1 );
    const_str_plain_char_class = UNSTREAM_STRING( &constant_bin[ 511068 ], 10, 1 );
    const_str_plain_CLASS_NUM = UNSTREAM_STRING( &constant_bin[ 130768 ], 9, 1 );
    const_str_plain_ACO = UNSTREAM_STRING( &constant_bin[ 511078 ], 3, 1 );
    const_str_plain_ASC = UNSTREAM_STRING( &constant_bin[ 78150 ], 3, 1 );
    const_str_plain_freq = UNSTREAM_STRING( &constant_bin[ 123036 ], 4, 1 );
    const_str_plain_FREQ_CAT_NUM = UNSTREAM_STRING( &constant_bin[ 511081 ], 12, 1 );
    const_str_plain_Latin1ClassModel = UNSTREAM_STRING( &constant_bin[ 511093 ], 16, 1 );
    const_str_digest_ab0dc7de222099cee38cbe8a0bf50535 = UNSTREAM_STRING( &constant_bin[ 511109 ], 29, 0 );
    const_tuple_dd937e22eb0b58a5d558f85613f2a98d_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 511138 ], 325 );
    const_str_plain_ASO = UNSTREAM_STRING( &constant_bin[ 511463 ], 3, 1 );
    const_str_plain__last_char_class = UNSTREAM_STRING( &constant_bin[ 511466 ], 16, 1 );
    const_tuple_str_plain_self_str_plain_total_str_plain_confidence_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_total_str_plain_confidence_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_total_str_plain_confidence_tuple, 1, const_str_plain_total ); Py_INCREF( const_str_plain_total );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_total_str_plain_confidence_tuple, 2, const_str_plain_confidence ); Py_INCREF( const_str_plain_confidence );
    const_str_digest_0434e961e5b15eec3f59fcb2a9640445 = UNSTREAM_STRING( &constant_bin[ 511117 ], 20, 0 );
    const_float_20_0 = UNSTREAM_FLOAT( &constant_bin[ 511482 ] );
    const_str_plain__freq_counter = UNSTREAM_STRING( &constant_bin[ 511490 ], 13, 1 );
    const_str_plain_ASV = UNSTREAM_STRING( &constant_bin[ 511503 ], 3, 1 );
    const_float_0_73 = UNSTREAM_FLOAT( &constant_bin[ 511506 ] );
    const_tuple_f64817a26315f88897e1d0efc67c1c20_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_f64817a26315f88897e1d0efc67c1c20_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_f64817a26315f88897e1d0efc67c1c20_tuple, 1, const_str_plain_byte_str ); Py_INCREF( const_str_plain_byte_str );
    PyTuple_SET_ITEM( const_tuple_f64817a26315f88897e1d0efc67c1c20_tuple, 2, const_str_plain_freq ); Py_INCREF( const_str_plain_freq );
    PyTuple_SET_ITEM( const_tuple_f64817a26315f88897e1d0efc67c1c20_tuple, 3, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_f64817a26315f88897e1d0efc67c1c20_tuple, 4, const_str_plain_char_class ); Py_INCREF( const_str_plain_char_class );
    const_str_plain_OTH = UNSTREAM_STRING( &constant_bin[ 1949 ], 3, 1 );
    const_str_digest_2c9dfe7ab40b4b3cfd0b77c2f2d5aca8 = UNSTREAM_STRING( &constant_bin[ 511514 ], 56, 0 );
    const_str_plain_Latin1_CharToClass = UNSTREAM_STRING( &constant_bin[ 511570 ], 18, 1 );
    const_str_plain_ASS = UNSTREAM_STRING( &constant_bin[ 23121 ], 3, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$latin1prober( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_1c774b13df4fbd6480b602e2669ea3c4;
static PyCodeObject *codeobj_cc1c8bd486255e16e297c64437e84107;
static PyCodeObject *codeobj_d3134f77e02fc7ae2b3fb33d5a667cbe;
static PyCodeObject *codeobj_7127c79934b81a7830f07c0c61ef315e;
static PyCodeObject *codeobj_6611d232fb5aee8d8e0b1dfecd01675c;
static PyCodeObject *codeobj_85b779ed9b4509aa891e0a704c388e5c;
static PyCodeObject *codeobj_134ec8b6f4f1ed01d99ebd0b7d9f48cf;
static PyCodeObject *codeobj_fbc5b00d461e6be5a2b9bc8279d7e7d0;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_2c9dfe7ab40b4b3cfd0b77c2f2d5aca8;
    codeobj_1c774b13df4fbd6480b602e2669ea3c4 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_ab0dc7de222099cee38cbe8a0bf50535, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_cc1c8bd486255e16e297c64437e84107 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Latin1Prober, 96, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_d3134f77e02fc7ae2b3fb33d5a667cbe = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 97, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7127c79934b81a7830f07c0c61ef315e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_charset_name, 108, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6611d232fb5aee8d8e0b1dfecd01675c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_feed, 116, const_tuple_f64817a26315f88897e1d0efc67c1c20_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_85b779ed9b4509aa891e0a704c388e5c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_confidence, 130, const_tuple_str_plain_self_str_plain_total_str_plain_confidence_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_134ec8b6f4f1ed01d99ebd0b7d9f48cf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_language, 112, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fbc5b00d461e6be5a2b9bc8279d7e7d0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset, 103, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_chardet$latin1prober$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_chardet$latin1prober$$$function_2_reset(  );


static PyObject *MAKE_FUNCTION_chardet$latin1prober$$$function_3_charset_name(  );


static PyObject *MAKE_FUNCTION_chardet$latin1prober$$$function_4_language(  );


static PyObject *MAKE_FUNCTION_chardet$latin1prober$$$function_5_feed(  );


static PyObject *MAKE_FUNCTION_chardet$latin1prober$$$function_6_get_confidence(  );


// The module function definitions.
static PyObject *impl_chardet$latin1prober$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_d3134f77e02fc7ae2b3fb33d5a667cbe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_d3134f77e02fc7ae2b3fb33d5a667cbe = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d3134f77e02fc7ae2b3fb33d5a667cbe, codeobj_d3134f77e02fc7ae2b3fb33d5a667cbe, module_chardet$latin1prober, sizeof(void *) );
    frame_d3134f77e02fc7ae2b3fb33d5a667cbe = cache_frame_d3134f77e02fc7ae2b3fb33d5a667cbe;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d3134f77e02fc7ae2b3fb33d5a667cbe );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d3134f77e02fc7ae2b3fb33d5a667cbe ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_Latin1Prober );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Latin1Prober );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "Latin1Prober" );
            exception_tb = NULL;

            exception_lineno = 98;
            type_description_1 = "o";
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


            exception_lineno = 98;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_d3134f77e02fc7ae2b3fb33d5a667cbe->m_frame.f_lineno = 98;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain___init__ );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__last_char_class, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__freq_counter, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        frame_d3134f77e02fc7ae2b3fb33d5a667cbe->m_frame.f_lineno = 101;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_reset );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d3134f77e02fc7ae2b3fb33d5a667cbe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d3134f77e02fc7ae2b3fb33d5a667cbe );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d3134f77e02fc7ae2b3fb33d5a667cbe, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d3134f77e02fc7ae2b3fb33d5a667cbe->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d3134f77e02fc7ae2b3fb33d5a667cbe, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d3134f77e02fc7ae2b3fb33d5a667cbe,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_d3134f77e02fc7ae2b3fb33d5a667cbe == cache_frame_d3134f77e02fc7ae2b3fb33d5a667cbe )
    {
        Py_DECREF( frame_d3134f77e02fc7ae2b3fb33d5a667cbe );
    }
    cache_frame_d3134f77e02fc7ae2b3fb33d5a667cbe = NULL;

    assertFrameObject( frame_d3134f77e02fc7ae2b3fb33d5a667cbe );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$latin1prober$$$function_1___init__ );
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
    NUITKA_CANNOT_GET_HERE( chardet$latin1prober$$$function_1___init__ );
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


static PyObject *impl_chardet$latin1prober$$$function_2_reset( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_fbc5b00d461e6be5a2b9bc8279d7e7d0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_fbc5b00d461e6be5a2b9bc8279d7e7d0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fbc5b00d461e6be5a2b9bc8279d7e7d0, codeobj_fbc5b00d461e6be5a2b9bc8279d7e7d0, module_chardet$latin1prober, sizeof(void *) );
    frame_fbc5b00d461e6be5a2b9bc8279d7e7d0 = cache_frame_fbc5b00d461e6be5a2b9bc8279d7e7d0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fbc5b00d461e6be5a2b9bc8279d7e7d0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fbc5b00d461e6be5a2b9bc8279d7e7d0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "OTH" );
            exception_tb = NULL;

            exception_lineno = 104;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__last_char_class, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_left_name_1 = LIST_COPY( const_list_int_0_list );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_FREQ_CAT_NUM );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FREQ_CAT_NUM );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "FREQ_CAT_NUM" );
            exception_tb = NULL;

            exception_lineno = 105;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = tmp_mvar_value_2;
        tmp_assattr_name_2 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__freq_counter, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_CharSetProber );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CharSetProber );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "CharSetProber" );
            exception_tb = NULL;

            exception_lineno = 106;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_1 = par_self;
        frame_fbc5b00d461e6be5a2b9bc8279d7e7d0->m_frame.f_lineno = 106;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_reset, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fbc5b00d461e6be5a2b9bc8279d7e7d0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fbc5b00d461e6be5a2b9bc8279d7e7d0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fbc5b00d461e6be5a2b9bc8279d7e7d0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fbc5b00d461e6be5a2b9bc8279d7e7d0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fbc5b00d461e6be5a2b9bc8279d7e7d0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fbc5b00d461e6be5a2b9bc8279d7e7d0,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_fbc5b00d461e6be5a2b9bc8279d7e7d0 == cache_frame_fbc5b00d461e6be5a2b9bc8279d7e7d0 )
    {
        Py_DECREF( frame_fbc5b00d461e6be5a2b9bc8279d7e7d0 );
    }
    cache_frame_fbc5b00d461e6be5a2b9bc8279d7e7d0 = NULL;

    assertFrameObject( frame_fbc5b00d461e6be5a2b9bc8279d7e7d0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$latin1prober$$$function_2_reset );
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
    NUITKA_CANNOT_GET_HERE( chardet$latin1prober$$$function_2_reset );
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


static PyObject *impl_chardet$latin1prober$$$function_3_charset_name( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = const_str_digest_14bf142caba56578f1c00aab6f48a798;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$latin1prober$$$function_3_charset_name );
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
    NUITKA_CANNOT_GET_HERE( chardet$latin1prober$$$function_3_charset_name );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_chardet$latin1prober$$$function_4_language( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = const_str_empty;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$latin1prober$$$function_4_language );
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
    NUITKA_CANNOT_GET_HERE( chardet$latin1prober$$$function_4_language );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_chardet$latin1prober$$$function_5_feed( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_byte_str = python_pars[ 1 ];
    PyObject *var_freq = NULL;
    PyObject *var_c = NULL;
    PyObject *var_char_class = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    struct Nuitka_FrameObject *frame_6611d232fb5aee8d8e0b1dfecd01675c;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6611d232fb5aee8d8e0b1dfecd01675c = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6611d232fb5aee8d8e0b1dfecd01675c, codeobj_6611d232fb5aee8d8e0b1dfecd01675c, module_chardet$latin1prober, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6611d232fb5aee8d8e0b1dfecd01675c = cache_frame_6611d232fb5aee8d8e0b1dfecd01675c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6611d232fb5aee8d8e0b1dfecd01675c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6611d232fb5aee8d8e0b1dfecd01675c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_byte_str );
        tmp_args_element_name_1 = par_byte_str;
        frame_6611d232fb5aee8d8e0b1dfecd01675c->m_frame.f_lineno = 117;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_filter_with_english_letters, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_byte_str;
            assert( old != NULL );
            par_byte_str = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_byte_str );
        tmp_iter_arg_1 = par_byte_str;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
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
                exception_lineno = 118;
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
            PyObject *old = var_c;
            var_c = tmp_assign_source_4;
            Py_INCREF( var_c );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_Latin1_CharToClass );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Latin1_CharToClass );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "Latin1_CharToClass" );
            exception_tb = NULL;

            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_subscribed_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_c );
        tmp_subscript_name_1 = var_c;
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_char_class;
            var_char_class = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_Latin1ClassModel );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Latin1ClassModel );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "Latin1ClassModel" );
            exception_tb = NULL;

            exception_lineno = 120;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_subscribed_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__last_char_class );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_CLASS_NUM );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CLASS_NUM );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "CLASS_NUM" );
            exception_tb = NULL;

            exception_lineno = 120;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_right_name_1 = tmp_mvar_value_3;
        tmp_left_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_char_class );
        tmp_right_name_2 = var_char_class;
        tmp_subscript_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_subscript_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_freq;
            var_freq = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_freq );
        tmp_compexpr_left_1 = var_freq;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_assattr_target_1;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ProbingState );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "ProbingState" );
                exception_tb = NULL;

                exception_lineno = 123;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_2 = tmp_mvar_value_4;
            tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_NOT_ME );
            if ( tmp_assattr_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 123;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__state, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 123;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
        }
        goto loop_end_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__freq_counter );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_inplace_assign_subscr_1__target;
            tmp_inplace_assign_subscr_1__target = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( var_freq );
        tmp_assign_source_8 = var_freq;
        {
            PyObject *old = tmp_inplace_assign_subscr_1__subscript;
            tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_8;
            Py_INCREF( tmp_inplace_assign_subscr_1__subscript );
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_subscribed_name_3 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
        tmp_subscript_name_3 = tmp_inplace_assign_subscr_1__subscript;
        tmp_left_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_right_name_3 = const_int_pos_1;
        tmp_ass_subvalue_1 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_ass_subscribed_1 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
        tmp_ass_subscript_1 = tmp_inplace_assign_subscr_1__subscript;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
    tmp_inplace_assign_subscr_1__subscript = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
    tmp_inplace_assign_subscr_1__subscript = NULL;

    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( var_char_class );
        tmp_assattr_name_2 = var_char_class;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__last_char_class, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    {
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_state );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6611d232fb5aee8d8e0b1dfecd01675c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6611d232fb5aee8d8e0b1dfecd01675c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6611d232fb5aee8d8e0b1dfecd01675c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6611d232fb5aee8d8e0b1dfecd01675c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6611d232fb5aee8d8e0b1dfecd01675c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6611d232fb5aee8d8e0b1dfecd01675c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6611d232fb5aee8d8e0b1dfecd01675c,
        type_description_1,
        par_self,
        par_byte_str,
        var_freq,
        var_c,
        var_char_class
    );


    // Release cached frame.
    if ( frame_6611d232fb5aee8d8e0b1dfecd01675c == cache_frame_6611d232fb5aee8d8e0b1dfecd01675c )
    {
        Py_DECREF( frame_6611d232fb5aee8d8e0b1dfecd01675c );
    }
    cache_frame_6611d232fb5aee8d8e0b1dfecd01675c = NULL;

    assertFrameObject( frame_6611d232fb5aee8d8e0b1dfecd01675c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$latin1prober$$$function_5_feed );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_freq );
    var_freq = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_char_class );
    var_char_class = NULL;

    CHECK_OBJECT( (PyObject *)par_byte_str );
    Py_DECREF( par_byte_str );
    par_byte_str = NULL;

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

    Py_XDECREF( var_freq );
    var_freq = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_char_class );
    var_char_class = NULL;

    CHECK_OBJECT( (PyObject *)par_byte_str );
    Py_DECREF( par_byte_str );
    par_byte_str = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$latin1prober$$$function_5_feed );
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


static PyObject *impl_chardet$latin1prober$$$function_6_get_confidence( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_total = NULL;
    PyObject *var_confidence = NULL;
    struct Nuitka_FrameObject *frame_85b779ed9b4509aa891e0a704c388e5c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_85b779ed9b4509aa891e0a704c388e5c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_85b779ed9b4509aa891e0a704c388e5c, codeobj_85b779ed9b4509aa891e0a704c388e5c, module_chardet$latin1prober, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_85b779ed9b4509aa891e0a704c388e5c = cache_frame_85b779ed9b4509aa891e0a704c388e5c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_85b779ed9b4509aa891e0a704c388e5c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_85b779ed9b4509aa891e0a704c388e5c ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_state );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ProbingState );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ProbingState" );
            exception_tb = NULL;

            exception_lineno = 131;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_NOT_ME );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 131;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
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
        tmp_return_value = const_float_0_01;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_sum_sequence_1;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_sum_sequence_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__freq_counter );
        if ( tmp_sum_sequence_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BUILTIN_SUM1( tmp_sum_sequence_1 );
        Py_DECREF( tmp_sum_sequence_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_total == NULL );
        var_total = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_total );
        tmp_compexpr_left_2 = var_total;
        tmp_compexpr_right_2 = const_float_0_01;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
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
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = const_float_0_0;
            assert( var_confidence == NULL );
            Py_INCREF( tmp_assign_source_2 );
            var_confidence = tmp_assign_source_2;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_3;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_right_name_3;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__freq_counter );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 138;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_int_pos_3;
            tmp_left_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 3 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 138;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__freq_counter );
            if ( tmp_subscribed_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 138;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_2 = const_int_pos_1;
            tmp_left_name_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
            Py_DECREF( tmp_subscribed_name_2 );
            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 138;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_float_20_0;
            tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_3 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 138;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 138;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_total );
            tmp_right_name_3 = var_total;
            tmp_assign_source_3 = BINARY_OPERATION_DIV( tmp_left_name_1, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 138;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( var_confidence == NULL );
            var_confidence = tmp_assign_source_3;
        }
        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_confidence );
        tmp_compexpr_left_3 = var_confidence;
        tmp_compexpr_right_3 = const_float_0_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
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
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = const_float_0_0;
            {
                PyObject *old = var_confidence;
                assert( old != NULL );
                var_confidence = tmp_assign_source_4;
                Py_INCREF( var_confidence );
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        if ( var_confidence == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "confidence" );
            exception_tb = NULL;

            exception_lineno = 144;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_4 = var_confidence;
        tmp_right_name_4 = const_float_0_73;
        tmp_assign_source_5 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_confidence;
            var_confidence = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_85b779ed9b4509aa891e0a704c388e5c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_85b779ed9b4509aa891e0a704c388e5c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_85b779ed9b4509aa891e0a704c388e5c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_85b779ed9b4509aa891e0a704c388e5c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_85b779ed9b4509aa891e0a704c388e5c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_85b779ed9b4509aa891e0a704c388e5c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_85b779ed9b4509aa891e0a704c388e5c,
        type_description_1,
        par_self,
        var_total,
        var_confidence
    );


    // Release cached frame.
    if ( frame_85b779ed9b4509aa891e0a704c388e5c == cache_frame_85b779ed9b4509aa891e0a704c388e5c )
    {
        Py_DECREF( frame_85b779ed9b4509aa891e0a704c388e5c );
    }
    cache_frame_85b779ed9b4509aa891e0a704c388e5c = NULL;

    assertFrameObject( frame_85b779ed9b4509aa891e0a704c388e5c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_confidence );
    tmp_return_value = var_confidence;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$latin1prober$$$function_6_get_confidence );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_total );
    var_total = NULL;

    Py_XDECREF( var_confidence );
    var_confidence = NULL;

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

    Py_XDECREF( var_total );
    var_total = NULL;

    Py_XDECREF( var_confidence );
    var_confidence = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$latin1prober$$$function_6_get_confidence );
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



static PyObject *MAKE_FUNCTION_chardet$latin1prober$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$latin1prober$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d3134f77e02fc7ae2b3fb33d5a667cbe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$latin1prober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$latin1prober$$$function_2_reset(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$latin1prober$$$function_2_reset,
        const_str_plain_reset,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fbc5b00d461e6be5a2b9bc8279d7e7d0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$latin1prober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$latin1prober$$$function_3_charset_name(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$latin1prober$$$function_3_charset_name,
        const_str_plain_charset_name,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7127c79934b81a7830f07c0c61ef315e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$latin1prober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$latin1prober$$$function_4_language(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$latin1prober$$$function_4_language,
        const_str_plain_language,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_134ec8b6f4f1ed01d99ebd0b7d9f48cf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$latin1prober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$latin1prober$$$function_5_feed(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$latin1prober$$$function_5_feed,
        const_str_plain_feed,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6611d232fb5aee8d8e0b1dfecd01675c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$latin1prober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$latin1prober$$$function_6_get_confidence(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$latin1prober$$$function_6_get_confidence,
        const_str_plain_get_confidence,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_85b779ed9b4509aa891e0a704c388e5c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$latin1prober,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$latin1prober =
{
    PyModuleDef_HEAD_INIT,
    "chardet.latin1prober",
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

MOD_INIT_DECL( chardet$latin1prober )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_chardet$latin1prober );
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
    puts("chardet.latin1prober: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.latin1prober: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.latin1prober: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initchardet$latin1prober" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$latin1prober = Py_InitModule4(
        "chardet.latin1prober",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_chardet$latin1prober = PyModule_Create( &mdef_chardet$latin1prober );
#endif

    moduledict_chardet$latin1prober = MODULE_DICT( module_chardet$latin1prober );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_chardet$latin1prober,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$latin1prober,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$latin1prober,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_chardet$latin1prober );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_0434e961e5b15eec3f59fcb2a9640445, module_chardet$latin1prober );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
    struct Nuitka_FrameObject *frame_1c774b13df4fbd6480b602e2669ea3c4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_chardet$latin1prober_96 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_cc1c8bd486255e16e297c64437e84107_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_cc1c8bd486255e16e297c64437e84107_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_2c9dfe7ab40b4b3cfd0b77c2f2d5aca8;
        UPDATE_STRING_DICT0( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_1c774b13df4fbd6480b602e2669ea3c4 = MAKE_MODULE_FRAME( codeobj_1c774b13df4fbd6480b602e2669ea3c4, module_chardet$latin1prober );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_1c774b13df4fbd6480b602e2669ea3c4 );
    assert( Py_REFCNT( frame_1c774b13df4fbd6480b602e2669ea3c4 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_charsetprober;
        tmp_globals_name_1 = (PyObject *)moduledict_chardet$latin1prober;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_CharSetProber_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_1c774b13df4fbd6480b602e2669ea3c4->m_frame.f_lineno = 29;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_CharSetProber );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_CharSetProber, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_enums;
        tmp_globals_name_2 = (PyObject *)moduledict_chardet$latin1prober;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_ProbingState_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_1c774b13df4fbd6480b602e2669ea3c4->m_frame.f_lineno = 30;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_ProbingState );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ProbingState, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = const_int_pos_4;
        UPDATE_STRING_DICT0( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_FREQ_CAT_NUM, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_int_0;
        UPDATE_STRING_DICT0( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_UDF, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = const_int_pos_1;
        UPDATE_STRING_DICT0( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = const_int_pos_2;
        UPDATE_STRING_DICT0( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASC, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = const_int_pos_3;
        UPDATE_STRING_DICT0( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASS, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = const_int_pos_4;
        UPDATE_STRING_DICT0( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACV, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = const_int_pos_5;
        UPDATE_STRING_DICT0( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACO, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = const_int_pos_6;
        UPDATE_STRING_DICT0( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASV, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = const_int_pos_7;
        UPDATE_STRING_DICT0( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASO, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = const_int_pos_8;
        UPDATE_STRING_DICT0( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_CLASS_NUM, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_mvar_value_27;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_mvar_value_29;
        PyObject *tmp_mvar_value_30;
        PyObject *tmp_mvar_value_31;
        PyObject *tmp_mvar_value_32;
        PyObject *tmp_mvar_value_33;
        PyObject *tmp_mvar_value_34;
        PyObject *tmp_mvar_value_35;
        PyObject *tmp_mvar_value_36;
        PyObject *tmp_mvar_value_37;
        PyObject *tmp_mvar_value_38;
        PyObject *tmp_mvar_value_39;
        PyObject *tmp_mvar_value_40;
        PyObject *tmp_mvar_value_41;
        PyObject *tmp_mvar_value_42;
        PyObject *tmp_mvar_value_43;
        PyObject *tmp_mvar_value_44;
        PyObject *tmp_mvar_value_45;
        PyObject *tmp_mvar_value_46;
        PyObject *tmp_mvar_value_47;
        PyObject *tmp_mvar_value_48;
        PyObject *tmp_mvar_value_49;
        PyObject *tmp_mvar_value_50;
        PyObject *tmp_mvar_value_51;
        PyObject *tmp_mvar_value_52;
        PyObject *tmp_mvar_value_53;
        PyObject *tmp_mvar_value_54;
        PyObject *tmp_mvar_value_55;
        PyObject *tmp_mvar_value_56;
        PyObject *tmp_mvar_value_57;
        PyObject *tmp_mvar_value_58;
        PyObject *tmp_mvar_value_59;
        PyObject *tmp_mvar_value_60;
        PyObject *tmp_mvar_value_61;
        PyObject *tmp_mvar_value_62;
        PyObject *tmp_mvar_value_63;
        PyObject *tmp_mvar_value_64;
        PyObject *tmp_mvar_value_65;
        PyObject *tmp_mvar_value_66;
        PyObject *tmp_mvar_value_67;
        PyObject *tmp_mvar_value_68;
        PyObject *tmp_mvar_value_69;
        PyObject *tmp_mvar_value_70;
        PyObject *tmp_mvar_value_71;
        PyObject *tmp_mvar_value_72;
        PyObject *tmp_mvar_value_73;
        PyObject *tmp_mvar_value_74;
        PyObject *tmp_mvar_value_75;
        PyObject *tmp_mvar_value_76;
        PyObject *tmp_mvar_value_77;
        PyObject *tmp_mvar_value_78;
        PyObject *tmp_mvar_value_79;
        PyObject *tmp_mvar_value_80;
        PyObject *tmp_mvar_value_81;
        PyObject *tmp_mvar_value_82;
        PyObject *tmp_mvar_value_83;
        PyObject *tmp_mvar_value_84;
        PyObject *tmp_mvar_value_85;
        PyObject *tmp_mvar_value_86;
        PyObject *tmp_mvar_value_87;
        PyObject *tmp_mvar_value_88;
        PyObject *tmp_mvar_value_89;
        PyObject *tmp_mvar_value_90;
        PyObject *tmp_mvar_value_91;
        PyObject *tmp_mvar_value_92;
        PyObject *tmp_mvar_value_93;
        PyObject *tmp_mvar_value_94;
        PyObject *tmp_mvar_value_95;
        PyObject *tmp_mvar_value_96;
        PyObject *tmp_mvar_value_97;
        PyObject *tmp_mvar_value_98;
        PyObject *tmp_mvar_value_99;
        PyObject *tmp_mvar_value_100;
        PyObject *tmp_mvar_value_101;
        PyObject *tmp_mvar_value_102;
        PyObject *tmp_mvar_value_103;
        PyObject *tmp_mvar_value_104;
        PyObject *tmp_mvar_value_105;
        PyObject *tmp_mvar_value_106;
        PyObject *tmp_mvar_value_107;
        PyObject *tmp_mvar_value_108;
        PyObject *tmp_mvar_value_109;
        PyObject *tmp_mvar_value_110;
        PyObject *tmp_mvar_value_111;
        PyObject *tmp_mvar_value_112;
        PyObject *tmp_mvar_value_113;
        PyObject *tmp_mvar_value_114;
        PyObject *tmp_mvar_value_115;
        PyObject *tmp_mvar_value_116;
        PyObject *tmp_mvar_value_117;
        PyObject *tmp_mvar_value_118;
        PyObject *tmp_mvar_value_119;
        PyObject *tmp_mvar_value_120;
        PyObject *tmp_mvar_value_121;
        PyObject *tmp_mvar_value_122;
        PyObject *tmp_mvar_value_123;
        PyObject *tmp_mvar_value_124;
        PyObject *tmp_mvar_value_125;
        PyObject *tmp_mvar_value_126;
        PyObject *tmp_mvar_value_127;
        PyObject *tmp_mvar_value_128;
        PyObject *tmp_mvar_value_129;
        PyObject *tmp_mvar_value_130;
        PyObject *tmp_mvar_value_131;
        PyObject *tmp_mvar_value_132;
        PyObject *tmp_mvar_value_133;
        PyObject *tmp_mvar_value_134;
        PyObject *tmp_mvar_value_135;
        PyObject *tmp_mvar_value_136;
        PyObject *tmp_mvar_value_137;
        PyObject *tmp_mvar_value_138;
        PyObject *tmp_mvar_value_139;
        PyObject *tmp_mvar_value_140;
        PyObject *tmp_mvar_value_141;
        PyObject *tmp_mvar_value_142;
        PyObject *tmp_mvar_value_143;
        PyObject *tmp_mvar_value_144;
        PyObject *tmp_mvar_value_145;
        PyObject *tmp_mvar_value_146;
        PyObject *tmp_mvar_value_147;
        PyObject *tmp_mvar_value_148;
        PyObject *tmp_mvar_value_149;
        PyObject *tmp_mvar_value_150;
        PyObject *tmp_mvar_value_151;
        PyObject *tmp_mvar_value_152;
        PyObject *tmp_mvar_value_153;
        PyObject *tmp_mvar_value_154;
        PyObject *tmp_mvar_value_155;
        PyObject *tmp_mvar_value_156;
        PyObject *tmp_mvar_value_157;
        PyObject *tmp_mvar_value_158;
        PyObject *tmp_mvar_value_159;
        PyObject *tmp_mvar_value_160;
        PyObject *tmp_mvar_value_161;
        PyObject *tmp_mvar_value_162;
        PyObject *tmp_mvar_value_163;
        PyObject *tmp_mvar_value_164;
        PyObject *tmp_mvar_value_165;
        PyObject *tmp_mvar_value_166;
        PyObject *tmp_mvar_value_167;
        PyObject *tmp_mvar_value_168;
        PyObject *tmp_mvar_value_169;
        PyObject *tmp_mvar_value_170;
        PyObject *tmp_mvar_value_171;
        PyObject *tmp_mvar_value_172;
        PyObject *tmp_mvar_value_173;
        PyObject *tmp_mvar_value_174;
        PyObject *tmp_mvar_value_175;
        PyObject *tmp_mvar_value_176;
        PyObject *tmp_mvar_value_177;
        PyObject *tmp_mvar_value_178;
        PyObject *tmp_mvar_value_179;
        PyObject *tmp_mvar_value_180;
        PyObject *tmp_mvar_value_181;
        PyObject *tmp_mvar_value_182;
        PyObject *tmp_mvar_value_183;
        PyObject *tmp_mvar_value_184;
        PyObject *tmp_mvar_value_185;
        PyObject *tmp_mvar_value_186;
        PyObject *tmp_mvar_value_187;
        PyObject *tmp_mvar_value_188;
        PyObject *tmp_mvar_value_189;
        PyObject *tmp_mvar_value_190;
        PyObject *tmp_mvar_value_191;
        PyObject *tmp_mvar_value_192;
        PyObject *tmp_mvar_value_193;
        PyObject *tmp_mvar_value_194;
        PyObject *tmp_mvar_value_195;
        PyObject *tmp_mvar_value_196;
        PyObject *tmp_mvar_value_197;
        PyObject *tmp_mvar_value_198;
        PyObject *tmp_mvar_value_199;
        PyObject *tmp_mvar_value_200;
        PyObject *tmp_mvar_value_201;
        PyObject *tmp_mvar_value_202;
        PyObject *tmp_mvar_value_203;
        PyObject *tmp_mvar_value_204;
        PyObject *tmp_mvar_value_205;
        PyObject *tmp_mvar_value_206;
        PyObject *tmp_mvar_value_207;
        PyObject *tmp_mvar_value_208;
        PyObject *tmp_mvar_value_209;
        PyObject *tmp_mvar_value_210;
        PyObject *tmp_mvar_value_211;
        PyObject *tmp_mvar_value_212;
        PyObject *tmp_mvar_value_213;
        PyObject *tmp_mvar_value_214;
        PyObject *tmp_mvar_value_215;
        PyObject *tmp_mvar_value_216;
        PyObject *tmp_mvar_value_217;
        PyObject *tmp_mvar_value_218;
        PyObject *tmp_mvar_value_219;
        PyObject *tmp_mvar_value_220;
        PyObject *tmp_mvar_value_221;
        PyObject *tmp_mvar_value_222;
        PyObject *tmp_mvar_value_223;
        PyObject *tmp_mvar_value_224;
        PyObject *tmp_mvar_value_225;
        PyObject *tmp_mvar_value_226;
        PyObject *tmp_mvar_value_227;
        PyObject *tmp_mvar_value_228;
        PyObject *tmp_mvar_value_229;
        PyObject *tmp_mvar_value_230;
        PyObject *tmp_mvar_value_231;
        PyObject *tmp_mvar_value_232;
        PyObject *tmp_mvar_value_233;
        PyObject *tmp_mvar_value_234;
        PyObject *tmp_mvar_value_235;
        PyObject *tmp_mvar_value_236;
        PyObject *tmp_mvar_value_237;
        PyObject *tmp_mvar_value_238;
        PyObject *tmp_mvar_value_239;
        PyObject *tmp_mvar_value_240;
        PyObject *tmp_mvar_value_241;
        PyObject *tmp_mvar_value_242;
        PyObject *tmp_mvar_value_243;
        PyObject *tmp_mvar_value_244;
        PyObject *tmp_mvar_value_245;
        PyObject *tmp_mvar_value_246;
        PyObject *tmp_mvar_value_247;
        PyObject *tmp_mvar_value_248;
        PyObject *tmp_mvar_value_249;
        PyObject *tmp_mvar_value_250;
        PyObject *tmp_mvar_value_251;
        PyObject *tmp_mvar_value_252;
        PyObject *tmp_mvar_value_253;
        PyObject *tmp_mvar_value_254;
        PyObject *tmp_mvar_value_255;
        PyObject *tmp_mvar_value_256;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_1 );
        tmp_tuple_element_1 = tmp_mvar_value_1;
        tmp_assign_source_15 = PyTuple_New( 256 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 0, tmp_tuple_element_1 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_2 );
        tmp_tuple_element_1 = tmp_mvar_value_2;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 1, tmp_tuple_element_1 );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_tuple_element_1 = tmp_mvar_value_3;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 2, tmp_tuple_element_1 );
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_4 );
        tmp_tuple_element_1 = tmp_mvar_value_4;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 3, tmp_tuple_element_1 );
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_5 );
        tmp_tuple_element_1 = tmp_mvar_value_5;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 4, tmp_tuple_element_1 );
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_6 );
        tmp_tuple_element_1 = tmp_mvar_value_6;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 5, tmp_tuple_element_1 );
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_7 );
        tmp_tuple_element_1 = tmp_mvar_value_7;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 6, tmp_tuple_element_1 );
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_8 );
        tmp_tuple_element_1 = tmp_mvar_value_8;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 7, tmp_tuple_element_1 );
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_9 );
        tmp_tuple_element_1 = tmp_mvar_value_9;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 8, tmp_tuple_element_1 );
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_10 );
        tmp_tuple_element_1 = tmp_mvar_value_10;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 9, tmp_tuple_element_1 );
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_11 );
        tmp_tuple_element_1 = tmp_mvar_value_11;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 10, tmp_tuple_element_1 );
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_12 );
        tmp_tuple_element_1 = tmp_mvar_value_12;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 11, tmp_tuple_element_1 );
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_13 );
        tmp_tuple_element_1 = tmp_mvar_value_13;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 12, tmp_tuple_element_1 );
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_14 );
        tmp_tuple_element_1 = tmp_mvar_value_14;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 13, tmp_tuple_element_1 );
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_15 );
        tmp_tuple_element_1 = tmp_mvar_value_15;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 14, tmp_tuple_element_1 );
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_16 );
        tmp_tuple_element_1 = tmp_mvar_value_16;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 15, tmp_tuple_element_1 );
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_17 );
        tmp_tuple_element_1 = tmp_mvar_value_17;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 16, tmp_tuple_element_1 );
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_18 );
        tmp_tuple_element_1 = tmp_mvar_value_18;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 17, tmp_tuple_element_1 );
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_19 );
        tmp_tuple_element_1 = tmp_mvar_value_19;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 18, tmp_tuple_element_1 );
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_20 );
        tmp_tuple_element_1 = tmp_mvar_value_20;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 19, tmp_tuple_element_1 );
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_21 );
        tmp_tuple_element_1 = tmp_mvar_value_21;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 20, tmp_tuple_element_1 );
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_22 );
        tmp_tuple_element_1 = tmp_mvar_value_22;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 21, tmp_tuple_element_1 );
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_23 );
        tmp_tuple_element_1 = tmp_mvar_value_23;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 22, tmp_tuple_element_1 );
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_24 );
        tmp_tuple_element_1 = tmp_mvar_value_24;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 23, tmp_tuple_element_1 );
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_25 );
        tmp_tuple_element_1 = tmp_mvar_value_25;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 24, tmp_tuple_element_1 );
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_26 );
        tmp_tuple_element_1 = tmp_mvar_value_26;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 25, tmp_tuple_element_1 );
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_27 );
        tmp_tuple_element_1 = tmp_mvar_value_27;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 26, tmp_tuple_element_1 );
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_28 );
        tmp_tuple_element_1 = tmp_mvar_value_28;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 27, tmp_tuple_element_1 );
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_29 );
        tmp_tuple_element_1 = tmp_mvar_value_29;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 28, tmp_tuple_element_1 );
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_30 );
        tmp_tuple_element_1 = tmp_mvar_value_30;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 29, tmp_tuple_element_1 );
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_31 == NULL ))
        {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_31 );
        tmp_tuple_element_1 = tmp_mvar_value_31;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 30, tmp_tuple_element_1 );
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_32 == NULL ))
        {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_32 );
        tmp_tuple_element_1 = tmp_mvar_value_32;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 31, tmp_tuple_element_1 );
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_33 == NULL ))
        {
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_33 );
        tmp_tuple_element_1 = tmp_mvar_value_33;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 32, tmp_tuple_element_1 );
        tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_34 == NULL ))
        {
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_34 );
        tmp_tuple_element_1 = tmp_mvar_value_34;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 33, tmp_tuple_element_1 );
        tmp_mvar_value_35 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_35 == NULL ))
        {
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_35 );
        tmp_tuple_element_1 = tmp_mvar_value_35;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 34, tmp_tuple_element_1 );
        tmp_mvar_value_36 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_36 == NULL ))
        {
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_36 );
        tmp_tuple_element_1 = tmp_mvar_value_36;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 35, tmp_tuple_element_1 );
        tmp_mvar_value_37 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_37 == NULL ))
        {
            tmp_mvar_value_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_37 );
        tmp_tuple_element_1 = tmp_mvar_value_37;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 36, tmp_tuple_element_1 );
        tmp_mvar_value_38 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_38 == NULL ))
        {
            tmp_mvar_value_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_38 );
        tmp_tuple_element_1 = tmp_mvar_value_38;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 37, tmp_tuple_element_1 );
        tmp_mvar_value_39 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_39 == NULL ))
        {
            tmp_mvar_value_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_39 );
        tmp_tuple_element_1 = tmp_mvar_value_39;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 38, tmp_tuple_element_1 );
        tmp_mvar_value_40 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_40 == NULL ))
        {
            tmp_mvar_value_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_40 );
        tmp_tuple_element_1 = tmp_mvar_value_40;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 39, tmp_tuple_element_1 );
        tmp_mvar_value_41 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_41 == NULL ))
        {
            tmp_mvar_value_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_41 );
        tmp_tuple_element_1 = tmp_mvar_value_41;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 40, tmp_tuple_element_1 );
        tmp_mvar_value_42 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_42 == NULL ))
        {
            tmp_mvar_value_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_42 );
        tmp_tuple_element_1 = tmp_mvar_value_42;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 41, tmp_tuple_element_1 );
        tmp_mvar_value_43 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_43 == NULL ))
        {
            tmp_mvar_value_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_43 );
        tmp_tuple_element_1 = tmp_mvar_value_43;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 42, tmp_tuple_element_1 );
        tmp_mvar_value_44 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_44 == NULL ))
        {
            tmp_mvar_value_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_44 );
        tmp_tuple_element_1 = tmp_mvar_value_44;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 43, tmp_tuple_element_1 );
        tmp_mvar_value_45 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_45 == NULL ))
        {
            tmp_mvar_value_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_45 );
        tmp_tuple_element_1 = tmp_mvar_value_45;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 44, tmp_tuple_element_1 );
        tmp_mvar_value_46 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_46 == NULL ))
        {
            tmp_mvar_value_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_46 );
        tmp_tuple_element_1 = tmp_mvar_value_46;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 45, tmp_tuple_element_1 );
        tmp_mvar_value_47 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_47 == NULL ))
        {
            tmp_mvar_value_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_47 );
        tmp_tuple_element_1 = tmp_mvar_value_47;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 46, tmp_tuple_element_1 );
        tmp_mvar_value_48 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_48 == NULL ))
        {
            tmp_mvar_value_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_48 );
        tmp_tuple_element_1 = tmp_mvar_value_48;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 47, tmp_tuple_element_1 );
        tmp_mvar_value_49 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_49 == NULL ))
        {
            tmp_mvar_value_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_49 );
        tmp_tuple_element_1 = tmp_mvar_value_49;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 48, tmp_tuple_element_1 );
        tmp_mvar_value_50 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_50 == NULL ))
        {
            tmp_mvar_value_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_50 );
        tmp_tuple_element_1 = tmp_mvar_value_50;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 49, tmp_tuple_element_1 );
        tmp_mvar_value_51 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_51 == NULL ))
        {
            tmp_mvar_value_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_51 );
        tmp_tuple_element_1 = tmp_mvar_value_51;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 50, tmp_tuple_element_1 );
        tmp_mvar_value_52 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_52 == NULL ))
        {
            tmp_mvar_value_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_52 );
        tmp_tuple_element_1 = tmp_mvar_value_52;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 51, tmp_tuple_element_1 );
        tmp_mvar_value_53 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_53 == NULL ))
        {
            tmp_mvar_value_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_53 );
        tmp_tuple_element_1 = tmp_mvar_value_53;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 52, tmp_tuple_element_1 );
        tmp_mvar_value_54 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_54 == NULL ))
        {
            tmp_mvar_value_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_54 );
        tmp_tuple_element_1 = tmp_mvar_value_54;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 53, tmp_tuple_element_1 );
        tmp_mvar_value_55 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_55 == NULL ))
        {
            tmp_mvar_value_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_55 );
        tmp_tuple_element_1 = tmp_mvar_value_55;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 54, tmp_tuple_element_1 );
        tmp_mvar_value_56 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_56 == NULL ))
        {
            tmp_mvar_value_56 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_56 );
        tmp_tuple_element_1 = tmp_mvar_value_56;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 55, tmp_tuple_element_1 );
        tmp_mvar_value_57 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_57 == NULL ))
        {
            tmp_mvar_value_57 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_57 );
        tmp_tuple_element_1 = tmp_mvar_value_57;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 56, tmp_tuple_element_1 );
        tmp_mvar_value_58 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_58 == NULL ))
        {
            tmp_mvar_value_58 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_58 );
        tmp_tuple_element_1 = tmp_mvar_value_58;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 57, tmp_tuple_element_1 );
        tmp_mvar_value_59 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_59 == NULL ))
        {
            tmp_mvar_value_59 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_59 );
        tmp_tuple_element_1 = tmp_mvar_value_59;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 58, tmp_tuple_element_1 );
        tmp_mvar_value_60 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_60 == NULL ))
        {
            tmp_mvar_value_60 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_60 );
        tmp_tuple_element_1 = tmp_mvar_value_60;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 59, tmp_tuple_element_1 );
        tmp_mvar_value_61 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_61 == NULL ))
        {
            tmp_mvar_value_61 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_61 );
        tmp_tuple_element_1 = tmp_mvar_value_61;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 60, tmp_tuple_element_1 );
        tmp_mvar_value_62 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_62 == NULL ))
        {
            tmp_mvar_value_62 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_62 );
        tmp_tuple_element_1 = tmp_mvar_value_62;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 61, tmp_tuple_element_1 );
        tmp_mvar_value_63 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_63 == NULL ))
        {
            tmp_mvar_value_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_63 );
        tmp_tuple_element_1 = tmp_mvar_value_63;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 62, tmp_tuple_element_1 );
        tmp_mvar_value_64 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_64 == NULL ))
        {
            tmp_mvar_value_64 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_64 );
        tmp_tuple_element_1 = tmp_mvar_value_64;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 63, tmp_tuple_element_1 );
        tmp_mvar_value_65 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_65 == NULL ))
        {
            tmp_mvar_value_65 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_65 );
        tmp_tuple_element_1 = tmp_mvar_value_65;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 64, tmp_tuple_element_1 );
        tmp_mvar_value_66 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASC );

        if (unlikely( tmp_mvar_value_66 == NULL ))
        {
            tmp_mvar_value_66 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASC );
        }

        CHECK_OBJECT( tmp_mvar_value_66 );
        tmp_tuple_element_1 = tmp_mvar_value_66;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 65, tmp_tuple_element_1 );
        tmp_mvar_value_67 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASC );

        if (unlikely( tmp_mvar_value_67 == NULL ))
        {
            tmp_mvar_value_67 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASC );
        }

        CHECK_OBJECT( tmp_mvar_value_67 );
        tmp_tuple_element_1 = tmp_mvar_value_67;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 66, tmp_tuple_element_1 );
        tmp_mvar_value_68 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASC );

        if (unlikely( tmp_mvar_value_68 == NULL ))
        {
            tmp_mvar_value_68 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASC );
        }

        CHECK_OBJECT( tmp_mvar_value_68 );
        tmp_tuple_element_1 = tmp_mvar_value_68;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 67, tmp_tuple_element_1 );
        tmp_mvar_value_69 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASC );

        if (unlikely( tmp_mvar_value_69 == NULL ))
        {
            tmp_mvar_value_69 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASC );
        }

        CHECK_OBJECT( tmp_mvar_value_69 );
        tmp_tuple_element_1 = tmp_mvar_value_69;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 68, tmp_tuple_element_1 );
        tmp_mvar_value_70 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASC );

        if (unlikely( tmp_mvar_value_70 == NULL ))
        {
            tmp_mvar_value_70 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASC );
        }

        CHECK_OBJECT( tmp_mvar_value_70 );
        tmp_tuple_element_1 = tmp_mvar_value_70;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 69, tmp_tuple_element_1 );
        tmp_mvar_value_71 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASC );

        if (unlikely( tmp_mvar_value_71 == NULL ))
        {
            tmp_mvar_value_71 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASC );
        }

        CHECK_OBJECT( tmp_mvar_value_71 );
        tmp_tuple_element_1 = tmp_mvar_value_71;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 70, tmp_tuple_element_1 );
        tmp_mvar_value_72 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASC );

        if (unlikely( tmp_mvar_value_72 == NULL ))
        {
            tmp_mvar_value_72 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASC );
        }

        CHECK_OBJECT( tmp_mvar_value_72 );
        tmp_tuple_element_1 = tmp_mvar_value_72;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 71, tmp_tuple_element_1 );
        tmp_mvar_value_73 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASC );

        if (unlikely( tmp_mvar_value_73 == NULL ))
        {
            tmp_mvar_value_73 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASC );
        }

        CHECK_OBJECT( tmp_mvar_value_73 );
        tmp_tuple_element_1 = tmp_mvar_value_73;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 72, tmp_tuple_element_1 );
        tmp_mvar_value_74 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASC );

        if (unlikely( tmp_mvar_value_74 == NULL ))
        {
            tmp_mvar_value_74 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASC );
        }

        CHECK_OBJECT( tmp_mvar_value_74 );
        tmp_tuple_element_1 = tmp_mvar_value_74;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 73, tmp_tuple_element_1 );
        tmp_mvar_value_75 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASC );

        if (unlikely( tmp_mvar_value_75 == NULL ))
        {
            tmp_mvar_value_75 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASC );
        }

        CHECK_OBJECT( tmp_mvar_value_75 );
        tmp_tuple_element_1 = tmp_mvar_value_75;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 74, tmp_tuple_element_1 );
        tmp_mvar_value_76 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASC );

        if (unlikely( tmp_mvar_value_76 == NULL ))
        {
            tmp_mvar_value_76 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASC );
        }

        CHECK_OBJECT( tmp_mvar_value_76 );
        tmp_tuple_element_1 = tmp_mvar_value_76;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 75, tmp_tuple_element_1 );
        tmp_mvar_value_77 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASC );

        if (unlikely( tmp_mvar_value_77 == NULL ))
        {
            tmp_mvar_value_77 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASC );
        }

        CHECK_OBJECT( tmp_mvar_value_77 );
        tmp_tuple_element_1 = tmp_mvar_value_77;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 76, tmp_tuple_element_1 );
        tmp_mvar_value_78 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASC );

        if (unlikely( tmp_mvar_value_78 == NULL ))
        {
            tmp_mvar_value_78 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASC );
        }

        CHECK_OBJECT( tmp_mvar_value_78 );
        tmp_tuple_element_1 = tmp_mvar_value_78;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 77, tmp_tuple_element_1 );
        tmp_mvar_value_79 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASC );

        if (unlikely( tmp_mvar_value_79 == NULL ))
        {
            tmp_mvar_value_79 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASC );
        }

        CHECK_OBJECT( tmp_mvar_value_79 );
        tmp_tuple_element_1 = tmp_mvar_value_79;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 78, tmp_tuple_element_1 );
        tmp_mvar_value_80 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASC );

        if (unlikely( tmp_mvar_value_80 == NULL ))
        {
            tmp_mvar_value_80 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASC );
        }

        CHECK_OBJECT( tmp_mvar_value_80 );
        tmp_tuple_element_1 = tmp_mvar_value_80;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 79, tmp_tuple_element_1 );
        tmp_mvar_value_81 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASC );

        if (unlikely( tmp_mvar_value_81 == NULL ))
        {
            tmp_mvar_value_81 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASC );
        }

        CHECK_OBJECT( tmp_mvar_value_81 );
        tmp_tuple_element_1 = tmp_mvar_value_81;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 80, tmp_tuple_element_1 );
        tmp_mvar_value_82 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASC );

        if (unlikely( tmp_mvar_value_82 == NULL ))
        {
            tmp_mvar_value_82 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASC );
        }

        CHECK_OBJECT( tmp_mvar_value_82 );
        tmp_tuple_element_1 = tmp_mvar_value_82;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 81, tmp_tuple_element_1 );
        tmp_mvar_value_83 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASC );

        if (unlikely( tmp_mvar_value_83 == NULL ))
        {
            tmp_mvar_value_83 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASC );
        }

        CHECK_OBJECT( tmp_mvar_value_83 );
        tmp_tuple_element_1 = tmp_mvar_value_83;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 82, tmp_tuple_element_1 );
        tmp_mvar_value_84 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASC );

        if (unlikely( tmp_mvar_value_84 == NULL ))
        {
            tmp_mvar_value_84 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASC );
        }

        CHECK_OBJECT( tmp_mvar_value_84 );
        tmp_tuple_element_1 = tmp_mvar_value_84;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 83, tmp_tuple_element_1 );
        tmp_mvar_value_85 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASC );

        if (unlikely( tmp_mvar_value_85 == NULL ))
        {
            tmp_mvar_value_85 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASC );
        }

        CHECK_OBJECT( tmp_mvar_value_85 );
        tmp_tuple_element_1 = tmp_mvar_value_85;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 84, tmp_tuple_element_1 );
        tmp_mvar_value_86 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASC );

        if (unlikely( tmp_mvar_value_86 == NULL ))
        {
            tmp_mvar_value_86 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASC );
        }

        CHECK_OBJECT( tmp_mvar_value_86 );
        tmp_tuple_element_1 = tmp_mvar_value_86;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 85, tmp_tuple_element_1 );
        tmp_mvar_value_87 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASC );

        if (unlikely( tmp_mvar_value_87 == NULL ))
        {
            tmp_mvar_value_87 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASC );
        }

        CHECK_OBJECT( tmp_mvar_value_87 );
        tmp_tuple_element_1 = tmp_mvar_value_87;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 86, tmp_tuple_element_1 );
        tmp_mvar_value_88 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASC );

        if (unlikely( tmp_mvar_value_88 == NULL ))
        {
            tmp_mvar_value_88 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASC );
        }

        CHECK_OBJECT( tmp_mvar_value_88 );
        tmp_tuple_element_1 = tmp_mvar_value_88;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 87, tmp_tuple_element_1 );
        tmp_mvar_value_89 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASC );

        if (unlikely( tmp_mvar_value_89 == NULL ))
        {
            tmp_mvar_value_89 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASC );
        }

        CHECK_OBJECT( tmp_mvar_value_89 );
        tmp_tuple_element_1 = tmp_mvar_value_89;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 88, tmp_tuple_element_1 );
        tmp_mvar_value_90 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASC );

        if (unlikely( tmp_mvar_value_90 == NULL ))
        {
            tmp_mvar_value_90 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASC );
        }

        CHECK_OBJECT( tmp_mvar_value_90 );
        tmp_tuple_element_1 = tmp_mvar_value_90;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 89, tmp_tuple_element_1 );
        tmp_mvar_value_91 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASC );

        if (unlikely( tmp_mvar_value_91 == NULL ))
        {
            tmp_mvar_value_91 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASC );
        }

        CHECK_OBJECT( tmp_mvar_value_91 );
        tmp_tuple_element_1 = tmp_mvar_value_91;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 90, tmp_tuple_element_1 );
        tmp_mvar_value_92 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_92 == NULL ))
        {
            tmp_mvar_value_92 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_92 );
        tmp_tuple_element_1 = tmp_mvar_value_92;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 91, tmp_tuple_element_1 );
        tmp_mvar_value_93 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_93 == NULL ))
        {
            tmp_mvar_value_93 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_93 );
        tmp_tuple_element_1 = tmp_mvar_value_93;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 92, tmp_tuple_element_1 );
        tmp_mvar_value_94 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_94 == NULL ))
        {
            tmp_mvar_value_94 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_94 );
        tmp_tuple_element_1 = tmp_mvar_value_94;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 93, tmp_tuple_element_1 );
        tmp_mvar_value_95 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_95 == NULL ))
        {
            tmp_mvar_value_95 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_95 );
        tmp_tuple_element_1 = tmp_mvar_value_95;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 94, tmp_tuple_element_1 );
        tmp_mvar_value_96 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_96 == NULL ))
        {
            tmp_mvar_value_96 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_96 );
        tmp_tuple_element_1 = tmp_mvar_value_96;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 95, tmp_tuple_element_1 );
        tmp_mvar_value_97 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_97 == NULL ))
        {
            tmp_mvar_value_97 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_97 );
        tmp_tuple_element_1 = tmp_mvar_value_97;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 96, tmp_tuple_element_1 );
        tmp_mvar_value_98 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASS );

        if (unlikely( tmp_mvar_value_98 == NULL ))
        {
            tmp_mvar_value_98 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASS );
        }

        CHECK_OBJECT( tmp_mvar_value_98 );
        tmp_tuple_element_1 = tmp_mvar_value_98;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 97, tmp_tuple_element_1 );
        tmp_mvar_value_99 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASS );

        if (unlikely( tmp_mvar_value_99 == NULL ))
        {
            tmp_mvar_value_99 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASS );
        }

        CHECK_OBJECT( tmp_mvar_value_99 );
        tmp_tuple_element_1 = tmp_mvar_value_99;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 98, tmp_tuple_element_1 );
        tmp_mvar_value_100 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASS );

        if (unlikely( tmp_mvar_value_100 == NULL ))
        {
            tmp_mvar_value_100 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASS );
        }

        CHECK_OBJECT( tmp_mvar_value_100 );
        tmp_tuple_element_1 = tmp_mvar_value_100;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 99, tmp_tuple_element_1 );
        tmp_mvar_value_101 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASS );

        if (unlikely( tmp_mvar_value_101 == NULL ))
        {
            tmp_mvar_value_101 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASS );
        }

        CHECK_OBJECT( tmp_mvar_value_101 );
        tmp_tuple_element_1 = tmp_mvar_value_101;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 100, tmp_tuple_element_1 );
        tmp_mvar_value_102 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASS );

        if (unlikely( tmp_mvar_value_102 == NULL ))
        {
            tmp_mvar_value_102 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASS );
        }

        CHECK_OBJECT( tmp_mvar_value_102 );
        tmp_tuple_element_1 = tmp_mvar_value_102;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 101, tmp_tuple_element_1 );
        tmp_mvar_value_103 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASS );

        if (unlikely( tmp_mvar_value_103 == NULL ))
        {
            tmp_mvar_value_103 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASS );
        }

        CHECK_OBJECT( tmp_mvar_value_103 );
        tmp_tuple_element_1 = tmp_mvar_value_103;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 102, tmp_tuple_element_1 );
        tmp_mvar_value_104 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASS );

        if (unlikely( tmp_mvar_value_104 == NULL ))
        {
            tmp_mvar_value_104 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASS );
        }

        CHECK_OBJECT( tmp_mvar_value_104 );
        tmp_tuple_element_1 = tmp_mvar_value_104;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 103, tmp_tuple_element_1 );
        tmp_mvar_value_105 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASS );

        if (unlikely( tmp_mvar_value_105 == NULL ))
        {
            tmp_mvar_value_105 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASS );
        }

        CHECK_OBJECT( tmp_mvar_value_105 );
        tmp_tuple_element_1 = tmp_mvar_value_105;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 104, tmp_tuple_element_1 );
        tmp_mvar_value_106 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASS );

        if (unlikely( tmp_mvar_value_106 == NULL ))
        {
            tmp_mvar_value_106 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASS );
        }

        CHECK_OBJECT( tmp_mvar_value_106 );
        tmp_tuple_element_1 = tmp_mvar_value_106;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 105, tmp_tuple_element_1 );
        tmp_mvar_value_107 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASS );

        if (unlikely( tmp_mvar_value_107 == NULL ))
        {
            tmp_mvar_value_107 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASS );
        }

        CHECK_OBJECT( tmp_mvar_value_107 );
        tmp_tuple_element_1 = tmp_mvar_value_107;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 106, tmp_tuple_element_1 );
        tmp_mvar_value_108 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASS );

        if (unlikely( tmp_mvar_value_108 == NULL ))
        {
            tmp_mvar_value_108 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASS );
        }

        CHECK_OBJECT( tmp_mvar_value_108 );
        tmp_tuple_element_1 = tmp_mvar_value_108;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 107, tmp_tuple_element_1 );
        tmp_mvar_value_109 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASS );

        if (unlikely( tmp_mvar_value_109 == NULL ))
        {
            tmp_mvar_value_109 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASS );
        }

        CHECK_OBJECT( tmp_mvar_value_109 );
        tmp_tuple_element_1 = tmp_mvar_value_109;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 108, tmp_tuple_element_1 );
        tmp_mvar_value_110 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASS );

        if (unlikely( tmp_mvar_value_110 == NULL ))
        {
            tmp_mvar_value_110 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASS );
        }

        CHECK_OBJECT( tmp_mvar_value_110 );
        tmp_tuple_element_1 = tmp_mvar_value_110;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 109, tmp_tuple_element_1 );
        tmp_mvar_value_111 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASS );

        if (unlikely( tmp_mvar_value_111 == NULL ))
        {
            tmp_mvar_value_111 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASS );
        }

        CHECK_OBJECT( tmp_mvar_value_111 );
        tmp_tuple_element_1 = tmp_mvar_value_111;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 110, tmp_tuple_element_1 );
        tmp_mvar_value_112 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASS );

        if (unlikely( tmp_mvar_value_112 == NULL ))
        {
            tmp_mvar_value_112 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASS );
        }

        CHECK_OBJECT( tmp_mvar_value_112 );
        tmp_tuple_element_1 = tmp_mvar_value_112;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 111, tmp_tuple_element_1 );
        tmp_mvar_value_113 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASS );

        if (unlikely( tmp_mvar_value_113 == NULL ))
        {
            tmp_mvar_value_113 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASS );
        }

        CHECK_OBJECT( tmp_mvar_value_113 );
        tmp_tuple_element_1 = tmp_mvar_value_113;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 112, tmp_tuple_element_1 );
        tmp_mvar_value_114 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASS );

        if (unlikely( tmp_mvar_value_114 == NULL ))
        {
            tmp_mvar_value_114 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASS );
        }

        CHECK_OBJECT( tmp_mvar_value_114 );
        tmp_tuple_element_1 = tmp_mvar_value_114;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 113, tmp_tuple_element_1 );
        tmp_mvar_value_115 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASS );

        if (unlikely( tmp_mvar_value_115 == NULL ))
        {
            tmp_mvar_value_115 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASS );
        }

        CHECK_OBJECT( tmp_mvar_value_115 );
        tmp_tuple_element_1 = tmp_mvar_value_115;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 114, tmp_tuple_element_1 );
        tmp_mvar_value_116 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASS );

        if (unlikely( tmp_mvar_value_116 == NULL ))
        {
            tmp_mvar_value_116 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASS );
        }

        CHECK_OBJECT( tmp_mvar_value_116 );
        tmp_tuple_element_1 = tmp_mvar_value_116;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 115, tmp_tuple_element_1 );
        tmp_mvar_value_117 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASS );

        if (unlikely( tmp_mvar_value_117 == NULL ))
        {
            tmp_mvar_value_117 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASS );
        }

        CHECK_OBJECT( tmp_mvar_value_117 );
        tmp_tuple_element_1 = tmp_mvar_value_117;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 116, tmp_tuple_element_1 );
        tmp_mvar_value_118 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASS );

        if (unlikely( tmp_mvar_value_118 == NULL ))
        {
            tmp_mvar_value_118 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASS );
        }

        CHECK_OBJECT( tmp_mvar_value_118 );
        tmp_tuple_element_1 = tmp_mvar_value_118;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 117, tmp_tuple_element_1 );
        tmp_mvar_value_119 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASS );

        if (unlikely( tmp_mvar_value_119 == NULL ))
        {
            tmp_mvar_value_119 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASS );
        }

        CHECK_OBJECT( tmp_mvar_value_119 );
        tmp_tuple_element_1 = tmp_mvar_value_119;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 118, tmp_tuple_element_1 );
        tmp_mvar_value_120 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASS );

        if (unlikely( tmp_mvar_value_120 == NULL ))
        {
            tmp_mvar_value_120 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASS );
        }

        CHECK_OBJECT( tmp_mvar_value_120 );
        tmp_tuple_element_1 = tmp_mvar_value_120;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 119, tmp_tuple_element_1 );
        tmp_mvar_value_121 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASS );

        if (unlikely( tmp_mvar_value_121 == NULL ))
        {
            tmp_mvar_value_121 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASS );
        }

        CHECK_OBJECT( tmp_mvar_value_121 );
        tmp_tuple_element_1 = tmp_mvar_value_121;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 120, tmp_tuple_element_1 );
        tmp_mvar_value_122 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASS );

        if (unlikely( tmp_mvar_value_122 == NULL ))
        {
            tmp_mvar_value_122 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASS );
        }

        CHECK_OBJECT( tmp_mvar_value_122 );
        tmp_tuple_element_1 = tmp_mvar_value_122;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 121, tmp_tuple_element_1 );
        tmp_mvar_value_123 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASS );

        if (unlikely( tmp_mvar_value_123 == NULL ))
        {
            tmp_mvar_value_123 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASS );
        }

        CHECK_OBJECT( tmp_mvar_value_123 );
        tmp_tuple_element_1 = tmp_mvar_value_123;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 122, tmp_tuple_element_1 );
        tmp_mvar_value_124 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_124 == NULL ))
        {
            tmp_mvar_value_124 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_124 );
        tmp_tuple_element_1 = tmp_mvar_value_124;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 123, tmp_tuple_element_1 );
        tmp_mvar_value_125 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_125 == NULL ))
        {
            tmp_mvar_value_125 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_125 );
        tmp_tuple_element_1 = tmp_mvar_value_125;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 124, tmp_tuple_element_1 );
        tmp_mvar_value_126 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_126 == NULL ))
        {
            tmp_mvar_value_126 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_126 );
        tmp_tuple_element_1 = tmp_mvar_value_126;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 125, tmp_tuple_element_1 );
        tmp_mvar_value_127 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_127 == NULL ))
        {
            tmp_mvar_value_127 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_127 );
        tmp_tuple_element_1 = tmp_mvar_value_127;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 126, tmp_tuple_element_1 );
        tmp_mvar_value_128 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_128 == NULL ))
        {
            tmp_mvar_value_128 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_128 );
        tmp_tuple_element_1 = tmp_mvar_value_128;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 127, tmp_tuple_element_1 );
        tmp_mvar_value_129 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_129 == NULL ))
        {
            tmp_mvar_value_129 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_129 );
        tmp_tuple_element_1 = tmp_mvar_value_129;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 128, tmp_tuple_element_1 );
        tmp_mvar_value_130 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_UDF );

        if (unlikely( tmp_mvar_value_130 == NULL ))
        {
            tmp_mvar_value_130 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UDF );
        }

        CHECK_OBJECT( tmp_mvar_value_130 );
        tmp_tuple_element_1 = tmp_mvar_value_130;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 129, tmp_tuple_element_1 );
        tmp_mvar_value_131 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_131 == NULL ))
        {
            tmp_mvar_value_131 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_131 );
        tmp_tuple_element_1 = tmp_mvar_value_131;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 130, tmp_tuple_element_1 );
        tmp_mvar_value_132 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASO );

        if (unlikely( tmp_mvar_value_132 == NULL ))
        {
            tmp_mvar_value_132 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASO );
        }

        CHECK_OBJECT( tmp_mvar_value_132 );
        tmp_tuple_element_1 = tmp_mvar_value_132;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 131, tmp_tuple_element_1 );
        tmp_mvar_value_133 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_133 == NULL ))
        {
            tmp_mvar_value_133 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_133 );
        tmp_tuple_element_1 = tmp_mvar_value_133;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 132, tmp_tuple_element_1 );
        tmp_mvar_value_134 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_134 == NULL ))
        {
            tmp_mvar_value_134 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_134 );
        tmp_tuple_element_1 = tmp_mvar_value_134;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 133, tmp_tuple_element_1 );
        tmp_mvar_value_135 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_135 == NULL ))
        {
            tmp_mvar_value_135 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_135 );
        tmp_tuple_element_1 = tmp_mvar_value_135;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 134, tmp_tuple_element_1 );
        tmp_mvar_value_136 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_136 == NULL ))
        {
            tmp_mvar_value_136 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_136 );
        tmp_tuple_element_1 = tmp_mvar_value_136;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 135, tmp_tuple_element_1 );
        tmp_mvar_value_137 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_137 == NULL ))
        {
            tmp_mvar_value_137 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_137 );
        tmp_tuple_element_1 = tmp_mvar_value_137;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 136, tmp_tuple_element_1 );
        tmp_mvar_value_138 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_138 == NULL ))
        {
            tmp_mvar_value_138 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_138 );
        tmp_tuple_element_1 = tmp_mvar_value_138;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 137, tmp_tuple_element_1 );
        tmp_mvar_value_139 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACO );

        if (unlikely( tmp_mvar_value_139 == NULL ))
        {
            tmp_mvar_value_139 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACO );
        }

        CHECK_OBJECT( tmp_mvar_value_139 );
        tmp_tuple_element_1 = tmp_mvar_value_139;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 138, tmp_tuple_element_1 );
        tmp_mvar_value_140 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_140 == NULL ))
        {
            tmp_mvar_value_140 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_140 );
        tmp_tuple_element_1 = tmp_mvar_value_140;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 139, tmp_tuple_element_1 );
        tmp_mvar_value_141 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACO );

        if (unlikely( tmp_mvar_value_141 == NULL ))
        {
            tmp_mvar_value_141 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACO );
        }

        CHECK_OBJECT( tmp_mvar_value_141 );
        tmp_tuple_element_1 = tmp_mvar_value_141;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 140, tmp_tuple_element_1 );
        tmp_mvar_value_142 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_UDF );

        if (unlikely( tmp_mvar_value_142 == NULL ))
        {
            tmp_mvar_value_142 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UDF );
        }

        CHECK_OBJECT( tmp_mvar_value_142 );
        tmp_tuple_element_1 = tmp_mvar_value_142;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 141, tmp_tuple_element_1 );
        tmp_mvar_value_143 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACO );

        if (unlikely( tmp_mvar_value_143 == NULL ))
        {
            tmp_mvar_value_143 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACO );
        }

        CHECK_OBJECT( tmp_mvar_value_143 );
        tmp_tuple_element_1 = tmp_mvar_value_143;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 142, tmp_tuple_element_1 );
        tmp_mvar_value_144 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_UDF );

        if (unlikely( tmp_mvar_value_144 == NULL ))
        {
            tmp_mvar_value_144 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UDF );
        }

        CHECK_OBJECT( tmp_mvar_value_144 );
        tmp_tuple_element_1 = tmp_mvar_value_144;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 143, tmp_tuple_element_1 );
        tmp_mvar_value_145 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_UDF );

        if (unlikely( tmp_mvar_value_145 == NULL ))
        {
            tmp_mvar_value_145 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UDF );
        }

        CHECK_OBJECT( tmp_mvar_value_145 );
        tmp_tuple_element_1 = tmp_mvar_value_145;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 144, tmp_tuple_element_1 );
        tmp_mvar_value_146 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_146 == NULL ))
        {
            tmp_mvar_value_146 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_146 );
        tmp_tuple_element_1 = tmp_mvar_value_146;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 145, tmp_tuple_element_1 );
        tmp_mvar_value_147 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_147 == NULL ))
        {
            tmp_mvar_value_147 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_147 );
        tmp_tuple_element_1 = tmp_mvar_value_147;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 146, tmp_tuple_element_1 );
        tmp_mvar_value_148 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_148 == NULL ))
        {
            tmp_mvar_value_148 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_148 );
        tmp_tuple_element_1 = tmp_mvar_value_148;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 147, tmp_tuple_element_1 );
        tmp_mvar_value_149 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_149 == NULL ))
        {
            tmp_mvar_value_149 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_149 );
        tmp_tuple_element_1 = tmp_mvar_value_149;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 148, tmp_tuple_element_1 );
        tmp_mvar_value_150 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_150 == NULL ))
        {
            tmp_mvar_value_150 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_150 );
        tmp_tuple_element_1 = tmp_mvar_value_150;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 149, tmp_tuple_element_1 );
        tmp_mvar_value_151 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_151 == NULL ))
        {
            tmp_mvar_value_151 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_151 );
        tmp_tuple_element_1 = tmp_mvar_value_151;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 150, tmp_tuple_element_1 );
        tmp_mvar_value_152 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_152 == NULL ))
        {
            tmp_mvar_value_152 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_152 );
        tmp_tuple_element_1 = tmp_mvar_value_152;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 151, tmp_tuple_element_1 );
        tmp_mvar_value_153 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_153 == NULL ))
        {
            tmp_mvar_value_153 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_153 );
        tmp_tuple_element_1 = tmp_mvar_value_153;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 152, tmp_tuple_element_1 );
        tmp_mvar_value_154 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_154 == NULL ))
        {
            tmp_mvar_value_154 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_154 );
        tmp_tuple_element_1 = tmp_mvar_value_154;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 153, tmp_tuple_element_1 );
        tmp_mvar_value_155 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASO );

        if (unlikely( tmp_mvar_value_155 == NULL ))
        {
            tmp_mvar_value_155 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASO );
        }

        CHECK_OBJECT( tmp_mvar_value_155 );
        tmp_tuple_element_1 = tmp_mvar_value_155;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 154, tmp_tuple_element_1 );
        tmp_mvar_value_156 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_156 == NULL ))
        {
            tmp_mvar_value_156 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_156 );
        tmp_tuple_element_1 = tmp_mvar_value_156;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 155, tmp_tuple_element_1 );
        tmp_mvar_value_157 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASO );

        if (unlikely( tmp_mvar_value_157 == NULL ))
        {
            tmp_mvar_value_157 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASO );
        }

        CHECK_OBJECT( tmp_mvar_value_157 );
        tmp_tuple_element_1 = tmp_mvar_value_157;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 156, tmp_tuple_element_1 );
        tmp_mvar_value_158 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_UDF );

        if (unlikely( tmp_mvar_value_158 == NULL ))
        {
            tmp_mvar_value_158 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UDF );
        }

        CHECK_OBJECT( tmp_mvar_value_158 );
        tmp_tuple_element_1 = tmp_mvar_value_158;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 157, tmp_tuple_element_1 );
        tmp_mvar_value_159 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASO );

        if (unlikely( tmp_mvar_value_159 == NULL ))
        {
            tmp_mvar_value_159 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASO );
        }

        CHECK_OBJECT( tmp_mvar_value_159 );
        tmp_tuple_element_1 = tmp_mvar_value_159;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 158, tmp_tuple_element_1 );
        tmp_mvar_value_160 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACO );

        if (unlikely( tmp_mvar_value_160 == NULL ))
        {
            tmp_mvar_value_160 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACO );
        }

        CHECK_OBJECT( tmp_mvar_value_160 );
        tmp_tuple_element_1 = tmp_mvar_value_160;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 159, tmp_tuple_element_1 );
        tmp_mvar_value_161 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_161 == NULL ))
        {
            tmp_mvar_value_161 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_161 );
        tmp_tuple_element_1 = tmp_mvar_value_161;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 160, tmp_tuple_element_1 );
        tmp_mvar_value_162 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_162 == NULL ))
        {
            tmp_mvar_value_162 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_162 );
        tmp_tuple_element_1 = tmp_mvar_value_162;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 161, tmp_tuple_element_1 );
        tmp_mvar_value_163 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_163 == NULL ))
        {
            tmp_mvar_value_163 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_163 );
        tmp_tuple_element_1 = tmp_mvar_value_163;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 162, tmp_tuple_element_1 );
        tmp_mvar_value_164 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_164 == NULL ))
        {
            tmp_mvar_value_164 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_164 );
        tmp_tuple_element_1 = tmp_mvar_value_164;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 163, tmp_tuple_element_1 );
        tmp_mvar_value_165 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_165 == NULL ))
        {
            tmp_mvar_value_165 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_165 );
        tmp_tuple_element_1 = tmp_mvar_value_165;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 164, tmp_tuple_element_1 );
        tmp_mvar_value_166 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_166 == NULL ))
        {
            tmp_mvar_value_166 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_166 );
        tmp_tuple_element_1 = tmp_mvar_value_166;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 165, tmp_tuple_element_1 );
        tmp_mvar_value_167 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_167 == NULL ))
        {
            tmp_mvar_value_167 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_167 );
        tmp_tuple_element_1 = tmp_mvar_value_167;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 166, tmp_tuple_element_1 );
        tmp_mvar_value_168 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_168 == NULL ))
        {
            tmp_mvar_value_168 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_168 );
        tmp_tuple_element_1 = tmp_mvar_value_168;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 167, tmp_tuple_element_1 );
        tmp_mvar_value_169 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_169 == NULL ))
        {
            tmp_mvar_value_169 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_169 );
        tmp_tuple_element_1 = tmp_mvar_value_169;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 168, tmp_tuple_element_1 );
        tmp_mvar_value_170 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_170 == NULL ))
        {
            tmp_mvar_value_170 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_170 );
        tmp_tuple_element_1 = tmp_mvar_value_170;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 169, tmp_tuple_element_1 );
        tmp_mvar_value_171 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_171 == NULL ))
        {
            tmp_mvar_value_171 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_171 );
        tmp_tuple_element_1 = tmp_mvar_value_171;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 170, tmp_tuple_element_1 );
        tmp_mvar_value_172 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_172 == NULL ))
        {
            tmp_mvar_value_172 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_172 );
        tmp_tuple_element_1 = tmp_mvar_value_172;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 171, tmp_tuple_element_1 );
        tmp_mvar_value_173 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_173 == NULL ))
        {
            tmp_mvar_value_173 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_173 );
        tmp_tuple_element_1 = tmp_mvar_value_173;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 172, tmp_tuple_element_1 );
        tmp_mvar_value_174 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_174 == NULL ))
        {
            tmp_mvar_value_174 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_174 );
        tmp_tuple_element_1 = tmp_mvar_value_174;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 173, tmp_tuple_element_1 );
        tmp_mvar_value_175 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_175 == NULL ))
        {
            tmp_mvar_value_175 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_175 );
        tmp_tuple_element_1 = tmp_mvar_value_175;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 174, tmp_tuple_element_1 );
        tmp_mvar_value_176 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_176 == NULL ))
        {
            tmp_mvar_value_176 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_176 );
        tmp_tuple_element_1 = tmp_mvar_value_176;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 175, tmp_tuple_element_1 );
        tmp_mvar_value_177 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_177 == NULL ))
        {
            tmp_mvar_value_177 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_177 );
        tmp_tuple_element_1 = tmp_mvar_value_177;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 176, tmp_tuple_element_1 );
        tmp_mvar_value_178 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_178 == NULL ))
        {
            tmp_mvar_value_178 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_178 );
        tmp_tuple_element_1 = tmp_mvar_value_178;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 177, tmp_tuple_element_1 );
        tmp_mvar_value_179 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_179 == NULL ))
        {
            tmp_mvar_value_179 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_179 );
        tmp_tuple_element_1 = tmp_mvar_value_179;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 178, tmp_tuple_element_1 );
        tmp_mvar_value_180 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_180 == NULL ))
        {
            tmp_mvar_value_180 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_180 );
        tmp_tuple_element_1 = tmp_mvar_value_180;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 179, tmp_tuple_element_1 );
        tmp_mvar_value_181 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_181 == NULL ))
        {
            tmp_mvar_value_181 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_181 );
        tmp_tuple_element_1 = tmp_mvar_value_181;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 180, tmp_tuple_element_1 );
        tmp_mvar_value_182 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_182 == NULL ))
        {
            tmp_mvar_value_182 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_182 );
        tmp_tuple_element_1 = tmp_mvar_value_182;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 181, tmp_tuple_element_1 );
        tmp_mvar_value_183 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_183 == NULL ))
        {
            tmp_mvar_value_183 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_183 );
        tmp_tuple_element_1 = tmp_mvar_value_183;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 182, tmp_tuple_element_1 );
        tmp_mvar_value_184 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_184 == NULL ))
        {
            tmp_mvar_value_184 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_184 );
        tmp_tuple_element_1 = tmp_mvar_value_184;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 183, tmp_tuple_element_1 );
        tmp_mvar_value_185 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_185 == NULL ))
        {
            tmp_mvar_value_185 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_185 );
        tmp_tuple_element_1 = tmp_mvar_value_185;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 184, tmp_tuple_element_1 );
        tmp_mvar_value_186 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_186 == NULL ))
        {
            tmp_mvar_value_186 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_186 );
        tmp_tuple_element_1 = tmp_mvar_value_186;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 185, tmp_tuple_element_1 );
        tmp_mvar_value_187 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_187 == NULL ))
        {
            tmp_mvar_value_187 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_187 );
        tmp_tuple_element_1 = tmp_mvar_value_187;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 186, tmp_tuple_element_1 );
        tmp_mvar_value_188 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_188 == NULL ))
        {
            tmp_mvar_value_188 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_188 );
        tmp_tuple_element_1 = tmp_mvar_value_188;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 187, tmp_tuple_element_1 );
        tmp_mvar_value_189 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_189 == NULL ))
        {
            tmp_mvar_value_189 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_189 );
        tmp_tuple_element_1 = tmp_mvar_value_189;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 188, tmp_tuple_element_1 );
        tmp_mvar_value_190 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_190 == NULL ))
        {
            tmp_mvar_value_190 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_190 );
        tmp_tuple_element_1 = tmp_mvar_value_190;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 189, tmp_tuple_element_1 );
        tmp_mvar_value_191 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_191 == NULL ))
        {
            tmp_mvar_value_191 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_191 );
        tmp_tuple_element_1 = tmp_mvar_value_191;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 190, tmp_tuple_element_1 );
        tmp_mvar_value_192 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_192 == NULL ))
        {
            tmp_mvar_value_192 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_192 );
        tmp_tuple_element_1 = tmp_mvar_value_192;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 191, tmp_tuple_element_1 );
        tmp_mvar_value_193 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACV );

        if (unlikely( tmp_mvar_value_193 == NULL ))
        {
            tmp_mvar_value_193 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACV );
        }

        CHECK_OBJECT( tmp_mvar_value_193 );
        tmp_tuple_element_1 = tmp_mvar_value_193;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 192, tmp_tuple_element_1 );
        tmp_mvar_value_194 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACV );

        if (unlikely( tmp_mvar_value_194 == NULL ))
        {
            tmp_mvar_value_194 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACV );
        }

        CHECK_OBJECT( tmp_mvar_value_194 );
        tmp_tuple_element_1 = tmp_mvar_value_194;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 193, tmp_tuple_element_1 );
        tmp_mvar_value_195 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACV );

        if (unlikely( tmp_mvar_value_195 == NULL ))
        {
            tmp_mvar_value_195 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACV );
        }

        CHECK_OBJECT( tmp_mvar_value_195 );
        tmp_tuple_element_1 = tmp_mvar_value_195;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 194, tmp_tuple_element_1 );
        tmp_mvar_value_196 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACV );

        if (unlikely( tmp_mvar_value_196 == NULL ))
        {
            tmp_mvar_value_196 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACV );
        }

        CHECK_OBJECT( tmp_mvar_value_196 );
        tmp_tuple_element_1 = tmp_mvar_value_196;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 195, tmp_tuple_element_1 );
        tmp_mvar_value_197 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACV );

        if (unlikely( tmp_mvar_value_197 == NULL ))
        {
            tmp_mvar_value_197 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACV );
        }

        CHECK_OBJECT( tmp_mvar_value_197 );
        tmp_tuple_element_1 = tmp_mvar_value_197;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 196, tmp_tuple_element_1 );
        tmp_mvar_value_198 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACV );

        if (unlikely( tmp_mvar_value_198 == NULL ))
        {
            tmp_mvar_value_198 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACV );
        }

        CHECK_OBJECT( tmp_mvar_value_198 );
        tmp_tuple_element_1 = tmp_mvar_value_198;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 197, tmp_tuple_element_1 );
        tmp_mvar_value_199 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACO );

        if (unlikely( tmp_mvar_value_199 == NULL ))
        {
            tmp_mvar_value_199 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACO );
        }

        CHECK_OBJECT( tmp_mvar_value_199 );
        tmp_tuple_element_1 = tmp_mvar_value_199;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 198, tmp_tuple_element_1 );
        tmp_mvar_value_200 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACO );

        if (unlikely( tmp_mvar_value_200 == NULL ))
        {
            tmp_mvar_value_200 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACO );
        }

        CHECK_OBJECT( tmp_mvar_value_200 );
        tmp_tuple_element_1 = tmp_mvar_value_200;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 199, tmp_tuple_element_1 );
        tmp_mvar_value_201 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACV );

        if (unlikely( tmp_mvar_value_201 == NULL ))
        {
            tmp_mvar_value_201 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACV );
        }

        CHECK_OBJECT( tmp_mvar_value_201 );
        tmp_tuple_element_1 = tmp_mvar_value_201;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 200, tmp_tuple_element_1 );
        tmp_mvar_value_202 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACV );

        if (unlikely( tmp_mvar_value_202 == NULL ))
        {
            tmp_mvar_value_202 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACV );
        }

        CHECK_OBJECT( tmp_mvar_value_202 );
        tmp_tuple_element_1 = tmp_mvar_value_202;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 201, tmp_tuple_element_1 );
        tmp_mvar_value_203 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACV );

        if (unlikely( tmp_mvar_value_203 == NULL ))
        {
            tmp_mvar_value_203 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACV );
        }

        CHECK_OBJECT( tmp_mvar_value_203 );
        tmp_tuple_element_1 = tmp_mvar_value_203;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 202, tmp_tuple_element_1 );
        tmp_mvar_value_204 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACV );

        if (unlikely( tmp_mvar_value_204 == NULL ))
        {
            tmp_mvar_value_204 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACV );
        }

        CHECK_OBJECT( tmp_mvar_value_204 );
        tmp_tuple_element_1 = tmp_mvar_value_204;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 203, tmp_tuple_element_1 );
        tmp_mvar_value_205 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACV );

        if (unlikely( tmp_mvar_value_205 == NULL ))
        {
            tmp_mvar_value_205 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACV );
        }

        CHECK_OBJECT( tmp_mvar_value_205 );
        tmp_tuple_element_1 = tmp_mvar_value_205;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 204, tmp_tuple_element_1 );
        tmp_mvar_value_206 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACV );

        if (unlikely( tmp_mvar_value_206 == NULL ))
        {
            tmp_mvar_value_206 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACV );
        }

        CHECK_OBJECT( tmp_mvar_value_206 );
        tmp_tuple_element_1 = tmp_mvar_value_206;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 205, tmp_tuple_element_1 );
        tmp_mvar_value_207 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACV );

        if (unlikely( tmp_mvar_value_207 == NULL ))
        {
            tmp_mvar_value_207 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACV );
        }

        CHECK_OBJECT( tmp_mvar_value_207 );
        tmp_tuple_element_1 = tmp_mvar_value_207;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 206, tmp_tuple_element_1 );
        tmp_mvar_value_208 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACV );

        if (unlikely( tmp_mvar_value_208 == NULL ))
        {
            tmp_mvar_value_208 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACV );
        }

        CHECK_OBJECT( tmp_mvar_value_208 );
        tmp_tuple_element_1 = tmp_mvar_value_208;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 207, tmp_tuple_element_1 );
        tmp_mvar_value_209 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACO );

        if (unlikely( tmp_mvar_value_209 == NULL ))
        {
            tmp_mvar_value_209 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACO );
        }

        CHECK_OBJECT( tmp_mvar_value_209 );
        tmp_tuple_element_1 = tmp_mvar_value_209;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 208, tmp_tuple_element_1 );
        tmp_mvar_value_210 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACO );

        if (unlikely( tmp_mvar_value_210 == NULL ))
        {
            tmp_mvar_value_210 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACO );
        }

        CHECK_OBJECT( tmp_mvar_value_210 );
        tmp_tuple_element_1 = tmp_mvar_value_210;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 209, tmp_tuple_element_1 );
        tmp_mvar_value_211 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACV );

        if (unlikely( tmp_mvar_value_211 == NULL ))
        {
            tmp_mvar_value_211 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACV );
        }

        CHECK_OBJECT( tmp_mvar_value_211 );
        tmp_tuple_element_1 = tmp_mvar_value_211;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 210, tmp_tuple_element_1 );
        tmp_mvar_value_212 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACV );

        if (unlikely( tmp_mvar_value_212 == NULL ))
        {
            tmp_mvar_value_212 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACV );
        }

        CHECK_OBJECT( tmp_mvar_value_212 );
        tmp_tuple_element_1 = tmp_mvar_value_212;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 211, tmp_tuple_element_1 );
        tmp_mvar_value_213 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACV );

        if (unlikely( tmp_mvar_value_213 == NULL ))
        {
            tmp_mvar_value_213 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACV );
        }

        CHECK_OBJECT( tmp_mvar_value_213 );
        tmp_tuple_element_1 = tmp_mvar_value_213;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 212, tmp_tuple_element_1 );
        tmp_mvar_value_214 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACV );

        if (unlikely( tmp_mvar_value_214 == NULL ))
        {
            tmp_mvar_value_214 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACV );
        }

        CHECK_OBJECT( tmp_mvar_value_214 );
        tmp_tuple_element_1 = tmp_mvar_value_214;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 213, tmp_tuple_element_1 );
        tmp_mvar_value_215 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACV );

        if (unlikely( tmp_mvar_value_215 == NULL ))
        {
            tmp_mvar_value_215 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACV );
        }

        CHECK_OBJECT( tmp_mvar_value_215 );
        tmp_tuple_element_1 = tmp_mvar_value_215;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 214, tmp_tuple_element_1 );
        tmp_mvar_value_216 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_216 == NULL ))
        {
            tmp_mvar_value_216 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_216 );
        tmp_tuple_element_1 = tmp_mvar_value_216;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 215, tmp_tuple_element_1 );
        tmp_mvar_value_217 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACV );

        if (unlikely( tmp_mvar_value_217 == NULL ))
        {
            tmp_mvar_value_217 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACV );
        }

        CHECK_OBJECT( tmp_mvar_value_217 );
        tmp_tuple_element_1 = tmp_mvar_value_217;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 216, tmp_tuple_element_1 );
        tmp_mvar_value_218 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACV );

        if (unlikely( tmp_mvar_value_218 == NULL ))
        {
            tmp_mvar_value_218 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACV );
        }

        CHECK_OBJECT( tmp_mvar_value_218 );
        tmp_tuple_element_1 = tmp_mvar_value_218;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 217, tmp_tuple_element_1 );
        tmp_mvar_value_219 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACV );

        if (unlikely( tmp_mvar_value_219 == NULL ))
        {
            tmp_mvar_value_219 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACV );
        }

        CHECK_OBJECT( tmp_mvar_value_219 );
        tmp_tuple_element_1 = tmp_mvar_value_219;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 218, tmp_tuple_element_1 );
        tmp_mvar_value_220 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACV );

        if (unlikely( tmp_mvar_value_220 == NULL ))
        {
            tmp_mvar_value_220 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACV );
        }

        CHECK_OBJECT( tmp_mvar_value_220 );
        tmp_tuple_element_1 = tmp_mvar_value_220;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 219, tmp_tuple_element_1 );
        tmp_mvar_value_221 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACV );

        if (unlikely( tmp_mvar_value_221 == NULL ))
        {
            tmp_mvar_value_221 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACV );
        }

        CHECK_OBJECT( tmp_mvar_value_221 );
        tmp_tuple_element_1 = tmp_mvar_value_221;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 220, tmp_tuple_element_1 );
        tmp_mvar_value_222 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACO );

        if (unlikely( tmp_mvar_value_222 == NULL ))
        {
            tmp_mvar_value_222 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACO );
        }

        CHECK_OBJECT( tmp_mvar_value_222 );
        tmp_tuple_element_1 = tmp_mvar_value_222;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 221, tmp_tuple_element_1 );
        tmp_mvar_value_223 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACO );

        if (unlikely( tmp_mvar_value_223 == NULL ))
        {
            tmp_mvar_value_223 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACO );
        }

        CHECK_OBJECT( tmp_mvar_value_223 );
        tmp_tuple_element_1 = tmp_mvar_value_223;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 222, tmp_tuple_element_1 );
        tmp_mvar_value_224 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ACO );

        if (unlikely( tmp_mvar_value_224 == NULL ))
        {
            tmp_mvar_value_224 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACO );
        }

        CHECK_OBJECT( tmp_mvar_value_224 );
        tmp_tuple_element_1 = tmp_mvar_value_224;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 223, tmp_tuple_element_1 );
        tmp_mvar_value_225 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASV );

        if (unlikely( tmp_mvar_value_225 == NULL ))
        {
            tmp_mvar_value_225 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASV );
        }

        CHECK_OBJECT( tmp_mvar_value_225 );
        tmp_tuple_element_1 = tmp_mvar_value_225;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 224, tmp_tuple_element_1 );
        tmp_mvar_value_226 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASV );

        if (unlikely( tmp_mvar_value_226 == NULL ))
        {
            tmp_mvar_value_226 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASV );
        }

        CHECK_OBJECT( tmp_mvar_value_226 );
        tmp_tuple_element_1 = tmp_mvar_value_226;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 225, tmp_tuple_element_1 );
        tmp_mvar_value_227 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASV );

        if (unlikely( tmp_mvar_value_227 == NULL ))
        {
            tmp_mvar_value_227 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASV );
        }

        CHECK_OBJECT( tmp_mvar_value_227 );
        tmp_tuple_element_1 = tmp_mvar_value_227;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 226, tmp_tuple_element_1 );
        tmp_mvar_value_228 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASV );

        if (unlikely( tmp_mvar_value_228 == NULL ))
        {
            tmp_mvar_value_228 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASV );
        }

        CHECK_OBJECT( tmp_mvar_value_228 );
        tmp_tuple_element_1 = tmp_mvar_value_228;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 227, tmp_tuple_element_1 );
        tmp_mvar_value_229 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASV );

        if (unlikely( tmp_mvar_value_229 == NULL ))
        {
            tmp_mvar_value_229 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASV );
        }

        CHECK_OBJECT( tmp_mvar_value_229 );
        tmp_tuple_element_1 = tmp_mvar_value_229;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 228, tmp_tuple_element_1 );
        tmp_mvar_value_230 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASV );

        if (unlikely( tmp_mvar_value_230 == NULL ))
        {
            tmp_mvar_value_230 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASV );
        }

        CHECK_OBJECT( tmp_mvar_value_230 );
        tmp_tuple_element_1 = tmp_mvar_value_230;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 229, tmp_tuple_element_1 );
        tmp_mvar_value_231 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASO );

        if (unlikely( tmp_mvar_value_231 == NULL ))
        {
            tmp_mvar_value_231 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASO );
        }

        CHECK_OBJECT( tmp_mvar_value_231 );
        tmp_tuple_element_1 = tmp_mvar_value_231;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 230, tmp_tuple_element_1 );
        tmp_mvar_value_232 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASO );

        if (unlikely( tmp_mvar_value_232 == NULL ))
        {
            tmp_mvar_value_232 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASO );
        }

        CHECK_OBJECT( tmp_mvar_value_232 );
        tmp_tuple_element_1 = tmp_mvar_value_232;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 231, tmp_tuple_element_1 );
        tmp_mvar_value_233 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASV );

        if (unlikely( tmp_mvar_value_233 == NULL ))
        {
            tmp_mvar_value_233 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASV );
        }

        CHECK_OBJECT( tmp_mvar_value_233 );
        tmp_tuple_element_1 = tmp_mvar_value_233;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 232, tmp_tuple_element_1 );
        tmp_mvar_value_234 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASV );

        if (unlikely( tmp_mvar_value_234 == NULL ))
        {
            tmp_mvar_value_234 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASV );
        }

        CHECK_OBJECT( tmp_mvar_value_234 );
        tmp_tuple_element_1 = tmp_mvar_value_234;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 233, tmp_tuple_element_1 );
        tmp_mvar_value_235 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASV );

        if (unlikely( tmp_mvar_value_235 == NULL ))
        {
            tmp_mvar_value_235 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASV );
        }

        CHECK_OBJECT( tmp_mvar_value_235 );
        tmp_tuple_element_1 = tmp_mvar_value_235;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 234, tmp_tuple_element_1 );
        tmp_mvar_value_236 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASV );

        if (unlikely( tmp_mvar_value_236 == NULL ))
        {
            tmp_mvar_value_236 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASV );
        }

        CHECK_OBJECT( tmp_mvar_value_236 );
        tmp_tuple_element_1 = tmp_mvar_value_236;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 235, tmp_tuple_element_1 );
        tmp_mvar_value_237 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASV );

        if (unlikely( tmp_mvar_value_237 == NULL ))
        {
            tmp_mvar_value_237 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASV );
        }

        CHECK_OBJECT( tmp_mvar_value_237 );
        tmp_tuple_element_1 = tmp_mvar_value_237;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 236, tmp_tuple_element_1 );
        tmp_mvar_value_238 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASV );

        if (unlikely( tmp_mvar_value_238 == NULL ))
        {
            tmp_mvar_value_238 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASV );
        }

        CHECK_OBJECT( tmp_mvar_value_238 );
        tmp_tuple_element_1 = tmp_mvar_value_238;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 237, tmp_tuple_element_1 );
        tmp_mvar_value_239 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASV );

        if (unlikely( tmp_mvar_value_239 == NULL ))
        {
            tmp_mvar_value_239 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASV );
        }

        CHECK_OBJECT( tmp_mvar_value_239 );
        tmp_tuple_element_1 = tmp_mvar_value_239;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 238, tmp_tuple_element_1 );
        tmp_mvar_value_240 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASV );

        if (unlikely( tmp_mvar_value_240 == NULL ))
        {
            tmp_mvar_value_240 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASV );
        }

        CHECK_OBJECT( tmp_mvar_value_240 );
        tmp_tuple_element_1 = tmp_mvar_value_240;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 239, tmp_tuple_element_1 );
        tmp_mvar_value_241 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASO );

        if (unlikely( tmp_mvar_value_241 == NULL ))
        {
            tmp_mvar_value_241 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASO );
        }

        CHECK_OBJECT( tmp_mvar_value_241 );
        tmp_tuple_element_1 = tmp_mvar_value_241;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 240, tmp_tuple_element_1 );
        tmp_mvar_value_242 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASO );

        if (unlikely( tmp_mvar_value_242 == NULL ))
        {
            tmp_mvar_value_242 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASO );
        }

        CHECK_OBJECT( tmp_mvar_value_242 );
        tmp_tuple_element_1 = tmp_mvar_value_242;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 241, tmp_tuple_element_1 );
        tmp_mvar_value_243 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASV );

        if (unlikely( tmp_mvar_value_243 == NULL ))
        {
            tmp_mvar_value_243 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASV );
        }

        CHECK_OBJECT( tmp_mvar_value_243 );
        tmp_tuple_element_1 = tmp_mvar_value_243;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 242, tmp_tuple_element_1 );
        tmp_mvar_value_244 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASV );

        if (unlikely( tmp_mvar_value_244 == NULL ))
        {
            tmp_mvar_value_244 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASV );
        }

        CHECK_OBJECT( tmp_mvar_value_244 );
        tmp_tuple_element_1 = tmp_mvar_value_244;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 243, tmp_tuple_element_1 );
        tmp_mvar_value_245 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASV );

        if (unlikely( tmp_mvar_value_245 == NULL ))
        {
            tmp_mvar_value_245 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASV );
        }

        CHECK_OBJECT( tmp_mvar_value_245 );
        tmp_tuple_element_1 = tmp_mvar_value_245;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 244, tmp_tuple_element_1 );
        tmp_mvar_value_246 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASV );

        if (unlikely( tmp_mvar_value_246 == NULL ))
        {
            tmp_mvar_value_246 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASV );
        }

        CHECK_OBJECT( tmp_mvar_value_246 );
        tmp_tuple_element_1 = tmp_mvar_value_246;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 245, tmp_tuple_element_1 );
        tmp_mvar_value_247 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASV );

        if (unlikely( tmp_mvar_value_247 == NULL ))
        {
            tmp_mvar_value_247 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASV );
        }

        CHECK_OBJECT( tmp_mvar_value_247 );
        tmp_tuple_element_1 = tmp_mvar_value_247;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 246, tmp_tuple_element_1 );
        tmp_mvar_value_248 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_OTH );

        if (unlikely( tmp_mvar_value_248 == NULL ))
        {
            tmp_mvar_value_248 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OTH );
        }

        CHECK_OBJECT( tmp_mvar_value_248 );
        tmp_tuple_element_1 = tmp_mvar_value_248;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 247, tmp_tuple_element_1 );
        tmp_mvar_value_249 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASV );

        if (unlikely( tmp_mvar_value_249 == NULL ))
        {
            tmp_mvar_value_249 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASV );
        }

        CHECK_OBJECT( tmp_mvar_value_249 );
        tmp_tuple_element_1 = tmp_mvar_value_249;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 248, tmp_tuple_element_1 );
        tmp_mvar_value_250 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASV );

        if (unlikely( tmp_mvar_value_250 == NULL ))
        {
            tmp_mvar_value_250 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASV );
        }

        CHECK_OBJECT( tmp_mvar_value_250 );
        tmp_tuple_element_1 = tmp_mvar_value_250;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 249, tmp_tuple_element_1 );
        tmp_mvar_value_251 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASV );

        if (unlikely( tmp_mvar_value_251 == NULL ))
        {
            tmp_mvar_value_251 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASV );
        }

        CHECK_OBJECT( tmp_mvar_value_251 );
        tmp_tuple_element_1 = tmp_mvar_value_251;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 250, tmp_tuple_element_1 );
        tmp_mvar_value_252 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASV );

        if (unlikely( tmp_mvar_value_252 == NULL ))
        {
            tmp_mvar_value_252 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASV );
        }

        CHECK_OBJECT( tmp_mvar_value_252 );
        tmp_tuple_element_1 = tmp_mvar_value_252;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 251, tmp_tuple_element_1 );
        tmp_mvar_value_253 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASV );

        if (unlikely( tmp_mvar_value_253 == NULL ))
        {
            tmp_mvar_value_253 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASV );
        }

        CHECK_OBJECT( tmp_mvar_value_253 );
        tmp_tuple_element_1 = tmp_mvar_value_253;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 252, tmp_tuple_element_1 );
        tmp_mvar_value_254 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASO );

        if (unlikely( tmp_mvar_value_254 == NULL ))
        {
            tmp_mvar_value_254 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASO );
        }

        CHECK_OBJECT( tmp_mvar_value_254 );
        tmp_tuple_element_1 = tmp_mvar_value_254;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 253, tmp_tuple_element_1 );
        tmp_mvar_value_255 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASO );

        if (unlikely( tmp_mvar_value_255 == NULL ))
        {
            tmp_mvar_value_255 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASO );
        }

        CHECK_OBJECT( tmp_mvar_value_255 );
        tmp_tuple_element_1 = tmp_mvar_value_255;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 254, tmp_tuple_element_1 );
        tmp_mvar_value_256 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_ASO );

        if (unlikely( tmp_mvar_value_256 == NULL ))
        {
            tmp_mvar_value_256 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASO );
        }

        CHECK_OBJECT( tmp_mvar_value_256 );
        tmp_tuple_element_1 = tmp_mvar_value_256;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 255, tmp_tuple_element_1 );
        UPDATE_STRING_DICT1( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_Latin1_CharToClass, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = const_tuple_dd937e22eb0b58a5d558f85613f2a98d_tuple;
        UPDATE_STRING_DICT0( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_Latin1ClassModel, tmp_assign_source_16 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_257;
        tmp_mvar_value_257 = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_CharSetProber );

        if (unlikely( tmp_mvar_value_257 == NULL ))
        {
            tmp_mvar_value_257 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CharSetProber );
        }

        if ( tmp_mvar_value_257 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "CharSetProber" );
            exception_tb = NULL;

            exception_lineno = 96;

            goto try_except_handler_1;
        }

        tmp_tuple_element_2 = tmp_mvar_value_257;
        tmp_assign_source_17 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_assign_source_17, 0, tmp_tuple_element_2 );
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_chardet$latin1prober_96 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_0434e961e5b15eec3f59fcb2a9640445;
        tmp_res = PyDict_SetItem( locals_chardet$latin1prober_96, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_chardet$latin1prober$$$function_1___init__(  );



        tmp_res = PyDict_SetItem( locals_chardet$latin1prober_96, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_chardet$latin1prober$$$function_2_reset(  );



        tmp_res = PyDict_SetItem( locals_chardet$latin1prober_96, const_str_plain_reset, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_cc1c8bd486255e16e297c64437e84107_2, codeobj_cc1c8bd486255e16e297c64437e84107, module_chardet$latin1prober, 0 );
        frame_cc1c8bd486255e16e297c64437e84107_2 = cache_frame_cc1c8bd486255e16e297c64437e84107_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_cc1c8bd486255e16e297c64437e84107_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_cc1c8bd486255e16e297c64437e84107_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            tmp_called_name_1 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_1 = MAKE_FUNCTION_chardet$latin1prober$$$function_3_charset_name(  );



            frame_cc1c8bd486255e16e297c64437e84107_2->m_frame.f_lineno = 108;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem( locals_chardet$latin1prober_96, const_str_plain_charset_name, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_2;
            tmp_called_name_2 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_2 = MAKE_FUNCTION_chardet$latin1prober$$$function_4_language(  );



            frame_cc1c8bd486255e16e297c64437e84107_2->m_frame.f_lineno = 112;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 112;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem( locals_chardet$latin1prober_96, const_str_plain_language, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 112;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_cc1c8bd486255e16e297c64437e84107_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_cc1c8bd486255e16e297c64437e84107_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_cc1c8bd486255e16e297c64437e84107_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_cc1c8bd486255e16e297c64437e84107_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_cc1c8bd486255e16e297c64437e84107_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_cc1c8bd486255e16e297c64437e84107_2,
            type_description_2
        );


        // Release cached frame.
        if ( frame_cc1c8bd486255e16e297c64437e84107_2 == cache_frame_cc1c8bd486255e16e297c64437e84107_2 )
        {
            Py_DECREF( frame_cc1c8bd486255e16e297c64437e84107_2 );
        }
        cache_frame_cc1c8bd486255e16e297c64437e84107_2 = NULL;

        assertFrameObject( frame_cc1c8bd486255e16e297c64437e84107_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_2;
        skip_nested_handling_1:;
        tmp_dictset_value = MAKE_FUNCTION_chardet$latin1prober$$$function_5_feed(  );



        tmp_res = PyDict_SetItem( locals_chardet$latin1prober_96, const_str_plain_feed, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_chardet$latin1prober$$$function_6_get_confidence(  );



        tmp_res = PyDict_SetItem( locals_chardet$latin1prober_96, const_str_plain_get_confidence, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_assign_source_18 = locals_chardet$latin1prober_96;
        Py_INCREF( tmp_assign_source_18 );
        goto try_return_handler_2;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( chardet$latin1prober );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_2:;
        Py_DECREF( locals_chardet$latin1prober_96 );
        locals_chardet$latin1prober_96 = NULL;
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

        Py_DECREF( locals_chardet$latin1prober_96 );
        locals_chardet$latin1prober_96 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( chardet$latin1prober );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 96;
        goto try_except_handler_1;
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
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


            exception_lineno = 96;

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
        tmp_assign_source_19 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_subscribed_name_1 = tmp_class_creation_1__bases;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_20 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_assign_source_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 96;

                goto try_except_handler_1;
            }
            assert( tmp_select_metaclass_1__base == NULL );
            tmp_select_metaclass_1__base = tmp_assign_source_20;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( tmp_select_metaclass_1__base );
            tmp_source_name_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_19 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 96;

                goto try_except_handler_4;
            }
            goto try_return_handler_3;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( chardet$latin1prober );
        return MOD_RETURN_VALUE( NULL );
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

        {
            PyObject *tmp_type_arg_1;
            Py_DECREF( exception_keeper_type_2 );
            Py_XDECREF( exception_keeper_value_2 );
            Py_XDECREF( exception_keeper_tb_2 );
            CHECK_OBJECT( tmp_select_metaclass_1__base );
            tmp_type_arg_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_19 = BUILTIN_TYPE1( tmp_type_arg_1 );
            assert( !(tmp_assign_source_19 == NULL) );
            goto try_return_handler_3;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( chardet$latin1prober );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
        Py_DECREF( tmp_select_metaclass_1__base );
        tmp_select_metaclass_1__base = NULL;

        goto outline_result_2;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
        Py_DECREF( tmp_select_metaclass_1__base );
        tmp_select_metaclass_1__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( chardet$latin1prober );
        return MOD_RETURN_VALUE( NULL );
        outline_result_2:;
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_3 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_3 = const_str_plain_Latin1Prober;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_args_element_name_4 = tmp_class_creation_1__bases;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_5 = tmp_class_creation_1__class_dict;
        frame_1c774b13df4fbd6480b602e2669ea3c4->m_frame.f_lineno = 96;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_21;
    }
    goto try_end_1;
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
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c774b13df4fbd6480b602e2669ea3c4 );
#endif
    popFrameStack();

    assertFrameObject( frame_1c774b13df4fbd6480b602e2669ea3c4 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c774b13df4fbd6480b602e2669ea3c4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1c774b13df4fbd6480b602e2669ea3c4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1c774b13df4fbd6480b602e2669ea3c4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1c774b13df4fbd6480b602e2669ea3c4, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_22 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain_Latin1Prober, tmp_assign_source_22 );
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


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_chardet$latin1prober, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_chardet$latin1prober );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
