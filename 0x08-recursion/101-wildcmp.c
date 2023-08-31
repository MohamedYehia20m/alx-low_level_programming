#include "main.h"

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
 * check_identical -  a function that compares two strings and returns 1
 * if the strings can be considered identical, otherwise return 0.
 * @s1: pointer to char
 * @s2: pointer to char
 *
 * Description:  a function that compares two strings and returns
 * 1 if the strings can be considered identical, otherwise return 0.
 *
 * Return: integer
 */

int check_identical(char *s1, char *s2)
{
	if (*(s1) == '\0' && *(s2) == '\0')
		return (1);
	else if (*(s1) == *(s2))
                return check_identical(++s1, ++s2);
	else if (*(s1) == '*' && *(s1 + 1) == '*')
		return check_identical(++s1, s2);
	else if (*(s2) == '*' && *(s2 + 1) == '*')
		return check_identical(s1, ++s2);
	else if (*(s1) == '*' && (*(s1+1) == *(s2+1)))
		return check_identical(++s1, ++s2);
	else if (*(s2) == '*' && (*(s1+1) == *(s2+1)))
		return check_identical(++s1, ++s2);
	else if (*(s1) == '*' && (*(s1+1) == *(s2)))
		return check_identical(++s1, s2);
	else if (*(s2) == '*' && (*(s1) == *(s2+1)))
              return check_identical(s1, ++s2);
	else if (*(s1) == '*' && (*(s1+1) != *(s2+1)))
		 return check_identical(s1, ++s2);
	else if (*(s2) == '*' && (*(s1+1) != *(s2+1)))
		return check_identical(++s1, s2);
	else
		return (0);
}


/**
 * wildcmp -  a function that compares two strings and returns 1 
 * if the strings can be considered identical, otherwise return 0.
 * @s1: pointer to char
 * @s2: pointer to char
 *
 * Description:  a function that compares two strings and returns 
 * 1 if the strings can be considered identical, otherwise return 0.
 *
 * Return: integer
 */

int wildcmp(char *s1, char *s2)
{
	return (check_identical(s1,s2));
}









