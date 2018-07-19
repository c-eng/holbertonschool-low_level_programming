#include <stdlib.h>

/**
 * array_range - array of ints
 * @min: min, inclusive
 * @max: max, inclusive
 *
 * Return: pointer or NULL
 */

int *array_range(int min, int max)
{
	int i, end;
	int *areigh;

	if (max >= min)
	{
		areigh = malloc(sizeof(int) * (max - min + 1));
		if (areigh)
		{
			end = max - min + 1;
			for (i = 0 ; i <= end ; i++)
			{
				areigh[i] = min;
				min++;
			}
			return (areigh);
		}
	}
	return (NULL);
}
