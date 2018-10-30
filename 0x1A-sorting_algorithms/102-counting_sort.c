#include "sort.h"

/**
 * memeset - not memset
 * @a: mem address
 * @c: set type
 * @size: size
 *
 * Return: pointer
 */

void *memeset(void *a, int c, int size)
{
	int i;
	unsigned char *p = a;

	for (i = 0 ; i < size ; i++)
	{
		*p = c;
		p++;
	}
	return (a);
}

/**
 * _calloc - calloc
 * @nmemb: elements
 * @size: bytes
 *
 * Return: pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *areigh;

	if (size && nmemb)
	{
		areigh = malloc(nmemb * size);
		if (areigh)
		{
			memeset(areigh, '\0', nmemb * size);
			return (areigh);
		}
	}
	return (NULL);
}

/**
 * counting_sort - Counting sort for int array
 *
 * @array: array to sort
 * @size: size of array
 *
 * Return: void
 */

void counting_sort(int *array, size_t size)
{
	int *count = NULL, *out = NULL;
	size_t i = 0, max = 0;

	if (!array || size < 2)
		return;
	for ( ; i < size ; i++)
	{
		if ((unsigned int) array[i] > max)
			max = array[i];
	}
	count = _calloc(sizeof(int), max + 1);
	out = _calloc(sizeof(int), size);
	if (!count)
		return;
	if (!out)
	{
		free(count);
		return;
	}
	for (i = 0 ; i < size ; i++)
		count[array[i]] += 1;
	for (i = 1 ; i <= max ; i++)
		count[i] = count[i] + count[i - 1];
	print_array(count, max + 1);
	for (i = 0 ; i < size ; i++)
	{
		out[count[array[i]] - 1] = array[i];
		count[array[i]] -= 1;
	}
	for (i = 0 ; i < size ; i++)
		array[i] = out[i];
	free(count);
	free(out);
}
