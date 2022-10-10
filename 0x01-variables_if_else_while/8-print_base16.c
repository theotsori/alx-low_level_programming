#include <stdio.h>

/**
 * main - program that prints base 16 in lowercase
 *
 * Return: always zero
 */
int main(void)
{
	int c;
	char a;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
