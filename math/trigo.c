#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265
#define printme(x, y) printf(#y x, y)
/*
math module has a bunch of math functions available for user to use directly
to link programe in math, user shoud add -lm to load math module
in the example, we will illustruate the use of trigonometrics functions
*/

int main(int argc, char * argv[])
{
    double param = 0.5;
    printme(" is: %f\n", atan (param) * 180 / PI);
    printme(" is: %f\n", acos (param) * 180 / PI);
    printme(" is: %f\n", asin (param) * 180 / PI);
    
    double degree  = 45.0;
    printme(" is: %f\n", cos (degree / 180 * PI));
    printme(" is: %f\n", sin (degree / 180 * PI));
    printme(" is: %f\n", tan (degree / 180 * PI));

    return EXIT_SUCCESS;
}
