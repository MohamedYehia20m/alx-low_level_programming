#include "main.h"
/**
 * check_palindrome - a function that returns 1 if the string is
 * a palindrome, otherwise return 0.
 * @s: pointer to char
 * @x: pointer to char
 *
 * Description: a function that returns 1 if the string is
 * a palindrome, otherwise return 0.
 *
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0.
 */

int check_palindrome(char *s, char *x)
{
	if ((*s == *x) && (s < x))
	{
		return (check_palindrome(++s, --x));
	}
	else if (*(s) == *(x))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _strlen_recursion -  a function that returns the length of a string.
 * @s: pointer to char.
 *
 * Description:  a function that returns the length of a string.
 *
 * Return: return length of string.
 */

int _strlen_recursion(char *s)
{
	if (*(s) == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(++s));
	}
}

/**
 * is_palindrome - a function that returns 1 if the string is
 * a palindrome, otherwise return 0.
 * @s: pointer to char
 *
 * Description: a function that returns 1 if the string is
 * a palindrome, otherwise return 0.
 *
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0.
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len == 0)
		return (1);
	else
		return (check_palindrome(s, (s + len - 1)));

}




