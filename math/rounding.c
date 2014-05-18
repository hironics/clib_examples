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
    double param = -5.6;
    int n = 2;
    printf("param is :%f\n", param);
    printf("n is :%d\n", n);
    // ceiling, floor, round, trunc
    printme(" is: %f\n", ceil(PI));
    printme(" is: %f\n", floor(PI));
    printme(" is: %f\n", round(PI));
    printme(" is: %f\n", trunc(PI));

    printme(" is: %f\n", ceil(param));
    printme(" is: %f\n", floor(param));
    printme(" is: %f\n", round(param));
    printme(" is: %f\n", trunc(param));
    // return absolute value
    printme(" is: %f\n", fabs(param));
    //max and in
    printme(" is: %f\n", fmin(param, PI));
    printme(" is: %f\n", fmax(param, PI));
    printme(" is: %f\n", fdim(param, PI));
    printme(" is: %f\n", fdim(PI, param));
    return EXIT_SUCCESS;
}
