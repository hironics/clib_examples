#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/*
limits contains the complier's limits for each type of data
char
int
short
long
unsigned values

*/

#define printme(x, y) printf(#y x, y)
int main(int argc, char * argv[])
{
    printme("	is %ld\n", CHAR_BIT);
    printme("	is %ld\n", SCHAR_MIN);
    printme("	is %ld\n", SCHAR_MAX);
    printme("	is %ld\n", SHRT_MIN);
    printme("	is %ld\n", SHRT_MAX);
    printme("	is %ld\n", USHRT_MAX);
    printme("	is %ld\n", INT_MIN);
    printme("	is %ld\n", INT_MAX);
    printme("	is %ld\n", UINT_MAX);
    printme("	is %ld\n", LONG_MIN);
    printme("	is %ld\n", LONG_MAX);
    printme("	is %ld\n", ULONG_MAX);
    return EXIT_SUCCESS;
}
