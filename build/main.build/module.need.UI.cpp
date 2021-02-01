/* Generated code for Python module 'need.UI'
 * created by Nuitka version 0.6.11.4
 *
 * This code is in part copyright 2021 Kay Hayen.
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

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_need$UI" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_need$UI;
PyDictObject *moduledict_need$UI;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[133];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "need.UI", 133);

    constants_created = true;
}

/* For multiprocessing, we want to be able to initialize the __main__ constants. */
#if (_NUITKA_PLUGIN_MULTIPROCESSING_ENABLED || _NUITKA_PLUGIN_TRACEBACK_ENCRYPTION_ENABLED) && 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_need$UI(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "need.UI", 133);
}
#endif

// The module code objects.
static PyCodeObject *codeobj_a863c145727c0dcbbb0a6342e24dc8a6;
static PyCodeObject *codeobj_de1ca4734cd532dfab4f03e474e1ec7f;
static PyCodeObject *codeobj_8cb313cd6fa39a7b0d0ed0c45bba4659;
static PyCodeObject *codeobj_a08fb3b81db49044d341b95f0a0d8bee;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[103]; CHECK_OBJECT(module_filename_obj);
    codeobj_a863c145727c0dcbbb0a6342e24dc8a6 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[129], NULL, NULL, 0, 0, 0);
    codeobj_de1ca4734cd532dfab4f03e474e1ec7f = MAKE_CODEOBJECT(module_filename_obj, 16, CO_NOFREE, mod_consts[117], mod_consts[130], NULL, 0, 0, 0);
    codeobj_8cb313cd6fa39a7b0d0ed0c45bba4659 = MAKE_CODEOBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[84], mod_consts[131], NULL, 2, 0, 0);
    codeobj_a08fb3b81db49044d341b95f0a0d8bee = MAKE_CODEOBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[125], mod_consts[132], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_need$UI$$$function__1_setupUi();


static PyObject *MAKE_FUNCTION_need$UI$$$function__2_retranslateUi();


