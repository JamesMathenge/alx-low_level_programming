#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a linked list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *ptr;

	for (ptr = head; ptr != NULL; ptr = head)
	{
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
