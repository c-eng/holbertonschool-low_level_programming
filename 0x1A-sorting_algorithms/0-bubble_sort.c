#include "sort.h"

/**
 *bubble_sort - bubble sorts an array of ints
 *@array: the array to be sorted it contains ints
 *@size: size of the array
 *return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, sz = size;
	int temp;

	while (sz > 0)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}
		sz = sz - 1;
	}
}
