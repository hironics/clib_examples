#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <unistd.h>

int main(int argc, char * argv[])
{
    clock_t ticks1, ticks2;
    /*
    shows the number of cloks per second
    */
    printf("CLOCKS PER SEC IS: %ld\n", CLOCKS_PER_SEC);
    ticks1 = clock();
    ticks2 = ticks1;
    // this is also good way to sleep, but the difference with sleep is
    // it will not give up cpu
    while((ticks2-ticks1)<1000000)
        ticks2 = clock();
    //sleep(1);
    ticks2 = clock();
    printf("clocks spent on sleeping : %ld\n", ticks2- ticks1);
    return EXIT_SUCCESS;
}
