/* Generated code for Python module 'html5lib.filters.whitespace'
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

/* The "_module_html5lib$filters$whitespace" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_html5lib$filters$whitespace;
PyDictObject *moduledict_html5lib$filters$whitespace;

/* The declarations of module constants used, if any. */
extern PyObject *const_unicode_plain_Characters;
extern PyObject *const_str_plain_base;
static PyObject *const_unicode_digest_bc0c8752eb561a790e432dfd20eb3f48;
static PyObject *const_str_plain_SPACES_REGEX;
static PyObject *const_tuple_010b31a8acb98e1a47ac2cb3a8c9fa9a_tuple;
extern PyObject *const_str_plain_constants;
extern PyObject *const_str_plain_sub;
extern PyObject *const_str_plain_type;
extern PyObject *const_unicode_digest_69ec05153bee1ab016c8162b3966c928;
extern PyObject *const_str_plain_token;
static PyObject *const_str_digest_be4d0f6a83e962e5311d1141d20e1aa2;
extern PyObject *const_unicode_plain_name;
extern PyObject *const_str_plain_join;
extern PyObject *const_unicode_plain_type;
extern PyObject *const_str_plain_text;
static PyObject *const_str_digest_27638da264abc4114fe99a2b9239daad;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_collapse_spaces;
extern PyObject *const_unicode_plain_StartTag;
extern PyObject *const_unicode_empty;
extern PyObject *const_str_plain_preserve;
extern PyObject *const_unicode_plain_textarea;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_e0c4ea557353c285a7e2538b89ec6c02;
static PyObject *const_list_unicode_plain_pre_unicode_plain_textarea_list;
extern PyObject *const_unicode_plain_EndTag;
static PyObject *const_tuple_str_plain_rcdataElements_str_plain_spaceCharacters_tuple;
extern PyObject *const_str_plain_Filter;
static PyObject *const_str_plain_spacePreserveElements;
extern PyObject *const_str_plain___file__;
extern PyObject *const_unicode_plain_SpaceCharacters;
extern PyObject *const_str_plain_rcdataElements;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_division;
extern PyObject *const_int_pos_2;
extern PyObject *const_tuple_str_plain_base_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_empty;
extern PyObject *const_unicode_plain_data;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_compile;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_spaceCharacters;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_text_tuple;
extern PyObject *const_unicode_plain_pre;
extern PyObject *const_unicode_space;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain___iter__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_unicode_digest_bc0c8752eb561a790e432dfd20eb3f48 = UNSTREAM_UNICODE( &constant_bin[ 693765 ], 65 );
    const_str_plain_SPACES_REGEX = UNSTREAM_STRING( &constant_bin[ 693830 ], 12, 1 );
    const_tuple_010b31a8acb98e1a47ac2cb3a8c9fa9a_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_010b31a8acb98e1a47ac2cb3a8c9fa9a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_010b31a8acb98e1a47ac2cb3a8c9fa9a_tuple, 1, const_str_plain_preserve ); Py_INCREF( const_str_plain_preserve );
    PyTuple_SET_ITEM( const_tuple_010b31a8acb98e1a47ac2cb3a8c9fa9a_tuple, 2, const_str_plain_type ); Py_INCREF( const_str_plain_type );
    PyTuple_SET_ITEM( const_tuple_010b31a8acb98e1a47ac2cb3a8c9fa9a_tuple, 3, const_str_plain_token ); Py_INCREF( const_str_plain_token );
    const_str_digest_be4d0f6a83e962e5311d1141d20e1aa2 = UNSTREAM_STRING( &constant_bin[ 693842 ], 36, 0 );
    const_str_digest_27638da264abc4114fe99a2b9239daad = UNSTREAM_STRING( &constant_bin[ 693850 ], 27, 0 );
    const_str_plain_collapse_spaces = UNSTREAM_STRING( &constant_bin[ 693878 ], 15, 1 );
    const_str_digest_e0c4ea557353c285a7e2538b89ec6c02 = UNSTREAM_STRING( &constant_bin[ 693893 ], 63, 0 );
    const_list_unicode_plain_pre_unicode_plain_textarea_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_unicode_plain_pre_unicode_plain_textarea_list, 0, const_unicode_plain_pre ); Py_INCREF( const_unicode_plain_pre );
    PyList_SET_ITEM( const_list_unicode_plain_pre_unicode_plain_textarea_list, 1, const_unicode_plain_textarea ); Py_INCREF( const_unicode_plain_textarea );
    const_tuple_str_plain_rcdataElements_str_plain_spaceCharacters_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_rcdataElements_str_plain_spaceCharacters_tuple, 0, const_str_plain_rcdataElements ); Py_INCREF( const_str_plain_rcdataElements );
    PyTuple_SET_ITEM( const_tuple_str_plain_rcdataElements_str_plain_spaceCharacters_tuple, 1, const_str_plain_spaceCharacters ); Py_INCREF( const_str_plain_spaceCharacters );
    const_str_plain_spacePreserveElements = UNSTREAM_STRING( &constant_bin[ 693956 ], 21, 1 );
    const_tuple_str_plain_text_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_text_tuple, 0, const_str_plain_text ); Py_INCREF( const_str_plain_text );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_html5lib$filters$whitespace( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_488dcc6349e4a1efc9d09e18e9209aa3;
static PyCodeObject *codeobj_0f9d474f976195fe1e67112143948d57;
static PyCodeObject *codeobj_76584a78834b3654bd33ad2ceacefb3c;
static PyCodeObject *codeobj_20d1410ba00e4d29f2933a1fddd61688;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_e0c4ea557353c285a7e2538b89ec6c02;
    codeobj_488dcc6349e4a1efc9d09e18e9209aa3 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_be4d0f6a83e962e5311d1141d20e1aa2, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_0f9d474f976195fe1e67112143948d57 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Filter, 12, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_76584a78834b3654bd33ad2ceacefb3c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___iter__, 16, const_tuple_010b31a8acb98e1a47ac2cb3a8c9fa9a_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_20d1410ba00e4d29f2933a1fddd61688 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_collapse_spaces, 37, const_tuple_str_plain_text_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT );
}

