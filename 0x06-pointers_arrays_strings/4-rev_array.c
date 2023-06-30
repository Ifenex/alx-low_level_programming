#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: integer to be reversed
 * @n: number of integers
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int c;
	int b;

	for (c = 0; c < n--; c++)
	{
		b = a[c];
		a[c] = a[n];
		a[n] = b;
	}
}
