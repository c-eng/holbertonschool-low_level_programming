#include <stdlib.h>

/**
 * str_concat - cats s1 and s2 in new memory
 * @s1: string1
 * @s2: string2
 *
 * Return: pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len, len2, i = 0, j = 0;
	char *mao;

	for (len = 0 ; s1[len] != '\0' ; len++)
		;
	for (len2 = 0 ; s2[len2] != '\0' ; len2++)
		;
	if (len2 + len == 0)
		return ('\0');
	mao = malloc(sizeof(char) * (len + len2));
	if (mao)
	{
		if (len != 0)
		{
			for (i = 0 ; i < len ; i++)
				mao[i] = s1[i];
		}
		if (len2 != 0)
		{
			for (j = 0 ; j <= len2 ; j++)
				mao[i + j] = s2[j];
		}
		else
			mao[i] = '\0';
		return (mao);
	}
	return ('\0');
}
