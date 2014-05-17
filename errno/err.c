#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <math.h>

/*
sample use of errno library.

defined variable

errno
EDOM
DRANGE


errno is a value defined in this library, but it can be changed by many other
libraries
by default is zero

EDOM stands for problematic function domain
ERANGE stands for problematic function range
*/

int main()
{
    double val;
    FILE * f;
    val = sqrt(-1);//after this call, errno is set as EDOM to indicate input problem
    if(errno == EDOM){
        printf("invalid value\n");
    }
    else{
        printf("valid value\n");
    }

    errno = 0;
    val = sqrt(10);
    if(errno == EDOM){
        printf("invalid value\n");
    }
    else{
        printf("valid value\n");
    }

    f = fopen("/tmp/nonfile", "r");
    if (!f){
        printf("error number is %d\n", errno);
        perror("can't open file /tmp/nonfile");

    }
    
    return EXIT_FAILURE;
}

