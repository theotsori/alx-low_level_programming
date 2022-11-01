#include "main.h"

/**
 * binary_to_uint - function that converts a binary num
 * to an unsigned int.
 * @b: const char
 *
 * Return: converted num b is null  if not num
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != 48 &&  *b != 49)
			return (0);
		num <<= 1;
		if (*b & 1)
			num += 1;
		b++;
	}
	return (num);
}
