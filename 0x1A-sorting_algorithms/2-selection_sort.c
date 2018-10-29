#include "sort.h"

/**
 *selection_sort - uses selection sort on an array of ints
 *@array: array of ints
 *@size: the size of the array
 *Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, l;
	int temp, t;

	for (i = 0; i < size; i++)
	{
		t = array[i];
		temp = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (t > array[j])
			{
				t = array[j];
				l = j;
			}
		}
		if (t != temp)
		{
			array[l] = temp;
			array[i] = t;
			print_array(array, size);
		}
	}
}
