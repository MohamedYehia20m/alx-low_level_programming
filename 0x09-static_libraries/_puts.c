#include <unistd.h>
#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line,
 * to stdout.
 * @str : to char pointer
 *
 * Description: function that prints a string, followed by a new line,
 * to stdout. using to char pointer that loops through the string
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;
	char a = '\n';

	while (*(str + i) != '\0')
	{
		write(1, (str + i), 1);
		i++;
	}
	write(1, &(a), 1);
}
