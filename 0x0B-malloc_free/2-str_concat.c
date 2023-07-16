#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  concatenates two strings.
 * @s1: input
 * @s2: input
 *
 * Return: concatenated s1 and s2
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = a = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[a] != '\0')
		a++;
	c = malloc(sizeof(char) * (i + a + 1));

	if (c == NULL)
		return (NULL);
	i = a = 0;
	while (s1[i] != '\0')
	{
		c[i] = s1[i];
		i++;
	}
	while (s2[a] != '\0')
	{
		c[i] = s2[a];
		i++, a++;
	}
	c[i] = '\0';
	return (c);
}
