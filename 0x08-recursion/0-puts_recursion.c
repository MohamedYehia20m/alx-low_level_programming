#include<unistd.h>
#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: pointer to char
 *
 * Description: a function that prints a string, followed by a new line.
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	char x = '\n';

	_putchar(*(s));
	if (*(++s) != '\0')
	{
		_puts_recursion(s);
	}
	else
	{
		_putchar(x);
	}
}
