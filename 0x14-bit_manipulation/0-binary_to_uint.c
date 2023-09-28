#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: to char pointer
 *
 * Description: a function that returns the length of a string
 * by looping through its chracters till the end
 *
 * Return: return counter of type int
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _pow_recursion -  a function that returns the value of x raised to the
 * power of y.
 * @x: represent the base number
 * @y: represent the power number
 *
 * Description:a function that returns the value of x raised to the
 * power of y.
 *
 * Return: x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}

/**
 * binary_to_uint -a function that converts a binary number to an unsigned int.
 * @b: pointer to char pointing to a string of 0 and 1 chars
 *
 * Description: a function that converts a binary number to an unsigned int.
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int lastindex = _strlen(b) - 1;
	int i = lastindex;

	while (*(b + i) == '0' || *(b + i) == '1')
	{
		if (*(b + i) == '1')
			sum += _pow_recursion(2, (lastindex - i));
		i--;
	}
	if (i >= 0)
		return (0);
	return (sum);
}
