/* Generated code for Python module 'cryptography.hazmat.primitives.serialization'
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

/* The "_module_cryptography$hazmat$primitives$serialization" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$primitives$serialization;
PyDictObject *moduledict_cryptography$hazmat$primitives$serialization;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_digest_5a19e6e7c9a2eb5ae94e5b1d5d3af128;
extern PyObject *const_str_plain_load_pem_parameters;
extern PyObject *const_str_plain_BestAvailableEncryption;
extern PyObject *const_str_plain_load_ssh_public_key;
static PyObject *const_str_digest_7825d3572b9f9d348da9dbf2cf06d301;
extern PyObject *const_str_digest_46ddc273cc9e8e2d284d9a4e20bc05c6;
extern PyObject *const_str_plain__PEM_DER;
static PyObject *const_list_7988806455d3fd53f989c492d757bad9_list;
extern PyObject *const_str_plain_PrivateFormat;
extern PyObject *const_str_digest_544a2f5e9add639bd98f112b98e28c10;
extern PyObject *const_str_plain_load_der_public_key;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_Encoding;
static PyObject *const_str_digest_c2ff810e11eb768b63807e249d6a59b5;
extern PyObject *const_str_plain_NoEncryption;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_KeySerializationEncryption;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
static PyObject *const_tuple_f402ec40d8be2f14a76d6cb1c1bb42f3_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_load_pem_public_key;
extern PyObject *const_str_plain_PublicFormat;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_load_pem_private_key;
extern PyObject *const_str_plain_load_der_parameters;
extern PyObject *const_str_plain_ParameterFormat;
static PyObject *const_tuple_str_plain_load_ssh_public_key_tuple;
extern PyObject *const_str_plain_DER;
static PyObject *const_str_digest_1363a71cf68a83ace544581cf2a2ab73;
extern PyObject *const_str_plain_load_der_private_key;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_PEM;
static PyObject *const_list_str_digest_7825d3572b9f9d348da9dbf2cf06d301_list;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_7825d3572b9f9d348da9dbf2cf06d301 = UNSTREAM_STRING( &constant_bin[ 575817 ], 77, 0 );
    const_list_7988806455d3fd53f989c492d757bad9_list = PyList_New( 14 );
    PyList_SET_ITEM( const_list_7988806455d3fd53f989c492d757bad9_list, 0, const_str_plain_load_der_parameters ); Py_INCREF( const_str_plain_load_der_parameters );
    PyList_SET_ITEM( const_list_7988806455d3fd53f989c492d757bad9_list, 1, const_str_plain_load_der_private_key ); Py_INCREF( const_str_plain_load_der_private_key );
    PyList_SET_ITEM( const_list_7988806455d3fd53f989c492d757bad9_list, 2, const_str_plain_load_der_public_key ); Py_INCREF( const_str_plain_load_der_public_key );
    PyList_SET_ITEM( const_list_7988806455d3fd53f989c492d757bad9_list, 3, const_str_plain_load_pem_parameters ); Py_INCREF( const_str_plain_load_pem_parameters );
    PyList_SET_ITEM( const_list_7988806455d3fd53f989c492d757bad9_list, 4, const_str_plain_load_pem_private_key ); Py_INCREF( const_str_plain_load_pem_private_key );
    PyList_SET_ITEM( const_list_7988806455d3fd53f989c492d757bad9_list, 5, const_str_plain_load_pem_public_key ); Py_INCREF( const_str_plain_load_pem_public_key );
    PyList_SET_ITEM( const_list_7988806455d3fd53f989c492d757bad9_list, 6, const_str_plain_load_ssh_public_key ); Py_INCREF( const_str_plain_load_ssh_public_key );
    PyList_SET_ITEM( const_list_7988806455d3fd53f989c492d757bad9_list, 7, const_str_plain_Encoding ); Py_INCREF( const_str_plain_Encoding );
    PyList_SET_ITEM( const_list_7988806455d3fd53f989c492d757bad9_list, 8, const_str_plain_PrivateFormat ); Py_INCREF( const_str_plain_PrivateFormat );
    PyList_SET_ITEM( const_list_7988806455d3fd53f989c492d757bad9_list, 9, const_str_plain_PublicFormat ); Py_INCREF( const_str_plain_PublicFormat );
    PyList_SET_ITEM( const_list_7988806455d3fd53f989c492d757bad9_list, 10, const_str_plain_ParameterFormat ); Py_INCREF( const_str_plain_ParameterFormat );
    PyList_SET_ITEM( const_list_7988806455d3fd53f989c492d757bad9_list, 11, const_str_plain_KeySerializationEncryption ); Py_INCREF( const_str_plain_KeySerializationEncryption );
    PyList_SET_ITEM( const_list_7988806455d3fd53f989c492d757bad9_list, 12, const_str_plain_BestAvailableEncryption ); Py_INCREF( const_str_plain_BestAvailableEncryption );
    PyList_SET_ITEM( const_list_7988806455d3fd53f989c492d757bad9_list, 13, const_str_plain_NoEncryption ); Py_INCREF( const_str_plain_NoEncryption );
    const_str_digest_c2ff810e11eb768b63807e249d6a59b5 = UNSTREAM_STRING( &constant_bin[ 575894 ], 53, 0 );
    const_tuple_f402ec40d8be2f14a76d6cb1c1bb42f3_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_f402ec40d8be2f14a76d6cb1c1bb42f3_tuple, 0, const_str_plain_BestAvailableEncryption ); Py_INCREF( const_str_plain_BestAvailableEncryption );
    PyTuple_SET_ITEM( const_tuple_f402ec40d8be2f14a76d6cb1c1bb42f3_tuple, 1, const_str_plain_Encoding ); Py_INCREF( const_str_plain_Encoding );
    PyTuple_SET_ITEM( const_tuple_f402ec40d8be2f14a76d6cb1c1bb42f3_tuple, 2, const_str_plain_KeySerializationEncryption ); Py_INCREF( const_str_plain_KeySerializationEncryption );
    PyTuple_SET_ITEM( const_tuple_f402ec40d8be2f14a76d6cb1c1bb42f3_tuple, 3, const_str_plain_NoEncryption ); Py_INCREF( const_str_plain_NoEncryption );
    PyTuple_SET_ITEM( const_tuple_f402ec40d8be2f14a76d6cb1c1bb42f3_tuple, 4, const_str_plain_ParameterFormat ); Py_INCREF( const_str_plain_ParameterFormat );
    PyTuple_SET_ITEM( const_tuple_f402ec40d8be2f14a76d6cb1c1bb42f3_tuple, 5, const_str_plain_PrivateFormat ); Py_INCREF( const_str_plain_PrivateFormat );
    PyTuple_SET_ITEM( const_tuple_f402ec40d8be2f14a76d6cb1c1bb42f3_tuple, 6, const_str_plain_PublicFormat ); Py_INCREF( const_str_plain_PublicFormat );
    PyTuple_SET_ITEM( const_tuple_f402ec40d8be2f14a76d6cb1c1bb42f3_tuple, 7, const_str_plain_load_der_parameters ); Py_INCREF( const_str_plain_load_der_parameters );
    PyTuple_SET_ITEM( const_tuple_f402ec40d8be2f14a76d6cb1c1bb42f3_tuple, 8, const_str_plain_load_der_private_key ); Py_INCREF( const_str_plain_load_der_private_key );
    PyTuple_SET_ITEM( const_tuple_f402ec40d8be2f14a76d6cb1c1bb42f3_tuple, 9, const_str_plain_load_der_public_key ); Py_INCREF( const_str_plain_load_der_public_key );
    PyTuple_SET_ITEM( const_tuple_f402ec40d8be2f14a76d6cb1c1bb42f3_tuple, 10, const_str_plain_load_pem_parameters ); Py_INCREF( const_str_plain_load_pem_parameters );
    PyTuple_SET_ITEM( const_tuple_f402ec40d8be2f14a76d6cb1c1bb42f3_tuple, 11, const_str_plain_load_pem_private_key ); Py_INCREF( const_str_plain_load_pem_private_key );
    PyTuple_SET_ITEM( const_tuple_f402ec40d8be2f14a76d6cb1c1bb42f3_tuple, 12, const_str_plain_load_pem_public_key ); Py_INCREF( const_str_plain_load_pem_public_key );
    const_tuple_str_plain_load_ssh_public_key_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_load_ssh_public_key_tuple, 0, const_str_plain_load_ssh_public_key ); Py_INCREF( const_str_plain_load_ssh_public_key );
    const_str_digest_1363a71cf68a83ace544581cf2a2ab73 = UNSTREAM_STRING( &constant_bin[ 575947 ], 89, 0 );
    const_list_str_digest_7825d3572b9f9d348da9dbf2cf06d301_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_7825d3572b9f9d348da9dbf2cf06d301_list, 0, const_str_digest_7825d3572b9f9d348da9dbf2cf06d301 ); Py_INCREF( const_str_digest_7825d3572b9f9d348da9dbf2cf06d301 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$primitives$serialization( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_7f315790027a30b6c01811c1ec7917b0;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_1363a71cf68a83ace544581cf2a2ab73;
    codeobj_7f315790027a30b6c01811c1ec7917b0 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_c2ff810e11eb768b63807e249d6a59b5, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cryptography$hazmat$primitives$serialization =
{
    PyModuleDef_HEAD_INIT,
    "cryptography.hazmat.primitives.serialization",
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

MOD_INIT_DECL( cryptography$hazmat$primitives$serialization )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_cryptography$hazmat$primitives$serialization );
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
    puts("cryptography.hazmat.primitives.serialization: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.primitives.serialization: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.primitives.serialization: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcryptography$hazmat$primitives$serialization" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cryptography$hazmat$primitives$serialization = Py_InitModule4(
        "cryptography.hazmat.primitives.serialization",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_cryptography$hazmat$primitives$serialization = PyModule_Create( &mdef_cryptography$hazmat$primitives$serialization );
#endif

    moduledict_cryptography$hazmat$primitives$serialization = MODULE_DICT( module_cryptography$hazmat$primitives$serialization );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_cryptography$hazmat$primitives$serialization,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$serialization,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$serialization,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_cryptography$hazmat$primitives$serialization );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_5a19e6e7c9a2eb5ae94e5b1d5d3af128, module_cryptography$hazmat$primitives$serialization );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_7f315790027a30b6c01811c1ec7917b0;
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
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_1363a71cf68a83ace544581cf2a2ab73;
        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LIST_COPY( const_list_str_digest_7825d3572b9f9d348da9dbf2cf06d301_list );
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
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
    frame_7f315790027a30b6c01811c1ec7917b0 = MAKE_MODULE_FRAME( codeobj_7f315790027a30b6c01811c1ec7917b0, module_cryptography$hazmat$primitives$serialization );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_7f315790027a30b6c01811c1ec7917b0 );
    assert( Py_REFCNT( frame_7f315790027a30b6c01811c1ec7917b0 ) == 2 );

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


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
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


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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
        tmp_name_name_1 = const_str_digest_544a2f5e9add639bd98f112b98e28c10;
        tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$serialization;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_f402ec40d8be2f14a76d6cb1c1bb42f3_tuple;
        tmp_level_name_1 = const_int_0;
        frame_7f315790027a30b6c01811c1ec7917b0->m_frame.f_lineno = 7;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

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
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_BestAvailableEncryption );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain_BestAvailableEncryption, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_Encoding );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain_Encoding, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_KeySerializationEncryption );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain_KeySerializationEncryption, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_NoEncryption );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain_NoEncryption, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_ParameterFormat );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain_ParameterFormat, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_PrivateFormat );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain_PrivateFormat, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_10 = tmp_import_from_2__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_PublicFormat );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain_PublicFormat, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_11 = tmp_import_from_2__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_load_der_parameters );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain_load_der_parameters, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_12 = tmp_import_from_2__module;
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_load_der_private_key );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain_load_der_private_key, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_13 = tmp_import_from_2__module;
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_load_der_public_key );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain_load_der_public_key, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_14 = tmp_import_from_2__module;
        tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_load_pem_parameters );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain_load_pem_parameters, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_15 = tmp_import_from_2__module;
        tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_load_pem_private_key );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain_load_pem_private_key, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_16 = tmp_import_from_2__module;
        tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_load_pem_public_key );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain_load_pem_public_key, tmp_assign_source_21 );
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
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_46ddc273cc9e8e2d284d9a4e20bc05c6;
        tmp_globals_name_2 = (PyObject *)moduledict_cryptography$hazmat$primitives$serialization;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_load_ssh_public_key_tuple;
        tmp_level_name_2 = const_int_0;
        frame_7f315790027a30b6c01811c1ec7917b0->m_frame.f_lineno = 13;
        tmp_import_name_from_17 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_load_ssh_public_key );
        Py_DECREF( tmp_import_name_from_17 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain_load_ssh_public_key, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain_Encoding );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Encoding );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "Encoding" );
            exception_tb = NULL;

            exception_lineno = 18;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_PEM );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_assign_source_23, 0, tmp_tuple_element_1 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain_Encoding );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Encoding );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_assign_source_23 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "Encoding" );
            exception_tb = NULL;

            exception_lineno = 18;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_DER );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_23 );

            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_assign_source_23, 1, tmp_tuple_element_1 );
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain__PEM_DER, tmp_assign_source_23 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7f315790027a30b6c01811c1ec7917b0 );
#endif
    popFrameStack();

    assertFrameObject( frame_7f315790027a30b6c01811c1ec7917b0 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7f315790027a30b6c01811c1ec7917b0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7f315790027a30b6c01811c1ec7917b0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7f315790027a30b6c01811c1ec7917b0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7f315790027a30b6c01811c1ec7917b0, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = LIST_COPY( const_list_7988806455d3fd53f989c492d757bad9_list );
        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_24 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 1 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$serialization, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_cryptography$hazmat$primitives$serialization );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
