#include <stdio.h>
#include <stdlib.h>

/*
#line directive allows the currentline number to be changed
#error excel compile error

*/

#ifndef VERSION 
// to avoid error , you must compile the programe with
// cc   preprocese1.c  -DVERSION=1 -o preprocese1
// or
// export CFLAGS=-DVERSION
//  make preprocese1
#error  Version number not specified
#endif
int main(int argc, char * argv[])
{
    #line 10000 
    printf("current line is :%d\n", __LINE__);
    printf("current file is :%s\n", __FILE__);
    return EXIT_SUCCESS;
}
