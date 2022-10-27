#include "lists.h"

/**
 * list_len - Function that return the number of elements in
 * a linked list
 * @h: head node
 */
size_t list_len(const list_t *h)
{
	size_t node;

	node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
