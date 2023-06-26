#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @m: number to print its last digit
 * Return: the value of the last digit
 */
int print_last_digit(int m)
{
	int a;

	if (n < 0)
	{
		n = -n;
		a = n % 10;
	}
	if (a < 0)
	{
		a = -a;
		_putchar(a + '0');
	}
	return (a);
}
