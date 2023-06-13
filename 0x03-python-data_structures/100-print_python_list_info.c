#include <stdio.h>
#include <stdlib.h>
#include <Python.h>
#include "lists.h"

void print_python_list_info(PyObject *p)
{
    Py_ssize_t size, i;
    PyObject *elem;
    PyListObject *list;

    if (!PyList_Check(p)) {
        printf("Invalid List Object!\n");
        return;
    }

    list = (PyListObject *) p;
    size = PyList_Size(p);

    printf("[*] Size of the Python List = %ld\n", size);

    printf("[*] Allocated = %ld\n", (long) list->allocated);

    for (i = 0; i < size; i++) {
        elem = PyList_GetItem(p, i);
        printf("Element %ld: %s\n", i, Py_TYPE(elem)->tp_name);
    }
}

