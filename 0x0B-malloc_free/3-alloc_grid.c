#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns pointer to a 2d array
 * @width: 2d width
 * @height: 2d height
 *
 * Return: Pointer oF 2d array
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	ar = (int **)malloc(sizeof(int *) * height);
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ar[i] = (int *)malloc(sizeof(int) * width);
		if (ar[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ar[j]);
			free(ar);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}
