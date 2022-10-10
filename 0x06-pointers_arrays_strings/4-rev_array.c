#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: int array
 * @n: number of elements
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, j, k;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		k = a[i];
		a[i] = a[j];
		a[j--] = k;
	}
}
