#include "sort.h"

/**
 *shell_sort -sorts an array of ints using shell sort
 *@array: the array to be sorted
 *@sie: size of the array
 *Return: void
 */

void shell_sort(int *array, size_t size)
{
	size_t i, table, j;
	int temp, flag = 0;

	for (table = size / 2; table > 0; table = table / 2)
	{
		for (i = table; i < size; i++)
		{
			temp = array[i];
			for (j = i; j >= table && array[j - table] > temp;
			     j -= table)
			{
				array[j] = array[j - table];
				flag = 1;
			}
			array[j] = temp;
			if (flag == 1)
			{
				print_array(array, size);
				flag = 0;
			}
		}
	}
}
