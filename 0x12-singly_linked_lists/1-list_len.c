#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t num_nodes = 0;

	for (; h != NULL; h = h->next)
	{
		num_nodes++;
	}

	return (num_nodes);
}
