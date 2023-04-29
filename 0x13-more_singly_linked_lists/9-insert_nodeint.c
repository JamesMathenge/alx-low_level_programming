#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: integer to store in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *inserted_node;
	unsigned int z;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
			return (new_node);
	}

	inserted_node = *head;

	for (z = 0; z < idx - 1 && inserted_node != NULL; z++)
		inserted_node = inserted_node->next;

	if (inserted_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
		new_node->next = inserted_node->next;
		inserted_node->next = new_node;
		return (new_node);
}
