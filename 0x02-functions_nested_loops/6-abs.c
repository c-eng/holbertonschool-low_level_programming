#include "holberton.h"

/**
 * _abs - returns the abs of integer n
 * @n: the integer to be absd
 *
 * Return: the abs of n
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-n);
	}
}
