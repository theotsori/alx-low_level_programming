#include "main.h"

/**
 * get_bit - function that returns the value of a bit
 * at a given index.
 * @n: unsigned int
 * @index: start from 0;
 *
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = mask << index;
	return ((n & mask) != 0);
}
