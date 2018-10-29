#include "sort.h"

/**
 * quicksort - quicksort with array printing
 *
 * @array: Array to sort
 * @size: size of array to sort
 * @p_array: Original array for printing
 * @p_size: Original size for printing
 *
 * Return: void
 */

void quicksort(int *array, size_t size, int *p_array, size_t p_size)
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
				print_array(p_array, p_size);
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
		print_array(p_array, p_size);
	}
	if (size < 3)
	{
		return;
	}
	else
	{
		quicksort(array, wall, p_array, p_size);
		quicksort(array + (wall + 1), size - (wall + 1),
			  p_array, p_size);
	}
}

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
	quicksort(array, size, array, size);
}
