/**
 * print_last_digit - returns the last digit of number
 * @x: number to return its last digit
 *
 * Description: get the last digit using remainder operator '%'
 * Return: return the last digit of number
 */

#include <unistd.h>
#include "main.h"

int print_last_digit(int x)
{
	_putchar('0' + _abs(x % 10));
	return (_abs(x % 10));
}
