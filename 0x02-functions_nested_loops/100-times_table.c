#include "holberton.h"

/**
 * print_table_format - Outputs a correctly formatted single integer
 * @x: x table input
 * @y: y table input
 *
 * Return: void
 */
void print_table_format(int x, int y)
{
	int m, h, t, o;

	m = x * y;
	h = m / 100;
	t = (m / 10) % 10;
	o = m % 10;
	if (y == 0)
		_putchar(m + '0');
	else if (h > 0)
	{
		_putchar(' ');
		_putchar(h + '0');
		_putchar(t + '0');
		_putchar(o + '0');
	}
	else if (t > 0)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(t + '0');
		_putchar(o + '0');
	}
	else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(o + '0');
	}
}


/**
 * print_times_table - prints nxn times table
 * @n: dimension of table 0<n<15
 *
 * Return: void
 */

void print_times_table(int n)
{
	int x, y;

	if (n >= 0 && n <= 15)
	{
		for (x = 0 ; x <= n ; x++)
		{
			for (y = 0 ; y <= n ; y++)
			{
				print_table_format(x, y);
				if (y < n)
				{
					_putchar(',');
				}
				else
				{
					_putchar('\n');
				}
			}
		}
	}
}
