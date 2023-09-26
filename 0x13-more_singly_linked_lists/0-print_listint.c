#include "lists.h"

/**
 * print_listint - a function that prints all the elements of
 * a listint_t list.
 * @h: pointer to the start of the function
 *
 * Description:  a function that prints all the elements of a listint_t list.
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		printf("%i\n", h->n);
		h = h->next;
	}

	return (i);
}
