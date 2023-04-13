#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted array
 * @array: pointer to the sorted integers
 * @size: number of elemnets int the array
 * @value: Is the value to search for
 * Return: -1 or position of the int
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%lu] =  [%d]\n", pos, array[pos]);

		if (array[pos] == value)
		{
			return (pos);
		}

		if (array[pos] < value)
		{
			low = pos + 1;
		}
		else
		{
			high = pos - 1;
		}
	}

	if (pos >= size)
	{
		printf("Value checked array[%lu] is out of range\n", (unsigned long)pos);
	}

	return (-1);
}
