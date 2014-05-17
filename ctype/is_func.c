#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
ctype in standard lib is a function set that contains both 
is* functions and to* functions

is* functions test if the input certain type of char
to* change char to lower and upper case

*/

int main(int argc, char * argv[])
{
    int i = 0;
    const int max = 255;

    for(i=0;i<max;i++){
        printf("%i %c is: ", i, i);
        if(isalnum(i)){
            printf(" isalnum");
        }
         if(isalpha(i)){
            printf(" isalpha");
        }
         if(iscntrl(i)){
            printf(" iscntrl");
        }
         if(isdigit(i)){
            printf(" isdigit");
        }
         if(isgraph(i)){
            printf(" isgraph");
        }
         if(ispunct(i)){
            printf(" ispunct");
        }
         if(isupper(i)){
            printf(" isupper");
        }
        printf("\n");
    }
    printf("\n");

    return EXIT_SUCCESS;
}