// The module function definitions.
static PyObject *impl_need$UI$$$function__1_setupUi(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_Search = python_pars[1];
    PyObject *var_font = NULL;
    PyObject *var_sizePolicy = NULL;
    PyObject *var_sizePolicy1 = NULL;
    PyObject *var_font1 = NULL;
    PyObject *var_font2 = NULL;
    PyObject *var_font3 = NULL;
    struct Nuitka_FrameObject *frame_a08fb3b81db49044d341b95f0a0d8bee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_a08fb3b81db49044d341b95f0a0d8bee = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a08fb3b81db49044d341b95f0a0d8bee)) {
        Py_XDECREF(cache_frame_a08fb3b81db49044d341b95f0a0d8bee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a08fb3b81db49044d341b95f0a0d8bee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a08fb3b81db49044d341b95f0a0d8bee = MAKE_FUNCTION_FRAME(codeobj_a08fb3b81db49044d341b95f0a0d8bee, module_need$UI, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a08fb3b81db49044d341b95f0a0d8bee->m_type_description == NULL);
    frame_a08fb3b81db49044d341b95f0a0d8bee = cache_frame_a08fb3b81db49044d341b95f0a0d8bee;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a08fb3b81db49044d341b95f0a0d8bee);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a08fb3b81db49044d341b95f0a0d8bee) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_Search);
        tmp_called_instance_1 = par_Search;
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 18;
        tmp_operand_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[0]);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        if (par_Search == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 19;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = par_Search;
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 19;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, mod_consts[2], &PyTuple_GET_ITEM(mod_consts[3], 0));

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        if (par_Search == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 20;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = par_Search;
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 20;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_3, mod_consts[4], &PyTuple_GET_ITEM(mod_consts[5], 0));

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        if (par_Search == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 21;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_Search;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[6]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 21;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 21;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, &PyTuple_GET_ITEM(mod_consts[5], 0));

        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 21;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 21;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_4;
        if (par_Search == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 22;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_Search;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[8]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 22;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 22;
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, &PyTuple_GET_ITEM(mod_consts[5], 0));

        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 22;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 22;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_assattr_target_1;
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_Search == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 23;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = par_Search;
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 23;
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_3);
        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[10], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(par_self);
        tmp_expression_name_3 = par_self;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[10]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 24;
        tmp_call_result_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, mod_consts[2], &PyTuple_GET_ITEM(mod_consts[11], 0));

        Py_DECREF(tmp_called_instance_4);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_assattr_target_2;
        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_name_6 == NULL)) {
            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 25;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[10]);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 25;
        tmp_assattr_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_assattr_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 25;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[14], tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_call_result_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 26;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = par_self;
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[14]);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 26;
        tmp_call_result_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, mod_consts[2], &PyTuple_GET_ITEM(mod_consts[15], 0));

        Py_DECREF(tmp_called_instance_5);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_called_name_7;
        PyObject *tmp_assattr_target_3;
        tmp_called_name_7 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_name_7 == NULL)) {
            tmp_called_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 27;
        tmp_assattr_name_3 = CALL_FUNCTION_NO_ARGS(tmp_called_name_7);
        if (tmp_assattr_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 27;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[17], tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_call_result_7;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 28;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_self;
        tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[17]);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 28;
        tmp_call_result_7 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, mod_consts[2], &PyTuple_GET_ITEM(mod_consts[18], 0));

        Py_DECREF(tmp_called_instance_6);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_called_name_8;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_assattr_target_4;
        tmp_called_name_8 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_name_8 == NULL)) {
            tmp_called_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 29;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = par_self;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[10]);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 29;
        tmp_assattr_name_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_5);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_assattr_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 29;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[20], tmp_assattr_name_4);
        Py_DECREF(tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_call_result_8;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 30;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = par_self;
        tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[20]);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 30;
        tmp_call_result_8 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_7, mod_consts[2], &PyTuple_GET_ITEM(mod_consts[21], 0));

        Py_DECREF(tmp_called_instance_7);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_9;
        tmp_called_name_9 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_name_9 == NULL)) {
            tmp_called_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 31;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_9);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_font == NULL);
        var_font = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT(var_font);
        tmp_called_instance_8 = var_font;
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 32;
        tmp_call_result_9 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_8, mod_consts[23], &PyTuple_GET_ITEM(mod_consts[24], 0));

        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_10;
        if (var_font == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 33;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_9 = var_font;
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 33;
        tmp_call_result_10 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_9, mod_consts[26], &PyTuple_GET_ITEM(mod_consts[27], 0));

        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_name_10;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_name_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 34;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_10 = par_self;
        tmp_expression_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[20]);
        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[28]);
        Py_DECREF(tmp_expression_name_9);
        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_font == NULL) {
            Py_DECREF(tmp_called_name_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 34;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_6 = var_font;
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 34;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_10);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_name_11;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_expression_name_13;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_12 = par_self;
        tmp_expression_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[17]);
        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[29]);
        Py_DECREF(tmp_expression_name_11);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_13 = par_self;
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[20]);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);

            exception_lineno = 36;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 36;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_7);
        Py_DECREF(tmp_called_name_11);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_called_name_12;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_assattr_target_5;
        tmp_called_name_12 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_name_12 == NULL)) {
            tmp_called_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 38;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_14 = par_self;
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[10]);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 38;
        tmp_assattr_name_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, tmp_args_element_name_8);
        Py_DECREF(tmp_args_element_name_8);
        if (tmp_assattr_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 38;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[31], tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_call_result_13;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 39;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_15 = par_self;
        tmp_called_instance_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[31]);
        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 39;
        tmp_call_result_13 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_10, mod_consts[2], &PyTuple_GET_ITEM(mod_consts[32], 0));

        Py_DECREF(tmp_called_instance_10);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_call_result_14;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 40;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_16 = par_self;
        tmp_called_instance_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[31]);
        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 40;
        tmp_call_result_14 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_11, mod_consts[33], &PyTuple_GET_ITEM(mod_consts[27], 0));

        Py_DECREF(tmp_called_instance_11);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_13;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_expression_name_18;
        tmp_called_name_13 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_name_13 == NULL)) {
            tmp_called_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_17 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_name_17 == NULL)) {
            tmp_expression_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_expression_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[35]);
        if (tmp_args_element_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_18 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_name_18 == NULL)) {
            tmp_expression_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_expression_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_9);

            exception_lineno = 41;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[35]);
        if (tmp_args_element_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_9);

            exception_lineno = 41;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = {tmp_args_element_name_9, tmp_args_element_name_10};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_13, call_args);
        }

        Py_DECREF(tmp_args_element_name_9);
        Py_DECREF(tmp_args_element_name_10);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sizePolicy == NULL);
        var_sizePolicy = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_12;
        PyObject *tmp_call_result_15;
        CHECK_OBJECT(var_sizePolicy);
        tmp_called_instance_12 = var_sizePolicy;
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 42;
        tmp_call_result_15 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_12, mod_consts[36], &PyTuple_GET_ITEM(mod_consts[37], 0));

        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_call_result_16;
        if (var_sizePolicy == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 43;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_13 = var_sizePolicy;
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 43;
        tmp_call_result_16 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_13, mod_consts[39], &PyTuple_GET_ITEM(mod_consts[37], 0));

        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_name_14;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_expression_name_20;
        if (var_sizePolicy == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 44;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_19 = var_sizePolicy;
        tmp_called_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[40]);
        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 44;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_20 = par_self;
        tmp_called_instance_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[31]);
        if (tmp_called_instance_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_14);

            exception_lineno = 44;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 44;
        tmp_called_instance_14 = CALL_METHOD_NO_ARGS(tmp_called_instance_15, mod_consts[38]);
        Py_DECREF(tmp_called_instance_15);
        if (tmp_called_instance_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_14);

            exception_lineno = 44;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 44;
        tmp_args_element_name_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_14, mod_consts[41]);
        Py_DECREF(tmp_called_instance_14);
        if (tmp_args_element_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_14);

            exception_lineno = 44;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 44;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, tmp_args_element_name_11);
        Py_DECREF(tmp_called_name_14);
        Py_DECREF(tmp_args_element_name_11);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_name_15;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_expression_name_22;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_name_12;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 45;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_22 = par_self;
        tmp_expression_name_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[31]);
        if (tmp_expression_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[42]);
        Py_DECREF(tmp_expression_name_21);
        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_sizePolicy == NULL) {
            Py_DECREF(tmp_called_name_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 45;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_12 = var_sizePolicy;
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 45;
        tmp_call_result_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_15, tmp_args_element_name_12);
        Py_DECREF(tmp_called_name_15);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_instance_16;
        PyObject *tmp_expression_name_23;
        PyObject *tmp_call_result_19;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 46;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_23 = par_self;
        tmp_called_instance_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[31]);
        if (tmp_called_instance_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 46;
        tmp_call_result_19 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_16, mod_consts[43], &PyTuple_GET_ITEM(mod_consts[27], 0));

        Py_DECREF(tmp_called_instance_16);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_name_16;
        PyObject *tmp_expression_name_24;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_expression_name_26;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 47;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_25 = par_self;
        tmp_expression_name_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[31]);
        if (tmp_expression_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[44]);
        Py_DECREF(tmp_expression_name_24);
        if (tmp_called_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_26 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_name_26 == NULL)) {
            tmp_expression_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_expression_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_16);

            exception_lineno = 47;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[46]);
        if (tmp_args_element_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_16);

            exception_lineno = 47;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 47;
        tmp_call_result_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_16, tmp_args_element_name_13);
        Py_DECREF(tmp_called_name_16);
        Py_DECREF(tmp_args_element_name_13);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_name_17;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_expression_name_28;
        PyObject *tmp_call_result_21;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_expression_name_29;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 48;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_28 = par_self;
        tmp_expression_name_27 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[31]);
        if (tmp_expression_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[47]);
        Py_DECREF(tmp_expression_name_27);
        if (tmp_called_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_29 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_name_29 == NULL)) {
            tmp_expression_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_expression_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_17);

            exception_lineno = 48;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[48]);
        if (tmp_args_element_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_17);

            exception_lineno = 48;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 48;
        tmp_call_result_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_17, tmp_args_element_name_14);
        Py_DECREF(tmp_called_name_17);
        Py_DECREF(tmp_args_element_name_14);
        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_name_18;
        PyObject *tmp_expression_name_30;
        PyObject *tmp_expression_name_31;
        PyObject *tmp_call_result_22;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_expression_name_32;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_31 = par_self;
        tmp_expression_name_30 = LOOKUP_ATTRIBUTE(tmp_expression_name_31, mod_consts[31]);
        if (tmp_expression_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, mod_consts[49]);
        Py_DECREF(tmp_expression_name_30);
        if (tmp_called_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_32 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_name_32 == NULL)) {
            tmp_expression_name_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_expression_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_18);

            exception_lineno = 49;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_32, mod_consts[50]);
        if (tmp_args_element_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_18);

            exception_lineno = 49;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 49;
        tmp_call_result_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_18, tmp_args_element_name_15);
        Py_DECREF(tmp_called_name_18);
        Py_DECREF(tmp_args_element_name_15);
        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_instance_17;
        PyObject *tmp_expression_name_33;
        PyObject *tmp_call_result_23;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 50;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_33 = par_self;
        tmp_called_instance_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_33, mod_consts[31]);
        if (tmp_called_instance_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 50;
        tmp_call_result_23 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_17, mod_consts[51], &PyTuple_GET_ITEM(mod_consts[52], 0));

        Py_DECREF(tmp_called_instance_17);
        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_name_19;
        PyObject *tmp_expression_name_34;
        PyObject *tmp_expression_name_35;
        PyObject *tmp_call_result_24;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_expression_name_36;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 52;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_35 = par_self;
        tmp_expression_name_34 = LOOKUP_ATTRIBUTE(tmp_expression_name_35, mod_consts[17]);
        if (tmp_expression_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_34, mod_consts[29]);
        Py_DECREF(tmp_expression_name_34);
        if (tmp_called_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 52;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_36 = par_self;
        tmp_args_element_name_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_36, mod_consts[31]);
        if (tmp_args_element_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_19);

            exception_lineno = 52;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 52;
        tmp_call_result_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_19, tmp_args_element_name_16);
        Py_DECREF(tmp_called_name_19);
        Py_DECREF(tmp_args_element_name_16);
        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_name_20;
        PyObject *tmp_expression_name_37;
        PyObject *tmp_expression_name_38;
        PyObject *tmp_call_result_25;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_expression_name_39;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 55;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_38 = par_self;
        tmp_expression_name_37 = LOOKUP_ATTRIBUTE(tmp_expression_name_38, mod_consts[14]);
        if (tmp_expression_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_37, mod_consts[53]);
        Py_DECREF(tmp_expression_name_37);
        if (tmp_called_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_20);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 55;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_39 = par_self;
        tmp_args_element_name_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_39, mod_consts[17]);
        if (tmp_args_element_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);

            exception_lineno = 55;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 55;
        tmp_call_result_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_20, tmp_args_element_name_17);
        Py_DECREF(tmp_called_name_20);
        Py_DECREF(tmp_args_element_name_17);
        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_called_name_21;
        PyObject *tmp_assattr_target_6;
        tmp_called_name_21 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_name_21 == NULL)) {
            tmp_called_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 57;
        tmp_assattr_name_6 = CALL_FUNCTION_NO_ARGS(tmp_called_name_21);
        if (tmp_assattr_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[54], tmp_assattr_name_6);
        Py_DECREF(tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_18;
        PyObject *tmp_expression_name_40;
        PyObject *tmp_call_result_26;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 58;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_40 = par_self;
        tmp_called_instance_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_40, mod_consts[54]);
        if (tmp_called_instance_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 58;
        tmp_call_result_26 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_18, mod_consts[2], &PyTuple_GET_ITEM(mod_consts[55], 0));

        Py_DECREF(tmp_called_instance_18);
        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_called_name_22;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_expression_name_41;
        PyObject *tmp_assattr_target_7;
        tmp_called_name_22 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_name_22 == NULL)) {
            tmp_called_name_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_41 = par_self;
        tmp_args_element_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_41, mod_consts[10]);
        if (tmp_args_element_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 59;
        tmp_assattr_name_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_22, tmp_args_element_name_18);
        Py_DECREF(tmp_args_element_name_18);
        if (tmp_assattr_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[57], tmp_assattr_name_7);
        Py_DECREF(tmp_assattr_name_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_19;
        PyObject *tmp_expression_name_42;
        PyObject *tmp_call_result_27;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 60;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_42 = par_self;
        tmp_called_instance_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_42, mod_consts[57]);
        if (tmp_called_instance_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 60;
        tmp_call_result_27 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_19, mod_consts[2], &PyTuple_GET_ITEM(mod_consts[58], 0));

        Py_DECREF(tmp_called_instance_19);
        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_23;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_expression_name_43;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_expression_name_44;
        tmp_called_name_23 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_name_23 == NULL)) {
            tmp_called_name_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_called_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_43 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_name_43 == NULL)) {
            tmp_expression_name_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_expression_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_43, mod_consts[59]);
        if (tmp_args_element_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_44 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_name_44 == NULL)) {
            tmp_expression_name_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_expression_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_19);

            exception_lineno = 61;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_44, mod_consts[59]);
        if (tmp_args_element_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_19);

            exception_lineno = 61;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 61;
        {
            PyObject *call_args[] = {tmp_args_element_name_19, tmp_args_element_name_20};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_23, call_args);
        }

        Py_DECREF(tmp_args_element_name_19);
        Py_DECREF(tmp_args_element_name_20);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sizePolicy1 == NULL);
        var_sizePolicy1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_20;
        PyObject *tmp_call_result_28;
        CHECK_OBJECT(var_sizePolicy1);
        tmp_called_instance_20 = var_sizePolicy1;
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 62;
        tmp_call_result_28 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_20, mod_consts[36], &PyTuple_GET_ITEM(mod_consts[37], 0));

        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        PyObject *tmp_called_instance_21;
        PyObject *tmp_call_result_29;
        if (var_sizePolicy1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 63;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_21 = var_sizePolicy1;
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 63;
        tmp_call_result_29 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_21, mod_consts[39], &PyTuple_GET_ITEM(mod_consts[37], 0));

        if (tmp_call_result_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_called_name_24;
        PyObject *tmp_expression_name_45;
        PyObject *tmp_call_result_30;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_called_instance_22;
        PyObject *tmp_called_instance_23;
        PyObject *tmp_expression_name_46;
        if (var_sizePolicy1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 64;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_45 = var_sizePolicy1;
        tmp_called_name_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_45, mod_consts[40]);
        if (tmp_called_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_24);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 64;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_46 = par_self;
        tmp_called_instance_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_46, mod_consts[57]);
        if (tmp_called_instance_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_24);

            exception_lineno = 64;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 64;
        tmp_called_instance_22 = CALL_METHOD_NO_ARGS(tmp_called_instance_23, mod_consts[38]);
        Py_DECREF(tmp_called_instance_23);
        if (tmp_called_instance_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_24);

            exception_lineno = 64;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 64;
        tmp_args_element_name_21 = CALL_METHOD_NO_ARGS(tmp_called_instance_22, mod_consts[41]);
        Py_DECREF(tmp_called_instance_22);
        if (tmp_args_element_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_24);

            exception_lineno = 64;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 64;
        tmp_call_result_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_24, tmp_args_element_name_21);
        Py_DECREF(tmp_called_name_24);
        Py_DECREF(tmp_args_element_name_21);
        if (tmp_call_result_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_30);
    }
    {
        PyObject *tmp_called_name_25;
        PyObject *tmp_expression_name_47;
        PyObject *tmp_expression_name_48;
        PyObject *tmp_call_result_31;
        PyObject *tmp_args_element_name_22;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 65;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_48 = par_self;
        tmp_expression_name_47 = LOOKUP_ATTRIBUTE(tmp_expression_name_48, mod_consts[57]);
        if (tmp_expression_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_47, mod_consts[42]);
        Py_DECREF(tmp_expression_name_47);
        if (tmp_called_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_sizePolicy1 == NULL) {
            Py_DECREF(tmp_called_name_25);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 65;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_22 = var_sizePolicy1;
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 65;
        tmp_call_result_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_25, tmp_args_element_name_22);
        Py_DECREF(tmp_called_name_25);
        if (tmp_call_result_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_31);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_26;
        tmp_called_name_26 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_name_26 == NULL)) {
            tmp_called_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 66;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tmp_called_name_26);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_font1 == NULL);
        var_font1 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_instance_24;
        PyObject *tmp_call_result_32;
        CHECK_OBJECT(var_font1);
        tmp_called_instance_24 = var_font1;
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 67;
        tmp_call_result_32 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_24, mod_consts[61], &PyTuple_GET_ITEM(mod_consts[62], 0));

        if (tmp_call_result_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_32);
    }
    {
        PyObject *tmp_called_name_27;
        PyObject *tmp_expression_name_49;
        PyObject *tmp_expression_name_50;
        PyObject *tmp_call_result_33;
        PyObject *tmp_args_element_name_23;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_50 = par_self;
        tmp_expression_name_49 = LOOKUP_ATTRIBUTE(tmp_expression_name_50, mod_consts[57]);
        if (tmp_expression_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_27 = LOOKUP_ATTRIBUTE(tmp_expression_name_49, mod_consts[28]);
        Py_DECREF(tmp_expression_name_49);
        if (tmp_called_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_font1 == NULL) {
            Py_DECREF(tmp_called_name_27);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_23 = var_font1;
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 68;
        tmp_call_result_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_27, tmp_args_element_name_23);
        Py_DECREF(tmp_called_name_27);
        if (tmp_call_result_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_33);
    }
    {
        PyObject *tmp_called_instance_25;
        PyObject *tmp_expression_name_51;
        PyObject *tmp_call_result_34;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 69;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_51 = par_self;
        tmp_called_instance_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_51, mod_consts[57]);
        if (tmp_called_instance_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 69;
        tmp_call_result_34 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_25, mod_consts[64], &PyTuple_GET_ITEM(mod_consts[65], 0));

        Py_DECREF(tmp_called_instance_25);
        if (tmp_call_result_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_34);
    }
    {
        PyObject *tmp_called_name_28;
        PyObject *tmp_expression_name_52;
        PyObject *tmp_expression_name_53;
        PyObject *tmp_call_result_35;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_expression_name_54;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 71;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_53 = par_self;
        tmp_expression_name_52 = LOOKUP_ATTRIBUTE(tmp_expression_name_53, mod_consts[54]);
        if (tmp_expression_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_28 = LOOKUP_ATTRIBUTE(tmp_expression_name_52, mod_consts[29]);
        Py_DECREF(tmp_expression_name_52);
        if (tmp_called_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_28);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 71;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_54 = par_self;
        tmp_args_element_name_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_54, mod_consts[57]);
        if (tmp_args_element_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_28);

            exception_lineno = 71;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 71;
        tmp_call_result_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_28, tmp_args_element_name_24);
        Py_DECREF(tmp_called_name_28);
        Py_DECREF(tmp_args_element_name_24);
        if (tmp_call_result_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_35);
    }
    {
        PyObject *tmp_called_name_29;
        PyObject *tmp_expression_name_55;
        PyObject *tmp_expression_name_56;
        PyObject *tmp_call_result_36;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_expression_name_57;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 74;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_56 = par_self;
        tmp_expression_name_55 = LOOKUP_ATTRIBUTE(tmp_expression_name_56, mod_consts[14]);
        if (tmp_expression_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_29 = LOOKUP_ATTRIBUTE(tmp_expression_name_55, mod_consts[53]);
        Py_DECREF(tmp_expression_name_55);
        if (tmp_called_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_29);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 74;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_57 = par_self;
        tmp_args_element_name_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_57, mod_consts[54]);
        if (tmp_args_element_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_29);

            exception_lineno = 74;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 74;
        tmp_call_result_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_29, tmp_args_element_name_25);
        Py_DECREF(tmp_called_name_29);
        Py_DECREF(tmp_args_element_name_25);
        if (tmp_call_result_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_36);
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_called_name_30;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_expression_name_58;
        PyObject *tmp_assattr_target_8;
        tmp_called_name_30 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_called_name_30 == NULL)) {
            tmp_called_name_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_called_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 76;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_58 = par_self;
        tmp_args_element_name_26 = LOOKUP_ATTRIBUTE(tmp_expression_name_58, mod_consts[10]);
        if (tmp_args_element_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 76;
        tmp_assattr_name_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_30, tmp_args_element_name_26);
        Py_DECREF(tmp_args_element_name_26);
        if (tmp_assattr_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 76;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[67], tmp_assattr_name_8);
        Py_DECREF(tmp_assattr_name_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_26;
        PyObject *tmp_expression_name_59;
        PyObject *tmp_call_result_37;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 77;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_59 = par_self;
        tmp_called_instance_26 = LOOKUP_ATTRIBUTE(tmp_expression_name_59, mod_consts[67]);
        if (tmp_called_instance_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 77;
        tmp_call_result_37 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_26, mod_consts[2], &PyTuple_GET_ITEM(mod_consts[68], 0));

        Py_DECREF(tmp_called_instance_26);
        if (tmp_call_result_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_37);
    }
    {
        PyObject *tmp_called_name_31;
        PyObject *tmp_expression_name_60;
        PyObject *tmp_expression_name_61;
        PyObject *tmp_call_result_38;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_called_name_32;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 78;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_61 = par_self;
        tmp_expression_name_60 = LOOKUP_ATTRIBUTE(tmp_expression_name_61, mod_consts[67]);
        if (tmp_expression_name_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_31 = LOOKUP_ATTRIBUTE(tmp_expression_name_60, mod_consts[8]);
        Py_DECREF(tmp_expression_name_60);
        if (tmp_called_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_32 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_name_32 == NULL)) {
            tmp_called_name_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_31);

            exception_lineno = 78;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 78;
        tmp_args_element_name_27 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_32, &PyTuple_GET_ITEM(mod_consts[69], 0));

        if (tmp_args_element_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_31);

            exception_lineno = 78;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 78;
        tmp_call_result_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_31, tmp_args_element_name_27);
        Py_DECREF(tmp_called_name_31);
        Py_DECREF(tmp_args_element_name_27);
        if (tmp_call_result_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_38);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_33;
        tmp_called_name_33 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_name_33 == NULL)) {
            tmp_called_name_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 79;
        tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tmp_called_name_33);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_font2 == NULL);
        var_font2 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_instance_27;
        PyObject *tmp_call_result_39;
        CHECK_OBJECT(var_font2);
        tmp_called_instance_27 = var_font2;
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 80;
        tmp_call_result_39 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_27, mod_consts[61], &PyTuple_GET_ITEM(mod_consts[62], 0));

        if (tmp_call_result_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_39);
    }
    {
        PyObject *tmp_called_instance_28;
        PyObject *tmp_call_result_40;
        if (var_font2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[70]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 81;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_28 = var_font2;
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 81;
        tmp_call_result_40 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_28, mod_consts[23], &PyTuple_GET_ITEM(mod_consts[71], 0));

        if (tmp_call_result_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_40);
    }
    {
        PyObject *tmp_called_instance_29;
        PyObject *tmp_call_result_41;
        if (var_font2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[70]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 82;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_29 = var_font2;
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 82;
        tmp_call_result_41 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_29, mod_consts[26], &PyTuple_GET_ITEM(mod_consts[27], 0));

        if (tmp_call_result_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_41);
    }
    {
        PyObject *tmp_called_name_34;
        PyObject *tmp_expression_name_62;
        PyObject *tmp_expression_name_63;
        PyObject *tmp_call_result_42;
        PyObject *tmp_args_element_name_28;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 83;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_63 = par_self;
        tmp_expression_name_62 = LOOKUP_ATTRIBUTE(tmp_expression_name_63, mod_consts[67]);
        if (tmp_expression_name_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_34 = LOOKUP_ATTRIBUTE(tmp_expression_name_62, mod_consts[28]);
        Py_DECREF(tmp_expression_name_62);
        if (tmp_called_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_font2 == NULL) {
            Py_DECREF(tmp_called_name_34);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[70]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 83;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_28 = var_font2;
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 83;
        tmp_call_result_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_34, tmp_args_element_name_28);
        Py_DECREF(tmp_called_name_34);
        if (tmp_call_result_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_42);
    }
    {
        PyObject *tmp_called_name_35;
        PyObject *tmp_expression_name_64;
        PyObject *tmp_expression_name_65;
        PyObject *tmp_call_result_43;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_expression_name_66;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 84;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_65 = par_self;
        tmp_expression_name_64 = LOOKUP_ATTRIBUTE(tmp_expression_name_65, mod_consts[67]);
        if (tmp_expression_name_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_35 = LOOKUP_ATTRIBUTE(tmp_expression_name_64, mod_consts[47]);
        Py_DECREF(tmp_expression_name_64);
        if (tmp_called_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_66 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_name_66 == NULL)) {
            tmp_expression_name_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_expression_name_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_35);

            exception_lineno = 84;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_29 = LOOKUP_ATTRIBUTE(tmp_expression_name_66, mod_consts[72]);
        if (tmp_args_element_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_35);

            exception_lineno = 84;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 84;
        tmp_call_result_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_35, tmp_args_element_name_29);
        Py_DECREF(tmp_called_name_35);
        Py_DECREF(tmp_args_element_name_29);
        if (tmp_call_result_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_43);
    }
    {
        PyObject *tmp_called_instance_30;
        PyObject *tmp_expression_name_67;
        PyObject *tmp_call_result_44;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 85;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_67 = par_self;
        tmp_called_instance_30 = LOOKUP_ATTRIBUTE(tmp_expression_name_67, mod_consts[67]);
        if (tmp_called_instance_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 85;
        tmp_call_result_44 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_30, mod_consts[73], &PyTuple_GET_ITEM(mod_consts[74], 0));

        Py_DECREF(tmp_called_instance_30);
        if (tmp_call_result_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_44);
    }
    {
        PyObject *tmp_called_name_36;
        PyObject *tmp_expression_name_68;
        PyObject *tmp_expression_name_69;
        PyObject *tmp_call_result_45;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_expression_name_70;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 87;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_69 = par_self;
        tmp_expression_name_68 = LOOKUP_ATTRIBUTE(tmp_expression_name_69, mod_consts[14]);
        if (tmp_expression_name_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_36 = LOOKUP_ATTRIBUTE(tmp_expression_name_68, mod_consts[29]);
        Py_DECREF(tmp_expression_name_68);
        if (tmp_called_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_36);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 87;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_70 = par_self;
        tmp_args_element_name_30 = LOOKUP_ATTRIBUTE(tmp_expression_name_70, mod_consts[67]);
        if (tmp_args_element_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_36);

            exception_lineno = 87;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 87;
        tmp_call_result_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_36, tmp_args_element_name_30);
        Py_DECREF(tmp_called_name_36);
        Py_DECREF(tmp_args_element_name_30);
        if (tmp_call_result_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_45);
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_called_name_37;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_expression_name_71;
        PyObject *tmp_assattr_target_9;
        tmp_called_name_37 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_called_name_37 == NULL)) {
            tmp_called_name_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_called_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 89;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_71 = par_self;
        tmp_args_element_name_31 = LOOKUP_ATTRIBUTE(tmp_expression_name_71, mod_consts[10]);
        if (tmp_args_element_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 89;
        tmp_assattr_name_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_37, tmp_args_element_name_31);
        Py_DECREF(tmp_args_element_name_31);
        if (tmp_assattr_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 89;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[75], tmp_assattr_name_9);
        Py_DECREF(tmp_assattr_name_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_31;
        PyObject *tmp_expression_name_72;
        PyObject *tmp_call_result_46;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 90;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_72 = par_self;
        tmp_called_instance_31 = LOOKUP_ATTRIBUTE(tmp_expression_name_72, mod_consts[75]);
        if (tmp_called_instance_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 90;
        tmp_call_result_46 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_31, mod_consts[2], &PyTuple_GET_ITEM(mod_consts[76], 0));

        Py_DECREF(tmp_called_instance_31);
        if (tmp_call_result_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_46);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_38;
        tmp_called_name_38 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_name_38 == NULL)) {
            tmp_called_name_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 91;
        tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS(tmp_called_name_38);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_font3 == NULL);
        var_font3 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_instance_32;
        PyObject *tmp_call_result_47;
        CHECK_OBJECT(var_font3);
        tmp_called_instance_32 = var_font3;
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 92;
        tmp_call_result_47 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_32, mod_consts[61], &PyTuple_GET_ITEM(mod_consts[62], 0));

        if (tmp_call_result_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_47);
    }
    {
        PyObject *tmp_called_instance_33;
        PyObject *tmp_call_result_48;
        if (var_font3 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 93;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_33 = var_font3;
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 93;
        tmp_call_result_48 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_33, mod_consts[23], &PyTuple_GET_ITEM(mod_consts[78], 0));

        if (tmp_call_result_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_48);
    }
    {
        PyObject *tmp_called_name_39;
        PyObject *tmp_expression_name_73;
        PyObject *tmp_expression_name_74;
        PyObject *tmp_call_result_49;
        PyObject *tmp_args_element_name_32;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 94;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_74 = par_self;
        tmp_expression_name_73 = LOOKUP_ATTRIBUTE(tmp_expression_name_74, mod_consts[75]);
        if (tmp_expression_name_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_39 = LOOKUP_ATTRIBUTE(tmp_expression_name_73, mod_consts[28]);
        Py_DECREF(tmp_expression_name_73);
        if (tmp_called_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_font3 == NULL) {
            Py_DECREF(tmp_called_name_39);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 94;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_32 = var_font3;
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 94;
        tmp_call_result_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_39, tmp_args_element_name_32);
        Py_DECREF(tmp_called_name_39);
        if (tmp_call_result_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_49);
    }
    {
        PyObject *tmp_called_name_40;
        PyObject *tmp_expression_name_75;
        PyObject *tmp_expression_name_76;
        PyObject *tmp_call_result_50;
        PyObject *tmp_args_element_name_33;
        PyObject *tmp_expression_name_77;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 96;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_76 = par_self;
        tmp_expression_name_75 = LOOKUP_ATTRIBUTE(tmp_expression_name_76, mod_consts[14]);
        if (tmp_expression_name_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_40 = LOOKUP_ATTRIBUTE(tmp_expression_name_75, mod_consts[29]);
        Py_DECREF(tmp_expression_name_75);
        if (tmp_called_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_40);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 96;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_77 = par_self;
        tmp_args_element_name_33 = LOOKUP_ATTRIBUTE(tmp_expression_name_77, mod_consts[75]);
        if (tmp_args_element_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_40);

            exception_lineno = 96;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 96;
        tmp_call_result_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_40, tmp_args_element_name_33);
        Py_DECREF(tmp_called_name_40);
        Py_DECREF(tmp_args_element_name_33);
        if (tmp_call_result_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_50);
    }
    {
        PyObject *tmp_called_name_41;
        PyObject *tmp_expression_name_78;
        PyObject *tmp_call_result_51;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_expression_name_79;
        if (par_Search == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 98;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_78 = par_Search;
        tmp_called_name_41 = LOOKUP_ATTRIBUTE(tmp_expression_name_78, mod_consts[79]);
        if (tmp_called_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_41);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 98;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_79 = par_self;
        tmp_args_element_name_34 = LOOKUP_ATTRIBUTE(tmp_expression_name_79, mod_consts[10]);
        if (tmp_args_element_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_41);

            exception_lineno = 98;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 98;
        tmp_call_result_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_41, tmp_args_element_name_34);
        Py_DECREF(tmp_called_name_41);
        Py_DECREF(tmp_args_element_name_34);
        if (tmp_call_result_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_51);
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_called_name_42;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_assattr_target_10;
        tmp_called_name_42 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_name_42 == NULL)) {
            tmp_called_name_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_called_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_Search == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 99;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_35 = par_Search;
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 99;
        tmp_assattr_name_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_42, tmp_args_element_name_35);
        if (tmp_assattr_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 99;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[81], tmp_assattr_name_10);
        Py_DECREF(tmp_assattr_name_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_34;
        PyObject *tmp_expression_name_80;
        PyObject *tmp_call_result_52;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 100;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_80 = par_self;
        tmp_called_instance_34 = LOOKUP_ATTRIBUTE(tmp_expression_name_80, mod_consts[81]);
        if (tmp_called_instance_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 100;
        tmp_call_result_52 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_34, mod_consts[2], &PyTuple_GET_ITEM(mod_consts[82], 0));

        Py_DECREF(tmp_called_instance_34);
        if (tmp_call_result_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_52);
    }
    {
        PyObject *tmp_called_name_43;
        PyObject *tmp_expression_name_81;
        PyObject *tmp_call_result_53;
        PyObject *tmp_args_element_name_36;
        PyObject *tmp_expression_name_82;
        if (par_Search == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 101;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_81 = par_Search;
        tmp_called_name_43 = LOOKUP_ATTRIBUTE(tmp_expression_name_81, mod_consts[83]);
        if (tmp_called_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_43);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 101;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_82 = par_self;
        tmp_args_element_name_36 = LOOKUP_ATTRIBUTE(tmp_expression_name_82, mod_consts[81]);
        if (tmp_args_element_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_43);

            exception_lineno = 101;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 101;
        tmp_call_result_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_43, tmp_args_element_name_36);
        Py_DECREF(tmp_called_name_43);
        Py_DECREF(tmp_args_element_name_36);
        if (tmp_call_result_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_53);
    }
    {
        PyObject *tmp_called_name_44;
        PyObject *tmp_expression_name_83;
        PyObject *tmp_call_result_54;
        PyObject *tmp_args_element_name_37;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 103;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_83 = par_self;
        tmp_called_name_44 = LOOKUP_ATTRIBUTE(tmp_expression_name_83, mod_consts[84]);
        if (tmp_called_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_Search == NULL) {
            Py_DECREF(tmp_called_name_44);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 103;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_37 = par_Search;
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 103;
        tmp_call_result_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_44, tmp_args_element_name_37);
        Py_DECREF(tmp_called_name_44);
        if (tmp_call_result_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_54);
    }
    {
        PyObject *tmp_called_name_45;
        PyObject *tmp_expression_name_84;
        PyObject *tmp_call_result_55;
        PyObject *tmp_args_element_name_38;
        tmp_expression_name_84 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_expression_name_84 == NULL)) {
            tmp_expression_name_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_expression_name_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_45 = LOOKUP_ATTRIBUTE(tmp_expression_name_84, mod_consts[86]);
        if (tmp_called_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_Search == NULL) {
            Py_DECREF(tmp_called_name_45);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 105;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_38 = par_Search;
        frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame.f_lineno = 105;
        tmp_call_result_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_45, tmp_args_element_name_38);
        Py_DECREF(tmp_called_name_45);
        if (tmp_call_result_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_55);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a08fb3b81db49044d341b95f0a0d8bee);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a08fb3b81db49044d341b95f0a0d8bee);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a08fb3b81db49044d341b95f0a0d8bee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a08fb3b81db49044d341b95f0a0d8bee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a08fb3b81db49044d341b95f0a0d8bee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a08fb3b81db49044d341b95f0a0d8bee,
        type_description_1,
        par_self,
        par_Search,
        var_font,
        var_sizePolicy,
        var_sizePolicy1,
        var_font1,
        var_font2,
        var_font3
    );


    // Release cached frame if used for exception.
    if (frame_a08fb3b81db49044d341b95f0a0d8bee == cache_frame_a08fb3b81db49044d341b95f0a0d8bee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a08fb3b81db49044d341b95f0a0d8bee);
        cache_frame_a08fb3b81db49044d341b95f0a0d8bee = NULL;
    }

    assertFrameObject(frame_a08fb3b81db49044d341b95f0a0d8bee);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_Search);
    par_Search = NULL;
    Py_XDECREF(var_font);
    var_font = NULL;
    Py_XDECREF(var_sizePolicy);
    var_sizePolicy = NULL;
    Py_XDECREF(var_sizePolicy1);
    var_sizePolicy1 = NULL;
    Py_XDECREF(var_font1);
    var_font1 = NULL;
    Py_XDECREF(var_font2);
    var_font2 = NULL;
    Py_XDECREF(var_font3);
    var_font3 = NULL;
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

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_Search);
    par_Search = NULL;
    Py_XDECREF(var_font);
    var_font = NULL;
    Py_XDECREF(var_sizePolicy);
    var_sizePolicy = NULL;
    Py_XDECREF(var_sizePolicy1);
    var_sizePolicy1 = NULL;
    Py_XDECREF(var_font1);
    var_font1 = NULL;
    Py_XDECREF(var_font2);
    var_font2 = NULL;
    Py_XDECREF(var_font3);
    var_font3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_need$UI$$$function__2_retranslateUi(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_Search = python_pars[1];
    struct Nuitka_FrameObject *frame_8cb313cd6fa39a7b0d0ed0c45bba4659;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8cb313cd6fa39a7b0d0ed0c45bba4659 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8cb313cd6fa39a7b0d0ed0c45bba4659)) {
        Py_XDECREF(cache_frame_8cb313cd6fa39a7b0d0ed0c45bba4659);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8cb313cd6fa39a7b0d0ed0c45bba4659 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8cb313cd6fa39a7b0d0ed0c45bba4659 = MAKE_FUNCTION_FRAME(codeobj_8cb313cd6fa39a7b0d0ed0c45bba4659, module_need$UI, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8cb313cd6fa39a7b0d0ed0c45bba4659->m_type_description == NULL);
    frame_8cb313cd6fa39a7b0d0ed0c45bba4659 = cache_frame_8cb313cd6fa39a7b0d0ed0c45bba4659;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8cb313cd6fa39a7b0d0ed0c45bba4659);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8cb313cd6fa39a7b0d0ed0c45bba4659) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_Search);
        tmp_expression_name_1 = par_Search;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[87]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8cb313cd6fa39a7b0d0ed0c45bba4659->m_frame.f_lineno = 109;
        tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_1, mod_consts[89], &PyTuple_GET_ITEM(mod_consts[90], 0));

        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8cb313cd6fa39a7b0d0ed0c45bba4659->m_frame.f_lineno = 109;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_3 = par_self;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[20]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[91]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8cb313cd6fa39a7b0d0ed0c45bba4659->m_frame.f_lineno = 110;
        tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_2, mod_consts[89], &PyTuple_GET_ITEM(mod_consts[92], 0));

        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8cb313cd6fa39a7b0d0ed0c45bba4659->m_frame.f_lineno = 110;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_call_result_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 112;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[31]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8cb313cd6fa39a7b0d0ed0c45bba4659->m_frame.f_lineno = 112;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, mod_consts[93], &PyTuple_GET_ITEM(mod_consts[65], 0));

        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_call_result_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 115;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = par_self;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[31]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8cb313cd6fa39a7b0d0ed0c45bba4659->m_frame.f_lineno = 115;
        tmp_call_result_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, mod_consts[94], &PyTuple_GET_ITEM(mod_consts[65], 0));

        Py_DECREF(tmp_called_instance_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_call_result_5;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 118;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_self;
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[31]);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8cb313cd6fa39a7b0d0ed0c45bba4659->m_frame.f_lineno = 118;
        tmp_call_result_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, mod_consts[95], &PyTuple_GET_ITEM(mod_consts[65], 0));

        Py_DECREF(tmp_called_instance_5);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_call_result_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 120;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = par_self;
        tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[31]);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8cb313cd6fa39a7b0d0ed0c45bba4659->m_frame.f_lineno = 120;
        tmp_call_result_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, mod_consts[96], &PyTuple_GET_ITEM(mod_consts[65], 0));

        Py_DECREF(tmp_called_instance_6);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_call_result_7;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 121;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = par_self;
        tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[31]);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8cb313cd6fa39a7b0d0ed0c45bba4659->m_frame.f_lineno = 121;
        tmp_call_result_7 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_7, mod_consts[91], &PyTuple_GET_ITEM(mod_consts[65], 0));

        Py_DECREF(tmp_called_instance_7);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_instance_8;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 122;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_10 = par_self;
        tmp_expression_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[31]);
        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[97]);
        Py_DECREF(tmp_expression_name_9);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 122;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8cb313cd6fa39a7b0d0ed0c45bba4659->m_frame.f_lineno = 122;
        tmp_args_element_name_3 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_8, mod_consts[89], &PyTuple_GET_ITEM(mod_consts[98], 0));

        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 122;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8cb313cd6fa39a7b0d0ed0c45bba4659->m_frame.f_lineno = 122;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_instance_9;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_12 = par_self;
        tmp_expression_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[57]);
        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[91]);
        Py_DECREF(tmp_expression_name_11);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8cb313cd6fa39a7b0d0ed0c45bba4659->m_frame.f_lineno = 123;
        tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_9, mod_consts[89], &PyTuple_GET_ITEM(mod_consts[99], 0));

        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8cb313cd6fa39a7b0d0ed0c45bba4659->m_frame.f_lineno = 123;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_4);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_instance_10;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 124;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_14 = par_self;
        tmp_expression_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[67]);
        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[100]);
        Py_DECREF(tmp_expression_name_13);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 124;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8cb313cd6fa39a7b0d0ed0c45bba4659->m_frame.f_lineno = 124;
        tmp_args_element_name_5 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_10, mod_consts[89], &PyTuple_GET_ITEM(mod_consts[101], 0));

        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 124;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8cb313cd6fa39a7b0d0ed0c45bba4659->m_frame.f_lineno = 124;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_5);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8cb313cd6fa39a7b0d0ed0c45bba4659);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8cb313cd6fa39a7b0d0ed0c45bba4659);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8cb313cd6fa39a7b0d0ed0c45bba4659, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8cb313cd6fa39a7b0d0ed0c45bba4659->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8cb313cd6fa39a7b0d0ed0c45bba4659, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8cb313cd6fa39a7b0d0ed0c45bba4659,
        type_description_1,
        par_self,
        par_Search
    );


    // Release cached frame if used for exception.
    if (frame_8cb313cd6fa39a7b0d0ed0c45bba4659 == cache_frame_8cb313cd6fa39a7b0d0ed0c45bba4659) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8cb313cd6fa39a7b0d0ed0c45bba4659);
        cache_frame_8cb313cd6fa39a7b0d0ed0c45bba4659 = NULL;
    }

    assertFrameObject(frame_8cb313cd6fa39a7b0d0ed0c45bba4659);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_Search);
    par_Search = NULL;
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

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_Search);
    par_Search = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_need$UI$$$function__1_setupUi() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_need$UI$$$function__1_setupUi,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        mod_consts[126],
