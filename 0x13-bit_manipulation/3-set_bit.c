#include "holberton.h"

/**
 * set_bit - sets bit at index to 1
 * @n: bit array?
 * @index: index of setting
 *
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int int_i = index / 64, bit_i = index % 64;
	unsigned int set = 1;

	if (!n)
		return (-1);
	set = set << bit_i;
	n[int_i] = n[int_i] | set;
	return (1);
}
