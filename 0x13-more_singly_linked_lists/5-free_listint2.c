#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: first
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	while (tmp)
	{
		listint_t *tmp1 = tmp;
		tmp = tmp->next;
		free(tmp1);
	}
}
