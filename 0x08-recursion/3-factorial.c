/**
 * factorial -  a function that returns the factorial of a given number.
 * @n: given number
 *
 * Description:  a function that returns the factorial of a given number.
 *
 * Return: factorial of parameter n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
