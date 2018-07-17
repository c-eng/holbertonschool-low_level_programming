#include <stdlib.h>

/**
 * _strdup - dups string str
 * @str: string to dup
 *
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	unsigned int len, i;
	char *strength;

	for (len = 0 ; str[len] != '\0' ; len++)
		;
	if (len == 0)
		return ('\0');
	strength = malloc(sizeof(char) * len);
	if (strength)
	{
		for (i = 0 ; i < len ; i++)
			strength[i] = str[i];
		return (strength);
	}
	return ("\0");
}
