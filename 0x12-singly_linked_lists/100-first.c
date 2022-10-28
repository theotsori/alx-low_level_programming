#include "lists.h"

/**
 * statement - print string before main.c is
 * executed.
 * Return: 0
 */
void __attribute__((constructor)) statement(void);
void statement(void)
{
	printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
