#include "search_algos.h"

/**
 * binary_search - searches a list of sorted integers for a value
 *
 * @array: pointer to first value of array to search
 * @size: size of array to search
 * @value: value to search for
 *
 * Return: index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t b = 0, t = size - 1, m = 0, i = 0;

	if (!array || size < 1)
		return (-1);
	while (b < t)
	{
		printf("Searching in array: ");
		for (i = b ; i <= t ; i++)
		{
			printf("%d", array[i]);
			if (i != t)
				printf(", ");
		}
		printf("\n");

		m = ((b + t) / 2);
		if (array[m] < value)
			b = m + 1;
		else if (array[m] > value)
			t = m - 1;
		else
			return (m);
	}
	if (size < 2)
		printf("Searching in array: %d\n", array[0]);
	else
		printf("Searching in array: %d\n", array[m + 1]);
	if (array[b] == value)
		return (b);
	else if (array[t] == value)
		return (t);
	return (-1);
}
