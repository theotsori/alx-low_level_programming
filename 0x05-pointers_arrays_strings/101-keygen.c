#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password generator
 *
 * Return: 0
 */
int main(void)
{
	int p[100];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		p[i] = rand() % 78;
		sum += (p[i] + '0');
		putchar(p[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
