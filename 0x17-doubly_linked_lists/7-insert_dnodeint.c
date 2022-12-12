#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts
 * a new node any position
 * @h: first node
 * @idx: index
 * @n: int
 * Return: Address of newNode
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *node = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*h == NULL)
	{
		*h = new_node;
		new_node->prev = NULL;
		new_node->next = NULL;
		return (new_node);
	}
	while (node != NULL && i < idx)
	{
		node = node->next;
		i++;
	}
	if (node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = node->prev;
	new_node->next = node;
	if (node->prev == NULL)
	{
		*h = new_node;
	}
	else
	{
		node->prev->next = new_node;
	}
	node->prev = new_node;
	return (new_node);
}
