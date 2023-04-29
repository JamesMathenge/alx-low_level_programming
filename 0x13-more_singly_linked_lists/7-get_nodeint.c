#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node, starting at 0
 *
 * Return: pointer to the nth node
 * otherwise NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int z;
	listint_t *current_node = head;

	for (z = 0; z < index && current_node != NULL; z++)
	{
		current_node = current_node->next;
	}
	return (current_node);
}
