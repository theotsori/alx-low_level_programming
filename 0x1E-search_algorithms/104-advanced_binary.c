#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                   using the binary search algorithm
 *
 * @array: The array to search in
 * @size: The number of elements in @array
 * @value: The value to search for
 *
 * Return: The index where @value is located, or -1 if it is not present
 */
int advanced_binary(int *array, size_t size, int value)
{
	int mid, res;
	size_t i;

	if (!array || size == 0)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");

	mid = (size - 1) / 2;

	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
		return (advanced_binary(array, mid + 1, value));
	}
	else if (array[mid] < value)
	{
		res = advanced_binary(array + mid + 1, size - mid - 1, value);
		if (res == -1)
			return (-1);
		return (res + mid + 1);
	}
	else
	{
		return (advanced_binary(array, mid + 1, value));
	}
}
