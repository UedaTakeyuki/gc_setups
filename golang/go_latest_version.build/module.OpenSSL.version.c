/* Generated code for Python module 'OpenSSL.version'
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

/* The "_module_OpenSSL$version" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_OpenSSL$version;
PyDictObject *moduledict_OpenSSL$version;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_68018ff76519212609a7968014aa79ba;
static PyObject *const_str_digest_e181204d63c8b7732d12c155e97abb8c;
static PyObject *const_str_digest_d4ea8f4eef41519fcb452ff7823d9d38;
extern PyObject *const_str_plain___copyright__;
extern PyObject *const_str_plain___uri__;
extern PyObject *const_str_digest_69e665cd1c1ee14f52dfb85d4f885c38;
extern PyObject *const_str_plain___email__;
static PyObject *const_str_plain_pyOpenSSL;
extern PyObject *const_str_digest_1f67343b5259d1f6dbf7947bec2fa63d;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___summary__;
extern PyObject *const_str_plain___all__;
static PyObject *const_list_7a37fc81b16958dd9b37fbf746b699fd_list;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___version__;
static PyObject *const_str_digest_17fcf6156b58e795c4b8433560cf09d8;
static PyObject *const_str_digest_765688c99802d0eaa12abe5161d7d87c;
extern PyObject *const_str_plain___title__;
extern PyObject *const_str_plain___license__;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_e29bae330b8b3eb2658b1344a6271a86;
extern PyObject *const_str_digest_598c5128122328c3e816ece52ab2e1f6;
static PyObject *const_str_digest_d423f61b0839c8c297e8e18c57b48478;
extern PyObject *const_str_plain___author__;
extern PyObject *const_str_plain_format;
static PyObject *const_str_digest_7462302523e38f7f5dea00122e9916a7;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_68018ff76519212609a7968014aa79ba = UNSTREAM_STRING( &constant_bin[ 86107 ], 27, 0 );
    const_str_digest_e181204d63c8b7732d12c155e97abb8c = UNSTREAM_STRING( &constant_bin[ 86134 ], 48, 0 );
    const_str_digest_d4ea8f4eef41519fcb452ff7823d9d38 = UNSTREAM_STRING( &constant_bin[ 86182 ], 24, 0 );
    const_str_plain_pyOpenSSL = UNSTREAM_STRING( &constant_bin[ 30150 ], 9, 1 );
    const_list_7a37fc81b16958dd9b37fbf746b699fd_list = PyList_New( 8 );
    PyList_SET_ITEM( const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 0, const_str_plain___author__ ); Py_INCREF( const_str_plain___author__ );
    PyList_SET_ITEM( const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 1, const_str_plain___copyright__ ); Py_INCREF( const_str_plain___copyright__ );
    PyList_SET_ITEM( const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 2, const_str_plain___email__ ); Py_INCREF( const_str_plain___email__ );
    PyList_SET_ITEM( const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 3, const_str_plain___license__ ); Py_INCREF( const_str_plain___license__ );
    PyList_SET_ITEM( const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 4, const_str_plain___summary__ ); Py_INCREF( const_str_plain___summary__ );
    PyList_SET_ITEM( const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 5, const_str_plain___title__ ); Py_INCREF( const_str_plain___title__ );
    PyList_SET_ITEM( const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 6, const_str_plain___uri__ ); Py_INCREF( const_str_plain___uri__ );
    PyList_SET_ITEM( const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 7, const_str_plain___version__ ); Py_INCREF( const_str_plain___version__ );
    const_str_digest_17fcf6156b58e795c4b8433560cf09d8 = UNSTREAM_STRING( &constant_bin[ 86206 ], 23, 0 );
    const_str_digest_765688c99802d0eaa12abe5161d7d87c = UNSTREAM_STRING( &constant_bin[ 86229 ], 6, 0 );
    const_str_digest_e29bae330b8b3eb2658b1344a6271a86 = UNSTREAM_STRING( &constant_bin[ 86235 ], 24, 0 );
    const_str_digest_d423f61b0839c8c297e8e18c57b48478 = UNSTREAM_STRING( &constant_bin[ 86259 ], 22, 0 );
    const_str_digest_7462302523e38f7f5dea00122e9916a7 = UNSTREAM_STRING( &constant_bin[ 86281 ], 51, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_OpenSSL$version( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_2ea3b2432e5fa5203b632579dd9e89d1;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_7462302523e38f7f5dea00122e9916a7;
    codeobj_2ea3b2432e5fa5203b632579dd9e89d1 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_d4ea8f4eef41519fcb452ff7823d9d38, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_OpenSSL$version =
{
    PyModuleDef_HEAD_INIT,
    "OpenSSL.version",
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

MOD_INIT_DECL( OpenSSL$version )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_OpenSSL$version );
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
    puts("OpenSSL.version: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("OpenSSL.version: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("OpenSSL.version: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initOpenSSL$version" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_OpenSSL$version = Py_InitModule4(
        "OpenSSL.version",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_OpenSSL$version = PyModule_Create( &mdef_OpenSSL$version );
#endif

    moduledict_OpenSSL$version = MODULE_DICT( module_OpenSSL$version );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_OpenSSL$version,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_OpenSSL$version,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_OpenSSL$version,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_OpenSSL$version );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_598c5128122328c3e816ece52ab2e1f6, module_OpenSSL$version );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_2ea3b2432e5fa5203b632579dd9e89d1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_69e665cd1c1ee14f52dfb85d4f885c38;
        UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_7462302523e38f7f5dea00122e9916a7;
        UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LIST_COPY( const_list_7a37fc81b16958dd9b37fbf746b699fd_list );
        UPDATE_STRING_DICT1( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_str_digest_765688c99802d0eaa12abe5161d7d87c;
        UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = const_str_plain_pyOpenSSL;
        UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___title__, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_str_digest_d423f61b0839c8c297e8e18c57b48478;
        UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___uri__, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = const_str_digest_e181204d63c8b7732d12c155e97abb8c;
        UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___summary__, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = const_str_digest_e29bae330b8b3eb2658b1344a6271a86;
        UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = const_str_digest_1f67343b5259d1f6dbf7947bec2fa63d;
        UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___email__, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = const_str_digest_68018ff76519212609a7968014aa79ba;
        UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___license__, tmp_assign_source_10 );
    }
    // Frame without reuse.
    frame_2ea3b2432e5fa5203b632579dd9e89d1 = MAKE_MODULE_FRAME( codeobj_2ea3b2432e5fa5203b632579dd9e89d1, module_OpenSSL$version );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_2ea3b2432e5fa5203b632579dd9e89d1 );
    assert( Py_REFCNT( frame_2ea3b2432e5fa5203b632579dd9e89d1 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_called_instance_1 = const_str_digest_17fcf6156b58e795c4b8433560cf09d8;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___author__ );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___author__ );
        }

        CHECK_OBJECT( tmp_mvar_value_1 );
        tmp_args_element_name_1 = tmp_mvar_value_1;
        frame_2ea3b2432e5fa5203b632579dd9e89d1->m_frame.f_lineno = 22;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_11 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_format, call_args );
        }

        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___copyright__, tmp_assign_source_11 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2ea3b2432e5fa5203b632579dd9e89d1 );
#endif
    popFrameStack();

    assertFrameObject( frame_2ea3b2432e5fa5203b632579dd9e89d1 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2ea3b2432e5fa5203b632579dd9e89d1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2ea3b2432e5fa5203b632579dd9e89d1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2ea3b2432e5fa5203b632579dd9e89d1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2ea3b2432e5fa5203b632579dd9e89d1, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_OpenSSL$version );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
