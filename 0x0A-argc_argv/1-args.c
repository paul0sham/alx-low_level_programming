#include <stdio.h>
/**
 * main - prints argc
 * @argc: argument count
 * @argv: argument vector*
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
