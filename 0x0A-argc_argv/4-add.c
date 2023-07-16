#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check string in digit
 * @st: array of string
 *
 * Return: Always 0
 */
int check_num(char *st)
{
	unsigned int c;

	c = 0;
	while (c < strlen(st))
	{
		if (!isdigit(st[c]))
		{
			return (0);
		}
		c++;
	}
	return (1);
}

/**
 * main - add numbers
 * @argc: numbeer of arg
 * @argv:  array of argument
 * Return: Always )
 */
int main(int argc, char *argv[])
{
	int c, j, sum = 0;
	
	c = 1;
	while (c < argc)
	{
		if (check_num(argv[c]))
		{
			j = atoi(argv[c]);
			sum += j;
		}
		else
		{
			printf("Erro\n");
			return (1);
		}
		c++;
	}
	printf("%d\n", sum);
	return (0);
}
