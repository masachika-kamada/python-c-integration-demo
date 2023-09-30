#define PY_SSIZE_T_CLEAN
#include <Python.h>

// Cの関数
long long C_sum_array(long long N) {
    long long sum = 0;
    for (long long i = 0; i < N; ++i) {
        sum += i;
    }
    return sum;
}

// Pythonから呼び出される関数
static PyObject* py_sum_array(PyObject* self, PyObject* args) {
    long long N;
    if (!PyArg_ParseTuple(args, "L", &N)) {
        return NULL;
    }
    return PyLong_FromLongLong(C_sum_array(N));
}

// メソッドテーブル
static PyMethodDef SumArrayMethods[] = {
    {"sum_array", py_sum_array, METH_VARARGS, "Calculate the sum from 0 to N-1."},
    {NULL, NULL, 0, NULL}
};

// モジュールの初期化
static struct PyModuleDef sum_array_module = {
    PyModuleDef_HEAD_INIT,
    "sum_array_module",
    NULL,
    -1,
    SumArrayMethods
};

PyMODINIT_FUNC PyInit_sum_array_module(void) {
    return PyModule_Create(&sum_array_module);
}
