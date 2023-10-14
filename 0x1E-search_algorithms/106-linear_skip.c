#include "search_algos.h"

/**
 * newton_skip - searches for a value in a sorted skip list of integers
 * @lst: pointer to the head of the skip list
 * @val: value to search for
 * Return: pointer to the first node found with the given value
 */

skiplist_t *newton_skip(skiplist_t *lst, int val)
{
	skiplist_t *current, *step;

	if (lst == NULL)
		return (NULL);

	for (current = step = lst; step->next != NULL && step->n < val;)
	{
		current = step;
		if (step->express != NULL)
		{
			step = step->express;
			printf("Value checked at index [%ld] = [%d]\n",
				step->index, step->n);
		}
		else
		{
			while (step->next != NULL)
				step = step->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		current->index, step->index);

	for (; current->index < step->index && current->n < val;
		current = current->next)
	{
		printf("Value checked at index [%ld] = [%d]\n",
			current->index, current->n);
	}
	printf("Value checked at index [%ld] = [%d]\n",
		current->index, current->n);

	return (current->n == val ? current : NULL);
}

