#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	long prev2 = 0, prev1 = 1, current, counter;

	for (counter = 0 ; counter < 50 ; counter++)
	{
		current = prev2 + prev1;
		if (counter < 49)
			printf("%ld, ", current);
		else
			printf("%ld\n", current);
		prev2 = prev1;
		prev1 = current;
	}
	return (0);
}
