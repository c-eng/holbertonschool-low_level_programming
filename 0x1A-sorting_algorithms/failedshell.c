#include "sort.h"

/**
 * insertion_sort_list - Insertion sort
 *
 * @list: list to sort
 *
 * Return: flag
 */

int insertion_sort(int *array, int size)
{
	int i, j, temp, flag = 0;
	(void)size;

	for (i = 0; array[i]; i++)
	{
		for (j = i; j > 0; j--)
		{
			if (array[j] < array[j - 1])
			{
				temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temp;
				flag = 1;
			}
		}
	}
	return (flag);
}


/**
 *add_array - adds arrays
 *@array: the array to add to
 *@num: number to add to array
 *Return: void
 */

void add_array(int *array, int num)
{
	int i;
	int new_array[100000];

	for (i = 0; array[i]; i++)
		new_array[i] = array[i];
	new_array[i] = num;
	array = new_array;
}

/**
 *shell_sort - sorts a list of ints with shell sort method
 *@array: the array of ints to be sorted
 *@size: the size of the array
 *Return: void
 */

void shell_sort(int *array, size_t size)
{
	int flag = 0;
	size_t i, j, table = size / 2;
	int sub_array[100000], temp_array[100000];

	for (table = size / 2; table > 0; table = table / 2)
	{
		for (i = 0; i < table; i++)
		{
			for (j = 0; j < (size / table); j = j + table)
				add_array(sub_array, array[j]);
			print_array(sub_array, sizeof(sub_array));
			insertion_sort(sub_array, sizeof(sub_array));
			if (insertion_sort(sub_array, sizeof(sub_array)) == 1)
				flag = 1;
			for (j = 0; sub_array[j]; j++)
				add_array(temp_array, sub_array[j]);
		}
		array = temp_array;
		if (flag == 1)
			print_array(array, size);
		flag = 0;
	}
}



