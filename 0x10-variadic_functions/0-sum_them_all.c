#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum
 * of all its parameters
 * @n: alleged parameter
 * @...: variadic functions
 *
 * Return: sum of parameters
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int index, sum = 0;

	va_start(num, n);

	for (index = 0; index < n; index++)
		sum += va_arg(num, int);

	va_end(num);

	return (sum);

	if (n == 0)
		return (0);
}
