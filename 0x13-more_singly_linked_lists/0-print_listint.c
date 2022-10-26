#include "lists.h"

/**
 * print_listint - function that prints all elements
 * of listint_t list
 * @h: first node
 *
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (i);
}
