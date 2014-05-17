#include <stdio.h>
#include <setjmp.h>

void test(jmp_buf *env)
{
    printf("1....\n");
    longjmp(*env, 10);
}

int main()
{
    jmp_buf env;
    int ret = setjmp(env);

    if(ret == 0){
        test(&env);
    }
    else{
        printf("2....(%d)\n",ret);

    }
    return 0;
}
