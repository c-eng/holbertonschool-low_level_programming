#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 *
 * @head: head of doubly linked list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		if (head->prev)
			free(head->prev);
		if (!head->next)
		{
			free(head);
			break;
		}
		else
			head = head->next;
	}
}
