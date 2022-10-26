#include "lists.h"

/**
 * add_nodeint - function that adds a new node
 * at the beginning of a list
 * @head: first node
 * @n: integer
 *
 * Return: Address of new element and null if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;

	new_node->next = *head;

	*head = new_node;
	return (*head);
}
