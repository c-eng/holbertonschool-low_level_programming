#include "holberton.h"

/**
 * _isupper - checks c for uppercase
 * @c: the character to check
 *
 * Return: 1 is c is uppercase
 * 0 if c is not uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
