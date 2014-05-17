#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/*
to* functions change the case of single char

*/
int stoupper(char * input){
    int i = 0;
    for(i=0; i<strlen(input); i++){
        *(input+i) = toupper(*(input+i));
    }
    
}

int main(int argc, char * argv[])
{
    char input[18] ;
    strcpy(input, "hello world");
    printf("before to upper: %s\n", input);
    stoupper(input);
    printf("after to upper: %s\n", input);
    return EXIT_SUCCESS;
}
