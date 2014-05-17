#include <stdio.h>
#include <stdlib.h>

/*
some old computer doesn't have special keys such as
#, [, \, ^ etc
we could use trigraph to type in these special charicaters
to use trigraph, you need add following option in your compile command
    -trigraphs
*/
int main(int argc, char * argv[])
{
    printf("No???\n");
    printf("No??=\n"); // this will print "No#"
    return EXIT_SUCCESS;
}
