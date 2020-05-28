/* Generated code for Python module 'simplejson.compat'
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

/* The "_module_simplejson$compat" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_simplejson$compat;
PyDictObject *moduledict_simplejson$compat;

/* The declarations of module constants used, if any. */
extern PyObject *const_tuple_type_str_tuple;
extern PyObject *const_tuple_type_basestring_tuple;
extern PyObject *const_str_plain_chr;
extern PyObject *const_str_plain_unichr;
extern PyObject *const_str_plain_text_type;
extern PyObject *const_int_neg_1;
static PyObject *const_str_plain_long_type;
extern PyObject *const_str_plain_cStringIO;
extern PyObject *const_tuple_type_int_type_long_tuple;
extern PyObject *const_str_plain_io;
static PyObject *const_str_digest_4d0b72cfaf0d7706d1e459e50c192a44;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_imp;
static PyObject *const_str_digest_8338e37eb5f808c42fa95e9d05ac6db7;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_reload;
extern PyObject *const_int_0;
extern PyObject *const_tuple_type_int_tuple;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_string_types;
extern PyObject *const_str_plain_reload_module;
extern PyObject *const_str_plain_unicode;
extern PyObject *const_int_pos_4;
static PyObject *const_str_digest_9da747d16c084302c48bf983804db19d;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_digest_94491e0a0f40df7fc91349180a654513;
extern PyObject *const_str_plain_binary_type;
static PyObject *const_tuple_str_plain_StringIO_str_plain_BytesIO_tuple;
extern PyObject *const_str_plain_PY3;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_StringIO;
extern PyObject *const_tuple_str_plain_StringIO_tuple;
static PyObject *const_tuple_str_plain_reload_tuple;
static PyObject *const_str_digest_70917ffb15a47f57f6da684f370d0dae;
extern PyObject *const_str_plain_BytesIO;
extern PyObject *const_str_plain_basestring;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_long;
extern PyObject *const_str_plain_importlib;
extern PyObject *const_str_plain_int;
extern PyObject *const_tuple_str_plain_s_tuple;
extern PyObject *const_str_plain_integer_types;
extern PyObject *const_str_plain_s;
extern PyObject *const_tuple_int_pos_3_int_pos_4_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_long_type = UNSTREAM_STRING( &constant_bin[ 999369 ], 9, 1 );
    const_str_digest_4d0b72cfaf0d7706d1e459e50c192a44 = UNSTREAM_STRING( &constant_bin[ 999378 ], 53, 0 );
    const_str_digest_8338e37eb5f808c42fa95e9d05ac6db7 = UNSTREAM_STRING( &constant_bin[ 999431 ], 29, 0 );
    const_str_digest_9da747d16c084302c48bf983804db19d = UNSTREAM_STRING( &constant_bin[ 999460 ], 26, 0 );
    const_tuple_str_plain_StringIO_str_plain_BytesIO_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_StringIO_str_plain_BytesIO_tuple, 0, const_str_plain_StringIO ); Py_INCREF( const_str_plain_StringIO );
    PyTuple_SET_ITEM( const_tuple_str_plain_StringIO_str_plain_BytesIO_tuple, 1, const_str_plain_BytesIO ); Py_INCREF( const_str_plain_BytesIO );
    const_tuple_str_plain_reload_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_reload_tuple, 0, const_str_plain_reload ); Py_INCREF( const_str_plain_reload );
    const_str_digest_70917ffb15a47f57f6da684f370d0dae = UNSTREAM_STRING( &constant_bin[ 989583 ], 17, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_simplejson$compat( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_d59d420f73f7385cf5e73832c93a5404;
static PyCodeObject *codeobj_e9376f6e5a2c58050095aec29f217ee6;
static PyCodeObject *codeobj_4e685dcb47985ccb899ecddc4cf8cf95;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_4d0b72cfaf0d7706d1e459e50c192a44;
    codeobj_d59d420f73f7385cf5e73832c93a5404 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_9da747d16c084302c48bf983804db19d, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_e9376f6e5a2c58050095aec29f217ee6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_b, 6, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4e685dcb47985ccb899ecddc4cf8cf95 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_b, 25, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_simplejson$compat$$$function_1_b(  );


static PyObject *MAKE_FUNCTION_simplejson$compat$$$function_2_b(  );


// The module function definitions.
static PyObject *impl_simplejson$compat$$$function_1_b( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    CHECK_OBJECT( par_s );
    tmp_return_value = par_s;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( simplejson$compat$$$function_1_b );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( simplejson$compat$$$function_1_b );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_simplejson$compat$$$function_2_b( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_4e685dcb47985ccb899ecddc4cf8cf95;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4e685dcb47985ccb899ecddc4cf8cf95 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4e685dcb47985ccb899ecddc4cf8cf95, codeobj_4e685dcb47985ccb899ecddc4cf8cf95, module_simplejson$compat, sizeof(void *) );
    frame_4e685dcb47985ccb899ecddc4cf8cf95 = cache_frame_4e685dcb47985ccb899ecddc4cf8cf95;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4e685dcb47985ccb899ecddc4cf8cf95 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4e685dcb47985ccb899ecddc4cf8cf95 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_raise_value_1 = const_str_digest_94491e0a0f40df7fc91349180a654513;
        exception_type = tmp_raise_type_1;
        Py_INCREF( tmp_raise_type_1 );
        exception_value = tmp_raise_value_1;
        Py_INCREF( tmp_raise_value_1 );
        exception_lineno = 26;
        RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4e685dcb47985ccb899ecddc4cf8cf95 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4e685dcb47985ccb899ecddc4cf8cf95 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4e685dcb47985ccb899ecddc4cf8cf95, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4e685dcb47985ccb899ecddc4cf8cf95->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4e685dcb47985ccb899ecddc4cf8cf95, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4e685dcb47985ccb899ecddc4cf8cf95,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_4e685dcb47985ccb899ecddc4cf8cf95 == cache_frame_4e685dcb47985ccb899ecddc4cf8cf95 )
    {
        Py_DECREF( frame_4e685dcb47985ccb899ecddc4cf8cf95 );
    }
    cache_frame_4e685dcb47985ccb899ecddc4cf8cf95 = NULL;

    assertFrameObject( frame_4e685dcb47985ccb899ecddc4cf8cf95 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( simplejson$compat$$$function_2_b );
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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( simplejson$compat$$$function_2_b );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}



static PyObject *MAKE_FUNCTION_simplejson$compat$$$function_1_b(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_simplejson$compat$$$function_1_b,
        const_str_plain_b,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e9376f6e5a2c58050095aec29f217ee6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_simplejson$compat,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_simplejson$compat$$$function_2_b(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_simplejson$compat$$$function_2_b,
        const_str_plain_b,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4e685dcb47985ccb899ecddc4cf8cf95,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_simplejson$compat,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_simplejson$compat =
{
    PyModuleDef_HEAD_INIT,
    "simplejson.compat",
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

MOD_INIT_DECL( simplejson$compat )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_simplejson$compat );
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
    puts("simplejson.compat: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("simplejson.compat: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("simplejson.compat: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initsimplejson$compat" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_simplejson$compat = Py_InitModule4(
        "simplejson.compat",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_simplejson$compat = PyModule_Create( &mdef_simplejson$compat );
#endif

    moduledict_simplejson$compat = MODULE_DICT( module_simplejson$compat );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_simplejson$compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_simplejson$compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_simplejson$compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_simplejson$compat );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_70917ffb15a47f57f6da684f370d0dae, module_simplejson$compat );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_d59d420f73f7385cf5e73832c93a5404;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_8338e37eb5f808c42fa95e9d05ac6db7;
        UPDATE_STRING_DICT0( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_4d0b72cfaf0d7706d1e459e50c192a44;
        UPDATE_STRING_DICT0( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_plain_sys;
        tmp_globals_name_1 = (PyObject *)moduledict_simplejson$compat;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        assert( !(tmp_assign_source_3 == NULL) );
        UPDATE_STRING_DICT1( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_3 );
    }
    // Frame without reuse.
    frame_d59d420f73f7385cf5e73832c93a5404 = MAKE_MODULE_FRAME( codeobj_d59d420f73f7385cf5e73832c93a5404, module_simplejson$compat );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_d59d420f73f7385cf5e73832c93a5404 );
    assert( Py_REFCNT( frame_d59d420f73f7385cf5e73832c93a5404 ) == 2 );

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        CHECK_OBJECT( tmp_mvar_value_1 );
        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

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
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = Py_False;
            UPDATE_STRING_DICT0( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_PY3, tmp_assign_source_4 );
        }
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = MAKE_FUNCTION_simplejson$compat$$$function_1_b(  );



            UPDATE_STRING_DICT1( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_b, tmp_assign_source_5 );
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_import_name_from_1;
            PyObject *tmp_name_name_2;
            PyObject *tmp_globals_name_2;
            PyObject *tmp_locals_name_2;
            PyObject *tmp_fromlist_name_2;
            tmp_name_name_2 = const_str_plain_cStringIO;
            tmp_globals_name_2 = (PyObject *)moduledict_simplejson$compat;
            tmp_locals_name_2 = Py_None;
            tmp_fromlist_name_2 = const_tuple_str_plain_StringIO_tuple;
            frame_d59d420f73f7385cf5e73832c93a5404->m_frame.f_lineno = 9;
            tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
            assert( !(tmp_import_name_from_1 == NULL) );
            tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_StringIO );
            Py_DECREF( tmp_import_name_from_1 );
            assert( !(tmp_assign_source_6 == NULL) );
            UPDATE_STRING_DICT1( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_StringIO, tmp_assign_source_6 );
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_StringIO );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_StringIO );
            }

            CHECK_OBJECT( tmp_mvar_value_2 );
            tmp_assign_source_7 = tmp_mvar_value_2;
            UPDATE_STRING_DICT0( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_BytesIO, tmp_assign_source_7 );
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = (PyObject *)&PyUnicode_Type;
            UPDATE_STRING_DICT0( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_text_type, tmp_assign_source_8 );
        }
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = (PyObject *)&PyString_Type;
            UPDATE_STRING_DICT0( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_binary_type, tmp_assign_source_9 );
        }
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = const_tuple_type_basestring_tuple;
            UPDATE_STRING_DICT0( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_string_types, tmp_assign_source_10 );
        }
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = const_tuple_type_int_type_long_tuple;
            UPDATE_STRING_DICT0( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_integer_types, tmp_assign_source_11 );
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_unichr );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unichr );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "unichr" );
                exception_tb = NULL;

                exception_lineno = 17;

                goto frame_exception_exit_1;
            }

            tmp_assign_source_12 = tmp_mvar_value_3;
            UPDATE_STRING_DICT0( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_unichr, tmp_assign_source_12 );
        }
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = LOOKUP_BUILTIN( const_str_plain_reload );
            assert( tmp_assign_source_13 != NULL );
            UPDATE_STRING_DICT0( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_reload_module, tmp_assign_source_13 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_14;
            tmp_assign_source_14 = Py_True;
            UPDATE_STRING_DICT0( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_PY3, tmp_assign_source_14 );
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            Py_ssize_t tmp_sliceslicedel_index_lower_1;
            Py_ssize_t tmp_slice_index_upper_1;
            PyObject *tmp_slice_source_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_4;
            tmp_sliceslicedel_index_lower_1 = 0;
            tmp_slice_index_upper_1 = 2;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_sys );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "sys" );
                exception_tb = NULL;

                exception_lineno = 21;

                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_4;
            tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_version_info );
            if ( tmp_slice_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 21;

                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
            Py_DECREF( tmp_slice_source_1 );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 21;

                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = const_tuple_int_pos_3_int_pos_4_tuple;
            tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 21;

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
                PyObject *tmp_assign_source_15;
                PyObject *tmp_import_name_from_2;
                PyObject *tmp_name_name_3;
                PyObject *tmp_globals_name_3;
                PyObject *tmp_locals_name_3;
                PyObject *tmp_fromlist_name_3;
                tmp_name_name_3 = const_str_plain_importlib;
                tmp_globals_name_3 = (PyObject *)moduledict_simplejson$compat;
                tmp_locals_name_3 = Py_None;
                tmp_fromlist_name_3 = const_tuple_str_plain_reload_tuple;
                frame_d59d420f73f7385cf5e73832c93a5404->m_frame.f_lineno = 22;
                tmp_import_name_from_2 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
                if ( tmp_import_name_from_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 22;

                    goto frame_exception_exit_1;
                }
                tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_reload );
                Py_DECREF( tmp_import_name_from_2 );
                if ( tmp_assign_source_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 22;

                    goto frame_exception_exit_1;
                }
                UPDATE_STRING_DICT1( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_reload_module, tmp_assign_source_15 );
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_16;
                PyObject *tmp_import_name_from_3;
                PyObject *tmp_name_name_4;
                PyObject *tmp_globals_name_4;
                PyObject *tmp_locals_name_4;
                PyObject *tmp_fromlist_name_4;
                tmp_name_name_4 = const_str_plain_imp;
                tmp_globals_name_4 = (PyObject *)moduledict_simplejson$compat;
                tmp_locals_name_4 = Py_None;
                tmp_fromlist_name_4 = const_tuple_str_plain_reload_tuple;
                frame_d59d420f73f7385cf5e73832c93a5404->m_frame.f_lineno = 24;
                tmp_import_name_from_3 = IMPORT_MODULE4( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4 );
                assert( !(tmp_import_name_from_3 == NULL) );
                tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_reload );
                Py_DECREF( tmp_import_name_from_3 );
                assert( !(tmp_assign_source_16 == NULL) );
                UPDATE_STRING_DICT1( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_reload_module, tmp_assign_source_16 );
            }
            branch_end_2:;
        }
        {
            PyObject *tmp_assign_source_17;
            tmp_assign_source_17 = MAKE_FUNCTION_simplejson$compat$$$function_2_b(  );



            UPDATE_STRING_DICT1( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_b, tmp_assign_source_17 );
        }
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_name_name_5;
            PyObject *tmp_globals_name_5;
            PyObject *tmp_locals_name_5;
            PyObject *tmp_fromlist_name_5;
            tmp_name_name_5 = const_str_plain_io;
            tmp_globals_name_5 = (PyObject *)moduledict_simplejson$compat;
            tmp_locals_name_5 = Py_None;
            tmp_fromlist_name_5 = const_tuple_str_plain_StringIO_str_plain_BytesIO_tuple;
            frame_d59d420f73f7385cf5e73832c93a5404->m_frame.f_lineno = 27;
            tmp_assign_source_18 = IMPORT_MODULE4( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5 );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 27;

                goto frame_exception_exit_1;
            }
            assert( tmp_import_from_1__module == NULL );
            tmp_import_from_1__module = tmp_assign_source_18;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_import_name_from_4;
            CHECK_OBJECT( tmp_import_from_1__module );
            tmp_import_name_from_4 = tmp_import_from_1__module;
            tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_StringIO );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 27;

                goto try_except_handler_1;
            }
            UPDATE_STRING_DICT1( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_StringIO, tmp_assign_source_19 );
        }
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_import_name_from_5;
            CHECK_OBJECT( tmp_import_from_1__module );
            tmp_import_name_from_5 = tmp_import_from_1__module;
            tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_BytesIO );
            if ( tmp_assign_source_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 27;

                goto try_except_handler_1;
            }
            UPDATE_STRING_DICT1( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_BytesIO, tmp_assign_source_20 );
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
            PyObject *tmp_assign_source_21;
            tmp_assign_source_21 = (PyObject *)&PyString_Type;
            UPDATE_STRING_DICT0( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_text_type, tmp_assign_source_21 );
        }
        {
            PyObject *tmp_assign_source_22;
            tmp_assign_source_22 = (PyObject *)&PyString_Type;
            UPDATE_STRING_DICT0( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_binary_type, tmp_assign_source_22 );
        }
        {
            PyObject *tmp_assign_source_23;
            tmp_assign_source_23 = const_tuple_type_str_tuple;
            UPDATE_STRING_DICT0( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_string_types, tmp_assign_source_23 );
        }
        {
            PyObject *tmp_assign_source_24;
            tmp_assign_source_24 = const_tuple_type_int_tuple;
            UPDATE_STRING_DICT0( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_integer_types, tmp_assign_source_24 );
        }
        {
            PyObject *tmp_assign_source_25;
            tmp_assign_source_25 = LOOKUP_BUILTIN( const_str_plain_chr );
            assert( tmp_assign_source_25 != NULL );
            UPDATE_STRING_DICT0( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_unichr, tmp_assign_source_25 );
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_subscript_name_2;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_integer_types );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer_types );
        }

        CHECK_OBJECT( tmp_mvar_value_5 );
        tmp_subscribed_name_2 = tmp_mvar_value_5;
        tmp_subscript_name_2 = const_int_neg_1;
        tmp_assign_source_26 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, -1 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain_long_type, tmp_assign_source_26 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d59d420f73f7385cf5e73832c93a5404 );
#endif
    popFrameStack();

    assertFrameObject( frame_d59d420f73f7385cf5e73832c93a5404 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d59d420f73f7385cf5e73832c93a5404 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d59d420f73f7385cf5e73832c93a5404, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d59d420f73f7385cf5e73832c93a5404->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d59d420f73f7385cf5e73832c93a5404, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_simplejson$compat, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_simplejson$compat );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
