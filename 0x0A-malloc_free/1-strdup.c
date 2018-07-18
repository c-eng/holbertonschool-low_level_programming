#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - dups string str
 * @str: string to dup
 *
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	int i, j;
	char *strength;

	if (str == '\0')
		return ('\0');
	for (i = 0 ; str[i] != '\0' ; i++)
		;
	if (i == 0)
		return ('\0');
	strength = malloc(sizeof(char) * (i + 1));
	if (strength)
	{
		for (j = 0 ; j <= i ; j++)
		{
			strength[j] = str[j];
		}
		return (strength);
	}
	return ('\0');
}
