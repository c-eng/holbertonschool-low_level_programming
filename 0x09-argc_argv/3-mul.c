#include <stdio.h>

/**
 * main - multiplies two integers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0, i, neg = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0 ; argv[1][i] != '\0' ; i++)
	{
		if (i == 0 && argv[1][i] == '-')
			neg = 1;
		else
		{
			if (neg == 1)
				num1 = (num1 * 10) - (argv[1][i] - '0');
			else
				num1 = (num1 * 10) + (argv[1][i] - '0');
		}
	}
	neg = 0;
	for (i = 0 ; argv[2][i] != '\0' ; i++)
	{
		if (i == 0 && argv[2][i] == '-')
			neg = 1;
		else
		{
			if (neg == 1)
				num2 = (num2 * 10) - (argv[2][i] - '0');
			else
				num2 = (num2 * 10) + (argv[2][i] - '0');
		}
	}
	printf("%d\n", num2 * num1);
	return (0);
}
