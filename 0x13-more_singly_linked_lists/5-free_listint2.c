#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: first
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
