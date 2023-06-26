#include "main.h"
/**
 * _strcpy -  copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest.
 * @dest: destinaion file
 * @src: file to copy
 * Return:  the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; x < i; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
}	return (dest);
