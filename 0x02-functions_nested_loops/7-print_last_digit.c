#include "holberton.h"

/**
 * print_last_digit - Prints last digit of int i
 * @i: the int to be evaluated
 *
 * Return: last digit
 */

int print_last_digit(int i)
{
	int d = i % 10;

	if (d >= 0)
	{
		_putchar(d + '0');
		return (d);
	}
	else
	{
		_putchar((d * -1) + '0');
		return (d * -1);
	}
}
