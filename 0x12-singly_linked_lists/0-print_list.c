#include "lists.h"
#include "stdio.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

	for (; h != NULL; h = h->next, num_nodes++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
	}
	return (num_nodes);
}
