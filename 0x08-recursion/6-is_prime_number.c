#include "main.h"

/**
 * is_prime_number - function for prime numbers
 * @n: Number
 *
 * Return: 1 if number is prime 0 else
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (nprime2(2, n));
}

/**
 * nprime2 - confirms n is prime
 * @a: checks factor
 * @b: prime
 *
 * Return: 0 or 1 or prime
 */
int nprime2(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (nprime2(a + 1, b));
}
