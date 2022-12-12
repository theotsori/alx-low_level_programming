#include "main.h"

/**
 * get_endianness - function that checks endianness
 * union - contains int and char array
 * Return: 0
 */
int get_endianness(void)
{
	union
	{
		int i;
		char c[sizeof(int)];
	} u;

	u.i = 1;

	if (u.c[0] == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
