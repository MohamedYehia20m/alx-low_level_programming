#include <unistd.h>
#include "main.h"

/**
*Prints the alphabet in lowercase 10 times .
*print_alphabet_x10 :  print lowercase alphabet 10 times to stdout using print_alphabet() function
* _putchar : write a character to stdout
* @c character to be printed
* return void
*
*/

void print_alphabet_x10(void)
{
        int i = 0;

        while (i != 10)
        {
                print_alphabet();
		i++;
        }
        _putchar('\n');
}
