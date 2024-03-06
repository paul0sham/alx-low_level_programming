#include "main.h"
#include <stdio.h>
/**
  * _print_rev_recursion - returns recursion
  * @s: passed parameter
  * Return: returns
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);

	putchar(*s);
}
