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
	unsigned long int mask = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = mask << index;
	*n = *n | mask;

	return (1);
}
