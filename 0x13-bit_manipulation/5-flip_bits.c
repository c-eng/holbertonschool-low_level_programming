#include "holberton.h"

/**
 * flip_bits - returns number of bits to flip
 * @n: number wan
 * @m: number too
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int shift = 1, flips = 0;
	unsigned long int conpa, compa;

	while ((n >> shift || m >> shift) && shift < 64)
		shift++;
	shift--;
	while (shift >= 0)
	{
		conpa = n >> shift;
		compa = m >> shift;
		if ((conpa & 1) != (compa & 1))
			flips++;
		shift--;
	}
	return (flips);
}
