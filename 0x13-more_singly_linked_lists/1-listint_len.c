#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a linked
 * listint_t list.
 * @h: pointer to the start of the function
 *
 * Description: a function that returns the number of elements in a linked
 * listint_t list.
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
