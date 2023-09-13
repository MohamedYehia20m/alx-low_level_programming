#include "function_pointers.h"

/**
 * int_index -  a function that searches for an integer.
 * @array: array of integers
 * @size: represent size of array
 * @cmp: pointer to a compare function
 *
 * Description:  a function that searches for an integer.
 *
 * Return: returns the index of the first element for which the
 * cmp function does not return 0
 * if no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int x;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			x = cmp(*(array + i));
			if (x != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
