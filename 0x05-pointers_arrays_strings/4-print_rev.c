#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int a, b, c;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	c = a;

	for (b = c - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
