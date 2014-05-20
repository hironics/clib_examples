#include <stdio.h>
#include <stdlib.h>

void funca()
{
    puts("funca");
}

void funcb()
{
    puts("funcb");
}

int main(int argc, char * argv[])
{
    int ret;
    /*
     callback functions are push into stack, called in reverse order
    */
    atexit(funca);
    atexit(funcb);
    printf("I'll be called before anyone else\n");
    /*
        getenv will get environment value
    */
    printf("current user is: %s\n", getenv("USER"));
    printf("current datetime is: ");
    /*
    spawn process and run command
    */
    ret = system("date");

    if(ret==0){
        return EXIT_SUCCESS;
    }
    else{
        abort();
    }
}
