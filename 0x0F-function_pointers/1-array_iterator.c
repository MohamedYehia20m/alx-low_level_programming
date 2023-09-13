#include "function_pointers.h"

/**
 * array_iterator -  a function that executes a function given as a parameter
 * on each element of an array.
 * @array: array to be printed
 * @size: represent array size
 * @action: pointer to function to be called
 *
 * Description: Longer description of the function)?
 *
 * Return: Description of the returned value
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action != NULL && array != NULL)
	{
		while (i < size)
		{
			action(*(array + i));
			i++;
		}
	}
}
