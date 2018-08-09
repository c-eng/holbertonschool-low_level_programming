#include "holberton.h"

/**
 * clear_bit - sets bit at index to 0
 * @n: bit array?
 * @index: index of setting
 *
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int int_i = index / 32, bit_i = index % 32;
	unsigned int clear = 1;

	if (!n)
		return (-1);
	clear = clear << bit_i;
	clear = ~clear;
	n[int_i] = n[int_i] & clear;
	return (1);
}
