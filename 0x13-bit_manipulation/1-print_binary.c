#include "holberton.h"

/**
 * print_binary - prints binary
 * @n: number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int shift = 1;

	while (n >> shift)
		shift++;
	shift--;
	while (shift >= 0)
	{
		if ((n >> shift) & 1)
			_putchar('1');
		else
			_putchar('0');
		shift--;
	}
}
