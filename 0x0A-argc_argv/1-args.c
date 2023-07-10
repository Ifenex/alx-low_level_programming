#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arg, followed by a new line.
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /* exclude argv*/
	printf("%d\n", argc - 1);
	return (0);
}
