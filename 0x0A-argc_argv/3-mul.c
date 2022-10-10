#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Program multiplies two numbers
 * @argc: command line arguments
 * @argv: Arrays
 * Return: 1 no arguments else 0
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
			j *= atoi(argv[i]);

		printf("%d\n", j);
	}

	return (0);
}
