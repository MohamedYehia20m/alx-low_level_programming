#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of
 * a listint_t list.
 * @head: pointer to pointer to the head of the list
 * @n: number to be stored in new node
 *
 * Description: a function that adds a new node at the end of a listint_t list.
 *
 * Return:  the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tempo;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*(head) == NULL)
	{
		*(head) = new;
		return (new);
	}
	tempo = *head;
	while (tempo->next)
		tempo = tempo->next;
	tempo->next = new;
	return (new);
}
