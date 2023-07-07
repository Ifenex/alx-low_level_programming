#include "main.h"
/**
 * _strlen_recursion -  returns the length of a string
 * @s: string to its length
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int y = 0;

	if (*s)
	{
		y++;
		y += _strlen_recursion(s + 1);
	}
	return (y);
}
