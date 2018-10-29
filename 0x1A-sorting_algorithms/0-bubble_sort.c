#include "sort.h"

/**
 *bubble_sort - bubble sorts an array of ints
 *@array: the array to be sorted it contains ints
 *@size: size of the array
 *return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int t = 1;
	int temp;

	while (t == 1)
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

		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				t = 1;
				break;
			}
			t = 0;
		}
		if (t == 0)
		{
			break;
		}
	}
}
