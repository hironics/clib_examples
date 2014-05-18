#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265
#define printme(x, y) printf(#y x, y)
/*
math module has a bunch of math functions available for user to use directly
to link programe in math, user shoud add -lm to load math module
in the example, we will illustruate the use of 
exp functions:

log functions:

power functions:

*/

int main(int argc, char * argv[])
{
    double param = 5;
    int n = 2;
    printf("param is :%f\n", param);
    printf("n is :%d\n", n);
    // exp functions
    printme(" is: %f\n", exp (param) );
    printme(" is: %f\n", exp2 (param) );
    printme(" is: %f\n", expm1 (param) );
    // log functions 
    printme(" is: %f\n", log (param) );
    printme(" is: %f\n", log10 (param) );
    printme(" is: %f\n", log2 (param) );
    printme(" is: %f\n", log1p (param) );

    // power functions
    printme(" is: %f\n", pow (param, n) );

    // sqrt
    printme(" is: %f\n", sqrt (param) );
    printme(" is: %f\n", cbrt (param) );
    printme(" is: %f\n", hypot (param, n) );

    // return both int part and frantional part 
    printme(" is: %f\n", modf (PI, &param) );


    return EXIT_SUCCESS;
}
