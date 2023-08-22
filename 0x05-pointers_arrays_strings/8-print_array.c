#include <stdio.h>
#include "main.h"
/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line.
 * @a : to int pointer
 * @n : no. of elements to be printed
 *
 * Description: Write a function that prints n elements of an array of integers
 * , followed by a new line. using printf
 *
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < (n - 1))
	{
		printf("%d", *(a + i));
		printf(", ");
		i++;
	}
	printf("%d\n", *(a + n - 1));
}
