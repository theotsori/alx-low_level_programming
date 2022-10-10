#include "main.h"

/**
 * _sqrt_recursion - function that returns natural square root of a number
 * @n: int
 *
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_n(0, n));
}
/**
 * sqrt_n - used to find the value of the square root
 * @i: int
 * @j: int
 *
 * Return: -1 or i or sqrt_n
 */
int sqrt_n(int i, int j)
{
	if (i > j / 2)
		return (-1);
	else if (i * i == j)
		return (i);
	return (sqrt_n(i + 1, j));
}
