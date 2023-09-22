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
 * add_node - a function that adds a new node at the beginning of a list_t
 * list.
 * @head: the list of current element
 * @str: string to be added to new node
 *
 * Description: a function that adds a new node at the beginning of a list_t
 * list.
 *
 * Return: Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*(head) = new;
	return (new);
}
