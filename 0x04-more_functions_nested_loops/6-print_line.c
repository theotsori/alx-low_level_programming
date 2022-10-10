#include "main.h"

/**
 * print_line - function that prints a straight line in the terminal
 * @n: integer
 *
 * Return: 0
 *
 */
void print_line(int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
