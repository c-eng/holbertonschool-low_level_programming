#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds a and b
 * @a: a
 * @b: b
 *
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subs a and b
 * @a: a
 * @b: b
 *
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
 * op_mul - mulls a and b
 * @a: a
 * @b: b
 *
 * Return: Mulled a and b
 */

int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
 * op_div - divs a and b
 * @a: a
 * @b: b
 *
 * Return: a / b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) / (b));
}

/**
 * op_mod - mods a and b
 * @a: a
 * @b: b
 *
 * Return: a % b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) % (b));
}
