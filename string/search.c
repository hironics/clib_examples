#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HW "Hello World"
#define HR "Hey Hiro!"
#define SS "Hello World&Class"
#define ARR 20
#define printme(x, y) printf(#y x, y)

int main(int argc, char * argv[])
{
    char str[ARR] = HW;
    char *array[20] ;
    int loop;
    /*
    search char in strings
    strchr
    strrchr
    memchr
    */
    printf("find o at :%d\n", strchr(str, 'o')-str);
    printf("find o backward forward at :%d\n", strrchr(str, 'o')-str);
    printf("find o at :%d\n", (char *)memchr(str, 'o', strlen(str))-str);

    /*
    search multiple chars
    strspn: the length of longest string contains any member of str2
    strspn: the length of char in str1 have been scanned before it matches any char in str2 

    */
    printf("find Wo at :%d\n", strstr(str, "Wo")-str);
    printf("find longest string that have Hel at :%d\n", strspn(str, "Hel"));
    printf("find longest string that have Hel at :%d\n", strcspn(HW, "Wd"));

    /*
    strtok: used to break string into multiple substr
    fist time call: it return the addr os string
    second time call, it accepts NULL, will return any
    */
    strcpy(str, SS);
    array[0] = strtok(str, " &");

    for(loop = 1; loop<20; loop++){
        if((array[loop]=strtok(NULL, " &"))==NULL){
            break;
        }    
    }

    for(loop=0;loop<10;loop++){
        if(array[loop] == NULL)
            break;
        printf("item #%d is %s.\n", loop, array[loop]);    
    }
    return EXIT_SUCCESS;
}
