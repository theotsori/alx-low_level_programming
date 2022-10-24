#include "lists.h"

/**
 * print_list - function that will print all elements
 * of a list_t list
 * list_t - list contain elements
 * @h: pointer to the list_t
 *
 * Return: list or 0
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (i);
}
