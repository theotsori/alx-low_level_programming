#include "main.h"

/**
 * swap_int - function that swaps values of two integers
 * @a: one of the int
 * @b: one of the int
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
