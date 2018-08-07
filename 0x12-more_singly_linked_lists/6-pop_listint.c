#include "lists.h"

/**
 * pop_listint - pops int list listint
 * @head: int list listint
 *
 * Return: node data or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *not_head;
	int value = 0;

	if (head && *head)
	{
		not_head = (*head)->next;
		value = (*head)->n;
		free(*head);
		*head = not_head;
	}
	return (value);
}
