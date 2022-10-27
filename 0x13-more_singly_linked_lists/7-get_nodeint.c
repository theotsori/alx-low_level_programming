#include "lists.h"

/**
 * get_nodeint_at_index - program that returns the nth
 * node of linked list
 *
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *front, *back;
	unsigned int i;
	front = back = head;

	if (index > listint_len(head))
	{
		return (NULL);
	}
	for (i = 0; i < index-1; i++)
	{
		front = front->next;
	}
	while (front->next = NULL)
	{
		front = front->next;
		back = back->next;
	}
	return (back);
}
