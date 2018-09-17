#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index in a doubly linked list
 *
 * @head: list head
 * @index: index of node to delete
 *
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *strider;

	if (!head)
		return (-1);
	strider = *head;
	while (strider && idx < index)
	{
		idx += 1;
		strider = strider->next;
	}
	if (strider)
	{
		if (strider->next && strider->prev)
		{
			strider->next->prev = strider->prev;
			strider->prev->next = strider->next;
		}
		else if (strider->next)
		{
			strider->next->prev = NULL;
			*head = strider->next;
		}
		else if (strider->prev)
			strider->prev->next = NULL;
		else
			*head = NULL;
		free(strider);
		return (1);
	}
	return (-1);
}
