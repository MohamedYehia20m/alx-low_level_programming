#include <unistd.h>
#include "main.h"

/**
* print_alphabet : write lowercase alphabet to stdout
* return void
*
*/

void print_alphabet(void)
{
	int i = 97;

	while (i != 123)
	{
		_putchar(i++);
	}
	_putchar('\n');
}
