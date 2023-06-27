#include "main.h"
/**
 * swap_int - swaps the values
 * of two integers
 * @a: interger to swapp
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
