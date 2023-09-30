from setuptools import setup, Extension

module = Extension("sum_array_module",
                    sources=["sum_array_module.c"])

setup(name="MySumArrayModule",
      version="1.0",
      ext_modules=[module])
