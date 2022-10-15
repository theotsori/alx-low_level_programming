#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 * followed by a new line.
 * @separator: constant char
 * @n: unsigned int
 *
 * Return: always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	register unsigned int i;
	va_list a;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(a, int), (separator && i != n - 1) ? separator : "");
	}
	va_end(a);
	printf("\n");
}
