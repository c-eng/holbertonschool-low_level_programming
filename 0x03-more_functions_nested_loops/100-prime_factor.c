#include <stdio.h>

/**
 * main - finds the largest prime factor of 612852475143
 *
 * Return: 0
 */

int main(void)
{
	long thing = 612852475143, out = 1, i = 2;

	while ((i * i) <= thing)
	{
		if ((thing % i) == 0)
		{
			out = i;
			thing /= i;
		}
		else
			i++;

	}
	if (thing > 0)
		out = thing;
	printf("%ld\n", out);
	return (0);
}
