#include "holberton.h"

/**
 * _islower - checks c for lowercase
 * @c: the character to check
 *
 * Return: 1 is c is lowercase
 * 0 if c is not lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
