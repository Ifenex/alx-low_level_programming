#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: character
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int a;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (a = 0; a < size a++)
		s[a] = c;
	return (a);
}
