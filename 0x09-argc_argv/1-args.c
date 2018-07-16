#include <stdio.h>

/**
 * main - prints number of arguments given
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: void
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
