#include "main.h"
#include <stdio.h>

/**
 * set_string - set value of pointer to char
 * @s: pointer
 * @to: string to set
 *
 * Return: 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
