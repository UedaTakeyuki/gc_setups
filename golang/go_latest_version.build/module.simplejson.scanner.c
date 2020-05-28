/* Generated code for Python module 'simplejson.scanner'
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

/* The "_module_simplejson$scanner" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_simplejson$scanner;
PyDictObject *moduledict_simplejson$scanner;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_null;
static PyObject *const_str_digest_6b8b2b3b5b385bde93d4050f0e421579;
extern PyObject *const_str_digest_90fc8c406fd6945f66bb1cd669171bd6;
extern PyObject *const_str_plain_I;
static PyObject *const_str_digest_ec69b135f950ce3eb618157ccc4f135e;
extern PyObject *const_str_chr_45;
extern PyObject *const_str_plain_compile;
static PyObject *const_list_str_plain_make_scanner_str_plain_JSONDecodeError_list;
extern PyObject *const_int_pos_9;
extern PyObject *const_str_chr_123;
static PyObject *const_tuple_str_plain_NaN_tuple;
extern PyObject *const_str_plain_DOTALL;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_c_make_scanner;
extern PyObject *const_str_plain_clear;
static PyObject *const_tuple_770d1de38192b2f0355762f2278d978e_tuple;
static PyObject *const_str_digest_60decec30153ba3c0641ed7742d230b8;
extern PyObject *const_str_plain_false;
extern PyObject *const_str_plain_VERBOSE;
extern PyObject *const_str_digest_146e803d9878ec1c531de3dd001739b2;
extern PyObject *const_str_plain_py_make_scanner;
static PyObject *const_str_plain__import_c_make_scanner;
extern PyObject *const_str_plain_MULTILINE;
static PyObject *const_str_digest_5466f5e8b24617732af65a4ee8d95199;
static PyObject *const_str_digest_367f2f403feb094f1e399a57044060b3;
extern PyObject *const_str_plain_parse_float;
static PyObject *const_str_plain_match_number;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_NaN;
extern PyObject *const_str_plain_object_hook;
extern PyObject *const_str_plain_scan_once;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_N;
extern PyObject *const_str_plain_idx;
extern PyObject *const_str_plain_make_scanner;
static PyObject *const_tuple_str_digest_146e803d9878ec1c531de3dd001739b2_tuple;
extern PyObject *const_str_plain_parse_string;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_object_pairs_hook;
extern PyObject *const_str_plain_JSONDecodeError;
extern PyObject *const_str_chr_34;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_int_pos_4;
extern PyObject *const_int_pos_5;
extern PyObject *const_str_plain_errors;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_empty;
extern PyObject *const_str_chr_91;
extern PyObject *const_str_plain_context;
extern PyObject *const_str_plain_parse_constant;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_plain_end;
static PyObject *const_tuple_e81a2916d2ea4016a46abd1dbc2b09a5_tuple;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain___all__;
extern PyObject *const_tuple_str_plain_JSONDecodeError_tuple;
extern PyObject *const_str_plain_parse_array;
extern PyObject *const_str_plain_parse_object;
extern PyObject *const_str_plain_groups;
extern PyObject *const_str_plain_string;
extern PyObject *const_str_plain_f;
static PyObject *const_tuple_str_plain_make_scanner_tuple;
extern PyObject *const_str_plain_memo;
extern PyObject *const_str_plain_parse_int;
extern PyObject *const_str_plain_strict;
extern PyObject *const_str_plain_Infinity;
static PyObject *const_str_plain__scan_once;
extern PyObject *const_str_plain__speedups;
extern PyObject *const_str_plain_t;
static PyObject *const_str_plain_NUMBER_RE;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain_true;
static PyObject *const_tuple_fd21e33cd86158b3d22ff461942b3e0b_tuple;
static PyObject *const_tuple_str_plain_Infinity_tuple;
extern PyObject *const_str_plain_match;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_6b8b2b3b5b385bde93d4050f0e421579 = UNSTREAM_STRING( &constant_bin[ 1015556 ], 41, 0 );
    const_str_digest_ec69b135f950ce3eb618157ccc4f135e = UNSTREAM_STRING( &constant_bin[ 1015597 ], 54, 0 );
    const_list_str_plain_make_scanner_str_plain_JSONDecodeError_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_make_scanner_str_plain_JSONDecodeError_list, 0, const_str_plain_make_scanner ); Py_INCREF( const_str_plain_make_scanner );
    PyList_SET_ITEM( const_list_str_plain_make_scanner_str_plain_JSONDecodeError_list, 1, const_str_plain_JSONDecodeError ); Py_INCREF( const_str_plain_JSONDecodeError );
    const_tuple_str_plain_NaN_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_NaN_tuple, 0, const_str_plain_NaN ); Py_INCREF( const_str_plain_NaN );
    const_tuple_770d1de38192b2f0355762f2278d978e_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_770d1de38192b2f0355762f2278d978e_tuple, 0, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    PyTuple_SET_ITEM( const_tuple_770d1de38192b2f0355762f2278d978e_tuple, 1, const_str_plain_parse_object ); Py_INCREF( const_str_plain_parse_object );
    PyTuple_SET_ITEM( const_tuple_770d1de38192b2f0355762f2278d978e_tuple, 2, const_str_plain_parse_int ); Py_INCREF( const_str_plain_parse_int );
    PyTuple_SET_ITEM( const_tuple_770d1de38192b2f0355762f2278d978e_tuple, 3, const_str_plain_scan_once ); Py_INCREF( const_str_plain_scan_once );
    PyTuple_SET_ITEM( const_tuple_770d1de38192b2f0355762f2278d978e_tuple, 4, const_str_plain_parse_float ); Py_INCREF( const_str_plain_parse_float );
    PyTuple_SET_ITEM( const_tuple_770d1de38192b2f0355762f2278d978e_tuple, 5, const_str_plain_object_hook ); Py_INCREF( const_str_plain_object_hook );
    const_str_plain_match_number = UNSTREAM_STRING( &constant_bin[ 1015651 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_770d1de38192b2f0355762f2278d978e_tuple, 6, const_str_plain_match_number ); Py_INCREF( const_str_plain_match_number );
    PyTuple_SET_ITEM( const_tuple_770d1de38192b2f0355762f2278d978e_tuple, 7, const_str_plain_memo ); Py_INCREF( const_str_plain_memo );
    PyTuple_SET_ITEM( const_tuple_770d1de38192b2f0355762f2278d978e_tuple, 8, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_770d1de38192b2f0355762f2278d978e_tuple, 9, const_str_plain_parse_constant ); Py_INCREF( const_str_plain_parse_constant );
    const_str_plain__scan_once = UNSTREAM_STRING( &constant_bin[ 1015663 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_770d1de38192b2f0355762f2278d978e_tuple, 10, const_str_plain__scan_once ); Py_INCREF( const_str_plain__scan_once );
    PyTuple_SET_ITEM( const_tuple_770d1de38192b2f0355762f2278d978e_tuple, 11, const_str_plain_parse_string ); Py_INCREF( const_str_plain_parse_string );
    PyTuple_SET_ITEM( const_tuple_770d1de38192b2f0355762f2278d978e_tuple, 12, const_str_plain_strict ); Py_INCREF( const_str_plain_strict );
    PyTuple_SET_ITEM( const_tuple_770d1de38192b2f0355762f2278d978e_tuple, 13, const_str_plain_parse_array ); Py_INCREF( const_str_plain_parse_array );
    PyTuple_SET_ITEM( const_tuple_770d1de38192b2f0355762f2278d978e_tuple, 14, const_str_plain_object_pairs_hook ); Py_INCREF( const_str_plain_object_pairs_hook );
    const_str_digest_60decec30153ba3c0641ed7742d230b8 = UNSTREAM_STRING( &constant_bin[ 1015673 ], 27, 0 );
    const_str_plain__import_c_make_scanner = UNSTREAM_STRING( &constant_bin[ 1015700 ], 22, 1 );
    const_str_digest_5466f5e8b24617732af65a4ee8d95199 = UNSTREAM_STRING( &constant_bin[ 1015722 ], 19, 0 );
    const_str_digest_367f2f403feb094f1e399a57044060b3 = UNSTREAM_STRING( &constant_bin[ 1015681 ], 18, 0 );
    const_str_plain_N = UNSTREAM_CHAR( 78, 1 );
    const_tuple_str_digest_146e803d9878ec1c531de3dd001739b2_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_146e803d9878ec1c531de3dd001739b2_tuple, 0, const_str_digest_146e803d9878ec1c531de3dd001739b2 ); Py_INCREF( const_str_digest_146e803d9878ec1c531de3dd001739b2 );
    const_tuple_e81a2916d2ea4016a46abd1dbc2b09a5_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_e81a2916d2ea4016a46abd1dbc2b09a5_tuple, 0, const_str_plain_string ); Py_INCREF( const_str_plain_string );
    PyTuple_SET_ITEM( const_tuple_e81a2916d2ea4016a46abd1dbc2b09a5_tuple, 1, const_str_plain_idx ); Py_INCREF( const_str_plain_idx );
    PyTuple_SET_ITEM( const_tuple_e81a2916d2ea4016a46abd1dbc2b09a5_tuple, 2, const_str_plain__scan_once ); Py_INCREF( const_str_plain__scan_once );
    PyTuple_SET_ITEM( const_tuple_e81a2916d2ea4016a46abd1dbc2b09a5_tuple, 3, const_str_plain_memo ); Py_INCREF( const_str_plain_memo );
    const_tuple_str_plain_make_scanner_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_make_scanner_tuple, 0, const_str_plain_make_scanner ); Py_INCREF( const_str_plain_make_scanner );
    const_str_plain_NUMBER_RE = UNSTREAM_STRING( &constant_bin[ 1015741 ], 9, 1 );
    const_tuple_fd21e33cd86158b3d22ff461942b3e0b_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 1015750 ], 293 );
    const_tuple_str_plain_Infinity_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Infinity_tuple, 0, const_str_plain_Infinity ); Py_INCREF( const_str_plain_Infinity );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_simplejson$scanner( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_420c9afa94a9427fbf2895cbd0a89368;
static PyCodeObject *codeobj_0fb212840d1a53634d97403418c72ce9;
static PyCodeObject *codeobj_220fb98a5d3e2321d68b91ad2896314c;
static PyCodeObject *codeobj_3c89c2f6e458de4da3c2ddc3e7ebb7d8;
static PyCodeObject *codeobj_f80bcd851dda58bd93611e96f0a669a2;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_ec69b135f950ce3eb618157ccc4f135e;
    codeobj_420c9afa94a9427fbf2895cbd0a89368 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_60decec30153ba3c0641ed7742d230b8, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_0fb212840d1a53634d97403418c72ce9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__import_c_make_scanner, 5, const_tuple_str_plain_make_scanner_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_220fb98a5d3e2321d68b91ad2896314c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__scan_once, 34, const_tuple_fd21e33cd86158b3d22ff461942b3e0b_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_3c89c2f6e458de4da3c2ddc3e7ebb7d8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_py_make_scanner, 20, const_tuple_770d1de38192b2f0355762f2278d978e_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f80bcd851dda58bd93611e96f0a669a2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_scan_once, 72, const_tuple_e81a2916d2ea4016a46abd1dbc2b09a5_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_simplejson$scanner$$$function_1__import_c_make_scanner(  );


static PyObject *MAKE_FUNCTION_simplejson$scanner$$$function_2_py_make_scanner(  );


static PyObject *MAKE_FUNCTION_simplejson$scanner$$$function_2_py_make_scanner$$$function_1__scan_once(  );


static PyObject *MAKE_FUNCTION_simplejson$scanner$$$function_2_py_make_scanner$$$function_2_scan_once(  );


// The module function definitions.
static PyObject *impl_simplejson$scanner$$$function_1__import_c_make_scanner( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_make_scanner = NULL;
    struct Nuitka_FrameObject *frame_0fb212840d1a53634d97403418c72ce9;
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
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_0fb212840d1a53634d97403418c72ce9 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0fb212840d1a53634d97403418c72ce9, codeobj_0fb212840d1a53634d97403418c72ce9, module_simplejson$scanner, sizeof(void *) );
    frame_0fb212840d1a53634d97403418c72ce9 = cache_frame_0fb212840d1a53634d97403418c72ce9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0fb212840d1a53634d97403418c72ce9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0fb212840d1a53634d97403418c72ce9 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain__speedups;
        tmp_globals_name_1 = (PyObject *)moduledict_simplejson$scanner;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_make_scanner_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_0fb212840d1a53634d97403418c72ce9->m_frame.f_lineno = 7;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_make_scanner );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        assert( var_make_scanner == NULL );
        var_make_scanner = tmp_assign_source_1;
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
    PRESERVE_FRAME_EXCEPTION( frame_0fb212840d1a53634d97403418c72ce9 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_0fb212840d1a53634d97403418c72ce9, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_0fb212840d1a53634d97403418c72ce9, exception_keeper_lineno_1 );
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


            exception_lineno = 9;
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
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 6;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_0fb212840d1a53634d97403418c72ce9->m_frame) frame_0fb212840d1a53634d97403418c72ce9->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "o";
        goto frame_exception_exit_1;
        branch_end_1:;
    }
    // End of try:
    try_end_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_0fb212840d1a53634d97403418c72ce9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_0fb212840d1a53634d97403418c72ce9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_0fb212840d1a53634d97403418c72ce9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0fb212840d1a53634d97403418c72ce9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0fb212840d1a53634d97403418c72ce9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0fb212840d1a53634d97403418c72ce9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0fb212840d1a53634d97403418c72ce9,
        type_description_1,
        var_make_scanner
    );


    // Release cached frame.
    if ( frame_0fb212840d1a53634d97403418c72ce9 == cache_frame_0fb212840d1a53634d97403418c72ce9 )
    {
        Py_DECREF( frame_0fb212840d1a53634d97403418c72ce9 );
    }
    cache_frame_0fb212840d1a53634d97403418c72ce9 = NULL;

    assertFrameObject( frame_0fb212840d1a53634d97403418c72ce9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_make_scanner );
    tmp_return_value = var_make_scanner;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( simplejson$scanner$$$function_1__import_c_make_scanner );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_make_scanner );
    var_make_scanner = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( simplejson$scanner$$$function_1__import_c_make_scanner );
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


static PyObject *impl_simplejson$scanner$$$function_2_py_make_scanner( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_context = python_pars[ 0 ];
    struct Nuitka_CellObject *var_parse_object = PyCell_EMPTY();
    struct Nuitka_CellObject *var_parse_int = PyCell_EMPTY();
    PyObject *var_scan_once = NULL;
    struct Nuitka_CellObject *var_parse_float = PyCell_EMPTY();
    struct Nuitka_CellObject *var_object_hook = PyCell_EMPTY();
    struct Nuitka_CellObject *var_match_number = PyCell_EMPTY();
    struct Nuitka_CellObject *var_memo = PyCell_EMPTY();
    struct Nuitka_CellObject *var_encoding = PyCell_EMPTY();
    struct Nuitka_CellObject *var_parse_constant = PyCell_EMPTY();
    struct Nuitka_CellObject *var__scan_once = PyCell_EMPTY();
    struct Nuitka_CellObject *var_parse_string = PyCell_EMPTY();
    struct Nuitka_CellObject *var_strict = PyCell_EMPTY();
    struct Nuitka_CellObject *var_parse_array = PyCell_EMPTY();
    struct Nuitka_CellObject *var_object_pairs_hook = PyCell_EMPTY();
    struct Nuitka_FrameObject *frame_3c89c2f6e458de4da3c2ddc3e7ebb7d8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3c89c2f6e458de4da3c2ddc3e7ebb7d8 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3c89c2f6e458de4da3c2ddc3e7ebb7d8, codeobj_3c89c2f6e458de4da3c2ddc3e7ebb7d8, module_simplejson$scanner, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3c89c2f6e458de4da3c2ddc3e7ebb7d8 = cache_frame_3c89c2f6e458de4da3c2ddc3e7ebb7d8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3c89c2f6e458de4da3c2ddc3e7ebb7d8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3c89c2f6e458de4da3c2ddc3e7ebb7d8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_context );
        tmp_source_name_1 = par_context;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_parse_object );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "occoccccccccccc";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_parse_object ) == NULL );
        PyCell_SET( var_parse_object, tmp_assign_source_1 );

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_context );
        tmp_source_name_2 = par_context;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_parse_array );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "occoccccccccccc";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_parse_array ) == NULL );
        PyCell_SET( var_parse_array, tmp_assign_source_2 );

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_context );
        tmp_source_name_3 = par_context;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_parse_string );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "occoccccccccccc";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_parse_string ) == NULL );
        PyCell_SET( var_parse_string, tmp_assign_source_3 );

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain_NUMBER_RE );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NUMBER_RE );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "NUMBER_RE" );
            exception_tb = NULL;

            exception_lineno = 24;
            type_description_1 = "occoccccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_1;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_match );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "occoccccccccccc";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_match_number ) == NULL );
        PyCell_SET( var_match_number, tmp_assign_source_4 );

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( par_context );
        tmp_source_name_5 = par_context;
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_encoding );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "occoccccccccccc";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_encoding ) == NULL );
        PyCell_SET( var_encoding, tmp_assign_source_5 );

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( par_context );
        tmp_source_name_6 = par_context;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_strict );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "occoccccccccccc";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_strict ) == NULL );
        PyCell_SET( var_strict, tmp_assign_source_6 );

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT( par_context );
        tmp_source_name_7 = par_context;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_parse_float );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "occoccccccccccc";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_parse_float ) == NULL );
        PyCell_SET( var_parse_float, tmp_assign_source_7 );

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT( par_context );
        tmp_source_name_8 = par_context;
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_parse_int );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "occoccccccccccc";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_parse_int ) == NULL );
        PyCell_SET( var_parse_int, tmp_assign_source_8 );

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( par_context );
        tmp_source_name_9 = par_context;
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_parse_constant );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "occoccccccccccc";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_parse_constant ) == NULL );
        PyCell_SET( var_parse_constant, tmp_assign_source_9 );

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_source_name_10;
        CHECK_OBJECT( par_context );
        tmp_source_name_10 = par_context;
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_object_hook );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;
            type_description_1 = "occoccccccccccc";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_object_hook ) == NULL );
        PyCell_SET( var_object_hook, tmp_assign_source_10 );

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_source_name_11;
        CHECK_OBJECT( par_context );
        tmp_source_name_11 = par_context;
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_object_pairs_hook );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "occoccccccccccc";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_object_pairs_hook ) == NULL );
        PyCell_SET( var_object_pairs_hook, tmp_assign_source_11 );

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_source_name_12;
        CHECK_OBJECT( par_context );
        tmp_source_name_12 = par_context;
        tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_memo );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "occoccccccccccc";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_memo ) == NULL );
        PyCell_SET( var_memo, tmp_assign_source_12 );

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3c89c2f6e458de4da3c2ddc3e7ebb7d8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3c89c2f6e458de4da3c2ddc3e7ebb7d8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3c89c2f6e458de4da3c2ddc3e7ebb7d8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3c89c2f6e458de4da3c2ddc3e7ebb7d8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3c89c2f6e458de4da3c2ddc3e7ebb7d8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3c89c2f6e458de4da3c2ddc3e7ebb7d8,
        type_description_1,
        par_context,
        var_parse_object,
        var_parse_int,
        var_scan_once,
        var_parse_float,
        var_object_hook,
        var_match_number,
        var_memo,
        var_encoding,
        var_parse_constant,
        var__scan_once,
        var_parse_string,
        var_strict,
        var_parse_array,
        var_object_pairs_hook
    );


    // Release cached frame.
    if ( frame_3c89c2f6e458de4da3c2ddc3e7ebb7d8 == cache_frame_3c89c2f6e458de4da3c2ddc3e7ebb7d8 )
    {
        Py_DECREF( frame_3c89c2f6e458de4da3c2ddc3e7ebb7d8 );
    }
    cache_frame_3c89c2f6e458de4da3c2ddc3e7ebb7d8 = NULL;

    assertFrameObject( frame_3c89c2f6e458de4da3c2ddc3e7ebb7d8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_FUNCTION_simplejson$scanner$$$function_2_py_make_scanner$$$function_1__scan_once(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[0] = var__scan_once;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[1] = var_encoding;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[1] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[2] = var_match_number;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[2] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[3] = var_memo;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[3] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[4] = var_object_hook;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[4] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[5] = var_object_pairs_hook;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[5] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[6] = var_parse_array;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[6] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[7] = var_parse_constant;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[7] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[8] = var_parse_float;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[8] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[9] = var_parse_int;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[9] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[10] = var_parse_object;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[10] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[11] = var_parse_string;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[11] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[12] = var_strict;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[12] );


        assert( PyCell_GET( var__scan_once ) == NULL );
        PyCell_SET( var__scan_once, tmp_assign_source_13 );

    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_FUNCTION_simplejson$scanner$$$function_2_py_make_scanner$$$function_2_scan_once(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_14)->m_closure[0] = var__scan_once;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_14)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_14)->m_closure[1] = var_memo;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_14)->m_closure[1] );


        assert( var_scan_once == NULL );
        var_scan_once = tmp_assign_source_14;
    }
    CHECK_OBJECT( var_scan_once );
    tmp_return_value = var_scan_once;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( simplejson$scanner$$$function_2_py_make_scanner );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_parse_object );
    Py_DECREF( var_parse_object );
    var_parse_object = NULL;

    CHECK_OBJECT( (PyObject *)var_parse_int );
    Py_DECREF( var_parse_int );
    var_parse_int = NULL;

    CHECK_OBJECT( (PyObject *)var_scan_once );
    Py_DECREF( var_scan_once );
    var_scan_once = NULL;

    CHECK_OBJECT( (PyObject *)var_parse_float );
    Py_DECREF( var_parse_float );
    var_parse_float = NULL;

    CHECK_OBJECT( (PyObject *)var_object_hook );
    Py_DECREF( var_object_hook );
    var_object_hook = NULL;

    CHECK_OBJECT( (PyObject *)var_match_number );
    Py_DECREF( var_match_number );
    var_match_number = NULL;

    CHECK_OBJECT( (PyObject *)var_memo );
    Py_DECREF( var_memo );
    var_memo = NULL;

    CHECK_OBJECT( (PyObject *)var_encoding );
    Py_DECREF( var_encoding );
    var_encoding = NULL;

    CHECK_OBJECT( (PyObject *)var_parse_constant );
    Py_DECREF( var_parse_constant );
    var_parse_constant = NULL;

    CHECK_OBJECT( (PyObject *)var__scan_once );
    Py_DECREF( var__scan_once );
    var__scan_once = NULL;

    CHECK_OBJECT( (PyObject *)var_parse_string );
    Py_DECREF( var_parse_string );
    var_parse_string = NULL;

    CHECK_OBJECT( (PyObject *)var_strict );
    Py_DECREF( var_strict );
    var_strict = NULL;

    CHECK_OBJECT( (PyObject *)var_parse_array );
    Py_DECREF( var_parse_array );
    var_parse_array = NULL;

    CHECK_OBJECT( (PyObject *)par_context );
    Py_DECREF( par_context );
    par_context = NULL;

    CHECK_OBJECT( (PyObject *)var_object_pairs_hook );
    Py_DECREF( var_object_pairs_hook );
    var_object_pairs_hook = NULL;

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

    CHECK_OBJECT( (PyObject *)var_parse_object );
    Py_DECREF( var_parse_object );
    var_parse_object = NULL;

    CHECK_OBJECT( (PyObject *)var_parse_int );
    Py_DECREF( var_parse_int );
    var_parse_int = NULL;

    CHECK_OBJECT( (PyObject *)var_parse_float );
    Py_DECREF( var_parse_float );
    var_parse_float = NULL;

    CHECK_OBJECT( (PyObject *)var_object_hook );
    Py_DECREF( var_object_hook );
    var_object_hook = NULL;

    CHECK_OBJECT( (PyObject *)var_match_number );
    Py_DECREF( var_match_number );
    var_match_number = NULL;

    CHECK_OBJECT( (PyObject *)var_encoding );
    Py_DECREF( var_encoding );
    var_encoding = NULL;

    CHECK_OBJECT( (PyObject *)var_parse_constant );
    Py_DECREF( var_parse_constant );
    var_parse_constant = NULL;

    CHECK_OBJECT( (PyObject *)var_parse_string );
    Py_DECREF( var_parse_string );
    var_parse_string = NULL;

    CHECK_OBJECT( (PyObject *)var_strict );
    Py_DECREF( var_strict );
    var_strict = NULL;

    CHECK_OBJECT( (PyObject *)var_parse_array );
    Py_DECREF( var_parse_array );
    var_parse_array = NULL;

    CHECK_OBJECT( (PyObject *)par_context );
    Py_DECREF( par_context );
    par_context = NULL;

    CHECK_OBJECT( (PyObject *)var_object_pairs_hook );
    Py_DECREF( var_object_pairs_hook );
    var_object_pairs_hook = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( simplejson$scanner$$$function_2_py_make_scanner );
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


static PyObject *impl_simplejson$scanner$$$function_2_py_make_scanner$$$function_1__scan_once( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_string = python_pars[ 0 ];
    PyObject *par_idx = python_pars[ 1 ];
    PyObject *var_res = NULL;
    PyObject *var_frac = NULL;
    PyObject *var_integer = NULL;
    PyObject *var_nextchar = NULL;
    PyObject *var_m = NULL;
    PyObject *var_exp = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_220fb98a5d3e2321d68b91ad2896314c;
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
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_220fb98a5d3e2321d68b91ad2896314c = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_220fb98a5d3e2321d68b91ad2896314c, codeobj_220fb98a5d3e2321d68b91ad2896314c, module_simplejson$scanner, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_220fb98a5d3e2321d68b91ad2896314c = cache_frame_220fb98a5d3e2321d68b91ad2896314c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_220fb98a5d3e2321d68b91ad2896314c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_220fb98a5d3e2321d68b91ad2896314c ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_string );
        tmp_subscribed_name_1 = par_string;
        CHECK_OBJECT( par_idx );
        tmp_subscript_name_1 = par_idx;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "ooccccocccocccoococcoN";
            goto try_except_handler_2;
        }
        assert( var_nextchar == NULL );
        var_nextchar = tmp_assign_source_1;
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
    PRESERVE_FRAME_EXCEPTION( frame_220fb98a5d3e2321d68b91ad2896314c );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_220fb98a5d3e2321d68b91ad2896314c, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_220fb98a5d3e2321d68b91ad2896314c, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_IndexError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "ooccccocccocccoococcoN";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "JSONDecodeError" );
                exception_tb = NULL;

                exception_lineno = 39;
                type_description_1 = "ooccccocccocccoococcoN";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            tmp_args_element_name_1 = const_str_digest_90fc8c406fd6945f66bb1cd669171bd6;
            CHECK_OBJECT( par_string );
            tmp_args_element_name_2 = par_string;
            CHECK_OBJECT( par_idx );
            tmp_args_element_name_3 = par_idx;
            frame_220fb98a5d3e2321d68b91ad2896314c->m_frame.f_lineno = 39;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
            }

            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 39;
                type_description_1 = "ooccccocccocccoococcoN";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 39;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooccccocccocccoococcoN";
            goto frame_exception_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 36;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_220fb98a5d3e2321d68b91ad2896314c->m_frame) frame_220fb98a5d3e2321d68b91ad2896314c->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooccccocccocccoococcoN";
        goto frame_exception_exit_1;
        branch_end_1:;
    }
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_nextchar );
        tmp_compexpr_left_2 = var_nextchar;
        tmp_compexpr_right_2 = const_str_chr_34;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "ooccccocccocccoococcoN";
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            if ( PyCell_GET( self->m_closure[11] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "parse_string" );
                exception_tb = NULL;

                exception_lineno = 42;
                type_description_1 = "ooccccocccocccoococcoN";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = PyCell_GET( self->m_closure[11] );
            CHECK_OBJECT( par_string );
            tmp_args_element_name_4 = par_string;
            CHECK_OBJECT( par_idx );
            tmp_left_name_1 = par_idx;
            tmp_right_name_1 = const_int_pos_1;
            tmp_args_element_name_5 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;
                type_description_1 = "ooccccocccocccoococcoN";
                goto frame_exception_exit_1;
            }
            if ( PyCell_GET( self->m_closure[1] ) == NULL )
            {
                Py_DECREF( tmp_args_element_name_5 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "encoding" );
                exception_tb = NULL;

                exception_lineno = 42;
                type_description_1 = "ooccccocccocccoococcoN";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_6 = PyCell_GET( self->m_closure[1] );
            if ( PyCell_GET( self->m_closure[12] ) == NULL )
            {
                Py_DECREF( tmp_args_element_name_5 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "strict" );
                exception_tb = NULL;

                exception_lineno = 42;
                type_description_1 = "ooccccocccocccoococcoN";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_7 = PyCell_GET( self->m_closure[12] );
            frame_220fb98a5d3e2321d68b91ad2896314c->m_frame.f_lineno = 42;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;
                type_description_1 = "ooccccocccocccoococcoN";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( var_nextchar );
            tmp_compexpr_left_3 = var_nextchar;
            tmp_compexpr_right_3 = const_str_chr_123;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 43;
                type_description_1 = "ooccccocccocccoococcoN";
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
                PyObject *tmp_called_name_3;
                PyObject *tmp_args_element_name_8;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_args_element_name_9;
                PyObject *tmp_args_element_name_10;
                PyObject *tmp_args_element_name_11;
                PyObject *tmp_args_element_name_12;
                PyObject *tmp_args_element_name_13;
                PyObject *tmp_args_element_name_14;
                if ( PyCell_GET( self->m_closure[10] ) == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "parse_object" );
                    exception_tb = NULL;

                    exception_lineno = 44;
                    type_description_1 = "ooccccocccocccoococcoN";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = PyCell_GET( self->m_closure[10] );
                CHECK_OBJECT( par_string );
                tmp_tuple_element_1 = par_string;
                tmp_args_element_name_8 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_args_element_name_8, 0, tmp_tuple_element_1 );
                CHECK_OBJECT( par_idx );
                tmp_left_name_2 = par_idx;
                tmp_right_name_2 = const_int_pos_1;
                tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_2, tmp_right_name_2 );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_8 );

                    exception_lineno = 44;
                    type_description_1 = "ooccccocccocccoococcoN";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_args_element_name_8, 1, tmp_tuple_element_1 );
                if ( PyCell_GET( self->m_closure[1] ) == NULL )
                {
                    Py_DECREF( tmp_args_element_name_8 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "encoding" );
                    exception_tb = NULL;

                    exception_lineno = 44;
                    type_description_1 = "ooccccocccocccoococcoN";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_9 = PyCell_GET( self->m_closure[1] );
                if ( PyCell_GET( self->m_closure[12] ) == NULL )
                {
                    Py_DECREF( tmp_args_element_name_8 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "strict" );
                    exception_tb = NULL;

                    exception_lineno = 44;
                    type_description_1 = "ooccccocccocccoococcoN";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_10 = PyCell_GET( self->m_closure[12] );
                if ( PyCell_GET( self->m_closure[0] ) == NULL )
                {
                    Py_DECREF( tmp_args_element_name_8 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "_scan_once" );
                    exception_tb = NULL;

                    exception_lineno = 45;
                    type_description_1 = "ooccccocccocccoococcoN";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_11 = PyCell_GET( self->m_closure[0] );
                if ( PyCell_GET( self->m_closure[4] ) == NULL )
                {
                    Py_DECREF( tmp_args_element_name_8 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "object_hook" );
                    exception_tb = NULL;

                    exception_lineno = 45;
                    type_description_1 = "ooccccocccocccoococcoN";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_12 = PyCell_GET( self->m_closure[4] );
                if ( PyCell_GET( self->m_closure[5] ) == NULL )
                {
                    Py_DECREF( tmp_args_element_name_8 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "object_pairs_hook" );
                    exception_tb = NULL;

                    exception_lineno = 45;
                    type_description_1 = "ooccccocccocccoococcoN";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_13 = PyCell_GET( self->m_closure[5] );
                if ( PyCell_GET( self->m_closure[3] ) == NULL )
                {
                    Py_DECREF( tmp_args_element_name_8 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "memo" );
                    exception_tb = NULL;

                    exception_lineno = 45;
                    type_description_1 = "ooccccocccocccoococcoN";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_14 = PyCell_GET( self->m_closure[3] );
                frame_220fb98a5d3e2321d68b91ad2896314c->m_frame.f_lineno = 44;
                {
                    PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
                    tmp_return_value = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_args_element_name_8 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 44;
                    type_description_1 = "ooccccocccocccoococcoN";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                CHECK_OBJECT( var_nextchar );
                tmp_compexpr_left_4 = var_nextchar;
                tmp_compexpr_right_4 = const_str_chr_91;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 46;
                    type_description_1 = "ooccccocccocccoococcoN";
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
                    PyObject *tmp_called_name_4;
                    PyObject *tmp_args_element_name_15;
                    PyObject *tmp_tuple_element_2;
                    PyObject *tmp_left_name_3;
                    PyObject *tmp_right_name_3;
                    PyObject *tmp_args_element_name_16;
                    if ( PyCell_GET( self->m_closure[6] ) == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "parse_array" );
                        exception_tb = NULL;

                        exception_lineno = 47;
                        type_description_1 = "ooccccocccocccoococcoN";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_4 = PyCell_GET( self->m_closure[6] );
                    CHECK_OBJECT( par_string );
                    tmp_tuple_element_2 = par_string;
                    tmp_args_element_name_15 = PyTuple_New( 2 );
                    Py_INCREF( tmp_tuple_element_2 );
                    PyTuple_SET_ITEM( tmp_args_element_name_15, 0, tmp_tuple_element_2 );
                    CHECK_OBJECT( par_idx );
                    tmp_left_name_3 = par_idx;
                    tmp_right_name_3 = const_int_pos_1;
                    tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_3, tmp_right_name_3 );
                    if ( tmp_tuple_element_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_args_element_name_15 );

                        exception_lineno = 47;
                        type_description_1 = "ooccccocccocccoococcoN";
                        goto frame_exception_exit_1;
                    }
                    PyTuple_SET_ITEM( tmp_args_element_name_15, 1, tmp_tuple_element_2 );
                    if ( PyCell_GET( self->m_closure[0] ) == NULL )
                    {
                        Py_DECREF( tmp_args_element_name_15 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "_scan_once" );
                        exception_tb = NULL;

                        exception_lineno = 47;
                        type_description_1 = "ooccccocccocccoococcoN";
                        goto frame_exception_exit_1;
                    }

                    tmp_args_element_name_16 = PyCell_GET( self->m_closure[0] );
                    frame_220fb98a5d3e2321d68b91ad2896314c->m_frame.f_lineno = 47;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
                        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_15 );
                    if ( tmp_return_value == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 47;
                        type_description_1 = "ooccccocccocccoococcoN";
                        goto frame_exception_exit_1;
                    }
                    goto frame_return_exit_1;
                }
                goto branch_end_4;
                branch_no_4:;
                {
                    nuitka_bool tmp_condition_result_5;
                    int tmp_and_left_truth_1;
                    nuitka_bool tmp_and_left_value_1;
                    nuitka_bool tmp_and_right_value_1;
                    PyObject *tmp_compexpr_left_5;
                    PyObject *tmp_compexpr_right_5;
                    PyObject *tmp_compexpr_left_6;
                    PyObject *tmp_compexpr_right_6;
                    PyObject *tmp_slice_source_1;
                    PyObject *tmp_slice_lower_1;
                    PyObject *tmp_slice_upper_1;
                    PyObject *tmp_left_name_4;
                    PyObject *tmp_right_name_4;
                    CHECK_OBJECT( var_nextchar );
                    tmp_compexpr_left_5 = var_nextchar;
                    tmp_compexpr_right_5 = const_str_plain_n;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 48;
                        type_description_1 = "ooccccocccocccoococcoN";
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
                    CHECK_OBJECT( par_string );
                    tmp_slice_source_1 = par_string;
                    CHECK_OBJECT( par_idx );
                    tmp_slice_lower_1 = par_idx;
                    CHECK_OBJECT( par_idx );
                    tmp_left_name_4 = par_idx;
                    tmp_right_name_4 = const_int_pos_4;
                    tmp_slice_upper_1 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_4, tmp_right_name_4 );
                    if ( tmp_slice_upper_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 48;
                        type_description_1 = "ooccccocccocccoococcoN";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_left_6 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, tmp_slice_upper_1 );
                    Py_DECREF( tmp_slice_upper_1 );
                    if ( tmp_compexpr_left_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 48;
                        type_description_1 = "ooccccocccocccoococcoN";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_6 = const_str_plain_null;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
                    Py_DECREF( tmp_compexpr_left_6 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 48;
                        type_description_1 = "ooccccocccocccoococcoN";
                        goto frame_exception_exit_1;
                    }
                    tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    tmp_condition_result_5 = tmp_and_right_value_1;
                    goto and_end_1;
                    and_left_1:;
                    tmp_condition_result_5 = tmp_and_left_value_1;
                    and_end_1:;
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
                        PyObject *tmp_tuple_element_3;
                        PyObject *tmp_left_name_5;
                        PyObject *tmp_right_name_5;
                        tmp_tuple_element_3 = Py_None;
                        tmp_return_value = PyTuple_New( 2 );
                        Py_INCREF( tmp_tuple_element_3 );
                        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
                        CHECK_OBJECT( par_idx );
                        tmp_left_name_5 = par_idx;
                        tmp_right_name_5 = const_int_pos_4;
                        tmp_tuple_element_3 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_5, tmp_right_name_5 );
                        if ( tmp_tuple_element_3 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_return_value );

                            exception_lineno = 49;
                            type_description_1 = "ooccccocccocccoococcoN";
                            goto frame_exception_exit_1;
                        }
                        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
                        goto frame_return_exit_1;
                    }
                    goto branch_end_5;
                    branch_no_5:;
                    {
                        nuitka_bool tmp_condition_result_6;
                        int tmp_and_left_truth_2;
                        nuitka_bool tmp_and_left_value_2;
                        nuitka_bool tmp_and_right_value_2;
                        PyObject *tmp_compexpr_left_7;
                        PyObject *tmp_compexpr_right_7;
                        PyObject *tmp_compexpr_left_8;
                        PyObject *tmp_compexpr_right_8;
                        PyObject *tmp_slice_source_2;
                        PyObject *tmp_slice_lower_2;
                        PyObject *tmp_slice_upper_2;
                        PyObject *tmp_left_name_6;
                        PyObject *tmp_right_name_6;
                        CHECK_OBJECT( var_nextchar );
                        tmp_compexpr_left_7 = var_nextchar;
                        tmp_compexpr_right_7 = const_str_plain_t;
                        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 50;
                            type_description_1 = "ooccccocccocccoococcoN";
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
                        CHECK_OBJECT( par_string );
                        tmp_slice_source_2 = par_string;
                        CHECK_OBJECT( par_idx );
                        tmp_slice_lower_2 = par_idx;
                        CHECK_OBJECT( par_idx );
                        tmp_left_name_6 = par_idx;
                        tmp_right_name_6 = const_int_pos_4;
                        tmp_slice_upper_2 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_6, tmp_right_name_6 );
                        if ( tmp_slice_upper_2 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 50;
                            type_description_1 = "ooccccocccocccoococcoN";
                            goto frame_exception_exit_1;
                        }
                        tmp_compexpr_left_8 = LOOKUP_SLICE( tmp_slice_source_2, tmp_slice_lower_2, tmp_slice_upper_2 );
                        Py_DECREF( tmp_slice_upper_2 );
                        if ( tmp_compexpr_left_8 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 50;
                            type_description_1 = "ooccccocccocccoococcoN";
                            goto frame_exception_exit_1;
                        }
                        tmp_compexpr_right_8 = const_str_plain_true;
                        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
                        Py_DECREF( tmp_compexpr_left_8 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 50;
                            type_description_1 = "ooccccocccocccoococcoN";
                            goto frame_exception_exit_1;
                        }
                        tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        tmp_condition_result_6 = tmp_and_right_value_2;
                        goto and_end_2;
                        and_left_2:;
                        tmp_condition_result_6 = tmp_and_left_value_2;
                        and_end_2:;
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
                            PyObject *tmp_tuple_element_4;
                            PyObject *tmp_left_name_7;
                            PyObject *tmp_right_name_7;
                            tmp_tuple_element_4 = Py_True;
                            tmp_return_value = PyTuple_New( 2 );
                            Py_INCREF( tmp_tuple_element_4 );
                            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
                            CHECK_OBJECT( par_idx );
                            tmp_left_name_7 = par_idx;
                            tmp_right_name_7 = const_int_pos_4;
                            tmp_tuple_element_4 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_7, tmp_right_name_7 );
                            if ( tmp_tuple_element_4 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                Py_DECREF( tmp_return_value );

                                exception_lineno = 51;
                                type_description_1 = "ooccccocccocccoococcoN";
                                goto frame_exception_exit_1;
                            }
                            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
                            goto frame_return_exit_1;
                        }
                        goto branch_end_6;
                        branch_no_6:;
                        {
                            nuitka_bool tmp_condition_result_7;
                            int tmp_and_left_truth_3;
                            nuitka_bool tmp_and_left_value_3;
                            nuitka_bool tmp_and_right_value_3;
                            PyObject *tmp_compexpr_left_9;
                            PyObject *tmp_compexpr_right_9;
                            PyObject *tmp_compexpr_left_10;
                            PyObject *tmp_compexpr_right_10;
                            PyObject *tmp_slice_source_3;
                            PyObject *tmp_slice_lower_3;
                            PyObject *tmp_slice_upper_3;
                            PyObject *tmp_left_name_8;
                            PyObject *tmp_right_name_8;
                            CHECK_OBJECT( var_nextchar );
                            tmp_compexpr_left_9 = var_nextchar;
                            tmp_compexpr_right_9 = const_str_plain_f;
                            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
                            if ( tmp_res == -1 )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 52;
                                type_description_1 = "ooccccocccocccoococcoN";
                                goto frame_exception_exit_1;
                            }
                            tmp_and_left_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                            CHECK_OBJECT( par_string );
                            tmp_slice_source_3 = par_string;
                            CHECK_OBJECT( par_idx );
                            tmp_slice_lower_3 = par_idx;
                            CHECK_OBJECT( par_idx );
                            tmp_left_name_8 = par_idx;
                            tmp_right_name_8 = const_int_pos_5;
                            tmp_slice_upper_3 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_8, tmp_right_name_8 );
                            if ( tmp_slice_upper_3 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 52;
                                type_description_1 = "ooccccocccocccoococcoN";
                                goto frame_exception_exit_1;
                            }
                            tmp_compexpr_left_10 = LOOKUP_SLICE( tmp_slice_source_3, tmp_slice_lower_3, tmp_slice_upper_3 );
                            Py_DECREF( tmp_slice_upper_3 );
                            if ( tmp_compexpr_left_10 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 52;
                                type_description_1 = "ooccccocccocccoococcoN";
                                goto frame_exception_exit_1;
                            }
                            tmp_compexpr_right_10 = const_str_plain_false;
                            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
                            Py_DECREF( tmp_compexpr_left_10 );
                            if ( tmp_res == -1 )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 52;
                                type_description_1 = "ooccccocccocccoococcoN";
                                goto frame_exception_exit_1;
                            }
                            tmp_and_right_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                            tmp_condition_result_7 = tmp_and_right_value_3;
                            goto and_end_3;
                            and_left_3:;
                            tmp_condition_result_7 = tmp_and_left_value_3;
                            and_end_3:;
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
                                PyObject *tmp_tuple_element_5;
                                PyObject *tmp_left_name_9;
                                PyObject *tmp_right_name_9;
                                tmp_tuple_element_5 = Py_False;
                                tmp_return_value = PyTuple_New( 2 );
                                Py_INCREF( tmp_tuple_element_5 );
                                PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_5 );
                                CHECK_OBJECT( par_idx );
                                tmp_left_name_9 = par_idx;
                                tmp_right_name_9 = const_int_pos_5;
                                tmp_tuple_element_5 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_9, tmp_right_name_9 );
                                if ( tmp_tuple_element_5 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                    Py_DECREF( tmp_return_value );

                                    exception_lineno = 53;
                                    type_description_1 = "ooccccocccocccoococcoN";
                                    goto frame_exception_exit_1;
                                }
                                PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_5 );
                                goto frame_return_exit_1;
                            }
                            branch_no_7:;
                        }
                        branch_end_6:;
                    }
                    branch_end_5:;
                }
                branch_end_4:;
            }
            branch_end_3:;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_args_element_name_18;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "match_number" );
            exception_tb = NULL;

            exception_lineno = 55;
            type_description_1 = "ooccccocccocccoococcoN";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = PyCell_GET( self->m_closure[2] );
        CHECK_OBJECT( par_string );
        tmp_args_element_name_17 = par_string;
        CHECK_OBJECT( par_idx );
        tmp_args_element_name_18 = par_idx;
        frame_220fb98a5d3e2321d68b91ad2896314c->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "ooccccocccocccoococcoN";
            goto frame_exception_exit_1;
        }
        assert( var_m == NULL );
        var_m = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        CHECK_OBJECT( var_m );
        tmp_compexpr_left_11 = var_m;
        tmp_compexpr_right_11 = Py_None;
        tmp_condition_result_8 = ( tmp_compexpr_left_11 != tmp_compexpr_right_11 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_8;
        }
        else
        {
            goto branch_no_8;
        }
        branch_yes_8:;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( var_m );
            tmp_called_instance_1 = var_m;
            frame_220fb98a5d3e2321d68b91ad2896314c->m_frame.f_lineno = 57;
            tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_groups );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;
                type_description_1 = "ooccccocccocccoococcoN";
                goto try_except_handler_3;
            }
            tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;
                type_description_1 = "ooccccocccocccoococcoN";
                goto try_except_handler_3;
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


                type_description_1 = "ooccccocccocccoococcoN";
                exception_lineno = 57;
                goto try_except_handler_4;
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


                type_description_1 = "ooccccocccocccoococcoN";
                exception_lineno = 57;
                goto try_except_handler_4;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_3, 2 );
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


                type_description_1 = "ooccccocccocccoococcoN";
                exception_lineno = 57;
                goto try_except_handler_4;
            }
            assert( tmp_tuple_unpack_1__element_3 == NULL );
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_6;
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

                        type_description_1 = "ooccccocccocccoococcoN";
                        exception_lineno = 57;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooccccocccocccoococcoN";
                exception_lineno = 57;
                goto try_except_handler_4;
            }
        }
        goto try_end_2;
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        try_end_2:;
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

        goto frame_exception_exit_1;
        // End of try:
        try_end_3:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
            assert( var_integer == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_integer = tmp_assign_source_7;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
            assert( var_frac == NULL );
            Py_INCREF( tmp_assign_source_8 );
            var_frac = tmp_assign_source_8;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
            tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
            assert( var_exp == NULL );
            Py_INCREF( tmp_assign_source_9 );
            var_exp = tmp_assign_source_9;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_3 );
        tmp_tuple_unpack_1__element_3 = NULL;

        {
            nuitka_bool tmp_condition_result_9;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            int tmp_truth_name_1;
            int tmp_truth_name_2;
            CHECK_OBJECT( var_frac );
            tmp_truth_name_1 = CHECK_IF_TRUE( var_frac );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;
                type_description_1 = "ooccccocccocccoococcoN";
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
            CHECK_OBJECT( var_exp );
            tmp_truth_name_2 = CHECK_IF_TRUE( var_exp );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;
                type_description_1 = "ooccccocccocccoococcoN";
                goto frame_exception_exit_1;
            }
            tmp_or_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_9 = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            tmp_condition_result_9 = tmp_or_left_value_1;
            or_end_1:;
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
                PyObject *tmp_assign_source_10;
                PyObject *tmp_called_name_6;
                PyObject *tmp_args_element_name_19;
                PyObject *tmp_left_name_10;
                PyObject *tmp_left_name_11;
                PyObject *tmp_right_name_10;
                int tmp_or_left_truth_2;
                PyObject *tmp_or_left_value_2;
                PyObject *tmp_or_right_value_2;
                PyObject *tmp_right_name_11;
                int tmp_or_left_truth_3;
                PyObject *tmp_or_left_value_3;
                PyObject *tmp_or_right_value_3;
                if ( PyCell_GET( self->m_closure[8] ) == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "parse_float" );
                    exception_tb = NULL;

                    exception_lineno = 59;
                    type_description_1 = "ooccccocccocccoococcoN";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_6 = PyCell_GET( self->m_closure[8] );
                CHECK_OBJECT( var_integer );
                tmp_left_name_11 = var_integer;
                CHECK_OBJECT( var_frac );
                tmp_or_left_value_2 = var_frac;
                tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
                if ( tmp_or_left_truth_2 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 59;
                    type_description_1 = "ooccccocccocccoococcoN";
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
                tmp_or_right_value_2 = const_str_empty;
                tmp_right_name_10 = tmp_or_right_value_2;
                goto or_end_2;
                or_left_2:;
                tmp_right_name_10 = tmp_or_left_value_2;
                or_end_2:;
                tmp_left_name_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_10 );
                if ( tmp_left_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 59;
                    type_description_1 = "ooccccocccocccoococcoN";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_exp );
                tmp_or_left_value_3 = var_exp;
                tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
                if ( tmp_or_left_truth_3 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_10 );

                    exception_lineno = 59;
                    type_description_1 = "ooccccocccocccoococcoN";
                    goto frame_exception_exit_1;
                }
                if ( tmp_or_left_truth_3 == 1 )
                {
                    goto or_left_3;
                }
                else
                {
                    goto or_right_3;
                }
                or_right_3:;
                tmp_or_right_value_3 = const_str_empty;
                tmp_right_name_11 = tmp_or_right_value_3;
                goto or_end_3;
                or_left_3:;
                tmp_right_name_11 = tmp_or_left_value_3;
                or_end_3:;
                tmp_args_element_name_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_11 );
                Py_DECREF( tmp_left_name_10 );
                if ( tmp_args_element_name_19 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 59;
                    type_description_1 = "ooccccocccocccoococcoN";
                    goto frame_exception_exit_1;
                }
                frame_220fb98a5d3e2321d68b91ad2896314c->m_frame.f_lineno = 59;
                {
                    PyObject *call_args[] = { tmp_args_element_name_19 };
                    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
                }

                Py_DECREF( tmp_args_element_name_19 );
                if ( tmp_assign_source_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 59;
                    type_description_1 = "ooccccocccocccoococcoN";
                    goto frame_exception_exit_1;
                }
                assert( var_res == NULL );
                var_res = tmp_assign_source_10;
            }
            goto branch_end_9;
            branch_no_9:;
            {
                PyObject *tmp_assign_source_11;
                PyObject *tmp_called_name_7;
                PyObject *tmp_args_element_name_20;
                if ( PyCell_GET( self->m_closure[9] ) == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "parse_int" );
                    exception_tb = NULL;

                    exception_lineno = 61;
                    type_description_1 = "ooccccocccocccoococcoN";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_7 = PyCell_GET( self->m_closure[9] );
                CHECK_OBJECT( var_integer );
                tmp_args_element_name_20 = var_integer;
                frame_220fb98a5d3e2321d68b91ad2896314c->m_frame.f_lineno = 61;
                {
                    PyObject *call_args[] = { tmp_args_element_name_20 };
                    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
                }

                if ( tmp_assign_source_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 61;
                    type_description_1 = "ooccccocccocccoococcoN";
                    goto frame_exception_exit_1;
                }
                assert( var_res == NULL );
                var_res = tmp_assign_source_11;
            }
            branch_end_9:;
        }
        {
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_called_instance_2;
            CHECK_OBJECT( var_res );
            tmp_tuple_element_6 = var_res;
            tmp_return_value = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( var_m );
            tmp_called_instance_2 = var_m;
            frame_220fb98a5d3e2321d68b91ad2896314c->m_frame.f_lineno = 62;
            tmp_tuple_element_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_end );
            if ( tmp_tuple_element_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 62;
                type_description_1 = "ooccccocccocccoococcoN";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_6 );
            goto frame_return_exit_1;
        }
        goto branch_end_8;
        branch_no_8:;
        {
            nuitka_bool tmp_condition_result_10;
            int tmp_and_left_truth_4;
            nuitka_bool tmp_and_left_value_4;
            nuitka_bool tmp_and_right_value_4;
            PyObject *tmp_compexpr_left_12;
            PyObject *tmp_compexpr_right_12;
            PyObject *tmp_compexpr_left_13;
            PyObject *tmp_compexpr_right_13;
            PyObject *tmp_slice_source_4;
            PyObject *tmp_slice_lower_4;
            PyObject *tmp_slice_upper_4;
            PyObject *tmp_left_name_12;
            PyObject *tmp_right_name_12;
            CHECK_OBJECT( var_nextchar );
            tmp_compexpr_left_12 = var_nextchar;
            tmp_compexpr_right_12 = const_str_plain_N;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_12, tmp_compexpr_right_12 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 63;
                type_description_1 = "ooccccocccocccoococcoN";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
            if ( tmp_and_left_truth_4 == 1 )
            {
                goto and_right_4;
            }
            else
            {
                goto and_left_4;
            }
            and_right_4:;
            CHECK_OBJECT( par_string );
            tmp_slice_source_4 = par_string;
            CHECK_OBJECT( par_idx );
            tmp_slice_lower_4 = par_idx;
            CHECK_OBJECT( par_idx );
            tmp_left_name_12 = par_idx;
            tmp_right_name_12 = const_int_pos_3;
            tmp_slice_upper_4 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_12, tmp_right_name_12 );
            if ( tmp_slice_upper_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 63;
                type_description_1 = "ooccccocccocccoococcoN";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_13 = LOOKUP_SLICE( tmp_slice_source_4, tmp_slice_lower_4, tmp_slice_upper_4 );
            Py_DECREF( tmp_slice_upper_4 );
            if ( tmp_compexpr_left_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 63;
                type_description_1 = "ooccccocccocccoococcoN";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_13 = const_str_plain_NaN;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
            Py_DECREF( tmp_compexpr_left_13 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 63;
                type_description_1 = "ooccccocccocccoococcoN";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_10 = tmp_and_right_value_4;
            goto and_end_4;
            and_left_4:;
            tmp_condition_result_10 = tmp_and_left_value_4;
            and_end_4:;
            if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_10;
            }
            else
            {
                goto branch_no_10;
            }
            branch_yes_10:;
            {
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_called_name_8;
                PyObject *tmp_left_name_13;
                PyObject *tmp_right_name_13;
                if ( PyCell_GET( self->m_closure[7] ) == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "parse_constant" );
                    exception_tb = NULL;

                    exception_lineno = 64;
                    type_description_1 = "ooccccocccocccoococcoN";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_8 = PyCell_GET( self->m_closure[7] );
                frame_220fb98a5d3e2321d68b91ad2896314c->m_frame.f_lineno = 64;
                tmp_tuple_element_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, &PyTuple_GET_ITEM( const_tuple_str_plain_NaN_tuple, 0 ) );

                if ( tmp_tuple_element_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 64;
                    type_description_1 = "ooccccocccocccoococcoN";
                    goto frame_exception_exit_1;
                }
                tmp_return_value = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_7 );
                CHECK_OBJECT( par_idx );
                tmp_left_name_13 = par_idx;
                tmp_right_name_13 = const_int_pos_3;
                tmp_tuple_element_7 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_13, tmp_right_name_13 );
                if ( tmp_tuple_element_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_return_value );

                    exception_lineno = 64;
                    type_description_1 = "ooccccocccocccoococcoN";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_7 );
                goto frame_return_exit_1;
            }
            goto branch_end_10;
            branch_no_10:;
            {
                nuitka_bool tmp_condition_result_11;
                int tmp_and_left_truth_5;
                nuitka_bool tmp_and_left_value_5;
                nuitka_bool tmp_and_right_value_5;
                PyObject *tmp_compexpr_left_14;
                PyObject *tmp_compexpr_right_14;
                PyObject *tmp_compexpr_left_15;
                PyObject *tmp_compexpr_right_15;
                PyObject *tmp_slice_source_5;
                PyObject *tmp_slice_lower_5;
                PyObject *tmp_slice_upper_5;
                PyObject *tmp_left_name_14;
                PyObject *tmp_right_name_14;
                CHECK_OBJECT( var_nextchar );
                tmp_compexpr_left_14 = var_nextchar;
                tmp_compexpr_right_14 = const_str_plain_I;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_14, tmp_compexpr_right_14 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 65;
                    type_description_1 = "ooccccocccocccoococcoN";
                    goto frame_exception_exit_1;
                }
                tmp_and_left_value_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
                if ( tmp_and_left_truth_5 == 1 )
                {
                    goto and_right_5;
                }
                else
                {
                    goto and_left_5;
                }
                and_right_5:;
                CHECK_OBJECT( par_string );
                tmp_slice_source_5 = par_string;
                CHECK_OBJECT( par_idx );
                tmp_slice_lower_5 = par_idx;
                CHECK_OBJECT( par_idx );
                tmp_left_name_14 = par_idx;
                tmp_right_name_14 = const_int_pos_8;
                tmp_slice_upper_5 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_14, tmp_right_name_14 );
                if ( tmp_slice_upper_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 65;
                    type_description_1 = "ooccccocccocccoococcoN";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_left_15 = LOOKUP_SLICE( tmp_slice_source_5, tmp_slice_lower_5, tmp_slice_upper_5 );
                Py_DECREF( tmp_slice_upper_5 );
                if ( tmp_compexpr_left_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 65;
                    type_description_1 = "ooccccocccocccoococcoN";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_15 = const_str_plain_Infinity;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_15, tmp_compexpr_right_15 );
                Py_DECREF( tmp_compexpr_left_15 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 65;
                    type_description_1 = "ooccccocccocccoococcoN";
                    goto frame_exception_exit_1;
                }
                tmp_and_right_value_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_condition_result_11 = tmp_and_right_value_5;
                goto and_end_5;
                and_left_5:;
                tmp_condition_result_11 = tmp_and_left_value_5;
                and_end_5:;
                if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_11;
                }
                else
                {
                    goto branch_no_11;
                }
                branch_yes_11:;
                {
                    PyObject *tmp_tuple_element_8;
                    PyObject *tmp_called_name_9;
                    PyObject *tmp_left_name_15;
                    PyObject *tmp_right_name_15;
                    if ( PyCell_GET( self->m_closure[7] ) == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "parse_constant" );
                        exception_tb = NULL;

                        exception_lineno = 66;
                        type_description_1 = "ooccccocccocccoococcoN";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_9 = PyCell_GET( self->m_closure[7] );
                    frame_220fb98a5d3e2321d68b91ad2896314c->m_frame.f_lineno = 66;
                    tmp_tuple_element_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, &PyTuple_GET_ITEM( const_tuple_str_plain_Infinity_tuple, 0 ) );

                    if ( tmp_tuple_element_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 66;
                        type_description_1 = "ooccccocccocccoococcoN";
                        goto frame_exception_exit_1;
                    }
                    tmp_return_value = PyTuple_New( 2 );
                    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_8 );
                    CHECK_OBJECT( par_idx );
                    tmp_left_name_15 = par_idx;
                    tmp_right_name_15 = const_int_pos_8;
                    tmp_tuple_element_8 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_15, tmp_right_name_15 );
                    if ( tmp_tuple_element_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_return_value );

                        exception_lineno = 66;
                        type_description_1 = "ooccccocccocccoococcoN";
                        goto frame_exception_exit_1;
                    }
                    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_8 );
                    goto frame_return_exit_1;
                }
                goto branch_end_11;
                branch_no_11:;
                {
                    nuitka_bool tmp_condition_result_12;
                    int tmp_and_left_truth_6;
                    nuitka_bool tmp_and_left_value_6;
                    nuitka_bool tmp_and_right_value_6;
                    PyObject *tmp_compexpr_left_16;
                    PyObject *tmp_compexpr_right_16;
                    PyObject *tmp_compexpr_left_17;
                    PyObject *tmp_compexpr_right_17;
                    PyObject *tmp_slice_source_6;
                    PyObject *tmp_slice_lower_6;
                    PyObject *tmp_slice_upper_6;
                    PyObject *tmp_left_name_16;
                    PyObject *tmp_right_name_16;
                    CHECK_OBJECT( var_nextchar );
                    tmp_compexpr_left_16 = var_nextchar;
                    tmp_compexpr_right_16 = const_str_chr_45;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_16, tmp_compexpr_right_16 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 67;
                        type_description_1 = "ooccccocccocccoococcoN";
                        goto frame_exception_exit_1;
                    }
                    tmp_and_left_value_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    tmp_and_left_truth_6 = tmp_and_left_value_6 == NUITKA_BOOL_TRUE ? 1 : 0;
                    if ( tmp_and_left_truth_6 == 1 )
                    {
                        goto and_right_6;
                    }
                    else
                    {
                        goto and_left_6;
                    }
                    and_right_6:;
                    CHECK_OBJECT( par_string );
                    tmp_slice_source_6 = par_string;
                    CHECK_OBJECT( par_idx );
                    tmp_slice_lower_6 = par_idx;
                    CHECK_OBJECT( par_idx );
                    tmp_left_name_16 = par_idx;
                    tmp_right_name_16 = const_int_pos_9;
                    tmp_slice_upper_6 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_16, tmp_right_name_16 );
                    if ( tmp_slice_upper_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 67;
                        type_description_1 = "ooccccocccocccoococcoN";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_left_17 = LOOKUP_SLICE( tmp_slice_source_6, tmp_slice_lower_6, tmp_slice_upper_6 );
                    Py_DECREF( tmp_slice_upper_6 );
                    if ( tmp_compexpr_left_17 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 67;
                        type_description_1 = "ooccccocccocccoococcoN";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_17 = const_str_digest_146e803d9878ec1c531de3dd001739b2;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_17, tmp_compexpr_right_17 );
                    Py_DECREF( tmp_compexpr_left_17 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 67;
                        type_description_1 = "ooccccocccocccoococcoN";
                        goto frame_exception_exit_1;
                    }
                    tmp_and_right_value_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    tmp_condition_result_12 = tmp_and_right_value_6;
                    goto and_end_6;
                    and_left_6:;
                    tmp_condition_result_12 = tmp_and_left_value_6;
                    and_end_6:;
                    if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_12;
                    }
                    else
                    {
                        goto branch_no_12;
                    }
                    branch_yes_12:;
                    {
                        PyObject *tmp_tuple_element_9;
                        PyObject *tmp_called_name_10;
                        PyObject *tmp_left_name_17;
                        PyObject *tmp_right_name_17;
                        if ( PyCell_GET( self->m_closure[7] ) == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "parse_constant" );
                            exception_tb = NULL;

                            exception_lineno = 68;
                            type_description_1 = "ooccccocccocccoococcoN";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_name_10 = PyCell_GET( self->m_closure[7] );
                        frame_220fb98a5d3e2321d68b91ad2896314c->m_frame.f_lineno = 68;
                        tmp_tuple_element_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, &PyTuple_GET_ITEM( const_tuple_str_digest_146e803d9878ec1c531de3dd001739b2_tuple, 0 ) );

                        if ( tmp_tuple_element_9 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 68;
                            type_description_1 = "ooccccocccocccoococcoN";
                            goto frame_exception_exit_1;
                        }
                        tmp_return_value = PyTuple_New( 2 );
                        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_9 );
                        CHECK_OBJECT( par_idx );
                        tmp_left_name_17 = par_idx;
                        tmp_right_name_17 = const_int_pos_9;
                        tmp_tuple_element_9 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_17, tmp_right_name_17 );
                        if ( tmp_tuple_element_9 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_return_value );

                            exception_lineno = 68;
                            type_description_1 = "ooccccocccocccoococcoN";
                            goto frame_exception_exit_1;
                        }
                        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_9 );
                        goto frame_return_exit_1;
                    }
                    goto branch_end_12;
                    branch_no_12:;
                    {
                        PyObject *tmp_raise_type_2;
                        PyObject *tmp_called_name_11;
                        PyObject *tmp_mvar_value_2;
                        PyObject *tmp_args_element_name_21;
                        PyObject *tmp_args_element_name_22;
                        PyObject *tmp_args_element_name_23;
                        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );

                        if (unlikely( tmp_mvar_value_2 == NULL ))
                        {
                            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );
                        }

                        if ( tmp_mvar_value_2 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyString_FromFormat( "global name '%s' is not defined", "JSONDecodeError" );
                            exception_tb = NULL;

                            exception_lineno = 70;
                            type_description_1 = "ooccccocccocccoococcoN";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_name_11 = tmp_mvar_value_2;
                        tmp_args_element_name_21 = const_str_digest_90fc8c406fd6945f66bb1cd669171bd6;
                        CHECK_OBJECT( par_string );
                        tmp_args_element_name_22 = par_string;
                        CHECK_OBJECT( par_idx );
                        tmp_args_element_name_23 = par_idx;
                        frame_220fb98a5d3e2321d68b91ad2896314c->m_frame.f_lineno = 70;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23 };
                            tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_11, call_args );
                        }

                        if ( tmp_raise_type_2 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 70;
                            type_description_1 = "ooccccocccocccoococcoN";
                            goto frame_exception_exit_1;
                        }
                        exception_type = tmp_raise_type_2;
                        exception_lineno = 70;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooccccocccocccoococcoN";
                        goto frame_exception_exit_1;
                    }
                    branch_end_12:;
                }
                branch_end_11:;
            }
            branch_end_10:;
        }
        branch_end_8:;
    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_220fb98a5d3e2321d68b91ad2896314c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_220fb98a5d3e2321d68b91ad2896314c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_220fb98a5d3e2321d68b91ad2896314c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_220fb98a5d3e2321d68b91ad2896314c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_220fb98a5d3e2321d68b91ad2896314c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_220fb98a5d3e2321d68b91ad2896314c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_220fb98a5d3e2321d68b91ad2896314c,
        type_description_1,
        par_string,
        par_idx,
        self->m_closure[1],
        self->m_closure[5],
        self->m_closure[9],
        self->m_closure[8],
        var_res,
        self->m_closure[12],
        self->m_closure[6],
        self->m_closure[2],
        var_frac,
        self->m_closure[4],
        self->m_closure[3],
        self->m_closure[7],
        var_integer,
        var_nextchar,
        self->m_closure[10],
        var_m,
        self->m_closure[0],
        self->m_closure[11],
        var_exp,
        NULL
    );


    // Release cached frame.
    if ( frame_220fb98a5d3e2321d68b91ad2896314c == cache_frame_220fb98a5d3e2321d68b91ad2896314c )
    {
        Py_DECREF( frame_220fb98a5d3e2321d68b91ad2896314c );
    }
    cache_frame_220fb98a5d3e2321d68b91ad2896314c = NULL;

    assertFrameObject( frame_220fb98a5d3e2321d68b91ad2896314c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( simplejson$scanner$$$function_2_py_make_scanner$$$function_1__scan_once );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_frac );
    var_frac = NULL;

    CHECK_OBJECT( (PyObject *)par_string );
    Py_DECREF( par_string );
    par_string = NULL;

    Py_XDECREF( var_integer );
    var_integer = NULL;

    CHECK_OBJECT( (PyObject *)var_nextchar );
    Py_DECREF( var_nextchar );
    var_nextchar = NULL;

    CHECK_OBJECT( (PyObject *)par_idx );
    Py_DECREF( par_idx );
    par_idx = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_exp );
    var_exp = NULL;

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

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_frac );
    var_frac = NULL;

    CHECK_OBJECT( (PyObject *)par_string );
    Py_DECREF( par_string );
    par_string = NULL;

    Py_XDECREF( var_integer );
    var_integer = NULL;

    Py_XDECREF( var_nextchar );
    var_nextchar = NULL;

    CHECK_OBJECT( (PyObject *)par_idx );
    Py_DECREF( par_idx );
    par_idx = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_exp );
    var_exp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( simplejson$scanner$$$function_2_py_make_scanner$$$function_1__scan_once );
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


static PyObject *impl_simplejson$scanner$$$function_2_py_make_scanner$$$function_2_scan_once( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_string = python_pars[ 0 ];
    PyObject *par_idx = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_f80bcd851dda58bd93611e96f0a669a2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_f80bcd851dda58bd93611e96f0a669a2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f80bcd851dda58bd93611e96f0a669a2, codeobj_f80bcd851dda58bd93611e96f0a669a2, module_simplejson$scanner, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f80bcd851dda58bd93611e96f0a669a2 = cache_frame_f80bcd851dda58bd93611e96f0a669a2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f80bcd851dda58bd93611e96f0a669a2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f80bcd851dda58bd93611e96f0a669a2 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_idx );
        tmp_compexpr_left_1 = par_idx;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "oocc";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "JSONDecodeError" );
                exception_tb = NULL;

                exception_lineno = 77;
                type_description_1 = "oocc";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            tmp_args_element_name_1 = const_str_digest_90fc8c406fd6945f66bb1cd669171bd6;
            CHECK_OBJECT( par_string );
            tmp_args_element_name_2 = par_string;
            CHECK_OBJECT( par_idx );
            tmp_args_element_name_3 = par_idx;
            frame_f80bcd851dda58bd93611e96f0a669a2->m_frame.f_lineno = 77;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
            }

            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;
                type_description_1 = "oocc";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 77;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "_scan_once" );
            exception_tb = NULL;

            exception_lineno = 79;
            type_description_1 = "oocc";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_string );
        tmp_args_element_name_4 = par_string;
        CHECK_OBJECT( par_idx );
        tmp_args_element_name_5 = par_idx;
        frame_f80bcd851dda58bd93611e96f0a669a2->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "oocc";
            goto try_except_handler_2;
        }
        goto try_return_handler_2;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( simplejson$scanner$$$function_2_py_make_scanner$$$function_2_scan_once );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "memo" );
            exception_tb = NULL;

            exception_lineno = 81;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[1] );
        frame_f80bcd851dda58bd93611e96f0a669a2->m_frame.f_lineno = 81;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_clear );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
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

    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            Py_DECREF( exception_keeper_type_1 );
            Py_XDECREF( exception_keeper_value_1 );
            Py_XDECREF( exception_keeper_tb_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "memo" );
            exception_tb = NULL;

            exception_lineno = 81;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = PyCell_GET( self->m_closure[1] );
        frame_f80bcd851dda58bd93611e96f0a669a2->m_frame.f_lineno = 81;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_clear );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            Py_DECREF( exception_keeper_type_1 );
            Py_XDECREF( exception_keeper_value_1 );
            Py_XDECREF( exception_keeper_tb_1 );

            exception_lineno = 81;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f80bcd851dda58bd93611e96f0a669a2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f80bcd851dda58bd93611e96f0a669a2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f80bcd851dda58bd93611e96f0a669a2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f80bcd851dda58bd93611e96f0a669a2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f80bcd851dda58bd93611e96f0a669a2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f80bcd851dda58bd93611e96f0a669a2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f80bcd851dda58bd93611e96f0a669a2,
        type_description_1,
        par_string,
        par_idx,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame.
    if ( frame_f80bcd851dda58bd93611e96f0a669a2 == cache_frame_f80bcd851dda58bd93611e96f0a669a2 )
    {
        Py_DECREF( frame_f80bcd851dda58bd93611e96f0a669a2 );
    }
    cache_frame_f80bcd851dda58bd93611e96f0a669a2 = NULL;

    assertFrameObject( frame_f80bcd851dda58bd93611e96f0a669a2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( simplejson$scanner$$$function_2_py_make_scanner$$$function_2_scan_once );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_string );
    Py_DECREF( par_string );
    par_string = NULL;

    CHECK_OBJECT( (PyObject *)par_idx );
    Py_DECREF( par_idx );
    par_idx = NULL;

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

    CHECK_OBJECT( (PyObject *)par_string );
    Py_DECREF( par_string );
    par_string = NULL;

    CHECK_OBJECT( (PyObject *)par_idx );
    Py_DECREF( par_idx );
    par_idx = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( simplejson$scanner$$$function_2_py_make_scanner$$$function_2_scan_once );
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



static PyObject *MAKE_FUNCTION_simplejson$scanner$$$function_1__import_c_make_scanner(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_simplejson$scanner$$$function_1__import_c_make_scanner,
        const_str_plain__import_c_make_scanner,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0fb212840d1a53634d97403418c72ce9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_simplejson$scanner,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_simplejson$scanner$$$function_2_py_make_scanner(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_simplejson$scanner$$$function_2_py_make_scanner,
        const_str_plain_py_make_scanner,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3c89c2f6e458de4da3c2ddc3e7ebb7d8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_simplejson$scanner,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_simplejson$scanner$$$function_2_py_make_scanner$$$function_1__scan_once(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_simplejson$scanner$$$function_2_py_make_scanner$$$function_1__scan_once,
        const_str_plain__scan_once,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_220fb98a5d3e2321d68b91ad2896314c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_simplejson$scanner,
        NULL,
        13
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_simplejson$scanner$$$function_2_py_make_scanner$$$function_2_scan_once(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_simplejson$scanner$$$function_2_py_make_scanner$$$function_2_scan_once,
        const_str_plain_scan_once,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f80bcd851dda58bd93611e96f0a669a2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_simplejson$scanner,
        NULL,
        2
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_simplejson$scanner =
{
    PyModuleDef_HEAD_INIT,
    "simplejson.scanner",
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

MOD_INIT_DECL( simplejson$scanner )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_simplejson$scanner );
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
    puts("simplejson.scanner: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("simplejson.scanner: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("simplejson.scanner: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initsimplejson$scanner" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_simplejson$scanner = Py_InitModule4(
        "simplejson.scanner",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_simplejson$scanner = PyModule_Create( &mdef_simplejson$scanner );
#endif

    moduledict_simplejson$scanner = MODULE_DICT( module_simplejson$scanner );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_simplejson$scanner,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_simplejson$scanner,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_simplejson$scanner,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_simplejson$scanner );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_367f2f403feb094f1e399a57044060b3, module_simplejson$scanner );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_420c9afa94a9427fbf2895cbd0a89368;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_5466f5e8b24617732af65a4ee8d95199;
        UPDATE_STRING_DICT0( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_ec69b135f950ce3eb618157ccc4f135e;
        UPDATE_STRING_DICT0( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_420c9afa94a9427fbf2895cbd0a89368 = MAKE_MODULE_FRAME( codeobj_420c9afa94a9427fbf2895cbd0a89368, module_simplejson$scanner );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_420c9afa94a9427fbf2895cbd0a89368 );
    assert( Py_REFCNT( frame_420c9afa94a9427fbf2895cbd0a89368 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_plain_re;
        tmp_globals_name_1 = (PyObject *)moduledict_simplejson$scanner;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        frame_420c9afa94a9427fbf2895cbd0a89368->m_frame.f_lineno = 3;
        tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_1;
        tmp_name_name_2 = const_str_plain_errors;
        tmp_globals_name_2 = (PyObject *)moduledict_simplejson$scanner;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_JSONDecodeError_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_420c9afa94a9427fbf2895cbd0a89368->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_JSONDecodeError );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain_JSONDecodeError, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_FUNCTION_simplejson$scanner$$$function_1__import_c_make_scanner(  );



        UPDATE_STRING_DICT1( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain__import_c_make_scanner, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain__import_c_make_scanner );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__import_c_make_scanner );
        }

        CHECK_OBJECT( tmp_mvar_value_1 );
        tmp_called_name_1 = tmp_mvar_value_1;
        frame_420c9afa94a9427fbf2895cbd0a89368->m_frame.f_lineno = 11;
        tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain_c_make_scanner, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = LIST_COPY( const_list_str_plain_make_scanner_str_plain_JSONDecodeError_list );
        UPDATE_STRING_DICT1( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_right_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;

            exception_lineno = 15;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_compile );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = const_str_digest_6b8b2b3b5b385bde93d4050f0e421579;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;

            exception_lineno = 17;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_VERBOSE );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;

            exception_lineno = 17;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_4;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_MULTILINE );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;

            exception_lineno = 17;

            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_5;
        tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_DOTALL );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        frame_420c9afa94a9427fbf2895cbd0a89368->m_frame.f_lineno = 15;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain_NUMBER_RE, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_simplejson$scanner$$$function_2_py_make_scanner(  );



        UPDATE_STRING_DICT1( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain_py_make_scanner, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain_c_make_scanner );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_make_scanner );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "c_make_scanner" );
            exception_tb = NULL;

            exception_lineno = 85;

            goto frame_exception_exit_1;
        }

        tmp_or_left_value_1 = tmp_mvar_value_6;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;

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
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain_py_make_scanner );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_py_make_scanner );
        }

        CHECK_OBJECT( tmp_mvar_value_7 );
        tmp_or_right_value_1 = tmp_mvar_value_7;
        tmp_assign_source_10 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_10 = tmp_or_left_value_1;
        or_end_1:;
        UPDATE_STRING_DICT0( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain_make_scanner, tmp_assign_source_10 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_420c9afa94a9427fbf2895cbd0a89368 );
#endif
    popFrameStack();

    assertFrameObject( frame_420c9afa94a9427fbf2895cbd0a89368 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_420c9afa94a9427fbf2895cbd0a89368 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_420c9afa94a9427fbf2895cbd0a89368, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_420c9afa94a9427fbf2895cbd0a89368->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_420c9afa94a9427fbf2895cbd0a89368, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_simplejson$scanner, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_simplejson$scanner );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
