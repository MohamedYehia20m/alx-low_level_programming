#include "lists.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: to char pointer
 *
 * Description: a function that returns the length of a string
 * by looping through its chracters till the end
 *
 * Return: return counter of type int
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}


/**
 * add_node_end - a function that adds a new node at the end of a list_t
 * list.
 * @head: the list of current element
 * @str: string to be added to new node
 *
 * Description: a function that adds a new node at the beginning of a list_t
 * list.
 *
 * Return: Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *t;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	t = *head;
	while (t->next)
		t = t->next;
	t->next = new;
	return (new);
}
