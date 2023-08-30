#include<unistd.h>
#include "main.h"
/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: pointer to char
 *
 * Description: a function that prints a string in reverse
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*(s) == '\0')
	{
		_putchar('\0');
	}

	else if (*(++s) != '\0')
	{
		_print_rev_recursion(s);
		 _putchar(*(s - 1));
	}
	else
	{
		_putchar(*(s - 1));
	}
}
