#include "lists.h"

/**
 * sum_dlistint - function that sums data in a doubly list
 * @head: first node
 * Return: 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node;

	for (node = head; node != NULL; node = node->next)
	{
		sum += node->n;
	}
	return (sum);
}
