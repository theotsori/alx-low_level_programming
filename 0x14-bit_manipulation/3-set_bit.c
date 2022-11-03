#include "main.h"

/**
 * set_bit - function that sets the value
 * of a bit to 1 at a given index
 * @n: pointer unsigned long int
 * @index: unsigned int
 *
 * Return: 1 if worked 0 error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
