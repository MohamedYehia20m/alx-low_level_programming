#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n:  the number of strings passed to the function
 *
 * Description: a function that prints strings, followed by a new line.
 *
 * Return: strings, followed by a new line.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;

	va_start(list, n);
	while (i < n)
	{
		char *x = va_arg(list, char*);

		if (x != NULL)
			printf("%s", x);
		else
			printf("(nil)");
		if (separator != NULL && (i < n - 1))
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(list);
}
