#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: first node
 * @index: integer
 *
 * Return: Null if node doesnt exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i;

	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}
	return (current);
}
