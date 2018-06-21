#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - DOES SOMETHING
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int d;

	d = n % 10;
	printf("Last digit of %d is ", n);
	printf("%d", d);
	if (d > 5)
	{
		printf(" and is greater than 5");
	}
	else if (d == 0)
	{
		printf(" and is 0");
	}
	else if (d < 6)
	{
		printf(" and is less than 6 and not 0");
	}
	printf("\n");

	return (0);
}
