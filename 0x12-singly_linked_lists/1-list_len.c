#include "lists.h"

/**
 * list_len - function that returns num of nodes in a linked list
 * list_t - singly linked list node
 * @h: pointer to head node
 *
 * Return: count
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	return (1 + list_len(h->next));
}
