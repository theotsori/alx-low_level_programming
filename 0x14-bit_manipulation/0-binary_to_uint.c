#include "main.h"

/**
 * binary_to_uint - function that converts a binary num
 * to an unsigned int.
 * b - const char
 *
 * Return: converted num b is null  if not num
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL)
	return 0;

	while (b[i] == 48 || b[i] == 49)
	{
		num <<= 1;
		num += b[i] - 48;
		i++;
	}
	return num;
}
