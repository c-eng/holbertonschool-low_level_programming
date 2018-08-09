#include "holberton.h"

/**
 * get_bit - gets bit at index
 * @n: bit array?
 * @index: index of bit to get
 *
 * Return: bit value at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
