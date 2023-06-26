#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s:string to print
 */
void print_rev(char *s)
{
	int longi = 0;
	int h;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (h = longi; h > 0; h--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
