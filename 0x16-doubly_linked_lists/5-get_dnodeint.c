#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a doubly linked list
 *
 * @head: head of doubly linked list
 * @index: index of node to return
 *
 * Return: node at nth index or NULL if it does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	while (head && idx < index)
	{
		idx++;
		head = head->next;
	}
	if (idx == index && head)
		return (head);
	return (NULL);
}
