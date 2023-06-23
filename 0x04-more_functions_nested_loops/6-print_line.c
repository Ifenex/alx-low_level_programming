#include "main.h"
/**
 * print_line - draw a straight line in the terminal
 * @n: number of times the character - should be printed
 *
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int a;

		for (a = 2; a <= n; a++)
		{
			_putchar('-');
		}
		_putchar('\n');
	}
}
