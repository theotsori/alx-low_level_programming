#include "main.h"

/**
 * puts2 - prints 1 char out of 2 of a string
 * @str: string
 *
 * Return: 0
 */
void puts2(char *str)
{
	int a, b;

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b += 2)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
