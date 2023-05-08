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
	size_t start = 0, end = size - 1, mid, i;

	if (array == NULL || size == 0)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (start + end) / 2;

		if (array[mid] == value)
		{
			if (mid == 0 || array[mid - 1] != value)
				return (mid);
			end = mid - 1;
		}
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}

	return (-1);
}
