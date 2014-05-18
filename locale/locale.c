#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


#define printme(x, y) printf(#y x, y)
/*
define locale information

function:
setlocale: set locale env 
localeenv: get current env

type:
struct lconv : env structure having many different types of locale information

examples
en_GB
de_DE

parts of locale:
LC_ALL
LC_COLLATE
LC_CTYPE
LC_MONETARY
LC_TIME
LC_NUMERIC

to find all environemtn installed on your platform, use linux command:
locale -a


*/
typedef struct lconv lconv;
void printenv(lconv * l)
{
    printme(" is: %s\n", l->decimal_point);
    printme(" is: %s\n", l->thousands_sep);
    printme(" is: %s\n", l->grouping);
    printme(" is: %s\n", l->int_curr_symbol);
    printme(" is: %s\n", l->mon_decimal_point);
    printme(" is: %s\n", l->mon_thousands_sep);
    printme(" is: %s\n", l->mon_grouping);
    printme(" is: %s\n", l->positive_sign);
    printme(" is: %s\n", l->negative_sign);
    printme(" is: %c\n", l->p_sign_posn);
    printme(" is: %c\n", l->n_sign_posn);
}

int main(int argc, char * argv[])
{
    char * old_locale;
    printf("set env to C\n");
    if((old_locale = setlocale(LC_ALL, "C")) == NULL){
        printf("set locale failed\n");
        exit(2);
    }
    else{
        printenv( localeconv());
    }

    printf("set env to en_GB\n");
    if((old_locale = setlocale(LC_NUMERIC, "en_GB.utf8")) == NULL){
        printf("set locale failed\n");
        exit(2);
    }
    else{
        printenv( localeconv());
    }
    printf("set env to zh_CN\n");
    if((old_locale = setlocale(LC_NUMERIC, "zh_CN.utf8")) == NULL){
        printf("set locale failed\n");
        exit(2);
    }
    else{
        printenv( localeconv());
    }
    return EXIT_SUCCESS;
}
