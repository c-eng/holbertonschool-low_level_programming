#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free list
 * @head: list to free
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *read = head, *next;

	while (read)
	{
		next = read->next;
		free(read->str);
		free(read);
		read = next;
	}
}
