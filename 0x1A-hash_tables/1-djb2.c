#include "hash_tables.h"

/**
 * hash_djb2 - function that takes string and returns as hash val
 * @str: string to convert
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;

	for (; *str; ++str)
	{
		hash = ((hash << 5) + hash) + *str;
	}

	return (hash);
}
