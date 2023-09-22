#include "lists.h"

/**
 * print_list - Write a function that prints all the elements of a list_t list.
 * @h: pointer to the head of the list
 *
 * Description: rite a function that prints all the elements of a list_t list.
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);
		a++;
		h = h->next;
	}
	return (a);
}
