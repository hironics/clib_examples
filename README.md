clib_examples
=============

Examples on how to use c standard library. I have included as many functions or Macro as possible for each header file. There are still some funtions missing from the examples. It might be because of C version.

By far, I only include C90, plus some fundamental headers from C99. Some libraries such as uchar, wchar are part of C99, therefore are not covered by this exercise. 

### Headers
####assert
assert.h defines one macro function that can be used as a standard debugging tool

####ctype
This header declares a set of functions to classify and transform individual characters.
Major functions are in two sets
* is* functions used to check if char falls in certain type
* to* functions used to convert upper case to lower case and vice verse

####errno
C Header that defines macro: 
> errno

####float
####limits
####locale
####math
####miscellaneous
####setjmp
####signal
Some running environments use signals to inform running processes of certain events. These events may be related to errors performed by the program code, like a wrong arithmetical operation or to exceptional situations, such as a request to interrupt the program.

Signals generally represent situations where the program has either been requested to terminate or an unrecoverable error has happened, therefore handling a signal allows for either perform pre-termination cleanup operations or try to recover from the error in some way.
####stdarg
####stdbool
####stddef
####stdio
This library uses what are called streams to operate with physical devices such as keyboards, printers, terminals or with any other type of files supported by the system. Streams are an abstraction to interact with these in an uniform way; All streams have similar properties independently of the individual characteristics of the physical media they are associated with.
####stdlib
####string
####time
This header file contains definitions of functions to get and manipulate date and time information.



### Reference
[C Library Reference](http://www.cplusplus.com/reference/clibrary/)
