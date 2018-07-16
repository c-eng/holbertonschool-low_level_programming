#include <stdio.h>

/**
 * _atoi - converts string s to an integer
 * @s: string in question
 *
 * Return: integer or 0 if there are no numbers to convert
 */

int _atoi(char *s)
{
	int a = 0, t, i, n = 1;

	for (i = 0 ; *(s + i) != '\0' ; i++)
	{
		t = *(s + i);
		if (t == '-')
			n *= -1;
		if (t >= '0' && t <= '9')
		{
			if (n < 0)
				a = (a * 10) - (t - '0');
			else
				a = (a * 10) + (t - '0');
			if (*(s + (i + 1)) < '0' || *(s + (i + 1)) > '9')
			{
				break;
			}
		}
	}
	if (a != 0)
		return (a);
	else
		return (0);
}

/**
 * main - calculates min number of coins to make change
 * @argc: number of args
 * @argv: array of args
 *
 * Return: min number of coins needed to make change
 */

int main(int argc, char *argv[])
{
	int koinz = 0, remainder;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	remainder = _atoi(argv[1]);
	if (remainder >= 0)
	{
		if (remainder / 25)
		{
			koinz += (remainder / 25);
			remainder %= 25;
		}
		if (remainder / 10)
		{
			koinz += (remainder / 10);
			remainder %= 10;
		}
		if (remainder / 5)
		{
			koinz += (remainder / 5);
			remainder %= 5;
		}
		if (remainder / 2)
		{
			koinz += (remainder / 2);
			remainder %= 2;
		}
		koinz += remainder;
	}
	printf("%d\n", koinz);
	return (0);
}
