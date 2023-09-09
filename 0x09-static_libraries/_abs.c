/**
 * _abs - returns the absolute value of number
 * @x: number to return its absolute
 *
 * Description: checks the sign of number , if -ve return it +ve
 * Return: return the absolute value of number
 */

#include <unistd.h>
#include "main.h"

int _abs(int x)
{
	if (x > 0)
	{
		return (x);
	}
	else
	{
		return (-1 * x);
	}
}
