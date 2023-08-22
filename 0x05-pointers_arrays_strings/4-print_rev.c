#include <unistd.h>
#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s : pointer to char
 *
 * Description: a function that prints a string, in reverse,
 * followed by a new line, by looping through the string to know its length
 * then print the characters in reverse order staarting by last one
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;
	int j = -1;
	char ch = '\n';

	while (*(s + i) != '\0')
	{
		i++;
		j++;
	}

	while (j >= 0)
	{
		write(1, (s + j), 1);
		j--;
	}
	write(1, &ch, 1);
}
