#include <stdio.h>
#include <stdlib.h>

/**
 * main - print multiplication of two numbers
 * @argc: number of arguments
 * @argv: arguments of vector
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i, res = 1;

	if (argc < 3 || argc > 3)
		printf("Error\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			res *= atoi(argv[i]);
		}
		printf("%d\n", res);
	}

	return (0);
}
