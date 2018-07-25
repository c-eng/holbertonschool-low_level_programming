#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - gets corresponding function operator
 * @s: operator to find function for
 *
 * Return: function pointer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op && ops[i].op[0] != s[0])
	{
		i++;
	}
	if (ops[i].op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	else
		return (ops[i].f);
}
