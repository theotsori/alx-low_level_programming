#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array
 * @size: size of array
 * @c: char to be used
 *
 * Return: NULL if 0 else ptr
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
