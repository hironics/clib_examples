#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stddef.h>

#define printme(x, y) printf(#y x, y)
/*
contains variable offset and pointer size variables and functions

offsetof    -> function to find the position of the member in a structure

ptrdiff_t
size_t
wchar_t

*/
struct students{
    int s_id;
    char s_name[20];
    float grade;
} student;
struct students some_std[10];

int main(int argc, char * argv[])
{
    struct students *p;
    struct students *q;
    size_t arr_size; //size_t store the result of function sizeof
    ptrdiff_t ptr_dis; //store pointer difference

    arr_size = sizeof(some_std);
    /* get two pointer, and then diff them to store the diff in var
    */
    p=some_std;
    q=&some_std[9];
    ptr_dis = q - p;
    assert(ptr_dis == 9);

    printme(" is: %d\n", offsetof(struct students, grade));
    printme(" is: %d\n", arr_size);
    printme(" is: %d\n", ptr_dis);
    return EXIT_SUCCESS;
}
