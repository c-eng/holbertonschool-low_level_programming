#include <stdio.h>

/**
 * main - prints first 100 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	long p2a = 0, p2b = 0, p2c = 0, p1a = 1, p1b = 0, p1c = 0;
	long ca = 0, cb = 0, cc = 0, counter;

	for (counter = 0 ; counter < 98 ; counter++)
	{
		ca = (p1a + p2a) % 10000000;
		if ((p1a + p2a) / 10000000 > 0)
			cb = ((p1b + p2b) % 10000000) + 1;
		else
			cb = (p1b + p2b) % 10000000;
		if ((p1b + p2b) / 10000000 > 0)
			cc = ((p1c + p2c) % 10000000) + 1;
		else
			cc = (p1c + p2c);
		if (counter < 97)
		{
			if (cc > 0)
				printf("%ld%07ld%07ld, ", cc, cb, ca);
			else if (cb > 0)
				printf("%ld%07ld, ", cb, ca);
			else
				printf("%ld, ", ca);
		}
		else
		{
			printf("%ld%ld%ld\n", cc, cb, ca);
		}
		p2a = p1a;
		p2b = p1b;
		p2c = p1c;
		p1a = ca;
		p1b = cb;
		p1c = cc;

	}
	return (0);
}
