#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * _strlen - a function that returns the length of a string.
 * @s: to char pointer
 *
 * Description: a function that returns the length of a string
 * by looping through its chracters till the end
 *
 * Return: return counter of type int
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: pointer to string given as a parameter
 *
 * Description: a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * Return: returns a pointer to a new string which is a duplicate of the
 * string str
 */

char *_strdup(char *str)
{
	int i = 0;
	int len = _strlen(str);
	char *dup;

	dup = malloc(len * sizeof(char));
	if (dup == NULL || str == NULL)
		return (NULL);
	while (*(str + i) != '\0')
	{
		*(dup + i) = *(str + i);
		i++;
	}
	return (dup);
}
