#include <stdio.h>
/**
 * print_diagsums -  a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: pointer to int
 * @size: length of diagonal
 *
 * Description:  a function that prints the sum of the two diagonals of
 * a square matrix of integers.
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (i < size)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + size - 1 - i);
		i++;
	}
	printf("%d", sum1);
	printf(",  ");
	printf("%d\n", sum2);
}
