#include "main.h"

/**
 * clear_bit - function that sets a value of a bit
 * to 0 at a given index.
 * @n: pointer
 * @index: unsigned int
 *
 * Return:1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int new_num;

	new_num &= ~(index << *n);
		return (new_num);
}
