#include "search_algos.h"

/**
 * linear_search - searches a list of unsorted integers for a value
 *
 * @array: pointer to first value of array to search
 * @size: size of array to search
 * @value: value to search for
 *
 * Return: First index where value is located or -1 if value not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (!array)
		return (-1);
	if (size < 1)
		return (-1);
	for ( ; index < size ; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
