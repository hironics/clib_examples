#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h> //memcpy
#include <unistd.h> //sleep
/*
time module comprises a bunch of functions related system time and clock and calendar time

struct tm and time_t plays important roles in these function

core
    -----> time_t (----> formated time string)
        <-------> struct tm
            ----> formated time string


functions:
time()
asctime()
localtime()
gmtime()
ctime()
mktime()


*/
int main(int argc, char * argv[])
{
    time_t current;
    time_t time2;
    struct tm *local_tm;
    struct tm *gmt_tm;
   
    /* use time function to get current time 
     data type is time_t
    */
    time(&current);
    // or current = time(NULL);

    /*
    from time_t to formated string
    */
    printf("current time is %s", ctime(&current));

    /*
    from time_t to struct tm
    NOTE:
    time_t is a static memory, any futher call will replace current value
    */
    local_tm = malloc(sizeof(struct tm));
    memcpy(local_tm, localtime(&current), sizeof(struct tm)); // use memcpy to copy the value to anther safe place

    gmt_tm = gmtime(&current);
    /*
    from struct tm to string
    */
    if(local_tm->tm_isdst){
        printf("daylight savings time is on\n");
    }
    printf("local time is %s", asctime(local_tm));
    printf("gmt time is %s", asctime(gmt_tm));
    /*
        find differce between to time_t
    */
    sleep(1);
    time(&time2);
    printf("the difference between local and gmt is %f\n", difftime(current, time2));

    /*
    make a future time
    */
    local_tm->tm_year = 2015-1900;
    local_tm->tm_mon=10; //start from 0
    local_tm->tm_hour=5; //starts from 0
    printf("synthetic local time is %s", asctime(local_tm));

    return EXIT_SUCCESS;
}
