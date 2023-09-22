#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a
 * list_t list
 * @head: A pointer to the head of the list_t list
 * @str: The string to be added to the list_t list
 *
 * Return: If the function fails, NULL
 * Otherwise, the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *cpy;
	int len;
	list_t *new, *end;

	new = malloc(size(list_t));
	if (new == NULL)
		return (NULL);

	cpy = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = cpy;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}

	return (new);
}
