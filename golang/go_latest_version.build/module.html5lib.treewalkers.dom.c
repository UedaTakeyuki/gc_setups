/* Generated code for Python module 'html5lib.treewalkers.dom'
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

/* The "_module_html5lib$treewalkers$dom" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_html5lib$treewalkers$dom;
PyDictObject *moduledict_html5lib$treewalkers$dom;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_TEXT_NODE;
extern PyObject *const_str_plain_NonRecursiveTreeWalker;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_base;
extern PyObject *const_str_plain_TEXT;
static PyObject *const_str_plain_CDATA_SECTION_NODE;
extern PyObject *const_str_plain_ELEMENT_NODE;
extern PyObject *const_str_plain_namespaceURI;
extern PyObject *const_int_pos_1;
extern PyObject *const_tuple_str_plain_Node_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_node_tuple;
extern PyObject *const_str_plain_getParentNode;
extern PyObject *const_str_plain_nextSibling;
extern PyObject *const_str_plain_getFirstChild;
extern PyObject *const_str_plain_DOCUMENT_FRAGMENT_NODE;
extern PyObject *const_str_plain_nodeType;
extern PyObject *const_str_plain_localName;
extern PyObject *const_str_plain_DOCUMENT;
extern PyObject *const_str_plain_hasChildNodes;
extern PyObject *const_str_plain_attributes;
extern PyObject *const_str_plain_node;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_digest_56d3f87aa2f1e4854da8bb0ab6eb1160;
extern PyObject *const_str_plain_systemId;
static PyObject *const_str_plain_getAttributeNode;
static PyObject *const_str_digest_74e2ad607361475fc2179129df720227;
extern PyObject *const_str_plain_DOCUMENT_NODE;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_firstChild;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_attr;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_DOCTYPE;
extern PyObject *const_str_plain_Node;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_UNKNOWN;
extern PyObject *const_str_plain_publicId;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_ELEMENT;
extern PyObject *const_str_plain_getNodeDetails;
extern PyObject *const_str_plain_COMMENT_NODE;
extern PyObject *const_tuple_str_plain_base_tuple;
extern PyObject *const_str_plain_nodeValue;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_nodeName;
extern PyObject *const_str_plain_TreeWalker;
extern PyObject *const_str_plain_DOCUMENT_TYPE_NODE;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_keys;
static PyObject *const_str_digest_dc80325e460fea4e4292a47c9e01160b;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_attrs;
extern PyObject *const_str_plain_division;
static PyObject *const_tuple_str_plain_self_str_plain_node_str_plain_attrs_str_plain_attr_tuple;
extern PyObject *const_str_plain_parentNode;
extern PyObject *const_str_digest_686e0da4e0a4d965cf89063db3410ec0;
extern PyObject *const_str_plain_getNextSibling;
extern PyObject *const_str_plain_COMMENT;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_CDATA_SECTION_NODE = UNSTREAM_STRING( &constant_bin[ 722732 ], 18, 1 );
    const_str_digest_56d3f87aa2f1e4854da8bb0ab6eb1160 = UNSTREAM_STRING( &constant_bin[ 722750 ], 24, 0 );
    const_str_plain_getAttributeNode = UNSTREAM_STRING( &constant_bin[ 722774 ], 16, 1 );
    const_str_digest_74e2ad607361475fc2179129df720227 = UNSTREAM_STRING( &constant_bin[ 722790 ], 60, 0 );
    const_str_digest_dc80325e460fea4e4292a47c9e01160b = UNSTREAM_STRING( &constant_bin[ 722850 ], 33, 0 );
    const_tuple_str_plain_self_str_plain_node_str_plain_attrs_str_plain_attr_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_node_str_plain_attrs_str_plain_attr_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_node_str_plain_attrs_str_plain_attr_tuple, 1, const_str_plain_node ); Py_INCREF( const_str_plain_node );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_node_str_plain_attrs_str_plain_attr_tuple, 2, const_str_plain_attrs ); Py_INCREF( const_str_plain_attrs );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_node_str_plain_attrs_str_plain_attr_tuple, 3, const_str_plain_attr ); Py_INCREF( const_str_plain_attr );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_html5lib$treewalkers$dom( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_2e27d93360e610cd63a02b59a5a4447b;
static PyCodeObject *codeobj_e01aa20013dbd7ade16929146106d888;
static PyCodeObject *codeobj_c22ecf93e9349add2ce622e004c52ad4;
static PyCodeObject *codeobj_b20766563b6097aa318ecf137ff2059f;
static PyCodeObject *codeobj_e260da046a6f6720641de19fbd79fce1;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_74e2ad607361475fc2179129df720227;
    codeobj_2e27d93360e610cd63a02b59a5a4447b = MAKE_CODEOBJ( module_filename_obj, const_str_digest_dc80325e460fea4e4292a47c9e01160b, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_e01aa20013dbd7ade16929146106d888 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getFirstChild, 36, const_tuple_str_plain_self_str_plain_node_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_c22ecf93e9349add2ce622e004c52ad4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getNextSibling, 39, const_tuple_str_plain_self_str_plain_node_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_b20766563b6097aa318ecf137ff2059f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getNodeDetails, 9, const_tuple_str_plain_self_str_plain_node_str_plain_attrs_str_plain_attr_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_e260da046a6f6720641de19fbd79fce1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getParentNode, 42, const_tuple_str_plain_self_str_plain_node_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_html5lib$treewalkers$dom$$$function_1_getNodeDetails(  );


static PyObject *MAKE_FUNCTION_html5lib$treewalkers$dom$$$function_2_getFirstChild(  );


static PyObject *MAKE_FUNCTION_html5lib$treewalkers$dom$$$function_3_getNextSibling(  );


static PyObject *MAKE_FUNCTION_html5lib$treewalkers$dom$$$function_4_getParentNode(  );


// The module function definitions.
static PyObject *impl_html5lib$treewalkers$dom$$$function_1_getNodeDetails( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_node = python_pars[ 1 ];
    PyObject *var_attrs = NULL;
    PyObject *var_attr = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_b20766563b6097aa318ecf137ff2059f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_b20766563b6097aa318ecf137ff2059f = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b20766563b6097aa318ecf137ff2059f, codeobj_b20766563b6097aa318ecf137ff2059f, module_html5lib$treewalkers$dom, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b20766563b6097aa318ecf137ff2059f = cache_frame_b20766563b6097aa318ecf137ff2059f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b20766563b6097aa318ecf137ff2059f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b20766563b6097aa318ecf137ff2059f ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_node );
        tmp_source_name_1 = par_node;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_nodeType );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain_Node );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Node );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "Node" );
            exception_tb = NULL;

            exception_lineno = 10;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_DOCUMENT_TYPE_NODE );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 10;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;
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
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_source_name_6;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain_base );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "base" );
                exception_tb = NULL;

                exception_lineno = 11;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_2;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_DOCTYPE );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 11;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = PyTuple_New( 4 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_node );
            tmp_source_name_4 = par_node;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_name );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 11;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( par_node );
            tmp_source_name_5 = par_node;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_publicId );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 11;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
            CHECK_OBJECT( par_node );
            tmp_source_name_6 = par_node;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_systemId );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 11;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_1 );
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_7;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_source_name_9;
            PyObject *tmp_mvar_value_4;
            CHECK_OBJECT( par_node );
            tmp_source_name_7 = par_node;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_nodeType );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 13;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain_Node );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Node );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "Node" );
                exception_tb = NULL;

                exception_lineno = 13;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_3;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_TEXT_NODE );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_2 );

                exception_lineno = 13;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_compexpr_right_2, 0, tmp_tuple_element_2 );
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain_Node );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Node );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_2 );
                Py_DECREF( tmp_compexpr_right_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "Node" );
                exception_tb = NULL;

                exception_lineno = 13;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_9 = tmp_mvar_value_4;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_CDATA_SECTION_NODE );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_2 );
                Py_DECREF( tmp_compexpr_right_2 );

                exception_lineno = 13;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_compexpr_right_2, 1, tmp_tuple_element_2 );
            tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 13;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_source_name_10;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_source_name_11;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain_base );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "base" );
                    exception_tb = NULL;

                    exception_lineno = 14;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_10 = tmp_mvar_value_5;
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_TEXT );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 14;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_return_value = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( par_node );
                tmp_source_name_11 = par_node;
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_nodeValue );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_return_value );

                    exception_lineno = 14;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_source_name_12;
                PyObject *tmp_source_name_13;
                PyObject *tmp_mvar_value_6;
                CHECK_OBJECT( par_node );
                tmp_source_name_12 = par_node;
                tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_nodeType );
                if ( tmp_compexpr_left_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 16;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain_Node );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Node );
                }

                if ( tmp_mvar_value_6 == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_3 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "Node" );
                    exception_tb = NULL;

                    exception_lineno = 16;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_13 = tmp_mvar_value_6;
                tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_ELEMENT_NODE );
                if ( tmp_compexpr_right_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_3 );

                    exception_lineno = 16;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                Py_DECREF( tmp_compexpr_left_3 );
                Py_DECREF( tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 16;
                    type_description_1 = "oooo";
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
                    PyObject *tmp_assign_source_1;
                    tmp_assign_source_1 = PyDict_New();
                    assert( var_attrs == NULL );
                    var_attrs = tmp_assign_source_1;
                }
                {
                    PyObject *tmp_assign_source_2;
                    PyObject *tmp_iter_arg_1;
                    PyObject *tmp_list_arg_1;
                    PyObject *tmp_called_instance_1;
                    PyObject *tmp_source_name_14;
                    CHECK_OBJECT( par_node );
                    tmp_source_name_14 = par_node;
                    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_attributes );
                    if ( tmp_called_instance_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 18;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    frame_b20766563b6097aa318ecf137ff2059f->m_frame.f_lineno = 18;
                    tmp_list_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_keys );
                    Py_DECREF( tmp_called_instance_1 );
                    if ( tmp_list_arg_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 18;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_iter_arg_1 = PySequence_List( tmp_list_arg_1 );
                    Py_DECREF( tmp_list_arg_1 );
                    if ( tmp_iter_arg_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 18;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
                    Py_DECREF( tmp_iter_arg_1 );
                    if ( tmp_assign_source_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 18;
                        type_description_1 = "oooo";
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
                            type_description_1 = "oooo";
                            exception_lineno = 18;
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
                        PyObject *old = var_attr;
                        var_attr = tmp_assign_source_4;
                        Py_INCREF( var_attr );
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_5;
                    PyObject *tmp_called_instance_2;
                    PyObject *tmp_args_element_name_1;
                    CHECK_OBJECT( par_node );
                    tmp_called_instance_2 = par_node;
                    CHECK_OBJECT( var_attr );
                    tmp_args_element_name_1 = var_attr;
                    frame_b20766563b6097aa318ecf137ff2059f->m_frame.f_lineno = 19;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_1 };
                        tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_getAttributeNode, call_args );
                    }

                    if ( tmp_assign_source_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 19;
                        type_description_1 = "oooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_attr;
                        assert( old != NULL );
                        var_attr = tmp_assign_source_5;
                        Py_DECREF( old );
                    }

                }
                {
                    nuitka_bool tmp_condition_result_4;
                    PyObject *tmp_source_name_15;
                    PyObject *tmp_attribute_value_1;
                    int tmp_truth_name_1;
                    CHECK_OBJECT( var_attr );
                    tmp_source_name_15 = var_attr;
                    tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_namespaceURI );
                    if ( tmp_attribute_value_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 20;
                        type_description_1 = "oooo";
                        goto try_except_handler_2;
                    }
                    tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
                    if ( tmp_truth_name_1 == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_attribute_value_1 );

                        exception_lineno = 20;
                        type_description_1 = "oooo";
                        goto try_except_handler_2;
                    }
                    tmp_condition_result_4 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    Py_DECREF( tmp_attribute_value_1 );
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
                        PyObject *tmp_source_name_16;
                        PyObject *tmp_tuple_element_4;
                        PyObject *tmp_source_name_17;
                        PyObject *tmp_source_name_18;
                        CHECK_OBJECT( var_attr );
                        tmp_source_name_16 = var_attr;
                        tmp_dictset_value = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_value );
                        if ( tmp_dictset_value == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 21;
                            type_description_1 = "oooo";
                            goto try_except_handler_2;
                        }
                        CHECK_OBJECT( var_attrs );
                        tmp_dictset_dict = var_attrs;
                        CHECK_OBJECT( var_attr );
                        tmp_source_name_17 = var_attr;
                        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_namespaceURI );
                        if ( tmp_tuple_element_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_dictset_value );

                            exception_lineno = 21;
                            type_description_1 = "oooo";
                            goto try_except_handler_2;
                        }
                        tmp_dictset_key = PyTuple_New( 2 );
                        PyTuple_SET_ITEM( tmp_dictset_key, 0, tmp_tuple_element_4 );
                        CHECK_OBJECT( var_attr );
                        tmp_source_name_18 = var_attr;
                        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_localName );
                        if ( tmp_tuple_element_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_dictset_value );
                            Py_DECREF( tmp_dictset_key );

                            exception_lineno = 21;
                            type_description_1 = "oooo";
                            goto try_except_handler_2;
                        }
                        PyTuple_SET_ITEM( tmp_dictset_key, 1, tmp_tuple_element_4 );
                        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
                        Py_DECREF( tmp_dictset_value );
                        Py_DECREF( tmp_dictset_key );
                        if ( tmp_res != 0 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 21;
                            type_description_1 = "oooo";
                            goto try_except_handler_2;
                        }
                    }
                    goto branch_end_4;
                    branch_no_4:;
                    {
                        PyObject *tmp_source_name_19;
                        PyObject *tmp_tuple_element_5;
                        PyObject *tmp_source_name_20;
                        CHECK_OBJECT( var_attr );
                        tmp_source_name_19 = var_attr;
                        tmp_dictset_value = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_value );
                        if ( tmp_dictset_value == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 23;
                            type_description_1 = "oooo";
                            goto try_except_handler_2;
                        }
                        CHECK_OBJECT( var_attrs );
                        tmp_dictset_dict = var_attrs;
                        tmp_tuple_element_5 = Py_None;
                        tmp_dictset_key = PyTuple_New( 2 );
                        Py_INCREF( tmp_tuple_element_5 );
                        PyTuple_SET_ITEM( tmp_dictset_key, 0, tmp_tuple_element_5 );
                        CHECK_OBJECT( var_attr );
                        tmp_source_name_20 = var_attr;
                        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_name );
                        if ( tmp_tuple_element_5 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_dictset_value );
                            Py_DECREF( tmp_dictset_key );

                            exception_lineno = 23;
                            type_description_1 = "oooo";
                            goto try_except_handler_2;
                        }
                        PyTuple_SET_ITEM( tmp_dictset_key, 1, tmp_tuple_element_5 );
                        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
                        Py_DECREF( tmp_dictset_value );
                        Py_DECREF( tmp_dictset_key );
                        if ( tmp_res != 0 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 23;
                            type_description_1 = "oooo";
                            goto try_except_handler_2;
                        }
                    }
                    branch_end_4:;
                }
                if ( CONSIDER_THREADING() == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 18;
                    type_description_1 = "oooo";
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
                    PyObject *tmp_tuple_element_6;
                    PyObject *tmp_source_name_21;
                    PyObject *tmp_mvar_value_7;
                    PyObject *tmp_source_name_22;
                    PyObject *tmp_source_name_23;
                    PyObject *tmp_called_instance_3;
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain_base );

                    if (unlikely( tmp_mvar_value_7 == NULL ))
                    {
                        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base );
                    }

                    if ( tmp_mvar_value_7 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "base" );
                        exception_tb = NULL;

                        exception_lineno = 24;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_21 = tmp_mvar_value_7;
                    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_ELEMENT );
                    if ( tmp_tuple_element_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 24;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_return_value = PyTuple_New( 5 );
                    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_6 );
                    CHECK_OBJECT( par_node );
                    tmp_source_name_22 = par_node;
                    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_namespaceURI );
                    if ( tmp_tuple_element_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_return_value );

                        exception_lineno = 24;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_6 );
                    CHECK_OBJECT( par_node );
                    tmp_source_name_23 = par_node;
                    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_nodeName );
                    if ( tmp_tuple_element_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_return_value );

                        exception_lineno = 24;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_6 );
                    CHECK_OBJECT( var_attrs );
                    tmp_tuple_element_6 = var_attrs;
                    Py_INCREF( tmp_tuple_element_6 );
                    PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_6 );
                    CHECK_OBJECT( par_node );
                    tmp_called_instance_3 = par_node;
                    frame_b20766563b6097aa318ecf137ff2059f->m_frame.f_lineno = 25;
                    tmp_tuple_element_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_hasChildNodes );
                    if ( tmp_tuple_element_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_return_value );

                        exception_lineno = 25;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    PyTuple_SET_ITEM( tmp_return_value, 4, tmp_tuple_element_6 );
                    goto frame_return_exit_1;
                }
                goto branch_end_3;
                branch_no_3:;
                {
                    nuitka_bool tmp_condition_result_5;
                    PyObject *tmp_compexpr_left_4;
                    PyObject *tmp_compexpr_right_4;
                    PyObject *tmp_source_name_24;
                    PyObject *tmp_source_name_25;
                    PyObject *tmp_mvar_value_8;
                    CHECK_OBJECT( par_node );
                    tmp_source_name_24 = par_node;
                    tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_nodeType );
                    if ( tmp_compexpr_left_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 27;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain_Node );

                    if (unlikely( tmp_mvar_value_8 == NULL ))
                    {
                        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Node );
                    }

                    if ( tmp_mvar_value_8 == NULL )
                    {
                        Py_DECREF( tmp_compexpr_left_4 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Node" );
                        exception_tb = NULL;

                        exception_lineno = 27;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_25 = tmp_mvar_value_8;
                    tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_COMMENT_NODE );
                    if ( tmp_compexpr_right_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_compexpr_left_4 );

                        exception_lineno = 27;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                    Py_DECREF( tmp_compexpr_left_4 );
                    Py_DECREF( tmp_compexpr_right_4 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 27;
                        type_description_1 = "oooo";
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
                        PyObject *tmp_tuple_element_7;
                        PyObject *tmp_source_name_26;
                        PyObject *tmp_mvar_value_9;
                        PyObject *tmp_source_name_27;
                        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain_base );

                        if (unlikely( tmp_mvar_value_9 == NULL ))
                        {
                            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base );
                        }

                        if ( tmp_mvar_value_9 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyString_FromFormat( "global name '%s' is not defined", "base" );
                            exception_tb = NULL;

                            exception_lineno = 28;
                            type_description_1 = "oooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_source_name_26 = tmp_mvar_value_9;
                        tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_COMMENT );
                        if ( tmp_tuple_element_7 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 28;
                            type_description_1 = "oooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_return_value = PyTuple_New( 2 );
                        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_7 );
                        CHECK_OBJECT( par_node );
                        tmp_source_name_27 = par_node;
                        tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_nodeValue );
                        if ( tmp_tuple_element_7 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_return_value );

                            exception_lineno = 28;
                            type_description_1 = "oooo";
                            goto frame_exception_exit_1;
                        }
                        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_7 );
                        goto frame_return_exit_1;
                    }
                    goto branch_end_5;
                    branch_no_5:;
                    {
                        nuitka_bool tmp_condition_result_6;
                        PyObject *tmp_compexpr_left_5;
                        PyObject *tmp_compexpr_right_5;
                        PyObject *tmp_source_name_28;
                        PyObject *tmp_tuple_element_8;
                        PyObject *tmp_source_name_29;
                        PyObject *tmp_mvar_value_10;
                        PyObject *tmp_source_name_30;
                        PyObject *tmp_mvar_value_11;
                        CHECK_OBJECT( par_node );
                        tmp_source_name_28 = par_node;
                        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_nodeType );
                        if ( tmp_compexpr_left_5 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 30;
                            type_description_1 = "oooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain_Node );

                        if (unlikely( tmp_mvar_value_10 == NULL ))
                        {
                            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Node );
                        }

                        if ( tmp_mvar_value_10 == NULL )
                        {
                            Py_DECREF( tmp_compexpr_left_5 );
                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyString_FromFormat( "global name '%s' is not defined", "Node" );
                            exception_tb = NULL;

                            exception_lineno = 30;
                            type_description_1 = "oooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_source_name_29 = tmp_mvar_value_10;
                        tmp_tuple_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_DOCUMENT_NODE );
                        if ( tmp_tuple_element_8 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_compexpr_left_5 );

                            exception_lineno = 30;
                            type_description_1 = "oooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_compexpr_right_5 = PyTuple_New( 2 );
                        PyTuple_SET_ITEM( tmp_compexpr_right_5, 0, tmp_tuple_element_8 );
                        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain_Node );

                        if (unlikely( tmp_mvar_value_11 == NULL ))
                        {
                            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Node );
                        }

                        if ( tmp_mvar_value_11 == NULL )
                        {
                            Py_DECREF( tmp_compexpr_left_5 );
                            Py_DECREF( tmp_compexpr_right_5 );
                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyString_FromFormat( "global name '%s' is not defined", "Node" );
                            exception_tb = NULL;

                            exception_lineno = 30;
                            type_description_1 = "oooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_source_name_30 = tmp_mvar_value_11;
                        tmp_tuple_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_DOCUMENT_FRAGMENT_NODE );
                        if ( tmp_tuple_element_8 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_compexpr_left_5 );
                            Py_DECREF( tmp_compexpr_right_5 );

                            exception_lineno = 30;
                            type_description_1 = "oooo";
                            goto frame_exception_exit_1;
                        }
                        PyTuple_SET_ITEM( tmp_compexpr_right_5, 1, tmp_tuple_element_8 );
                        tmp_res = PySequence_Contains( tmp_compexpr_right_5, tmp_compexpr_left_5 );
                        Py_DECREF( tmp_compexpr_left_5 );
                        Py_DECREF( tmp_compexpr_right_5 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 30;
                            type_description_1 = "oooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_condition_result_6 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                            PyObject *tmp_tuple_element_9;
                            PyObject *tmp_source_name_31;
                            PyObject *tmp_mvar_value_12;
                            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain_base );

                            if (unlikely( tmp_mvar_value_12 == NULL ))
                            {
                                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base );
                            }

                            if ( tmp_mvar_value_12 == NULL )
                            {

                                exception_type = PyExc_NameError;
                                Py_INCREF( exception_type );
                                exception_value = PyString_FromFormat( "global name '%s' is not defined", "base" );
                                exception_tb = NULL;

                                exception_lineno = 31;
                                type_description_1 = "oooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_source_name_31 = tmp_mvar_value_12;
                            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_DOCUMENT );
                            if ( tmp_tuple_element_9 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 31;
                                type_description_1 = "oooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_return_value = PyTuple_New( 1 );
                            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_9 );
                            goto frame_return_exit_1;
                        }
                        goto branch_end_6;
                        branch_no_6:;
                        {
                            PyObject *tmp_tuple_element_10;
                            PyObject *tmp_source_name_32;
                            PyObject *tmp_mvar_value_13;
                            PyObject *tmp_source_name_33;
                            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain_base );

                            if (unlikely( tmp_mvar_value_13 == NULL ))
                            {
                                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base );
                            }

                            if ( tmp_mvar_value_13 == NULL )
                            {

                                exception_type = PyExc_NameError;
                                Py_INCREF( exception_type );
                                exception_value = PyString_FromFormat( "global name '%s' is not defined", "base" );
                                exception_tb = NULL;

                                exception_lineno = 34;
                                type_description_1 = "oooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_source_name_32 = tmp_mvar_value_13;
                            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_UNKNOWN );
                            if ( tmp_tuple_element_10 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 34;
                                type_description_1 = "oooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_return_value = PyTuple_New( 2 );
                            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_10 );
                            CHECK_OBJECT( par_node );
                            tmp_source_name_33 = par_node;
                            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_nodeType );
                            if ( tmp_tuple_element_10 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                Py_DECREF( tmp_return_value );

                                exception_lineno = 34;
                                type_description_1 = "oooo";
                                goto frame_exception_exit_1;
                            }
                            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_10 );
                            goto frame_return_exit_1;
                        }
                        branch_end_6:;
                    }
                    branch_end_5:;
                }
                branch_end_3:;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b20766563b6097aa318ecf137ff2059f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b20766563b6097aa318ecf137ff2059f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b20766563b6097aa318ecf137ff2059f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b20766563b6097aa318ecf137ff2059f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b20766563b6097aa318ecf137ff2059f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b20766563b6097aa318ecf137ff2059f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b20766563b6097aa318ecf137ff2059f,
        type_description_1,
        par_self,
        par_node,
        var_attrs,
        var_attr
    );


    // Release cached frame.
    if ( frame_b20766563b6097aa318ecf137ff2059f == cache_frame_b20766563b6097aa318ecf137ff2059f )
    {
        Py_DECREF( frame_b20766563b6097aa318ecf137ff2059f );
    }
    cache_frame_b20766563b6097aa318ecf137ff2059f = NULL;

    assertFrameObject( frame_b20766563b6097aa318ecf137ff2059f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( html5lib$treewalkers$dom$$$function_1_getNodeDetails );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_node );
    Py_DECREF( par_node );
    par_node = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_attrs );
    var_attrs = NULL;

    Py_XDECREF( var_attr );
    var_attr = NULL;

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

    CHECK_OBJECT( (PyObject *)par_node );
    Py_DECREF( par_node );
    par_node = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_attrs );
    var_attrs = NULL;

    Py_XDECREF( var_attr );
    var_attr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( html5lib$treewalkers$dom$$$function_1_getNodeDetails );
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


static PyObject *impl_html5lib$treewalkers$dom$$$function_2_getFirstChild( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_node = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_e01aa20013dbd7ade16929146106d888;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e01aa20013dbd7ade16929146106d888 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e01aa20013dbd7ade16929146106d888, codeobj_e01aa20013dbd7ade16929146106d888, module_html5lib$treewalkers$dom, sizeof(void *)+sizeof(void *) );
    frame_e01aa20013dbd7ade16929146106d888 = cache_frame_e01aa20013dbd7ade16929146106d888;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e01aa20013dbd7ade16929146106d888 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e01aa20013dbd7ade16929146106d888 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_node );
        tmp_source_name_1 = par_node;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_firstChild );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e01aa20013dbd7ade16929146106d888 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e01aa20013dbd7ade16929146106d888 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e01aa20013dbd7ade16929146106d888 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e01aa20013dbd7ade16929146106d888, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e01aa20013dbd7ade16929146106d888->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e01aa20013dbd7ade16929146106d888, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e01aa20013dbd7ade16929146106d888,
        type_description_1,
        par_self,
        par_node
    );


    // Release cached frame.
    if ( frame_e01aa20013dbd7ade16929146106d888 == cache_frame_e01aa20013dbd7ade16929146106d888 )
    {
        Py_DECREF( frame_e01aa20013dbd7ade16929146106d888 );
    }
    cache_frame_e01aa20013dbd7ade16929146106d888 = NULL;

    assertFrameObject( frame_e01aa20013dbd7ade16929146106d888 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( html5lib$treewalkers$dom$$$function_2_getFirstChild );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_node );
    Py_DECREF( par_node );
    par_node = NULL;

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

    CHECK_OBJECT( (PyObject *)par_node );
    Py_DECREF( par_node );
    par_node = NULL;

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
    NUITKA_CANNOT_GET_HERE( html5lib$treewalkers$dom$$$function_2_getFirstChild );
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


static PyObject *impl_html5lib$treewalkers$dom$$$function_3_getNextSibling( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_node = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_c22ecf93e9349add2ce622e004c52ad4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c22ecf93e9349add2ce622e004c52ad4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c22ecf93e9349add2ce622e004c52ad4, codeobj_c22ecf93e9349add2ce622e004c52ad4, module_html5lib$treewalkers$dom, sizeof(void *)+sizeof(void *) );
    frame_c22ecf93e9349add2ce622e004c52ad4 = cache_frame_c22ecf93e9349add2ce622e004c52ad4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c22ecf93e9349add2ce622e004c52ad4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c22ecf93e9349add2ce622e004c52ad4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_node );
        tmp_source_name_1 = par_node;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_nextSibling );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c22ecf93e9349add2ce622e004c52ad4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c22ecf93e9349add2ce622e004c52ad4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c22ecf93e9349add2ce622e004c52ad4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c22ecf93e9349add2ce622e004c52ad4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c22ecf93e9349add2ce622e004c52ad4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c22ecf93e9349add2ce622e004c52ad4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c22ecf93e9349add2ce622e004c52ad4,
        type_description_1,
        par_self,
        par_node
    );


    // Release cached frame.
    if ( frame_c22ecf93e9349add2ce622e004c52ad4 == cache_frame_c22ecf93e9349add2ce622e004c52ad4 )
    {
        Py_DECREF( frame_c22ecf93e9349add2ce622e004c52ad4 );
    }
    cache_frame_c22ecf93e9349add2ce622e004c52ad4 = NULL;

    assertFrameObject( frame_c22ecf93e9349add2ce622e004c52ad4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( html5lib$treewalkers$dom$$$function_3_getNextSibling );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_node );
    Py_DECREF( par_node );
    par_node = NULL;

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

    CHECK_OBJECT( (PyObject *)par_node );
    Py_DECREF( par_node );
    par_node = NULL;

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
    NUITKA_CANNOT_GET_HERE( html5lib$treewalkers$dom$$$function_3_getNextSibling );
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


static PyObject *impl_html5lib$treewalkers$dom$$$function_4_getParentNode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_node = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_e260da046a6f6720641de19fbd79fce1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e260da046a6f6720641de19fbd79fce1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e260da046a6f6720641de19fbd79fce1, codeobj_e260da046a6f6720641de19fbd79fce1, module_html5lib$treewalkers$dom, sizeof(void *)+sizeof(void *) );
    frame_e260da046a6f6720641de19fbd79fce1 = cache_frame_e260da046a6f6720641de19fbd79fce1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e260da046a6f6720641de19fbd79fce1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e260da046a6f6720641de19fbd79fce1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_node );
        tmp_source_name_1 = par_node;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_parentNode );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e260da046a6f6720641de19fbd79fce1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e260da046a6f6720641de19fbd79fce1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e260da046a6f6720641de19fbd79fce1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e260da046a6f6720641de19fbd79fce1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e260da046a6f6720641de19fbd79fce1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e260da046a6f6720641de19fbd79fce1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e260da046a6f6720641de19fbd79fce1,
        type_description_1,
        par_self,
        par_node
    );


    // Release cached frame.
    if ( frame_e260da046a6f6720641de19fbd79fce1 == cache_frame_e260da046a6f6720641de19fbd79fce1 )
    {
        Py_DECREF( frame_e260da046a6f6720641de19fbd79fce1 );
    }
    cache_frame_e260da046a6f6720641de19fbd79fce1 = NULL;

    assertFrameObject( frame_e260da046a6f6720641de19fbd79fce1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( html5lib$treewalkers$dom$$$function_4_getParentNode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_node );
    Py_DECREF( par_node );
    par_node = NULL;

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

    CHECK_OBJECT( (PyObject *)par_node );
    Py_DECREF( par_node );
    par_node = NULL;

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
    NUITKA_CANNOT_GET_HERE( html5lib$treewalkers$dom$$$function_4_getParentNode );
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



static PyObject *MAKE_FUNCTION_html5lib$treewalkers$dom$$$function_1_getNodeDetails(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_html5lib$treewalkers$dom$$$function_1_getNodeDetails,
        const_str_plain_getNodeDetails,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b20766563b6097aa318ecf137ff2059f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_html5lib$treewalkers$dom,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_html5lib$treewalkers$dom$$$function_2_getFirstChild(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_html5lib$treewalkers$dom$$$function_2_getFirstChild,
        const_str_plain_getFirstChild,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e01aa20013dbd7ade16929146106d888,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_html5lib$treewalkers$dom,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_html5lib$treewalkers$dom$$$function_3_getNextSibling(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_html5lib$treewalkers$dom$$$function_3_getNextSibling,
        const_str_plain_getNextSibling,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c22ecf93e9349add2ce622e004c52ad4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_html5lib$treewalkers$dom,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_html5lib$treewalkers$dom$$$function_4_getParentNode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_html5lib$treewalkers$dom$$$function_4_getParentNode,
        const_str_plain_getParentNode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e260da046a6f6720641de19fbd79fce1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_html5lib$treewalkers$dom,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_html5lib$treewalkers$dom =
{
    PyModuleDef_HEAD_INIT,
    "html5lib.treewalkers.dom",
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

MOD_INIT_DECL( html5lib$treewalkers$dom )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_html5lib$treewalkers$dom );
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
    puts("html5lib.treewalkers.dom: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("html5lib.treewalkers.dom: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("html5lib.treewalkers.dom: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in inithtml5lib$treewalkers$dom" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_html5lib$treewalkers$dom = Py_InitModule4(
        "html5lib.treewalkers.dom",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_html5lib$treewalkers$dom = PyModule_Create( &mdef_html5lib$treewalkers$dom );
#endif

    moduledict_html5lib$treewalkers$dom = MODULE_DICT( module_html5lib$treewalkers$dom );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_html5lib$treewalkers$dom,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_html5lib$treewalkers$dom,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_html5lib$treewalkers$dom,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_html5lib$treewalkers$dom );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_56d3f87aa2f1e4854da8bb0ab6eb1160, module_html5lib$treewalkers$dom );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
    struct Nuitka_FrameObject *frame_2e27d93360e610cd63a02b59a5a4447b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *locals_html5lib$treewalkers$dom_8 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_74e2ad607361475fc2179129df720227;
        UPDATE_STRING_DICT0( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
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
    frame_2e27d93360e610cd63a02b59a5a4447b = MAKE_MODULE_FRAME( codeobj_2e27d93360e610cd63a02b59a5a4447b, module_html5lib$treewalkers$dom );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_2e27d93360e610cd63a02b59a5a4447b );
    assert( Py_REFCNT( frame_2e27d93360e610cd63a02b59a5a4447b ) == 2 );

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
        UPDATE_STRING_DICT1( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
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
        UPDATE_STRING_DICT1( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
        UPDATE_STRING_DICT1( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_6 );
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
        tmp_name_name_1 = const_str_digest_686e0da4e0a4d965cf89063db3410ec0;
        tmp_globals_name_1 = (PyObject *)moduledict_html5lib$treewalkers$dom;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_Node_tuple;
        tmp_level_name_1 = const_int_0;
        frame_2e27d93360e610cd63a02b59a5a4447b->m_frame.f_lineno = 3;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_Node );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain_Node, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_empty;
        tmp_globals_name_2 = (PyObject *)moduledict_html5lib$treewalkers$dom;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_base_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_2e27d93360e610cd63a02b59a5a4447b->m_frame.f_lineno = 5;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_base );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain_base, tmp_assign_source_8 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain_base );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base );
        }

        CHECK_OBJECT( tmp_mvar_value_1 );
        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_NonRecursiveTreeWalker );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

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
            locals_html5lib$treewalkers$dom_8 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_56d3f87aa2f1e4854da8bb0ab6eb1160;
        tmp_res = PyDict_SetItem( locals_html5lib$treewalkers$dom_8, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_html5lib$treewalkers$dom$$$function_1_getNodeDetails(  );



        tmp_res = PyDict_SetItem( locals_html5lib$treewalkers$dom_8, const_str_plain_getNodeDetails, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_html5lib$treewalkers$dom$$$function_2_getFirstChild(  );



        tmp_res = PyDict_SetItem( locals_html5lib$treewalkers$dom_8, const_str_plain_getFirstChild, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_html5lib$treewalkers$dom$$$function_3_getNextSibling(  );



        tmp_res = PyDict_SetItem( locals_html5lib$treewalkers$dom_8, const_str_plain_getNextSibling, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_html5lib$treewalkers$dom$$$function_4_getParentNode(  );



        tmp_res = PyDict_SetItem( locals_html5lib$treewalkers$dom_8, const_str_plain_getParentNode, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_10 = locals_html5lib$treewalkers$dom_8;
        Py_INCREF( tmp_assign_source_10 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( html5lib$treewalkers$dom );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_html5lib$treewalkers$dom_8 );
        locals_html5lib$treewalkers$dom_8 = NULL;
        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( html5lib$treewalkers$dom );
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


            exception_lineno = 8;

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


            exception_lineno = 8;

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


                exception_lineno = 8;

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


                exception_lineno = 8;

                goto try_except_handler_5;
            }
            goto try_return_handler_4;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( html5lib$treewalkers$dom );
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
        NUITKA_CANNOT_GET_HERE( html5lib$treewalkers$dom );
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
        NUITKA_CANNOT_GET_HERE( html5lib$treewalkers$dom );
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
        tmp_args_element_name_1 = const_str_plain_TreeWalker;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_args_element_name_2 = tmp_class_creation_1__bases;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_2e27d93360e610cd63a02b59a5a4447b->m_frame.f_lineno = 8;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2e27d93360e610cd63a02b59a5a4447b );
#endif
    popFrameStack();

    assertFrameObject( frame_2e27d93360e610cd63a02b59a5a4447b );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2e27d93360e610cd63a02b59a5a4447b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2e27d93360e610cd63a02b59a5a4447b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2e27d93360e610cd63a02b59a5a4447b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2e27d93360e610cd63a02b59a5a4447b, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_14 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain_TreeWalker, tmp_assign_source_14 );
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
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_html5lib$treewalkers$dom, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_html5lib$treewalkers$dom );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
