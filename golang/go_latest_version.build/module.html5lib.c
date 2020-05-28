/* Generated code for Python module 'html5lib'
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

/* The "_module_html5lib" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_html5lib;
PyDictObject *moduledict_html5lib;

/* The declarations of module constants used, if any. */
static PyObject *const_list_str_digest_5f68bd434bd9eba03acd4361367c6053_list;
extern PyObject *const_unicode_plain_getTreeWalker;
extern PyObject *const_str_plain_treebuilders;
static PyObject *const_unicode_plain_parse;
extern PyObject *const_str_plain_treewalkers;
static PyObject *const_tuple_str_plain_serialize_tuple;
static PyObject *const_str_digest_5f68bd434bd9eba03acd4361367c6053;
static PyObject *const_unicode_plain_serialize;
extern PyObject *const_str_plain_getTreeWalker;
extern PyObject *const_str_plain_html5lib;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_parse;
extern PyObject *const_str_plain_parseFragment;
static PyObject *const_list_a3d5a95465b12e7a99cd3a2fb100adfa_list;
extern PyObject *const_str_plain___path__;
static PyObject *const_tuple_str_plain_getTreeBuilder_tuple;
extern PyObject *const_str_plain_getTreeBuilder;
extern PyObject *const_str_plain___all__;
static PyObject *const_tuple_str_plain_HTMLParser_str_plain_parse_str_plain_parseFragment_tuple;
static PyObject *const_str_digest_bfab2723f681188dc8141e1a27adad1c;
static PyObject *const_unicode_plain_getTreeBuilder;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___version__;
static PyObject *const_unicode_plain_parseFragment;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_division;
static PyObject *const_str_digest_273a6ea20f5ab6e81b1a7b8050f08f4a;
extern PyObject *const_int_pos_1;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_str_plain_getTreeWalker_tuple;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_str_plain_serialize;
static PyObject *const_unicode_plain_HTMLParser;
extern PyObject *const_str_plain_HTMLParser;
static PyObject *const_str_plain_serializer;
static PyObject *const_unicode_digest_80694e0b646eb4cb980dde36e91ed7f4;
static PyObject *const_str_plain_html5parser;
static PyObject *const_unicode_digest_d9e2e8232b677ebaff782fb5a24aaa12;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_list_str_digest_5f68bd434bd9eba03acd4361367c6053_list = PyList_New( 1 );
    const_str_digest_5f68bd434bd9eba03acd4361367c6053 = UNSTREAM_STRING( &constant_bin[ 606376 ], 41, 0 );
    PyList_SET_ITEM( const_list_str_digest_5f68bd434bd9eba03acd4361367c6053_list, 0, const_str_digest_5f68bd434bd9eba03acd4361367c6053 ); Py_INCREF( const_str_digest_5f68bd434bd9eba03acd4361367c6053 );
    const_unicode_plain_parse = UNSTREAM_UNICODE( &constant_bin[ 52444 ], 5 );
    const_tuple_str_plain_serialize_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_serialize_tuple, 0, const_str_plain_serialize ); Py_INCREF( const_str_plain_serialize );
    const_unicode_plain_serialize = UNSTREAM_UNICODE( &constant_bin[ 111925 ], 9 );
    const_list_a3d5a95465b12e7a99cd3a2fb100adfa_list = PyList_New( 6 );
    const_unicode_plain_HTMLParser = UNSTREAM_UNICODE( &constant_bin[ 191388 ], 10 );
    PyList_SET_ITEM( const_list_a3d5a95465b12e7a99cd3a2fb100adfa_list, 0, const_unicode_plain_HTMLParser ); Py_INCREF( const_unicode_plain_HTMLParser );
    PyList_SET_ITEM( const_list_a3d5a95465b12e7a99cd3a2fb100adfa_list, 1, const_unicode_plain_parse ); Py_INCREF( const_unicode_plain_parse );
    const_unicode_plain_parseFragment = UNSTREAM_UNICODE( &constant_bin[ 606417 ], 13 );
    PyList_SET_ITEM( const_list_a3d5a95465b12e7a99cd3a2fb100adfa_list, 2, const_unicode_plain_parseFragment ); Py_INCREF( const_unicode_plain_parseFragment );
    const_unicode_plain_getTreeBuilder = UNSTREAM_UNICODE( &constant_bin[ 606430 ], 14 );
    PyList_SET_ITEM( const_list_a3d5a95465b12e7a99cd3a2fb100adfa_list, 3, const_unicode_plain_getTreeBuilder ); Py_INCREF( const_unicode_plain_getTreeBuilder );
    PyList_SET_ITEM( const_list_a3d5a95465b12e7a99cd3a2fb100adfa_list, 4, const_unicode_plain_getTreeWalker ); Py_INCREF( const_unicode_plain_getTreeWalker );
    PyList_SET_ITEM( const_list_a3d5a95465b12e7a99cd3a2fb100adfa_list, 5, const_unicode_plain_serialize ); Py_INCREF( const_unicode_plain_serialize );
    const_tuple_str_plain_getTreeBuilder_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_getTreeBuilder_tuple, 0, const_str_plain_getTreeBuilder ); Py_INCREF( const_str_plain_getTreeBuilder );
    const_tuple_str_plain_HTMLParser_str_plain_parse_str_plain_parseFragment_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HTMLParser_str_plain_parse_str_plain_parseFragment_tuple, 0, const_str_plain_HTMLParser ); Py_INCREF( const_str_plain_HTMLParser );
    PyTuple_SET_ITEM( const_tuple_str_plain_HTMLParser_str_plain_parse_str_plain_parseFragment_tuple, 1, const_str_plain_parse ); Py_INCREF( const_str_plain_parse );
    PyTuple_SET_ITEM( const_tuple_str_plain_HTMLParser_str_plain_parse_str_plain_parseFragment_tuple, 2, const_str_plain_parseFragment ); Py_INCREF( const_str_plain_parseFragment );
    const_str_digest_bfab2723f681188dc8141e1a27adad1c = UNSTREAM_STRING( &constant_bin[ 606444 ], 17, 0 );
    const_str_digest_273a6ea20f5ab6e81b1a7b8050f08f4a = UNSTREAM_STRING( &constant_bin[ 606461 ], 53, 0 );
    const_tuple_str_plain_getTreeWalker_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_getTreeWalker_tuple, 0, const_str_plain_getTreeWalker ); Py_INCREF( const_str_plain_getTreeWalker );
    const_str_plain_serializer = UNSTREAM_STRING( &constant_bin[ 606514 ], 10, 1 );
    const_unicode_digest_80694e0b646eb4cb980dde36e91ed7f4 = UNSTREAM_UNICODE( &constant_bin[ 606524 ], 667 );
    const_str_plain_html5parser = UNSTREAM_STRING( &constant_bin[ 606987 ], 11, 1 );
    const_unicode_digest_d9e2e8232b677ebaff782fb5a24aaa12 = UNSTREAM_UNICODE( &constant_bin[ 538695 ], 5 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_html5lib( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_abe69cda9fda0ca6dc2df83617cd0a62;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_273a6ea20f5ab6e81b1a7b8050f08f4a;
    codeobj_abe69cda9fda0ca6dc2df83617cd0a62 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_bfab2723f681188dc8141e1a27adad1c, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_html5lib =
{
    PyModuleDef_HEAD_INIT,
    "html5lib",
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

MOD_INIT_DECL( html5lib )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_html5lib );
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
    puts("html5lib: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("html5lib: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("html5lib: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in inithtml5lib" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_html5lib = Py_InitModule4(
        "html5lib",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_html5lib = PyModule_Create( &mdef_html5lib );
#endif

    moduledict_html5lib = MODULE_DICT( module_html5lib );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_html5lib, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_html5lib,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_html5lib, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_html5lib,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_html5lib, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_html5lib,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_html5lib );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_plain_html5lib, module_html5lib );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_html5lib, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_html5lib, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_html5lib, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_html5lib, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_html5lib, (Nuitka_StringObject *)const_str_plain___name__ ),
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
#if 1
        SET_ATTRIBUTE( spec_value, const_str_plain_submodule_search_locations, PyList_New(0) );
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_html5lib, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_abe69cda9fda0ca6dc2df83617cd0a62;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_unicode_digest_80694e0b646eb4cb980dde36e91ed7f4;
        UPDATE_STRING_DICT0( moduledict_html5lib, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_273a6ea20f5ab6e81b1a7b8050f08f4a;
        UPDATE_STRING_DICT0( moduledict_html5lib, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LIST_COPY( const_list_str_digest_5f68bd434bd9eba03acd4361367c6053_list );
        UPDATE_STRING_DICT1( moduledict_html5lib, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyImport_ImportModule("__future__");
        assert( !(tmp_assign_source_4 == NULL) );
        assert( tmp_import_from_1__module == NULL );
        Py_INCREF( tmp_assign_source_4 );
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Frame without reuse.
    frame_abe69cda9fda0ca6dc2df83617cd0a62 = MAKE_MODULE_FRAME( codeobj_abe69cda9fda0ca6dc2df83617cd0a62, module_html5lib );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_abe69cda9fda0ca6dc2df83617cd0a62 );
    assert( Py_REFCNT( frame_abe69cda9fda0ca6dc2df83617cd0a62 ) == 2 );

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_html5lib, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_division );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_html5lib, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_unicode_literals );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_html5lib, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_7 );
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
        tmp_name_name_1 = const_str_plain_html5parser;
        tmp_globals_name_1 = (PyObject *)moduledict_html5lib;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_HTMLParser_str_plain_parse_str_plain_parseFragment_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_abe69cda9fda0ca6dc2df83617cd0a62->m_frame.f_lineno = 25;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_4 = tmp_import_from_2__module;
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_HTMLParser );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_html5lib, (Nuitka_StringObject *)const_str_plain_HTMLParser, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_parse );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_html5lib, (Nuitka_StringObject *)const_str_plain_parse, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_parseFragment );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_html5lib, (Nuitka_StringObject *)const_str_plain_parseFragment, tmp_assign_source_11 );
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
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_treebuilders;
        tmp_globals_name_2 = (PyObject *)moduledict_html5lib;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_getTreeBuilder_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_abe69cda9fda0ca6dc2df83617cd0a62->m_frame.f_lineno = 26;
        tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_getTreeBuilder );
        Py_DECREF( tmp_import_name_from_7 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_html5lib, (Nuitka_StringObject *)const_str_plain_getTreeBuilder, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_treewalkers;
        tmp_globals_name_3 = (PyObject *)moduledict_html5lib;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_getTreeWalker_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_abe69cda9fda0ca6dc2df83617cd0a62->m_frame.f_lineno = 27;
        tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_getTreeWalker );
        Py_DECREF( tmp_import_name_from_8 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_html5lib, (Nuitka_StringObject *)const_str_plain_getTreeWalker, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_serializer;
        tmp_globals_name_4 = (PyObject *)moduledict_html5lib;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_serialize_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_abe69cda9fda0ca6dc2df83617cd0a62->m_frame.f_lineno = 28;
        tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_serialize );
        Py_DECREF( tmp_import_name_from_9 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_html5lib, (Nuitka_StringObject *)const_str_plain_serialize, tmp_assign_source_14 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_abe69cda9fda0ca6dc2df83617cd0a62 );
#endif
    popFrameStack();

    assertFrameObject( frame_abe69cda9fda0ca6dc2df83617cd0a62 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_abe69cda9fda0ca6dc2df83617cd0a62 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_abe69cda9fda0ca6dc2df83617cd0a62, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_abe69cda9fda0ca6dc2df83617cd0a62->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_abe69cda9fda0ca6dc2df83617cd0a62, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = LIST_COPY( const_list_a3d5a95465b12e7a99cd3a2fb100adfa_list );
        UPDATE_STRING_DICT1( moduledict_html5lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = const_unicode_digest_d9e2e8232b677ebaff782fb5a24aaa12;
        UPDATE_STRING_DICT0( moduledict_html5lib, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_16 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 1 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_html5lib, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_html5lib );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
