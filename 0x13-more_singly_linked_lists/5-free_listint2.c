#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: pointer to pointer to head of the list
 *
 * Description: The function sets the head to NULL
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	if (*(head))
	{
		*(head) = NULL;
	}
}
