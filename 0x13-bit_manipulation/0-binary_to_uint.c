#include "holberton.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary number
 *
 * Return: unsigned int or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, add = 1;
	int len = 0;

	if (!b)
		return (0);
	while (b[len])
		len++;
	while ((len - 1) >= 0)
	{
		if (b[len - 1] == '1')
			sum += add;
		else if (b[len - 1] == '0')
			;
		else
			return (0);
		add *= 2;
		len--;
	}
	return (sum);
}
