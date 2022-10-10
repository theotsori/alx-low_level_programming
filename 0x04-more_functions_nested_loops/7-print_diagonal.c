#include "main.h"

/**
 * print_diagonal - draws diagonal lines in the terminal
 * @n: integer
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int m, p;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (m = 0; m < n; m++)
	{
		for (p = 0; p < m; p++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
