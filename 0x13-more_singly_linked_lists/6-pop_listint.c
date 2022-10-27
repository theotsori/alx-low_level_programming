#include "lists.h"

/**
 * pop_listint - function that deletes head node
 * of a linked list
 * @head: first node
 *
 * Return: head node data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head == NULL)
		return (0);

	tmp = *head;
	i = (*head)->n;
	*head = (*head)->next;

	free(tmp);
	return (i);
}
