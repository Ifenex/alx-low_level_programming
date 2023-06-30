#include "mai.h"
/**
 * cap_string -  capitalizes all words of a string
 * @n: character
 * Return: a pointer
 */
char *cap_string(char *n)
{
	int index = 0;

	while (n[index])
	{
		while (!(n[index] >= 'a' && n[index] <= 'z'))
		{
			index++;
			if (n[index - 1] == '' ||
					
