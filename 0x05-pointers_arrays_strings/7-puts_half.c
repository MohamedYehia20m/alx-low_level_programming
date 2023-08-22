#include <unistd.h>
#include "main.h"
/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str : pointer to char
 *
 * Description:  a function that prints half of a string,
 * followed by a new line, by looping through the string to know its length
 * then print the second half of it in order
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int n = 0;
	int m = 0;
	char ch = '\n';

	while (*(str + i) != '\0')
	{
		i++;
	}

	n = (int)(i / 2);
	m = i - n;
	while (m < i)
	{
		write(1, (str + m), 1);
		m++;
	}
	write(1, &ch, 1);
}
