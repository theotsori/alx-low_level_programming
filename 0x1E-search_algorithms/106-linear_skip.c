#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return: pointer to first node where value is located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node = list, *prev = NULL;
	size_t i;

	if (list == NULL)
		return (NULL);

	while (node->express)
	{
		prev = node;
		node = node->express;
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		if (node->n >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
			       prev->index, node->index);
			break;
		}
	}

	if (!node->express && node->n < value)
	{
		prev = node;
		while (node->next)
			node = node->next;
		printf("Value found between indexes [%lu] and [%lu]\n",
		       prev->index, node->index);
	}

	for (i = prev->index; i <= node->index; i++)
	{
		printf("Value checked at index [%lu] = [%d]\n", i, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
