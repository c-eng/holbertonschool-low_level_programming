#include "holberton.h"

/**
 * _strcpy - copies str src to str dest
 * @src: source string
 * @dest: destination string
 *
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; *(src + i) != '\0' ; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
