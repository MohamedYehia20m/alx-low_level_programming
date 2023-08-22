#include <unistd.h>
#include "main.h"
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str : to char pointer
 *
 * Description: a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * this is done by looping through the characters printing the first
 * then evading the next and vice versa.
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	char a = '\n';

	while (*(str + i) != '\0' && *(str + i + 1) != '\0')
	{
		write(1, (str + i), 1);
		i = i + 2;
	}
	write(1, &(a), 1);
}
