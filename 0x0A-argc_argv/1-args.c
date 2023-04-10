#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of args
 * @argc: number of parameters
 * @argv: argument of vector
 * Return: 0 if success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
