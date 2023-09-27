#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list
 * @head: Pointer to the address of the head of the
 * listint_t list
 *
 * Return: If empty - 0, Otherwise - The head node's data
 * (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int rem;

	if (*head == NULL)
		return (0);

	tmp = *head;
	rem = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (rem);
}
