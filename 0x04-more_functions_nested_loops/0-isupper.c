#include "main.h"

/**
 * _isupper - used to check for uppercase characters
 * @c: working integer
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
