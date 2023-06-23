#include "main.h"
/**
 * print_triangle - prints a square
 * @size: size of the triangles to be printed
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int a, b;
		
		for (a = 1; a <= size; a++)
		{
			for (b = a; b < size; b++)
			{
				_putchar('~');
			}
			for (b = a; b <= size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
