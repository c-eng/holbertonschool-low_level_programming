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
	size_t i = 0;
	int *searcher = NULL;

	if (!array || size < 1)
		return (-1);
	searcher = array;
	while (1)
	{
		printf("Searching in array: ");
		for (i = 0 ; i < size ; i++)
		{
			printf("%d", searcher[i]);
			if (i != (size - 1))
				printf(", ");
		}
		printf("\n");
		if (value == searcher[(size - 1) / 2])
			return ((int) (size - 1) / 2);
		else if (size < 2)
			break;
		else if (value > searcher[(size - 1) / 2])
		{
			searcher = searcher + (((size - 1) / 2) + 1);
			size = size / 2;
		}
		else /* value > searcher[(size - 1) / 2] */
			size = (size - 1) / 2;
	}
	return (-1);
}
