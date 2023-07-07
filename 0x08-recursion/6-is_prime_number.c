#include "main.h"
int r_prime(int n, int x)
int n;
int x

/**
 * is_prime_number - checks if the input integer is a prime number
 * @n: input
 * Return: 0 or 1
 */

int is_prime_number(int n);
{
	if (n <= 1)
		return (0);
	return (r_prime(n, n - 1));
}
/**
 * r_prime - find prime numbers
 * @n: input
 * @x: iteration
 * Return: 1 0r 0
 */
int r_prime(int n, int x);
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (r_prime(n, x - 1));
}
