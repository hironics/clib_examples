#include <stdio.h>
#include <stdlib.h>

/*
stdio library. the library which most of problem will include.

putchar //print single char on screen
puts  // print a line on screen and add \n
fclose  // close file handler
fgetc  // get one char from file handler
fseek: seek location in file
fsetpos; set positon
fgetpos: get positon
rewind: go back to the beginning of file

fflush : flush buffer

tmpname: create a tmp file name
tmpfile: create a tmp file and a file handler (wb+)

*/


#define CON_SIZE 1024

/*
tranverse a file and locate the position
*/
void tranfile(FILE * f, fpos_t * pos)
{
    fseek(f, 100, SEEK_SET);
    printf("current position is: %ld\n", ftell(f));

    fsetpos(f, pos);
    printf("current position is: %ld\n", ftell(f));

    fseek(f, -100, SEEK_END);
    printf("current position is: %ld\n", ftell(f));

    rewind(f);
    printf("current position is: %ld\n", ftell(f));

}

int main()
{
    char * filename ;
    char * content;
    fpos_t curr;
    int c;
    filename = tmpnam(NULL);
    FILE * tmp;
    FILE * etc;

    printf("the max number of uniq tmpfile name we can create is: %ld\n",TMP_MAX );
    printf("the longest file name you can create is: %ld\n",FILENAME_MAX);
    printf("the longest tmp file name you can create is: %ld\n",L_tmpnam);
    printf("the max number of uniq tmpfile name we can create is: %ld\n",TMP_MAX );
    printf("file name allocated is :%s\n", filename);

    /*
    handle text file
    */
    etc = fopen("/etc/passwd", "r");
    while((c=fgetc(etc)) != EOF){
        fputc(c, stderr); //print to tmp file
        putchar(c); //print to stard out
        fflush(stdout);
    }

    /*
    handle binary file
    fopen
    fwrite
    fflush

    */
    //tmp = tmpfile();
    tmp = fopen(filename, "w+b");
    //setbuf(tmp, NULL); //default buffer is BUFSIZ, in following case, we will set zero. aka nobuffer
    content = calloc(CON_SIZE, sizeof(char));
    memset(content, 'w', CON_SIZE);
    fwrite(content, CON_SIZE, 1, tmp);
    fgetpos(tmp, &curr);
    printf("current position is: %ld\n", curr);

    //reopen a file to reuse the same file handler
    freopen("/etc/passwd", "r", tmp);
    tranfile(tmp, &curr);

    c = getchar();
    /*
    release filehandler
    free mem block
    */
    puts("close all file");
    fclose(tmp);
    fclose(etc);
    free(content);

    return EXIT_SUCCESS;
}
