#include "holberton.h"

/**
 * _abs - returns the abs of integer n
 * @n: the integer to be absd
 *
 * Return: the abs of n
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}

/**
 * print_number - prints number n
 * @n: number to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
		_putchar('-');
	if (_abs(n) / 1000000 > 0)
		_putchar(((_abs(n) / 1000000) % 10) + '0');
	if (_abs(n) / 100000 > 0)
		_putchar(((_abs(n) / 100000) % 10) + '0');
	if (_abs(n) / 10000 > 0)
		_putchar(((_abs(n) / 10000) % 10) + '0');
	if (_abs(n) / 1000 > 0)
		_putchar(((_abs(n) / 1000) % 10) + '0');
	if (_abs(n) / 100 > 0)
		_putchar(((_abs(n) / 100) % 10) + '0');
	if (_abs(n) / 10 > 0)
		_putchar(((_abs(n) / 10) % 10) + '0');
	_putchar((_abs(n) % 10) + '0');
}
