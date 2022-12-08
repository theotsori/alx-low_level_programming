#include "lists.h"

/**
 * free_dlistint - function that frees a doubly list
 * @head: head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur = head;

	while (cur != NULL)
	{
		dlistint_t *next = cur->next;

		free(cur);
		cur = next;
	}
}
