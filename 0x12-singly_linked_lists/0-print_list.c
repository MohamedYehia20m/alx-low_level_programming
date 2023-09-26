#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: pointer to the head of the list
 *
 * Description: a function that prints all the elements of a list_t list.
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		a++;
		h = h->next;
	}
	return (a);
}
