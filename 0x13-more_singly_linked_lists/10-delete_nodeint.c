#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of listint_t
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *prev_node;
	unsigned int z;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		prev_node = *head;
		*head = (*head)->next;
		free(prev_node);
		return (1);
	}

	current_node = *head;

	for (z = 0; z < index - 1 && current_node != NULL; z++)
	current_node = current_node->next;

	if (current_node == NULL || current_node->next == NULL)
		return (-1);

	prev_node = current_node->next;
	current_node->next = prev_node->next;
	free(prev_node);
	return (1);
}
