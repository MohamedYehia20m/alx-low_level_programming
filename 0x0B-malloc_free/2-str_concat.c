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
 * str_concat - a function that concatenates two strings.
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Description: a function that concatenates two strings.
 *
 * Return: pointer to the newly created concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);
	int i = 0;
	int j = 0;
	char *concat;

	concat = malloc(len1 + len2 + 1);
	if (concat == NULL)
		return (NULL);
	while (*(s1 + i) != '\0')
	{
		*(concat + i) = *(s1 + i);
		i++;
	}
	while (*(s2 + j) != '\0')
	{
		*(concat + i) = *(s2 + j);
		i++;
		j++;
	}
	return (concat);
}
