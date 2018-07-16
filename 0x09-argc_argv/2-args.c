#include <stdio.h>

/**
 * main - prints all the arguments it recieves
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc - 1 ; i++)
	{
		printf("%s\n", argv[i + 1]);
	}
	return (0);
}
