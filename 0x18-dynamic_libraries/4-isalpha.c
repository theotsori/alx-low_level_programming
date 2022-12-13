#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: character
 * Return: 1 when c is a letter always, zero 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
