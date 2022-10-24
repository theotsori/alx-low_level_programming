#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end
 * @head: first node
 * @str: elements of the linked list
 *
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *end_node;
	int i;

	end_node = *head;
	while (end_node && end_node->next != NULL)
		end_node = end_node->next;

	for (i = 0; str[i] != '\0'; i++)
		;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = i;
	new_node->next = NULL;

	if (end_node)
		end_node->next = new_node;
	else
		*head = new_node;

	return (*head);
}
