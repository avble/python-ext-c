#!/usr/bin/env python3

from distutils.core import setup, Extension

setup(
	name = "new_module",
	version = "1.0",
	ext_modules = [Extension("new_module", ["bind.c", "helloworld.c"])]
	);