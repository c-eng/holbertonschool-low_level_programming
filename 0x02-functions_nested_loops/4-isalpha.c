#include "holberton.h"

/**
 * _isalpha - Checks if c is an alphabetical character
 * @c: The character to be checked
 *
 * Return: 1 if alphabetical
 * 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
