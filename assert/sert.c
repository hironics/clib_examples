/*
illustrate the fact that how to use assert effectively
*/
#include <stdio.h>
/*
define NDEBUG to tell compiler ignore all assert
must define this before include assert.h
*/
//#define NDEBUG
#include <assert.h>

void print_number(int* myInt)
{
    assert (myInt != NULL); //define assert to help debug potential issue
    printf("%d\n",*myInt);
}

int main()
{
    int a= 10;
    int * b = NULL;
    int * c = NULL;

    b=&a;
    print_number(b);
    print_number(c);
    return 0;
}
