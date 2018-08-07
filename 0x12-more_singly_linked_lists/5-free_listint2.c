#include "lists.h"

/**
 * free_listint - free list
 * @head: list to free
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *read, *next;

	if (head)
	{
		read = *head;
		while (read)
		{
			next = read->next;
			free(read);
			read = next;
		}
		*head = NULL;
	}
}
