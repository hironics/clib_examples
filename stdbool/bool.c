#include <stdio.h>
#include <stdbool.h>
/*
test and prove the usage of std bool, this library defines a few Macro and 
std tool

bool
true
false

*/
int main()
{
    bool keep_going = true; //Macro bool and true will be automatically expand to _Bool and 1 respectively 
    while (keep_going){
        printf("keep going for ever\n");
        keep_going = false;
    }
    return 0;
}
