#include <stdio.h>

/**
 * main - prints first 100 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	long p2a = 0, p2b = 0, p2c = 0, p1a = 1, p1b = 0, p1c = 0;
	long currenta = 0, currentb = 0, currentc = 0, counter;

	for (counter = 0 ; counter < 100 ; counter++)
	{
		currenta = (p1a + p2a) % 10000000;
		if ((p1a + p2a) / 10000000 > 0)
			currentb = ((p1b + p2b) % 10000000) + 1;
		else
			currentb = (p1b + p2b) % 10000000;
		if ((p1b + p2b) / 10000000 > 0)
			currentc = ((p1c + p2c) % 10000000) + 1;
		else
			currentc = (p1c + p2c);
		if (counter < 99)
		{
			if (currentc > 0)
				printf("%ld", currentc);
			if (currentb > 0)
				printf("%ld", currentb);
			printf("%ld, ", currenta);
		}
		else
		{
			printf("%ld%ld%ld\n", currentc, currentb, currenta);
		}
		p2a = p1a;
		p2b = p1b;
		p2c = p1c;
		p1a = currenta;
		p1b = currentb;
		p1c = currentc;

	}
	return (0);
}
