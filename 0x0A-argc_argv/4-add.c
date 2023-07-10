#include <stdlib.h>
#include <stdio.h>
/**
 * main - add numbers
 * argc: numbeer of arg
 * argv:  array of argument
 * Return: Always )
 */
int main (int argc, char *argv[])
{
	int i, sum = 0;
	if (argv > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += _atoi(argv[i]);
			printf("sum is %d\n", sum);
		}
	} else if (argv == 0)
	{
		printf("0\n");
	}


