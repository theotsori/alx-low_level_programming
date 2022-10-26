#include "lists.h"

/**
 * listint_len - function that returns number of
 * elements in a linked list
 * @h: first node
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	return (1 + listint_len(h->next));
}
