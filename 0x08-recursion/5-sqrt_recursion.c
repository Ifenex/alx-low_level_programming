#include "main.h"
/**
 * helper - find the square root
 * @n: number to find the root
 * @y: iterator
 * Return: square root
 */
int _helper(int n, int y)

/**
 * _sqrt_recursion - find the natural square root of a number
 * @n: number to find the root
 * Return: square root of n
 */
int _sqrt_recursion(int n);
{
	if (n < 0)
	{
		return (-1);
	return (_helper(int n, int 0));
	}
int _helper(int n, int y)
{
	if (y * y > n)
		return (-1);
	if (y * y == n)
		return (y);
	return (_helper(n, y + 1));
}
