#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: firt node
 *
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *n = head;

	while (n)
	{
		list_t *n1 = n;
		n = n->next;
		free(n1);
	}
}
