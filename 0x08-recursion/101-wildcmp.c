#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 else 0
 * @s1: string 1
 * @s2: string wild
 *
 * Return: 1 else 0
 */

int _wild(char *s1, char *s2);
char *s(char *s2);

int wildcmp(char *s1, char *s2)
{
	int sum = 0;

	if (*s1 == '\0' && *s2 == '*' && !*s(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s1 == '\0' || *s2 == '\0')
		return (0);
	if (*s2 == '*')
	{
		s2 = s(s2);
		if (*s2 == '\0')
			return (1);
		if (*s1 == *s2)
			sum += wildcmp(s1 + 1, s2 + 1);
		sum += _wild(s1 + 1, s2);
		return (!!sum);
	}
	return (0);
}

/**
 * _wild - checks recursively for paths when characters are equal
 * @s1: 1st string
 * @s2: 2nd string
 * Return: value of wildcmp or _wild
 */
int _wild(char *s1, char *s2)
{
	if (*s1 == '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1, s2));
	return (_wild(s1 + 1, s2));
}

/**
 * *s - moves the current char
 * @s2: string
 *
 * Return: character address
 */
char *s(char *s2)
{
	if (*s2 == '*')
		return (s(s2 + 1));
	else
		return (s2);
}
