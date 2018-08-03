#include <stddef.h>
#include "lists.h"

/**
 * list_len - length of list
 * @h: List
 *
 * Return: length of list
 */

size_t list_len(const list_t *h)
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
			count++;
			if (read->next)
				read = read->next;
			else
				stahp = 0;
		}
	}
	return (count);
}
