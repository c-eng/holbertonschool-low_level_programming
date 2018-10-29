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
			print_list(*list);
		}
		strider = strider->next;
	}
}
