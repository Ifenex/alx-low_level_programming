#include <stdio.h>

/**
 * largest_number - return the largest number of 3 numbers
 * @a: first integer
 * @b: second integers
 * @c: third integers
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && c > a)
	{
		largest = c;
	}
	else if (a > b && b > c)
	{
		largest = a;
	} else
	{
		largest = b;
	}
return (largest);
}
