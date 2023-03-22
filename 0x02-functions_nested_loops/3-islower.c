#include "main.h"

/**
  * _islower - check if lower or not
  * @c: char which we will check it
  *
  * Return: 1 if lower 0 or not
  */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	return (0);
}
