#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

/*
variable signals, signal raising and signal process method setting.

// signal process function
SIG_DFL
SIG_IGN
SIG_ERR

// singals
SIGFPE
SIGILL
SIGINT

// signal process setting
signal()
raise()
*/
void catch_function(int sig)
{
    printf("catch function is processing the signal\n");
    if(sig == SIGINT){
        printf("catch int\n");
    }
    else if(sig == SIGFPE){
        printf("catch float overflow\n");
        //exit(2);
    }
    else if(sig == SIGILL){
        printf("catch illegal operation\n");
    }
}

int main(int argc, char * argv[])
{
    int slp_t = 5;
    printf("starting maint,\n");
    // use signal to set signal process function
    // it returns signal's previous process function
    // if it fails to set up, then it will return SIG_ERR
    if(signal( SIGINT, catch_function) == SIG_ERR){
        exit(0);
    }
    if(signal( SIGILL, catch_function) == SIG_ERR){
        exit(0);
    }
    if(signal( SIGFPE, catch_function) == SIG_ERR){
        exit(0);
    }

    printf("sleeping %d sec,\n", slp_t);
    sleep(slp_t);
    printf("sleeping finished,\n");
    slp_t = 1/(slp_t - slp_t);

    // delibrate raise an error
    raise(SIGILL);

    printf("ending maint,\n");
    return EXIT_SUCCESS;
}
