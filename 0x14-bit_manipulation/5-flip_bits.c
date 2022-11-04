#include "main.h"

/**
 * flip_bits - function that returns the number of
 * bits you would need to flip to get from one number
 * to another.
 * @n: long unsigned int
 * @m: long unsigned int
 *
 * Return: always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int co2 = n ^ m, bits = 0;

	while (co2 > 0)
	{
		bits += (co2 & 1);
		co2 >>= 1;
	}
	return (bits);
}
