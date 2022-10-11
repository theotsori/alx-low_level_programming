#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints name of file
 * that it was compiled from
 *
 * Return: always 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
