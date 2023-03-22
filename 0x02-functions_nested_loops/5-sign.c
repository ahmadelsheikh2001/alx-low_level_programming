#include "main.h"
/**
  * print_sign - print + if number is beager then 0 - if less then 0 0 if 0
  *@n: number which we check
  *
  *Return: 1 if more then 1
  */
int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
