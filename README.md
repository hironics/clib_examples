C Library by Examples
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
**Sizes of integral types**
This header defines constants with the limits of fundamental integral types for the specific system and compiler implementation used.

####locale
The C language supports localization specific settings, such as culture-specific date formats or country-specific currency symbols.

Each system and specific compiler implementation may provide different choices of locales to be selected (using function setlocale), but at least two locales are available to choose for any C program:

* The "C" locale is the minimal locale. It is a rather neutral locale which has the same settings across all systems and compilers, and therefore the exact results of a program using this locale are predictable. This is the locale used by default on all C programs.
* The system's default locale (which is specified by an empty C-string: ""). It is the locale configuration provided by the environment where the application is running. This usually contains more localization information than the "C" locale.

####math
####miscellaneous
**Not a header**
The directory includes some examples of special notes of C language.
* preprocess
* escape
* trigraph
####setjmp
**Non local jumps**
The tools provided through this header file allow the programmer to bypass the normal function call and return discipline, by providing the means to perform jumps preserving the calling environment.

The header provides, a function, a macro with functional form and a specific type:

####signal
Some running environments use signals to inform running processes of certain events. These events may be related to errors performed by the program code, like a wrong arithmetical operation or to exceptional situations, such as a request to interrupt the program.

Signals generally represent situations where the program has either been requested to terminate or an unrecoverable error has happened, therefore handling a signal allows for either perform pre-termination cleanup operations or try to recover from the error in some way.
####stdarg
####stdbool (C99)
**Boolean type**
The purpose in C of this header is to add a bool type and the true and false values as macro definitions.

In C++, which supports those directly, the header simply contains a macro that can be used to check if the type is supported:

####stddef
**C Standard definitions**
This header defines several types implicitly generated or used by certain language expressions.


####stdio
This library uses what are called streams to operate with physical devices such as keyboards, printers, terminals or with any other type of files supported by the system. Streams are an abstraction to interact with these in an uniform way; All streams have similar properties independently of the individual characteristics of the physical media they are associated with.
####stdlib
####string
C Strings
This header file defines several functions to manipulate C strings and arrays.

Functions:
* Copying
* Concat
* Comparison
* Searching

####time
This header file contains definitions of functions to get and manipulate date and time information.



### Reference
[C Library Reference](http://www.cplusplus.com/reference/clibrary/)
