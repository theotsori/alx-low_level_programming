#include "main.h"
#include <stdio.h>

/**
 * _abs - absolute value of a integer
 * @n: integer
 *
 * Return: always zero 0
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
	_putchar('\n');
	return (0);
}
