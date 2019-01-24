#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches a sorted array using jump search
 *
 * @array: array to search
 * @size: size of arrat to search
 * @value: value to search for
 *
 * Return: index of value or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = 0, i = 0, p = 0;

	if (!array || size < 1)
		return (-1);
	jump = (int) sqrt(size);
	for ( ; array[i] < value && i < size ; i += jump)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		p = i;
	}
	if (i == size)
		return (-1);
	printf("Value found between indexes [%lu] and [%lu]\n", p, i);
	for ( ; p <= i && p < size ; p++)
	{
		printf("Value checked array[%lu] = [%d]\n", p, array[p]);
		if (array[p] == value)
			return (p);
	}
	return (-1);
}
