#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: first string
 * @src: second string
 * Return: dest
 * @n: null
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[a] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
