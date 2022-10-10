#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @s: char
 * Return: 0
 */
char *rot13(char *s)
{
	int a, b;

	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; c[b] != '\0'; b++)
		{
			if (s[a] == c[b])
			{
				s[a] = d[b];
				break;
			}
		}
	}
	return (s);
}
