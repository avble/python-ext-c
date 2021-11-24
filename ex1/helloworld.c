#include <Python.h>
#include "helloworld.h"

PyObject * helloworld(PyObject * self) {
	return PyUnicode_FromFormat("Hello C extension!");
}
