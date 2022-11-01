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
	{
		print_binary(n >> 1);
	}
	if (n & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
