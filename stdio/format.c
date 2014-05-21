#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/*
stdio lib has a set of io method to read and write formated string.
printf  : print to stdout by default
fprintf : print to file
sprintf : print to string

each of them has variable argument version. pending a "v" in front of them
vprintf
vfprintf
vsprintf

*/


/*
to prove that we can input variable arguments and we could use vsprintf
*/
void write(char * format, ... )
{
  va_list args;
  va_start (args, format);
  vprintf (format, args);
  va_end (args);
}

int main()
{
    printf ("Characters: %c %c \n", 'a', 65);
    printf ("Decimals: %d %ld\n", 1977, 650000L);
    printf ("Preceding with blanks: %10d \n", 1977); //use length
    printf ("Preceding with zeros: %010d \n", 1977); //padding zero in the front
    printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100); //#x print value in 16 radix
    printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
    printf ("Width trick: %*d \n", 5, 10); //specify the length by input
    printf ("%s \n", "A string");

    write ("args: %d %d %d\n", 1, 2, 3);

    return EXIT_SUCCESS;
}
