#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * alloc_grid -  a function that returns a pointer to a 2 dimensional array
 * of integers.
 * @width: represent the height of matrix
 * @height: represent the width of matrix
 *
 * Description:  a function that returns a pointer to a 2 dimensional array
 * of integers.
 *
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int **matrix;
	int i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = (int **)malloc(height * sizeof(int *));
	while (i < height)
	{
		matrix[i] = (int *)malloc(width * sizeof(int));
		i++;
	}
	if (matrix == NULL)
	{
		free(matrix);
		return (NULL);
	}
	return (matrix);
}
