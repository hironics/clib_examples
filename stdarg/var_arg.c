#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/*
stdarg module provides functions of handle variable length argument

// functions
va_start
va_end
va_arg
// declare type
vs_list

*/

int sum(int m, ...)
{
    int c;
    int ret=0;
    va_list args;
    
    // start process va_list, and tells that after m, everything is variable length argument
    va_start(args, m);
    for (c=0; c<m; c++){
        // return next item, and implicate the data type
        ret += va_arg(args, int);
    }
    // end process va_list
    va_end(args);
    return ret/m;
}

int main(int argc, char * argv[])
{
    printf("%d\n", sum(2, 10, 16));
    return EXIT_SUCCESS;
}
