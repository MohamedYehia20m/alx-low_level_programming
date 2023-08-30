#include "main.h"
/**
 * _sqrt2 - a functional that test the potential roots of a number
 * @n: number to return its root
 * @res: the potential root of n
 *
 * Description: a functional that test the potential roots of a number
 *
 * Return: integer
 */

int _sqrt2(int n, int res)
{
	if (n == (res * res))
	{
		return (res);
	}
	else if (n > (res * res))
	{
		return (_sqrt2(n, ++res));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - a function that returns the natural square root of
 * a number.
 * @n: number to return its root
 *
 * Description: a function that returns the natural square root of a number.
 *
 * Return: natural square root of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt2(n, 0));
}
