#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements of a list_t list
 * @h: aforementioned list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t temp;
	list_t *read;
	int stahp = 1;

	if (h)
	{
		temp.str = h->str;
		temp.len = h->len;
		temp.next = h->next;
		read = &temp;
		while (stahp)
		{
			if (read->str)
				printf("[%d] %s\n", read->len, read->str);
			else
				printf("[0] (nil)\n");
			count++;
			if (read->next)
				read = read->next;
			else
				stahp = 0;
		}
	}
	return (count);
}
