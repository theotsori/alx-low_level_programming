#include "lists.h"

/**
 * listint_len - function that returns number of
 * elements in a linked list
 * @h: first node
 *
 * Return: No of nodes in a linked list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
