#include "search_algos.h"

/**
 * print_array1 - Prints an array of integers
 *
 * @array: The array to print
 * @left: The leftmost index of the subarray to print
 * @right: The rightmost index of the subarray to print
 */
void print_array1(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
	}
	printf("\n");
}

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
	size_t left = 0, right = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_array1(array, left, right);
		mid = (left + right) / 2;

		if (array[mid] == value)
		{
			if (mid == 0 || array[mid - 1] != value)
				return (mid);
			right = mid - 1;
		}
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid;
	}

	return (-1);
}
