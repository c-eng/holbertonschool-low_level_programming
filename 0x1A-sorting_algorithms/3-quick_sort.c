#include "sort.h"

/**
 * quick_sort - Quick sort with Lomuto partitioning
 *
 * @array: Array to sort
 * @size: size of array
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	int pivot = 0, wall = 0, idx = 0, temp = 0;

	if (size)
		pivot = size - 1;
	while (idx < pivot)
	{
		if (array[idx] < array[pivot])
		{
			if (idx != wall)
			{
				temp = array[idx];
				array[idx] = array[wall];
				array[wall] = temp;
				print_array(array, size);
			}
			wall += 1;
		}
		idx += 1;
	}
	if (wall != pivot)
	{
		temp = array[wall];
		array[wall] = array[pivot];
		array[pivot] = temp;
		print_array(array, size);
	}
	if (size < 3)
	{
		return;
	}
	else
	{
		quick_sort(array, wall);
		quick_sort(array + (wall + 1), size - (wall + 1));
	}
}
