#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts
 * a new node any position
 * @h: first node
 * @idx: index
 * @n: int
 *
 * Return: Address of newNode
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *node = *h;
	unsigned int i;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*h == NULL)
	{
		*h = new_node;
	}
	else
	{
		for (i = 0; i < idx; i++)
		{
			node = node->next;
			if (node == NULL)
			{
				free(new_node);
				return (NULL);
			}
		}
		new_node->prev = node->prev;
		new_node->next = node;
		if (node->prev != NULL)
		{
			node->prev->next = new_node;
		}
		node->prev = new_node;

		if (idx == 0)
		{
			*h = new_node;
		}
	}
	return (new_node);
}
