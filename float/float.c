#include <stdio.h>
#include <stdlib.h>
#include <float.h>
/*
this module define all sorts of float limits and precision

FLT_MANT_DIG : number of digits in the number
FLT_DIG:    number of decimal in the number 


*/
#define printme(x, y) printf(#y x, y)

int main(int argc, char * argv[])
{

    printme(" is: %d\n", FLT_ROUNDS);
    printme(" is: %d\n", FLT_RADIX);
    printme(" is: %d\n", FLT_MANT_DIG);
    printme(" is: %d\n", DBL_MANT_DIG);
    printme(" is: %d\n", LDBL_MANT_DIG);
    printme(" is: %d\n", FLT_DIG);
    printme(" is: %d\n", DBL_DIG);
    printme(" is: %d\n", LDBL_DIG);
    printme(" is: %d\n", FLT_MIN_10_EXP);
    printme(" is: %d\n", DBL_MIN_10_EXP);
    printme(" is: %d\n", LDBL_MIN_10_EXP);
    printme(" is: %d\n", FLT_MAX_10_EXP);
    printme(" is: %d\n", DBL_MAX_10_EXP);
    printme(" is: %d\n", LDBL_MAX_10_EXP);

    return EXIT_SUCCESS;
}
