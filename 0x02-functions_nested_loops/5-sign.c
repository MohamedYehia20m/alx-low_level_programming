/**
 * print_sign - print sign of number
 * @n: number to be checked
 *
 * Description: checks the sign of number
 * Return: 1 on +ve , 0 on zero , -1 on -ve
 */

#include <unistd.h>
#include "main.h"

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
