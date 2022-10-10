#include <stdio.h>

/**
 * main - two different numbers
 *
 * Return: always 0
 */
int main(void)
{
	int a, b;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			if (a < b)
			{
				putchar(a);
				putchar(b);

				if (a != 56 || (a == 56 && b != 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
