#include "main.h"
/**
  * _isupper - checks for uppercase character
  * @c: passed parameter
  * Return: returns either 0 or 1
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
