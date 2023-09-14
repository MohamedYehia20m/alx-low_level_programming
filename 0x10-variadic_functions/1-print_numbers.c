#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: string printed between numbers
 * @n: no. of integers passed to the functions
 *
 * Description: a function that prints numbers, followed by a new line.
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;

	va_start(list, n);
	while (i < n)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL)
			printf("%c", *(separator));
		printf(" ");
		i++;
	}
	printf("\n");
	va_end(list);
}
