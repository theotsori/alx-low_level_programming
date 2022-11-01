#include "main.h"
#include <stdio.h>

/**
 * print_binary - function that prints binary rep
 * of a number.
 * @n: unsigned long int
 * Return: 0;
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	printf("%ld", n & 1);
}
/*
{
	unsigned i;

	for (i = 1 << 31; i > 0; i = i / 2)
	(n & i) ? _putchar(49) : _putchar(48);
}
*/
