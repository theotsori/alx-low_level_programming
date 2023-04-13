#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 *             using the Jump search algorithm.
 *
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located,
 *         or NULL if value is not present or if head is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *current, *prev;
	size_t step, i;

	if (list == NULL || size == 0)
		return (NULL);

	step = sqrt(size);
	current = list;
	prev = NULL;
	while (current->n < value)
	{
		prev = current;
		for (i = 0; current->next && i < step; i++)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n",
		       current->index, current->n);

		if (current->n >= value || current->next == NULL)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       prev ? prev->index : 0, current->index);

	while (prev && prev->index < current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
	if (prev && prev->n == value)
		return (prev);

	return (NULL);
}