// The module function declarations.
static PyObject *html5lib$filters$whitespace$$$function_1___iter__$$$genobj_1___iter___maker( void );


static PyObject *MAKE_FUNCTION_html5lib$filters$whitespace$$$function_1___iter__(  );


static PyObject *MAKE_FUNCTION_html5lib$filters$whitespace$$$function_2_collapse_spaces(  );


// The module function definitions.
static PyObject *impl_html5lib$filters$whitespace$$$function_1___iter__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = html5lib$filters$whitespace$$$function_1___iter__$$$genobj_1___iter___maker();

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_self;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( html5lib$filters$whitespace$$$function_1___iter__ );
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
    NUITKA_CANNOT_GET_HERE( html5lib$filters$whitespace$$$function_1___iter__ );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



struct html5lib$filters$whitespace$$$function_1___iter__$$$genobj_1___iter___locals {
    PyObject *var_preserve;
    PyObject *var_type;
    PyObject *var_token;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *html5lib$filters$whitespace$$$function_1___iter__$$$genobj_1___iter___context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct html5lib$filters$whitespace$$$function_1___iter__$$$genobj_1___iter___locals *generator_heap = (struct html5lib$filters$whitespace$$$function_1___iter__$$$genobj_1___iter___locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_preserve = NULL;
    generator_heap->var_type = NULL;
    generator_heap->var_token = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_int_0;
        assert( generator_heap->var_preserve == NULL );
        Py_INCREF( tmp_assign_source_1 );
        generator_heap->var_preserve = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_76584a78834b3654bd33ad2ceacefb3c, module_html5lib$filters$whitespace, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain_base );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "global name '%s' is not defined", "base" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 18;
            generator_heap->type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Filter );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 18;
            generator_heap->type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___iter__ );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 18;
            generator_heap->type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 18;
            generator_heap->type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = PyCell_GET( generator->m_closure[0] );
        generator->m_frame->m_frame.f_lineno = 18;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 18;
            generator_heap->type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 18;
            generator_heap->type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
        assert( generator_heap->tmp_for_loop_1__for_iterator == NULL );
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( generator_heap->tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "cooo";
                generator_heap->exception_lineno = 18;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( generator_heap->tmp_for_loop_1__iter_value );
        tmp_assign_source_4 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_token;
            generator_heap->var_token = tmp_assign_source_4;
            Py_INCREF( generator_heap->var_token );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( generator_heap->var_token );
        tmp_subscribed_name_1 = generator_heap->var_token;
        tmp_subscript_name_1 = const_unicode_plain_type;
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 19;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_type;
            generator_heap->var_type = tmp_assign_source_5;
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
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( generator_heap->var_type );
        tmp_compexpr_left_1 = generator_heap->var_type;
        tmp_compexpr_right_1 = const_unicode_plain_StartTag;
        generator_heap->tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 20;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_2;
        }
        tmp_and_left_value_1 = ( generator_heap->tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        if ( generator_heap->var_preserve == NULL )
        {

            generator_heap->exception_type = PyExc_UnboundLocalError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "preserve" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 21;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_2;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE( generator_heap->var_preserve );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 21;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_2;
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
        CHECK_OBJECT( generator_heap->var_token );
        tmp_subscribed_name_2 = generator_heap->var_token;
        tmp_subscript_name_2 = const_unicode_plain_name;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 21;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_2;
        }
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_compexpr_left_2 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 21;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_2;
        }

        tmp_source_name_3 = PyCell_GET( generator->m_closure[0] );
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_spacePreserveElements );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            generator_heap->exception_lineno = 21;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_2;
        }
        generator_heap->tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 21;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_2;
        }
        tmp_or_right_value_1 = ( generator_heap->tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_and_right_value_1 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            if ( generator_heap->var_preserve == NULL )
            {

                generator_heap->exception_type = PyExc_UnboundLocalError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "preserve" );
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 22;
                generator_heap->type_description_1 = "cooo";
                goto try_except_handler_2;
            }

            tmp_left_name_1 = generator_heap->var_preserve;
            tmp_right_name_1 = const_int_pos_1;
            generator_heap->tmp_result = BINARY_OPERATION_ADD_OBJECT_INT_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
            if ( generator_heap->tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 22;
                generator_heap->type_description_1 = "cooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_6 = tmp_left_name_1;
            generator_heap->var_preserve = tmp_assign_source_6;

        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            int tmp_and_left_truth_2;
            nuitka_bool tmp_and_left_value_2;
            nuitka_bool tmp_and_right_value_2;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            int tmp_truth_name_2;
            CHECK_OBJECT( generator_heap->var_type );
            tmp_compexpr_left_3 = generator_heap->var_type;
            tmp_compexpr_right_3 = const_unicode_plain_EndTag;
            generator_heap->tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( generator_heap->tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 24;
                generator_heap->type_description_1 = "cooo";
                goto try_except_handler_2;
            }
            tmp_and_left_value_2 = ( generator_heap->tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            if ( generator_heap->var_preserve == NULL )
            {

                generator_heap->exception_type = PyExc_UnboundLocalError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "preserve" );
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 24;
                generator_heap->type_description_1 = "cooo";
                goto try_except_handler_2;
            }

            tmp_truth_name_2 = CHECK_IF_TRUE( generator_heap->var_preserve );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 24;
                generator_heap->type_description_1 = "cooo";
                goto try_except_handler_2;
            }
            tmp_and_right_value_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_2 = tmp_and_right_value_2;
            goto and_end_2;
            and_left_2:;
            tmp_condition_result_2 = tmp_and_left_value_2;
            and_end_2:;
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
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                if ( generator_heap->var_preserve == NULL )
                {

                    generator_heap->exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( generator_heap->exception_type );
                    generator_heap->exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "preserve" );
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 25;
                    generator_heap->type_description_1 = "cooo";
                    goto try_except_handler_2;
                }

                tmp_left_name_2 = generator_heap->var_preserve;
                tmp_right_name_2 = const_int_pos_1;
                generator_heap->tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_2, tmp_right_name_2 );
                if ( generator_heap->tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                    generator_heap->exception_lineno = 25;
                    generator_heap->type_description_1 = "cooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_7 = tmp_left_name_2;
                generator_heap->var_preserve = tmp_assign_source_7;

            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                int tmp_and_left_truth_3;
                nuitka_bool tmp_and_left_value_3;
                nuitka_bool tmp_and_right_value_3;
                PyObject *tmp_operand_name_1;
                int tmp_and_left_truth_4;
                nuitka_bool tmp_and_left_value_4;
                nuitka_bool tmp_and_right_value_4;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_subscript_name_3;
                PyObject *tmp_subscript_result_1;
                int tmp_truth_name_3;
                if ( generator_heap->var_preserve == NULL )
                {

                    generator_heap->exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( generator_heap->exception_type );
                    generator_heap->exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "preserve" );
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 27;
                    generator_heap->type_description_1 = "cooo";
                    goto try_except_handler_2;
                }

                tmp_operand_name_1 = generator_heap->var_preserve;
                generator_heap->tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
                if ( generator_heap->tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                    generator_heap->exception_lineno = 27;
                    generator_heap->type_description_1 = "cooo";
                    goto try_except_handler_2;
                }
                tmp_and_left_value_3 = ( generator_heap->tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                CHECK_OBJECT( generator_heap->var_type );
                tmp_compexpr_left_4 = generator_heap->var_type;
                tmp_compexpr_right_4 = const_unicode_plain_SpaceCharacters;
                generator_heap->tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                if ( generator_heap->tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                    generator_heap->exception_lineno = 27;
                    generator_heap->type_description_1 = "cooo";
                    goto try_except_handler_2;
                }
                tmp_and_left_value_4 = ( generator_heap->tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                CHECK_OBJECT( generator_heap->var_token );
                tmp_subscribed_name_3 = generator_heap->var_token;
                tmp_subscript_name_3 = const_unicode_plain_data;
                tmp_subscript_result_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
                if ( tmp_subscript_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                    generator_heap->exception_lineno = 27;
                    generator_heap->type_description_1 = "cooo";
                    goto try_except_handler_2;
                }
                tmp_truth_name_3 = CHECK_IF_TRUE( tmp_subscript_result_1 );
                if ( tmp_truth_name_3 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                    Py_DECREF( tmp_subscript_result_1 );

                    generator_heap->exception_lineno = 27;
                    generator_heap->type_description_1 = "cooo";
                    goto try_except_handler_2;
                }
                tmp_and_right_value_4 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_subscript_result_1 );
                tmp_and_right_value_3 = tmp_and_right_value_4;
                goto and_end_4;
                and_left_4:;
                tmp_and_right_value_3 = tmp_and_left_value_4;
                and_end_4:;
                tmp_condition_result_3 = tmp_and_right_value_3;
                goto and_end_3;
                and_left_3:;
                tmp_condition_result_3 = tmp_and_left_value_3;
                and_end_3:;
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
                    PyObject *tmp_ass_subvalue_1;
                    PyObject *tmp_ass_subscribed_1;
                    PyObject *tmp_ass_subscript_1;
                    tmp_ass_subvalue_1 = const_unicode_space;
                    CHECK_OBJECT( generator_heap->var_token );
                    tmp_ass_subscribed_1 = generator_heap->var_token;
                    tmp_ass_subscript_1 = const_unicode_plain_data;
                    generator_heap->tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
                    if ( generator_heap->tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                        generator_heap->exception_lineno = 29;
                        generator_heap->type_description_1 = "cooo";
                        goto try_except_handler_2;
                    }
                }
                goto branch_end_3;
                branch_no_3:;
                {
                    nuitka_bool tmp_condition_result_4;
                    int tmp_and_left_truth_5;
                    nuitka_bool tmp_and_left_value_5;
                    nuitka_bool tmp_and_right_value_5;
                    PyObject *tmp_operand_name_2;
                    PyObject *tmp_compexpr_left_5;
                    PyObject *tmp_compexpr_right_5;
                    if ( generator_heap->var_preserve == NULL )
                    {

                        generator_heap->exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( generator_heap->exception_type );
                        generator_heap->exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "preserve" );
                        generator_heap->exception_tb = NULL;

                        generator_heap->exception_lineno = 31;
                        generator_heap->type_description_1 = "cooo";
                        goto try_except_handler_2;
                    }

                    tmp_operand_name_2 = generator_heap->var_preserve;
                    generator_heap->tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
                    if ( generator_heap->tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                        generator_heap->exception_lineno = 31;
                        generator_heap->type_description_1 = "cooo";
                        goto try_except_handler_2;
                    }
                    tmp_and_left_value_5 = ( generator_heap->tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    CHECK_OBJECT( generator_heap->var_type );
                    tmp_compexpr_left_5 = generator_heap->var_type;
                    tmp_compexpr_right_5 = const_unicode_plain_Characters;
                    generator_heap->tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                    if ( generator_heap->tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                        generator_heap->exception_lineno = 31;
                        generator_heap->type_description_1 = "cooo";
                        goto try_except_handler_2;
                    }
                    tmp_and_right_value_5 = ( generator_heap->tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    tmp_condition_result_4 = tmp_and_right_value_5;
                    goto and_end_5;
                    and_left_5:;
                    tmp_condition_result_4 = tmp_and_left_value_5;
                    and_end_5:;
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
                        PyObject *tmp_ass_subvalue_2;
                        PyObject *tmp_called_name_2;
                        PyObject *tmp_mvar_value_2;
                        PyObject *tmp_args_element_name_2;
                        PyObject *tmp_subscribed_name_4;
                        PyObject *tmp_subscript_name_4;
                        PyObject *tmp_ass_subscribed_2;
                        PyObject *tmp_ass_subscript_2;
                        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain_collapse_spaces );

                        if (unlikely( tmp_mvar_value_2 == NULL ))
                        {
                            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_collapse_spaces );
                        }

                        if ( tmp_mvar_value_2 == NULL )
                        {

                            generator_heap->exception_type = PyExc_NameError;
                            Py_INCREF( generator_heap->exception_type );
                            generator_heap->exception_value = PyString_FromFormat( "global name '%s' is not defined", "collapse_spaces" );
                            generator_heap->exception_tb = NULL;

                            generator_heap->exception_lineno = 32;
                            generator_heap->type_description_1 = "cooo";
                            goto try_except_handler_2;
                        }

                        tmp_called_name_2 = tmp_mvar_value_2;
                        CHECK_OBJECT( generator_heap->var_token );
                        tmp_subscribed_name_4 = generator_heap->var_token;
                        tmp_subscript_name_4 = const_unicode_plain_data;
                        tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                        if ( tmp_args_element_name_2 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                            generator_heap->exception_lineno = 32;
                            generator_heap->type_description_1 = "cooo";
                            goto try_except_handler_2;
                        }
                        generator->m_frame->m_frame.f_lineno = 32;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_2 };
                            tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                        }

                        Py_DECREF( tmp_args_element_name_2 );
                        if ( tmp_ass_subvalue_2 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                            generator_heap->exception_lineno = 32;
                            generator_heap->type_description_1 = "cooo";
                            goto try_except_handler_2;
                        }
                        CHECK_OBJECT( generator_heap->var_token );
                        tmp_ass_subscribed_2 = generator_heap->var_token;
                        tmp_ass_subscript_2 = const_unicode_plain_data;
                        generator_heap->tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
                        Py_DECREF( tmp_ass_subvalue_2 );
                        if ( generator_heap->tmp_result == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                            generator_heap->exception_lineno = 32;
                            generator_heap->type_description_1 = "cooo";
                            goto try_except_handler_2;
                        }
                    }
                    branch_no_4:;
                }
                branch_end_3:;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_expression_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_token );
        tmp_expression_name_1 = generator_heap->var_token;
        Py_INCREF( tmp_expression_name_1 );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 34;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 18;
        generator_heap->type_description_1 = "cooo";
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
            generator_heap->var_preserve,
            generator_heap->var_type,
            generator_heap->var_token
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

    Py_XDECREF( generator_heap->var_preserve );
    generator_heap->var_preserve = NULL;

    Py_XDECREF( generator_heap->var_type );
    generator_heap->var_type = NULL;

    Py_XDECREF( generator_heap->var_token );
    generator_heap->var_token = NULL;

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

    Py_XDECREF( generator_heap->var_preserve );
    generator_heap->var_preserve = NULL;

    Py_XDECREF( generator_heap->var_type );
    generator_heap->var_type = NULL;

    Py_XDECREF( generator_heap->var_token );
    generator_heap->var_token = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *html5lib$filters$whitespace$$$function_1___iter__$$$genobj_1___iter___maker( void )
{
    return Nuitka_Generator_New(
        html5lib$filters$whitespace$$$function_1___iter__$$$genobj_1___iter___context,
        module_html5lib$filters$whitespace,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_76584a78834b3654bd33ad2ceacefb3c,
        1,
        sizeof(struct html5lib$filters$whitespace$$$function_1___iter__$$$genobj_1___iter___locals)
    );
}


