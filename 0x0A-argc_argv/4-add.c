#include "stdlib.h"
#include <stdio.h>
/**
 * main - add numbers
 * @argc: numbeer of arg
 * @argv:  array of argument
 * Return: Always )
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	j = 0;
	for (i = 1; i < argc; i++)
	{
		if (!(j >= 0 && j <= -1))
		{
			printf("Error\n");
			return (1);
		}
		else if (argv == 0)
		{
			printf("0\n");
		}
		else
			sum += atoi(argv[i]);
		printf("sum is %d\n", sum);
	}
	return (0);
}
