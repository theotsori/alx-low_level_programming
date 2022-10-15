#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed
 * @n: number of strings passed
 *
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	register unsigned int i;
	va_list num;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(num, char *);

		if (str == NULL)
		{
			printf("nill");
		}
		else
		{
			if (i < (n - 1) && separator != 0)
			{
				printf("%s%s", str, separator);
			}
			else
			{
				printf("%s", str);
			}
		}
	}
	va_end(num);
	printf("\n");
}
