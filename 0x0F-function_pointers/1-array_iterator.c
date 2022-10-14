#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array.
 * @array: int
 * @action: function pointer
 * @size: size of array
 *
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int));
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
