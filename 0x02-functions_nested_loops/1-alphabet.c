/**
 * print_alphabet - This is a description
 *
 * Description: write lowercase alphabet to stdout using _putchar() function
 * Return: returns void
 */

#include <unistd.h>
#include "main.h"

void print_alphabet(void)
{
	int i = 97;

	while (i != 123)
	{
		_putchar(i++);
	}
	_putchar('\n');
}
