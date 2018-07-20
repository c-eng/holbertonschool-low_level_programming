#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - cats s1 and n of s2
 * @s1: string1
 * @s2: string2
 * @n: bytes
 *
 * Return: pointer or null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, len;
	char *maomao;

	if (!(s1))
		s1 = "";
	if (!(s2))
		s2 = "";
	for (len = 0 ; s1[len] != '\0' ; len++)
		;
	while (s2[i] != '\0' && i < n)
	{
		len++;
		i++;
	}
	maomao = malloc(sizeof(char) * (len + 1));
	if (maomao)
	{
		for (i = 0 ; s1[i] != '\0' ; i++)
		{
			maomao[i] = s1[i];
		}
		len = i;
		for (i = 0 ; s2[i] != '\0' && i < n ; i++)
		{
			maomao[len + i] = s2[i];
		}
		maomao[len + i] = '\0';
		return (maomao);
	}
	return (NULL);
}
