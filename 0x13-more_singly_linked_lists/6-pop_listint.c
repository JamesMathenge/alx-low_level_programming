#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the data (n) of the head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *first;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	first = *head;
	n = first->n;
	*head = first->next;
	free(first);

	return (n);
}
