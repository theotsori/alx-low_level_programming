#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: firt node
 *
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *n;

	current = head;

	while (current != NULL)
	{
		n = current->next;
		free(current->str);
		free(current);
		current = n;
	}
}
