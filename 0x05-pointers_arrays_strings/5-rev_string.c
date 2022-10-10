#include "main.h"

/**
 * rev_string - reverse string
 * @s: string
 *
 * Return: 0
 */
void rev_string(char *s)
{
	char d;
	int a, b, c;

	b = 0;
	c = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	c = b - 1;

	for (a = 0; a < b / 2; a++)
	{
		d = s[a];
		s[a] = s[c];
		s[c--] = d;
	}
}
