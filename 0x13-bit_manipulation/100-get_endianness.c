#include "holberton.h"

/**
 * get_endianness - gets endianness
 *
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
	int chek = 1;
	char *bastardize = (char *)&chek;

	return (*bastardize);
}
