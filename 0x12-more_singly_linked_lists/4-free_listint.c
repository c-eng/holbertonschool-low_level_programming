#include "lists.h"

/**
 * free_listint - free list
 * @head: list to free
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *read = head, *next;

	while (read)
	{
		next = read->next;
		free(read);
		read = next;
	}
}
