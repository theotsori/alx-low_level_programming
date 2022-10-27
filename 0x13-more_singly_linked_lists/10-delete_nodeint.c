#include "lists.h"

/**
 * delete_nodeint_at_index - function that
 * deletes a node in unspecified place in a linked list
 * @head: pointer to first node
 * @index: unsigned int
 *
 * Return: 1 if succesful -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *node = *head;
	unsigned int i;

	if (node == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (node->next == NULL)
			return (-1);
		node = node->next;
	}
	tmp = node->next;
	node->next = tmp->next;
	free(tmp);
	return (1);
}
