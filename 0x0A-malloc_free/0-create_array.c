#include <stdlib.h>

/**
 * create_array - Creates an array of characters with char c
 * @size: size of array
 * @c: character
 *
 * Return: pointer to array or NULL on failure
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size > 0)
	{
		arr = malloc(sizeof(char) * size);
		if (arr)
		{
			for (i = 0 ; i < size ; i++)
			{
				arr[i] = c;
			}
			return (arr);
		}
	}
	return ('\0');
}
