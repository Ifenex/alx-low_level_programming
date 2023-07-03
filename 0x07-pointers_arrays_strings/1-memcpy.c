#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination memory
 * @src: memory to copy
 * @n: number of byte sto compy
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
