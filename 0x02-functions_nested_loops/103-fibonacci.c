#include <stdio.h>

/**
 * main - prints sum of even fibonacci numbers not exceeding 4000000
 *
 * Return: 0
 */

int main(void)
{
	long prev2 = 1, prev1 = 1, current = 1, sum = 0;

	while (current < 4000000)
	{
		if ((current % 2) == 0)
			sum += current;
		current = prev1 + prev2;
		prev2 = prev1;
		prev1 = current;
	}
	printf("%ld\n", sum);
	return (0);
}
