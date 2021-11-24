#include "helloworld.h"

char new_module_docs[] = "New module description.";

PyMethodDef new_module_funcs[] = {
	{	"helloworld",
		(PyCFunction)helloworld,
		METH_NOARGS,
		"Hello world function"},
	{	NULL}
};


PyModuleDef new_module_mod = {
	PyModuleDef_HEAD_INIT,
	"new_module",
	new_module_docs,
	-1,
	new_module_funcs,
	NULL,
	NULL,
	NULL,
	NULL
};

PyMODINIT_FUNC PyInit_new_module(void) {
	return PyModule_Create(&new_module_mod);
}