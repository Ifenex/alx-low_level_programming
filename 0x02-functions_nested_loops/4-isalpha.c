#include "main.h"

/**
 * _isalpha - check for alphabet char
 *@c: character to check
 *Return: 0 or 1
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
