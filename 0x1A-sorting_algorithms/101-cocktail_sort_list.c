#include "sort.h"

/**
 * cocktail_sort_list - Cocktail sort for a doubly linked list
 *
 * @list: list to sort
 *
 * Return: void
 */

void cocktail_sort_list(listint_t **list)
{
	listint_t *strider = NULL;
	int rev = 0, swap = 0;

	if (!list)
		return;
	if (!*list)
		return;
	strider = *list;
	while (strider)
	{
		if (rev == 0)
		{
			if (strider->next)
			{
				if (strider->n > (strider->next)->n)
				{
					(strider->next)->prev = strider->prev;
					if (strider->prev)
						(strider->prev)->next =
							strider->next;
					else
						*list = strider->next;
					strider->prev = strider->next;
					strider->next = (strider->next)->next;
					(strider->prev)->next = strider;
					if (strider->next)
						(strider->next)->prev = strider;
					print_list(*list);
					swap += 1;
				}
				else
					strider = strider->next;
			}
			else
			{
				if (!swap)
					break;
				swap = 0;
				rev = 1;
			}
		}
		else
		{
			if (strider->prev)
			{
				if (strider->n < (strider->prev)->n)
				{
					(strider->prev)->next = strider->next;
					if (strider->next)
						(strider->next)->prev =
							strider->prev;
					strider->next = strider->prev;
					strider->prev = (strider->prev)->prev;
					if (strider->prev)
						(strider->prev)->next = strider;
					else
						*list = strider;
					(strider->next)->prev = strider;
					print_list(*list);
					swap += 1;
				}
				else
					strider = strider->prev;
			}
			else
			{
				if (!swap)
					break;
				swap = 0;
				rev = 0;
			}
		}
	}
}
