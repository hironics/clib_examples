#include <stdio.h>
#include <stdlib.h>

/*
escape can input special char, such as newline, tab, quote etc
to define to escape, we put \ in front of char or hex or oct

\xFF
\023 

however, you could define special hex or oct, but the value is not defined

\x12F       // out of range
\x0222      // multiple chars represented in oct

*/
int main(int argc, char * argv[])
{
    printf(":" "\x32F" ":\n");
    printf(":" "\0223" ":\n");
    return EXIT_SUCCESS;
}
