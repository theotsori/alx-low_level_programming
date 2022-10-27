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
	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		listint_t *tmp = *head;
		*head = *head->n;
		n = *head;
		free(tmp);
		tmp = NULL;
	}
	return (n);
}
