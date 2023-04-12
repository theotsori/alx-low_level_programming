#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in a sorted array of ints
 * @array: pointer to the sorted list of ints
 * @size: the size of the array
 * @value: int being searched in the array
 * Return: Print value
 */
int jump_search(int *array, size_t size, int value)
{
	int jump_step = (int) sqrt(size);
	size_t prev = 0;
	size_t curr = jump_step;
	size_t i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	while (curr < size && array[curr] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
		prev = curr;
		curr += jump_step;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);
	for (i = prev; i <= curr && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
