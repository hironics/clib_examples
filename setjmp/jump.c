#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>
/*
longjpm allows user to jump execution flow from one function to another function. Therefore, it allows cold change from one stack to another stack

jmp_buf: buffer contains environment
setjmp: return 0
longjmp: jmp and recover the environment set by setjmp

*/
void test(jmp_buf *env)
{
    printf("1....\n");
    longjmp(*env, 10);
}

int main()
{
    jmp_buf env;
    int ret = setjmp(env); // for the first time call, it returns zero
    // when it returns back from longjump, the ret is value brought by longjmp

    if(ret == 0){
        printf("setjmp succeed\n");
    }
    else{
        printf("2....(%d)\n",ret);
        return EXIT_SUCCESS;

    }
        test(&env);
    return EXIT_SUCCESS;
}
