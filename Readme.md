# ex1
Create a module, name new_module. And there is a function helloworld in that module.

``` python
import new_module as m
m.helloworld()

```

The C source code of helloworld function is as 
``` C
PyObject * helloworld(PyObject * self) {
	return PyUnicode_FromFormat("Hello C extension!");
}
```

# how to build
visit either ex1 or ex2, etc. And execute the following commands
``` bash
$ make
```
# Reference
[1] https://docs.python.org/3/extending/building.html
