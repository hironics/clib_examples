#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
string.h module contains functions to handle 
    string 
    memory block

functions included:
strcpy
strncpy
strcat
strncat
memcpy
memmove

other functions:
strlen
strerror
memset
*/
#define HW "Hello World"
#define HR "Hey Hiro!"
#define ARR 20
#define printme(x, y) printf(#y x, y)

void recover(char * str)
{
    strcpy(str, HW);
}

int main(int argc, char * argv[])
{
    char str[ARR] = HW;

    printf("before copy: %s\n", str);
    /*
    use numerous way to copy other string into hello world
    */
    strcpy(str, HR);
    printf("after strcpy copy: %s\n", str);
    recover(str);
    
    strncpy(str, HR, 6);
    printf("after strncpy copy: %s\n", str);

    memcpy(str, HR, strlen(HR));
    printf("after memcpy copy: %s\n", str);
    recover(str);

    memmove(str+5, str+8, 2);
    printf("after memcpy copy: %s\n", str);

    /*
    string cat
    */
    recover(str);
    strcat(str, HR);
    printf("after strcat copy: %s\n", str);

    recover(str);
    strncat(str, HR, strlen(HR)-2);
    printf("after strcat copy: %s\n", str);
    /*
    memset, set memory block with specific value
    strlen
    */
    recover(str);
    memset(str, '&', ARR);
    printf("after memset copy: %s\n", str);

    /*
    string compare
    */
    recover(str);
    printme(" is %d\n", strcmp(HW, HR));
    printme(" is %d\n", strcoll(HW, HR));
    printme(" is %d\n", strncmp(HW, HR, 1));


    printme(" is %d\n", memcmp(HW, HR, 1));

    return EXIT_SUCCESS;
}
