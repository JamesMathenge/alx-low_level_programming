#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at the given index of a
 * dlistint_t linked list.
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	current = *head;
	prev = NULL;

	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (-1);
		prev = current;
		current = current->next;
	}

	if (prev == NULL)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		prev->next = current->next;
		if (current->next != NULL)
			current->next->prev = prev;
	}
	free(current);
	return (1);
}
