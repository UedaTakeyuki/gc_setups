/* Generated code for Python module 'requests.__version__'
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

/* The "_module_requests$__version__" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$__version__;
PyDictObject *moduledict_requests$__version__;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_requests;
extern PyObject *const_str_plain___url__;
static PyObject *const_str_digest_b0b40594a48ef757787421cf2d82910a;
extern PyObject *const_str_plain___author_email__;
static PyObject *const_str_digest_dac880088c76a67146081efa1b2911e5;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_f45d7c3ad4be7ff6c8635dcc1dd81887;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___version__;
static PyObject *const_str_digest_14e67d393d6cf98f2619ea9c90f41858;
static PyObject *const_str_digest_c732b0001bd9466f3f59e4e065102217;
static PyObject *const_str_digest_3e2093e591751aa28d709af1b89d3ffc;
extern PyObject *const_str_plain___title__;
extern PyObject *const_str_plain___license__;
extern PyObject *const_str_plain___copyright__;
extern PyObject *const_str_plain___description__;
static PyObject *const_str_digest_eb7fb2630d99b36f389a5debcec353a1;
static PyObject *const_str_digest_f924d4e9bded95196120a23f5588dcb3;
static PyObject *const_unicode_digest_ac6cdfe7eb4dd70bb45b582605612c9d;
static PyObject *const_str_digest_886210eeaf79374a8ff6b8c5db2a04f3;
extern PyObject *const_str_plain___author__;
extern PyObject *const_str_plain___cake__;
static PyObject *const_int_pos_139520;
extern PyObject *const_str_plain___build__;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_b0b40594a48ef757787421cf2d82910a = UNSTREAM_STRING( &constant_bin[ 926001 ], 19, 0 );
    const_str_digest_dac880088c76a67146081efa1b2911e5 = UNSTREAM_STRING( &constant_bin[ 926020 ], 20, 0 );
    const_str_digest_f45d7c3ad4be7ff6c8635dcc1dd81887 = UNSTREAM_STRING( &constant_bin[ 925748 ], 13, 0 );
    const_str_digest_14e67d393d6cf98f2619ea9c90f41858 = UNSTREAM_STRING( &constant_bin[ 926040 ], 6, 0 );
    const_str_digest_c732b0001bd9466f3f59e4e065102217 = UNSTREAM_STRING( &constant_bin[ 925773 ], 10, 0 );
    const_str_digest_3e2093e591751aa28d709af1b89d3ffc = UNSTREAM_STRING( &constant_bin[ 925694 ], 26, 0 );
    const_str_digest_eb7fb2630d99b36f389a5debcec353a1 = UNSTREAM_STRING( &constant_bin[ 926046 ], 28, 0 );
    const_str_digest_f924d4e9bded95196120a23f5588dcb3 = UNSTREAM_STRING( &constant_bin[ 926074 ], 23, 0 );
    const_unicode_digest_ac6cdfe7eb4dd70bb45b582605612c9d = UNSTREAM_UNICODE( &constant_bin[ 926097 ], 12 );
    const_str_digest_886210eeaf79374a8ff6b8c5db2a04f3 = UNSTREAM_STRING( &constant_bin[ 926109 ], 56, 0 );
    const_int_pos_139520 = PyInt_FromLong( 139520l );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$__version__( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.


static void createModuleCodeObjects(void)
{

}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$__version__ =
{
    PyModuleDef_HEAD_INIT,
    "requests.__version__",
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

MOD_INIT_DECL( requests$__version__ )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_requests$__version__ );
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
    puts("requests.__version__: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.__version__: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.__version__: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrequests$__version__" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$__version__ = Py_InitModule4(
        "requests.__version__",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_requests$__version__ = PyModule_Create( &mdef_requests$__version__ );
#endif

    moduledict_requests$__version__ = MODULE_DICT( module_requests$__version__ );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_requests$__version__,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$__version__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$__version__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_requests$__version__ );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_dac880088c76a67146081efa1b2911e5, module_requests$__version__ );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_886210eeaf79374a8ff6b8c5db2a04f3;
        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = const_str_plain_requests;
        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___title__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_str_digest_f924d4e9bded95196120a23f5588dcb3;
        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___description__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = const_str_digest_3e2093e591751aa28d709af1b89d3ffc;
        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___url__, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_str_digest_14e67d393d6cf98f2619ea9c90f41858;
        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = const_int_pos_139520;
        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___build__, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = const_str_digest_f45d7c3ad4be7ff6c8635dcc1dd81887;
        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = const_str_digest_b0b40594a48ef757787421cf2d82910a;
        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___author_email__, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = const_str_digest_c732b0001bd9466f3f59e4e065102217;
        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___license__, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = const_str_digest_eb7fb2630d99b36f389a5debcec353a1;
        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___copyright__, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = const_unicode_digest_ac6cdfe7eb4dd70bb45b582605612c9d;
        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___cake__, tmp_assign_source_12 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_requests$__version__ );
}
