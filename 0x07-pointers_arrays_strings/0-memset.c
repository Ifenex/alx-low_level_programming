#include "main.h"
/**
 * _memset - memory with a constant byte
 * @n: number of byte to fil
 * @s: first char
 * @b: second char
 * Return: the changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; i > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

