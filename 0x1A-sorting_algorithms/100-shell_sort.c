#include "sort.h"

/**
 * insertion_sort_list - Insertion sort
 *
 * @list: list to sort
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *strider = NULL;
	int ret = 0;

	if (!list)
		return;
	if (!*list)
		return;
	strider = *list;
	while (strider)
	{
		while (strider->prev && (strider->prev)->n > strider->n)
		{
			if (strider->next)
				(strider->next)->prev = strider->prev;
			(strider->prev)->next = strider->next;
			strider->next = strider->prev;
			strider->prev = (strider->next)->prev;
			if ((strider->next)->prev)
				((strider->next)->prev)->next = strider;
			else
				*list = strider;
			(strider->next)->prev = strider;
			ret = 1;
		}
		strider = strider->next;
	}
	return (ret);
}


/**
 *shell_sort - sorts a list of ints with shell sort method
 *@array: the array of ints to be sorted
 *@size: the size of the array
 *Return: void
 */

void shell_sort(int *array, size_t size)
{
	size_t i, j, table = size / 2;
	int sub_array[size], temp_array[size];

	for (table = size / 2; table > 0; table = table / 2)
	{
		for (i = 0; i < table; i++)
		{
			for (j = 0; j < size / table; j + table)
			{
				sub_array += array[j];
			}
			if (
			temp_array += sub_array;
		}
		array = temp_array;
	}
}
