#include "main.h"
/**
 * string_toupper -  lowercase letters of a string to uppercase
 * @r: char to change
 * Return: r
 */
char *string_toupper(char *r)
{
	int j;

	j = 0;
	while (r[j] != '\0')
	{
		if (r[j] >= 'a' && r[j] <= 'z')
		{
			r[j] = r[j] - 32;
		}
		j++;
	}
	return (r);
}
