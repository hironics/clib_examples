#include <stdio.h>
#include <stdlib.h>
/*
stdlib contains functions providing string to number convert , memory management,  environemtn function and searching functions

*/
#define DL "12 -23   98"
#define FL "1.2      -2.3   0.23"

int main(int argc, char * argv[])
{
    //printf(
    char * endptr = NULL;
    char * start ;
    char * memblk ;
    printf("%f\n", atof("15.5"));
    printf("%d\n", atoi("120"));
    printf("%ld\n", atol("1201234"));

    /*
    malloc to allocation memory
    */
    start = malloc(sizeof(char)*30);

    /*
    strtol converts string to long, and return the point to the next char that can't parse
    */
    strcpy(start, DL);
    endptr = start;
    while(start+strlen(start)!=endptr){
        printf("value is %ld\n", strtol(endptr, &endptr, 10));
    }

    /*
    strtod convert string to mulipile double, each time it will parse one double that it can find, and then return the pointer to point to right after of one double 
    */
    strcpy(start, FL);
    endptr = start;
    while(start+strlen(start)!=endptr){
        printf("value is %g\n", strtod(endptr, &endptr));
    }
    /*
        remember to free memory by the end of the string
    */
    free(start);
    /*
        allocate 1024 items,
        each item take 40 int values space
    */
    memblk = calloc(1024, sizeof(int)*10);
    if(memblk){
        puts("allocated 1024*4*10 bytes with calloc");
    }
    /*
    again, free the space
    */
    realloc(memblk, 0);
    puts("freed the space");
    return EXIT_SUCCESS;
}
