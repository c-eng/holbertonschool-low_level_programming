#include <stdio.h>

/**
 * main - prints sum of positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0, num;

	for (i = 1 ; i < argc ; i++)
	{
		num = 0;
		for (j = 0 ; argv[i][j] != '\0' ; j++)
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
			num = (num * 10) + (argv[i][j] - '0');
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
