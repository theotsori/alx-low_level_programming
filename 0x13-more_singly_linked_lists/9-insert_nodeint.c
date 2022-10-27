#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a
 * new node at a given position
 * @head: first node
 * @idx: index where new node should be added
 * @n: integer
 *
 * Return: NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp = *head;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = tmp;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
