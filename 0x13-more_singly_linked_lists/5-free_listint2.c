#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node = *head;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	*head = NULL;

	while (current_node != NULL)
	{
		listint_t *next_node = current_node->next;

		free(current_node);
		current_node = next_node;
	}
}
