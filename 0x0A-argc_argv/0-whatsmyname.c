#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the name of program
 * @argc: number of program arguments
 * @argv: pointers of string
 * Return: 0 if seccess
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
