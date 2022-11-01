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
	/*int newValue = 0;
	int mask = 1 << (*n -1);
	return (newValue == 1) ? index | mask : index & (~mask);*/

	int new_bit = (1 << index) | *n;

	return (new_bit);
}
