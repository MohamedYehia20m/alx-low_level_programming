#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars, and initializes
 * it with a specific char.
 * @size: represent the size of array
 * @c: specific character that initalizes array of chars
 *
 * Description: a function that creates an array of chars, and initializes
 * it with a specific char.
 *
 * Return: pointer to char
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int j = 0;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (j < size)
	{
		*(s + j) = c;
		j++;
	}
	return (s);
}
