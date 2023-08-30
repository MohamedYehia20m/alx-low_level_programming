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
