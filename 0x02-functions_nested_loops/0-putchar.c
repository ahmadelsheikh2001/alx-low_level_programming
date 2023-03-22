#include "main.h"

/**
  *main - print _putchar
  *Return: 0 if success
  */

int main(void)
{
	char ch[] = "_putchar";
	int num;

	for (num = 0; num < 8; num++)
	{
		_putchar(ch[num]);
	}
	_putchar('\n');
	return (0);
}
