#include "main.h"
/**
 * _puts_recursion -  prints a string in reverse
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
