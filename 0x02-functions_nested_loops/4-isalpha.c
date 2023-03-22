#include "main.h"

/**
  * _isalpha - check if the char is alphabet or not
  * @c: char which will be checked
  *
  * Return: i if alph 0 or not
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
