#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: pointer to the head of the list
 *
 * Description: a function that frees a list_t list.
 *
 * Return: void
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
