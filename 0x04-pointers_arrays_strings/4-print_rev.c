#include "holberton.h"

/**
 * print_rev - prints a string, s, in reverse with newline
 * @str: string to be printed
 *
 * Return: void
 */

void print_rev(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		count++;
	}
	while (count >= 0)
	{
		if (*(str + count) != '"')
			_putchar(*(str + count));
		count--;
	}
	_putchar('\n');
}