#endif
        codeobj_a08fb3b81db49044d341b95f0a0d8bee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_need$UI,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_need$UI$$$function__2_retranslateUi() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_need$UI$$$function__2_retranslateUi,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        mod_consts[127],
#endif
        codeobj_8cb313cd6fa39a7b0d0ed0c45bba4659,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_need$UI,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill

function_impl_code functable_need$UI[] = {
    impl_need$UI$$$function__1_setupUi,
    impl_need$UI$$$function__2_retranslateUi,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_need$UI;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_need$UI) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_need$UI[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_need$UI,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Actual name might be different when loaded as a package.
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "need.UI";

// Internal entry point for module code.
PyObject *modulecode_need$UI(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_need$UI = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 0x300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("need.UI: Skipping module init, already done.\n");
#endif

        return module_need$UI;
    } else {
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

#if PYTHON_VERSION < 0x300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 0x270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("need.UI: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("need.UI: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("need.UI: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initneed$UI\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_need$UI = MODULE_DICT(module_need$UI);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        PyObject *function_tables = PyObject_GetAttrString((PyObject *)builtin_module, "compiled_function_tables");
        if (function_tables == NULL) {
            DROP_ERROR_OCCURRED();
            function_tables = PyDict_New();
        }
        PyObject_SetAttrString((PyObject *)builtin_module, "compiled_function_tables", function_tables);
        PyObject *funcs = PyTuple_New(2);
        PyTuple_SET_ITEM(funcs, 0, PyCFunction_New(&_method_def_reduce_compiled_function, NULL));
        PyTuple_SET_ITEM(funcs, 1, PyCFunction_New(&_method_def_create_compiled_function, NULL));
        PyDict_SetItemString(function_tables, module_full_name, funcs);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_need$UI,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_need$UI,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_need$UI,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_need$UI,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_need$UI,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_need$UI);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_need$UI, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_need$UI, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_need$UI, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_need$UI);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_need$UI, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_a863c145727c0dcbbb0a6342e24dc8a6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_need$UI$$$class__1_Ui_Search_16 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_de1ca4734cd532dfab4f03e474e1ec7f_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_de1ca4734cd532dfab4f03e474e1ec7f_2 = NULL;
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
        UPDATE_STRING_DICT0(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[103];
        UPDATE_STRING_DICT0(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_a863c145727c0dcbbb0a6342e24dc8a6 = MAKE_MODULE_FRAME(codeobj_a863c145727c0dcbbb0a6342e24dc8a6, module_need$UI);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_a863c145727c0dcbbb0a6342e24dc8a6);
    assert(Py_REFCNT(frame_a863c145727c0dcbbb0a6342e24dc8a6) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[103];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[106], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[107], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_3);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[109];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_need$UI;
        tmp_locals_arg_name_1 = (PyObject *)moduledict_need$UI;
        tmp_fromlist_name_1 = mod_consts[110];
        tmp_level_name_1 = mod_consts[111];
        frame_a863c145727c0dcbbb0a6342e24dc8a6->m_frame.f_lineno = 11;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_need$UI, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[112];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_need$UI;
        tmp_locals_arg_name_2 = (PyObject *)moduledict_need$UI;
        tmp_fromlist_name_2 = mod_consts[110];
        tmp_level_name_2 = mod_consts[111];
        frame_a863c145727c0dcbbb0a6342e24dc8a6->m_frame.f_lineno = 12;
        tmp_star_imported_2 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_star_imported_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_need$UI, true, tmp_star_imported_2);
        Py_DECREF(tmp_star_imported_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[113];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_need$UI;
        tmp_locals_arg_name_3 = (PyObject *)moduledict_need$UI;
        tmp_fromlist_name_3 = mod_consts[110];
        tmp_level_name_3 = mod_consts[111];
        frame_a863c145727c0dcbbb0a6342e24dc8a6->m_frame.f_lineno = 13;
        tmp_star_imported_3 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_star_imported_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_need$UI, true, tmp_star_imported_3);
        Py_DECREF(tmp_star_imported_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        tmp_assign_source_4 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_4, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_5 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_arg_name_1;
        PyObject *tmp_dict_arg_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = mod_consts[115];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_1, tmp_key_name_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = mod_consts[115];
        tmp_metaclass_name_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_name_1 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = mod_consts[111];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_7 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_arg_name_3;
        tmp_key_name_3 = mod_consts[115];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_3, tmp_key_name_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[115];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 16;

        goto try_except_handler_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_2, mod_consts[116]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_3 = tmp_class_creation_1__metaclass;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[116]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[117];
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_a863c145727c0dcbbb0a6342e24dc8a6->m_frame.f_lineno = 16;
        tmp_assign_source_8 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_4, mod_consts[118]);
        tmp_operand_name_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_name_1 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[120];
        tmp_getattr_default_1 = mod_consts[121];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_name_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_name_5 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[120]);
            Py_DECREF(tmp_expression_name_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 16;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_9;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_10;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_need$UI$$$class__1_Ui_Search_16 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[122];
        tmp_res = PyObject_SetItem(locals_need$UI$$$class__1_Ui_Search_16, mod_consts[123], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[117];
        tmp_res = PyObject_SetItem(locals_need$UI$$$class__1_Ui_Search_16, mod_consts[124], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_3;
        }
        if (isFrameUnusable(cache_frame_de1ca4734cd532dfab4f03e474e1ec7f_2)) {
            Py_XDECREF(cache_frame_de1ca4734cd532dfab4f03e474e1ec7f_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_de1ca4734cd532dfab4f03e474e1ec7f_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_de1ca4734cd532dfab4f03e474e1ec7f_2 = MAKE_FUNCTION_FRAME(codeobj_de1ca4734cd532dfab4f03e474e1ec7f, module_need$UI, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_de1ca4734cd532dfab4f03e474e1ec7f_2->m_type_description == NULL);
        frame_de1ca4734cd532dfab4f03e474e1ec7f_2 = cache_frame_de1ca4734cd532dfab4f03e474e1ec7f_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_de1ca4734cd532dfab4f03e474e1ec7f_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_de1ca4734cd532dfab4f03e474e1ec7f_2) == 2); // Frame stack

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_need$UI$$$function__1_setupUi();

        tmp_res = PyObject_SetItem(locals_need$UI$$$class__1_Ui_Search_16, mod_consts[125], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_need$UI$$$function__2_retranslateUi();

        tmp_res = PyObject_SetItem(locals_need$UI$$$class__1_Ui_Search_16, mod_consts[84], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_de1ca4734cd532dfab4f03e474e1ec7f_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_de1ca4734cd532dfab4f03e474e1ec7f_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_de1ca4734cd532dfab4f03e474e1ec7f_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_de1ca4734cd532dfab4f03e474e1ec7f_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_de1ca4734cd532dfab4f03e474e1ec7f_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_de1ca4734cd532dfab4f03e474e1ec7f_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_de1ca4734cd532dfab4f03e474e1ec7f_2 == cache_frame_de1ca4734cd532dfab4f03e474e1ec7f_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_de1ca4734cd532dfab4f03e474e1ec7f_2);
            cache_frame_de1ca4734cd532dfab4f03e474e1ec7f_2 = NULL;
        }

        assertFrameObject(frame_de1ca4734cd532dfab4f03e474e1ec7f_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_compexpr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_need$UI$$$class__1_Ui_Search_16, mod_consts[128], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_3;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[117];
            tmp_args_name_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_need$UI$$$class__1_Ui_Search_16;
            PyTuple_SET_ITEM0(tmp_args_name_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_a863c145727c0dcbbb0a6342e24dc8a6->m_frame.f_lineno = 16;
            tmp_assign_source_11 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kwargs_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_11;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_10 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_10);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_need$UI$$$class__1_Ui_Search_16);
        locals_need$UI$$$class__1_Ui_Search_16 = NULL;
        goto try_return_handler_2;
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

        Py_DECREF(locals_need$UI$$$class__1_Ui_Search_16);
        locals_need$UI$$$class__1_Ui_Search_16 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 16;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_need$UI, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_10);
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

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
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
    RESTORE_FRAME_EXCEPTION(frame_a863c145727c0dcbbb0a6342e24dc8a6);
#endif
    popFrameStack();

    assertFrameObject(frame_a863c145727c0dcbbb0a6342e24dc8a6);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a863c145727c0dcbbb0a6342e24dc8a6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a863c145727c0dcbbb0a6342e24dc8a6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a863c145727c0dcbbb0a6342e24dc8a6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a863c145727c0dcbbb0a6342e24dc8a6, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    return module_need$UI;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
