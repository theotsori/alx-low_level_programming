#include "main.h"

/**
 * leet - 1337 encryption
 * @s: char
 *
 * Return: 0
 */
char *leet(char *s)
{
	int a, b;

	char *c = "aAeEoOtTlL";
	char *d = "4433007711";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (s[a] == c[b])
			{
				s[a] = d[b];
			}
		}
	}
	return (s);
}