static PyObject *impl_html5lib$filters$whitespace$$$function_2_collapse_spaces( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_20d1410ba00e4d29f2933a1fddd61688;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_20d1410ba00e4d29f2933a1fddd61688 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_20d1410ba00e4d29f2933a1fddd61688, codeobj_20d1410ba00e4d29f2933a1fddd61688, module_html5lib$filters$whitespace, sizeof(void *) );
    frame_20d1410ba00e4d29f2933a1fddd61688 = cache_frame_20d1410ba00e4d29f2933a1fddd61688;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_20d1410ba00e4d29f2933a1fddd61688 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_20d1410ba00e4d29f2933a1fddd61688 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain_SPACES_REGEX );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SPACES_REGEX );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "SPACES_REGEX" );
            exception_tb = NULL;

            exception_lineno = 38;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        tmp_args_element_name_1 = const_unicode_space;
        CHECK_OBJECT( par_text );
        tmp_args_element_name_2 = par_text;
        frame_20d1410ba00e4d29f2933a1fddd61688->m_frame.f_lineno = 38;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_sub, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_20d1410ba00e4d29f2933a1fddd61688 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_20d1410ba00e4d29f2933a1fddd61688 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_20d1410ba00e4d29f2933a1fddd61688 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_20d1410ba00e4d29f2933a1fddd61688, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_20d1410ba00e4d29f2933a1fddd61688->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_20d1410ba00e4d29f2933a1fddd61688, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_20d1410ba00e4d29f2933a1fddd61688,
        type_description_1,
        par_text
    );


    // Release cached frame.
    if ( frame_20d1410ba00e4d29f2933a1fddd61688 == cache_frame_20d1410ba00e4d29f2933a1fddd61688 )
    {
        Py_DECREF( frame_20d1410ba00e4d29f2933a1fddd61688 );
    }
    cache_frame_20d1410ba00e4d29f2933a1fddd61688 = NULL;

    assertFrameObject( frame_20d1410ba00e4d29f2933a1fddd61688 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( html5lib$filters$whitespace$$$function_2_collapse_spaces );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

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

    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( html5lib$filters$whitespace$$$function_2_collapse_spaces );
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



static PyObject *MAKE_FUNCTION_html5lib$filters$whitespace$$$function_1___iter__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_html5lib$filters$whitespace$$$function_1___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_76584a78834b3654bd33ad2ceacefb3c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_html5lib$filters$whitespace,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_html5lib$filters$whitespace$$$function_2_collapse_spaces(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_html5lib$filters$whitespace$$$function_2_collapse_spaces,
        const_str_plain_collapse_spaces,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_20d1410ba00e4d29f2933a1fddd61688,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_html5lib$filters$whitespace,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_html5lib$filters$whitespace =
{
    PyModuleDef_HEAD_INIT,
    "html5lib.filters.whitespace",
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

MOD_INIT_DECL( html5lib$filters$whitespace )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_html5lib$filters$whitespace );
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
    puts("html5lib.filters.whitespace: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("html5lib.filters.whitespace: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("html5lib.filters.whitespace: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in inithtml5lib$filters$whitespace" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_html5lib$filters$whitespace = Py_InitModule4(
        "html5lib.filters.whitespace",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_html5lib$filters$whitespace = PyModule_Create( &mdef_html5lib$filters$whitespace );
#endif

    moduledict_html5lib$filters$whitespace = MODULE_DICT( module_html5lib$filters$whitespace );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_html5lib$filters$whitespace,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_html5lib$filters$whitespace,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_html5lib$filters$whitespace,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_html5lib$filters$whitespace );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_27638da264abc4114fe99a2b9239daad, module_html5lib$filters$whitespace );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
    struct Nuitka_FrameObject *frame_488dcc6349e4a1efc9d09e18e9209aa3;
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
    PyObject *locals_html5lib$filters$whitespace_12 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_0f9d474f976195fe1e67112143948d57_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_0f9d474f976195fe1e67112143948d57_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_e0c4ea557353c285a7e2538b89ec6c02;
        UPDATE_STRING_DICT0( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
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
    frame_488dcc6349e4a1efc9d09e18e9209aa3 = MAKE_MODULE_FRAME( codeobj_488dcc6349e4a1efc9d09e18e9209aa3, module_html5lib$filters$whitespace );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_488dcc6349e4a1efc9d09e18e9209aa3 );
    assert( Py_REFCNT( frame_488dcc6349e4a1efc9d09e18e9209aa3 ) == 2 );

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


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
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


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_unicode_literals );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_6 );
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
        tmp_name_name_1 = const_str_plain_re;
        tmp_globals_name_1 = (PyObject *)moduledict_html5lib$filters$whitespace;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_488dcc6349e4a1efc9d09e18e9209aa3->m_frame.f_lineno = 3;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_empty;
        tmp_globals_name_2 = (PyObject *)moduledict_html5lib$filters$whitespace;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_base_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_488dcc6349e4a1efc9d09e18e9209aa3->m_frame.f_lineno = 5;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_base );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain_base, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_constants;
        tmp_globals_name_3 = (PyObject *)moduledict_html5lib$filters$whitespace;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_rcdataElements_str_plain_spaceCharacters_tuple;
        tmp_level_name_3 = const_int_pos_2;
        frame_488dcc6349e4a1efc9d09e18e9209aa3->m_frame.f_lineno = 6;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

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
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_rcdataElements );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain_rcdataElements, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_spaceCharacters );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain_spaceCharacters, tmp_assign_source_11 );
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_source_name_1 = const_unicode_empty;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
        assert( !(tmp_called_name_1 == NULL) );
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain_spaceCharacters );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_spaceCharacters );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "spaceCharacters" );
            exception_tb = NULL;

            exception_lineno = 7;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_1;
        frame_488dcc6349e4a1efc9d09e18e9209aa3->m_frame.f_lineno = 7;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain_spaceCharacters, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain_re );

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

            exception_lineno = 9;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_compile );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = const_unicode_digest_69ec05153bee1ab016c8162b3966c928;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain_spaceCharacters );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_spaceCharacters );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "spaceCharacters" );
            exception_tb = NULL;

            exception_lineno = 9;

            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = tmp_mvar_value_3;
        tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        frame_488dcc6349e4a1efc9d09e18e9209aa3->m_frame.f_lineno = 9;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain_SPACES_REGEX, tmp_assign_source_13 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain_base );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "base" );
            exception_tb = NULL;

            exception_lineno = 12;

            goto try_except_handler_3;
        }

        tmp_source_name_3 = tmp_mvar_value_4;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Filter );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        tmp_assign_source_14 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_14, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_html5lib$filters$whitespace_12 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_27638da264abc4114fe99a2b9239daad;
        tmp_res = PyDict_SetItem( locals_html5lib$filters$whitespace_12, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_unicode_digest_bc0c8752eb561a790e432dfd20eb3f48;
        tmp_res = PyDict_SetItem( locals_html5lib$filters$whitespace_12, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_0f9d474f976195fe1e67112143948d57_2, codeobj_0f9d474f976195fe1e67112143948d57, module_html5lib$filters$whitespace, 0 );
        frame_0f9d474f976195fe1e67112143948d57_2 = cache_frame_0f9d474f976195fe1e67112143948d57_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_0f9d474f976195fe1e67112143948d57_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_0f9d474f976195fe1e67112143948d57_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_frozenset_arg_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_list_arg_1;
            PyObject *tmp_mvar_value_5;
            tmp_left_name_2 = LIST_COPY( const_list_unicode_plain_pre_unicode_plain_textarea_list );
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain_rcdataElements );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rcdataElements );
            }

            if ( tmp_mvar_value_5 == NULL )
            {
                Py_DECREF( tmp_left_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "rcdataElements" );
                exception_tb = NULL;

                exception_lineno = 14;

                goto frame_exception_exit_2;
            }

            tmp_list_arg_1 = tmp_mvar_value_5;
            tmp_right_name_2 = PySequence_List( tmp_list_arg_1 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 14;

                goto frame_exception_exit_2;
            }
            tmp_frozenset_arg_1 = BINARY_OPERATION_ADD_LIST_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_frozenset_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 14;

                goto frame_exception_exit_2;
            }
            tmp_dictset_value = PyFrozenSet_New( tmp_frozenset_arg_1 );
            Py_DECREF( tmp_frozenset_arg_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 14;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem( locals_html5lib$filters$whitespace_12, const_str_plain_spacePreserveElements, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 14;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_0f9d474f976195fe1e67112143948d57_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_0f9d474f976195fe1e67112143948d57_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_0f9d474f976195fe1e67112143948d57_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_0f9d474f976195fe1e67112143948d57_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_0f9d474f976195fe1e67112143948d57_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_0f9d474f976195fe1e67112143948d57_2,
            type_description_2
        );


        // Release cached frame.
        if ( frame_0f9d474f976195fe1e67112143948d57_2 == cache_frame_0f9d474f976195fe1e67112143948d57_2 )
        {
            Py_DECREF( frame_0f9d474f976195fe1e67112143948d57_2 );
        }
        cache_frame_0f9d474f976195fe1e67112143948d57_2 = NULL;

        assertFrameObject( frame_0f9d474f976195fe1e67112143948d57_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        tmp_dictset_value = MAKE_FUNCTION_html5lib$filters$whitespace$$$function_1___iter__(  );



        tmp_res = PyDict_SetItem( locals_html5lib$filters$whitespace_12, const_str_plain___iter__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_assign_source_15 = locals_html5lib$filters$whitespace_12;
        Py_INCREF( tmp_assign_source_15 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( html5lib$filters$whitespace );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_html5lib$filters$whitespace_12 );
        locals_html5lib$filters$whitespace_12 = NULL;
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

        Py_DECREF( locals_html5lib$filters$whitespace_12 );
        locals_html5lib$filters$whitespace_12 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( html5lib$filters$whitespace );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 12;
        goto try_except_handler_3;
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
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
        tmp_assign_source_16 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_subscribed_name_1 = tmp_class_creation_1__bases;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_17 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 12;

                goto try_except_handler_3;
            }
            assert( tmp_select_metaclass_1__base == NULL );
            tmp_select_metaclass_1__base = tmp_assign_source_17;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( tmp_select_metaclass_1__base );
            tmp_source_name_4 = tmp_select_metaclass_1__base;
            tmp_assign_source_16 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 12;

                goto try_except_handler_6;
            }
            goto try_return_handler_5;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( html5lib$filters$whitespace );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_1;
            Py_DECREF( exception_keeper_type_4 );
            Py_XDECREF( exception_keeper_value_4 );
            Py_XDECREF( exception_keeper_tb_4 );
            CHECK_OBJECT( tmp_select_metaclass_1__base );
            tmp_type_arg_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_16 = BUILTIN_TYPE1( tmp_type_arg_1 );
            assert( !(tmp_assign_source_16 == NULL) );
            goto try_return_handler_5;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( html5lib$filters$whitespace );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
        Py_DECREF( tmp_select_metaclass_1__base );
        tmp_select_metaclass_1__base = NULL;

        goto outline_result_2;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
        Py_DECREF( tmp_select_metaclass_1__base );
        tmp_select_metaclass_1__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( html5lib$filters$whitespace );
        return MOD_RETURN_VALUE( NULL );
        outline_result_2:;
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_3 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_3 = const_str_plain_Filter;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_args_element_name_4 = tmp_class_creation_1__bases;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_5 = tmp_class_creation_1__class_dict;
        frame_488dcc6349e4a1efc9d09e18e9209aa3->m_frame.f_lineno = 12;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_18;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_488dcc6349e4a1efc9d09e18e9209aa3 );
#endif
    popFrameStack();

    assertFrameObject( frame_488dcc6349e4a1efc9d09e18e9209aa3 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_488dcc6349e4a1efc9d09e18e9209aa3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_488dcc6349e4a1efc9d09e18e9209aa3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_488dcc6349e4a1efc9d09e18e9209aa3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_488dcc6349e4a1efc9d09e18e9209aa3, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_19 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain_Filter, tmp_assign_source_19 );
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

    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_html5lib$filters$whitespace$$$function_2_collapse_spaces(  );



        UPDATE_STRING_DICT1( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain_collapse_spaces, tmp_assign_source_20 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_html5lib$filters$whitespace, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_html5lib$filters$whitespace );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
