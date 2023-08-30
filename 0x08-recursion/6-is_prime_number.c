#include "main.h"

/**
 * _Prime - finding whether x is prime or not
 * @x: no. to be tested
 * @y: number between 1 and x
 *
 * Description: finding whether x is prime or not
 *
 * Return: integer
 */

int _Prime(int x, int y)
{
	if (x == 1)
	{
		return (0);
	}
	if ((y < x) && (x % y == 0))
	{
		return (0);
	}
	else if (y == x)
	{
		return (1);
	}
	else
	{
		return (_Prime(x, ++y));
	}
}

/**
 * is_prime_number -  a function that returns 1 if the input integer is
 * a prime number, otherwise return 0.
 * @n: number to be tested
 *
 * Description:  a function that returns 1 if the input integer is
 * a prime number, otherwise return 0.
 *
 * Return:  returns 1 if the input integer is
 * a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n > 0)
	{
		return (_Prime(n, 2));
	}
	else
	{
		return (0);
	}
}
