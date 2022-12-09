#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define KEY_LENGTH 16

/**
 * Generate a random key using the current time as a seed
 */
char* generateKey()
{
	char* key;
	int i;
	srand(time(0));

	key = malloc(KEY_LENGTH + 1);

	for (i = 0; i < KEY_LENGTH; i++)
	{
		key[i] = (rand() % 26) + 'a';
	}

	key[KEY_LENGTH] = '\0';

	return key;
}

int main(void)
{
	char* key = generateKey();
	printf("Key: %s\n", key);

	free(key);

	return 0;
}
