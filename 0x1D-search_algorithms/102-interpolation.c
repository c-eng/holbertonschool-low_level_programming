#include "search_algos.h"

/**
 * interpolation_search - searches a list of sorted integers for a value
 *
 * @array: pointer to first value of array to search
 * @size: size of array to search
 * @value: value to search for
 *
 * Return: index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t b = 0, t = size - 1, m = 0;

	if (!array || size < 1)
		return (-1);

	while (1)
	{
		m = b + (((double)(t - b) / (array[t] - array[b])) *
			 (value - array[b]));
		if (m > (size - 1))
		{
			printf("Value checked array[%lu] is out of range\n", m);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", m, array[m]);
		if (array[m] < value)
			b = m + 1;
		else if (array[m] > value)
			t = m - 1;
		else
			return (m);
		if (t < b)
			break;
	}
	return (-1);
}
