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
	int status;

	status = (n >> index) & 1;

	return (status);
}
