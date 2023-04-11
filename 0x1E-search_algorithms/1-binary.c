#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of ints
 * using the Binary search algorithm
 * @array: POinter to the first element of the array to search in
 * @size: NUmber of lements in array
 * @value: Value to search for
 * Return: INdex where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, mid;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		print_array(array, left, right);

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

/**
 * print_array - Prints an array of integers
 * @array: POinter to the first element of the array
 * @left: Left index of the subarray to print
 * @right: Right index of the subarray to print
 */
void print_array(int *array, int left, int right)
{
	int i;

	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);

		if (i < right)
			printf(", ");
	}
	printf("\n");
}
