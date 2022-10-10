#include <stdio.h>

/**
 * main - Entry point program that prints single digit numbers
 *
 * Return: always zero
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
