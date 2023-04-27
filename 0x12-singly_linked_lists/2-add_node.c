#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: the address of the new element
 * else NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	size_t str_len;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (str_len = 0; str[str_len]; str_len++)
	{

	}

	new_node->len = str_len;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
