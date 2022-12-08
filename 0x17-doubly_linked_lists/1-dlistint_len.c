#include "lists.h"

/**
 * dlistint_len - function taht returns num of element in dlist
 * @h: head node
 * Return: Count
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
