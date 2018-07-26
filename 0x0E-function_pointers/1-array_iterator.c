#include <stddef.h>

/**
 * array_iterator - executes function action on each element of array array
 * @array: the array
 * @size: size of array
 * @action: pointer to function
 *
 * Return:void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0 ; i < size ; i++)
		{
			action(array[i]);
		}
	}
}
