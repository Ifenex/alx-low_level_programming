#include <stdio.h>
#include "main.h"
/**
 * _atoi - convert string to number
 * @s: string
 *
 * Return: Alwys 0
 *
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			d++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}

/**
 * main - multiplies two numbers,
 * followed by a new line.
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mul, k, j;
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	k = _atoi(argv[1]);
	j = _atoi(argv[2]);
	mul = k * j;
	printf("%d\n", mul);

	return (0);
}
