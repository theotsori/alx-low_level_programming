#include "lists.h"

/**
 * add_dnodeint_end - adds node at the beginning of a dlist
 * @head: pointer to first node
 * @n: const int
 *
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *curr = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new_node;
	new_node->prev = curr;

	return (new_node);
}
