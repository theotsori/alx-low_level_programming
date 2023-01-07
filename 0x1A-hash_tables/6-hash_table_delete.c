#include "hash_tables.h"

/**
 * void hash_table_delete - function that deletes a hash table
 * @ht: hash table
 *
 * Return: always 0
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *next;

	if (!ht)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			next = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = next;
		}
	}
	free(ht->array);
	free(ht);
}
