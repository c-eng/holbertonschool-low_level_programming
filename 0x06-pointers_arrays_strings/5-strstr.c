#include <stdio.h>

/**
 * _strstr - Finds needle in haystack
 * @haystack: string to search
 * @needle: substring to search for
 *
 * Return: pointer or null
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, substring = 0, index_hold;

	for (i = 0 ; haystack[i] != '\0' ; i++)
	{
		for (j = 0 ; needle[j] != '\0' ; j++)
		{
			if (needle[j] != haystack[i + j])
			{
				substring = 0;
				break;
			}
			else if (j == 0)
				index_hold = i;
			substring = 1;
		}
		if (needle[j] == '\0' && substring == 1)
			return (haystack + index_hold);
	}
	return ('\0');
}
