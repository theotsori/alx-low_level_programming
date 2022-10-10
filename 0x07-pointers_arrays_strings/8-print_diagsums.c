#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals
 * @a: square matrix
 * @size: size of the matrix
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int j, k;

	j = 0;
	k = 0;

	for (i = 0; i < size; i++)
	{
		j += a[(size * i) + i];
		k += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", j, k);
}
