#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: integer
 * Return: last digit
 */

int print_last_digit(int n)
{
	int rsl;

	if (n > 0)
		n = -n;

	rsl = n % 10;

	if (rsl < 0)
		rsl = -rsl;

	_putchar(rsl + '0');

	return (rsl);
}
