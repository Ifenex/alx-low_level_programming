#include "main.h"
/**
 * print_most_numbers - print numbers excpet 2 and 4
 *
 * Return: Always 0 or 1.
 */

void print_most_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		if (!(a == '2' || a == '4'))
			_putchar(a);
	}
	_putchar('\n');
}
