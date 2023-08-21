#include <unistd.h>
#include "main.h"

/**
*_putchar : write the character c to stdout
*@c character to print
* return on succees 1 , -1 on error
*
*/

int _putchar(char c)
{
	return (write(1,&c,1));
}
