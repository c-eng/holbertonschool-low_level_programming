#include "holberton.h"

/**
 * _isdigit - checks c for digit
 * @c: the character to check
 *
 * Return: 1 is c is digit
 * 0 if c is not digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
