#include "main.h"

/**
 * _strlen_recursion - returns lenght of string
 *
 * @s: string
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}

/**
 * get_pal - checks for 0 and 1
 * @s: string
 * @len: lenght
 *
 * Return: int
 */
int get_pal(char *s, int len)
{
	if (*s != *(s + len - 1))
		return (0);
	else if (*s == '\0')
		return (1);
	return (get_pal(s + 1, len - 2));
}

/**
 * is_palindrome - function that returns 1 if a string is palindrome
 * @s: string pointer
 *
 * Return: 1 if palindrome and empty 0 else
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (get_pal(s, len));
}
