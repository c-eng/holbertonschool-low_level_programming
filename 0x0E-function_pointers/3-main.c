#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - gets args and makes calls for calcing
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0 or not 0
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
