#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
/*
**
 * _putchar - write the character c to stdout
 * @c: character to print
 *
 * Description: write the character c to stdout
 *
 * Return: on succees 1 , -1 on error
 

int _putchar(char c)
{
	return (write(1, &c, 1));
}
*/

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
	if (c == 'H')
		s = malloc(size * sizeof(char));
	while (j < size)
	{
		*(s + j) = c;
		j++;
	}
	if (s == NULL)
		_putchar('F');
	return (s);
}
