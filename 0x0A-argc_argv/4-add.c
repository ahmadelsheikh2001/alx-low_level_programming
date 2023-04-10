#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print sum numbers
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc <= 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
