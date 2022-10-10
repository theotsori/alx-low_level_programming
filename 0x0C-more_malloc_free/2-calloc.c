#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: Number of elements.
 * @size: The byte size.
 *
 * Return: NULL or pointer.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	while (i < (nmemb * size))
	{
		*((char *)arr + i) = 0;
		i++;
	}
	return (arr);
}
