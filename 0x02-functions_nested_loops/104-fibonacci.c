#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 * starting with 1 and 2, followed by a new line
 * Return: 0
 */

int main(void)
{
	unsigned long long int i, j, k;
	unsigned long long int i1, i2, j1, j2, k1, k2;

	i = 0;
	j = 1;
	k = 1;

	for (i = 0; i < 90; i += 2)
	{
		i1 = j / 10000000000;
		i2 = j % 10000000000;
		j1 = k / 10000000000;
		j2 = k % 10000000000;

		k = j + k / 10000000000;
		j = j + k - (k / 10000000000) * 10000000000;

		printf("%llu%llu, %llu%llu, ", i1, i2, j1, j2);
	}

	i1 = j / 10000000000;
	i2 = j % 10000000000;
	j1 = k / 10000000000;
	j2 = k % 10000000000;

	printf("%llu%llu, %llu%llu\n", i1, i2, j1, j2);

	return (0);
}

