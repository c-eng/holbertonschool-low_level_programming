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
		for (i = 0; i <= table; i++)
		{
			for (j = ((size / 2) * 2) - i; j > table; j -= table)
			{
				if (array[j] < array[j - table])
				{
					temp = array[j];
					array[j] = array[j - table];
					array[j - table] = temp;
					flag = 1;
				}
			}
			if (flag == 1)
			{
				print_array(array, size);
				flag = 0;
			}
		}
	}
}
