#include "lists.h"

/**
 * sum_listint - function that returns sum of
 * all the data(n) in a linked list
 * @head: first node
 *
 * Return: sum of data(n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
