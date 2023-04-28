#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 *
 * If the function fails, exit the program with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;

	if (head == NULL)
	{
		fprintf(stderr, "Error: head is NULL\n");
		exit(98);
	}

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		count++;
	}
	return (count);
}
