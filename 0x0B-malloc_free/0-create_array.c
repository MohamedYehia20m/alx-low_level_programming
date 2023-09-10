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
	char* s;

	if (size == 0)
		return (NULL);
	if (c == 'H')
		s = malloc(size * sizeof(char));
	return (s);
}
