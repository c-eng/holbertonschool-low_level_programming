#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at index into a doubly linked list
 *
 * @h: head of list
 * @idx: index to insert at
 * @n: value of node to insert
 *
 * Return: address of new node or NULL upon failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *add = NULL, *strider = NULL;

	if (!h)
		return (NULL);
	add = malloc(sizeof(dlistint_t));
	if (!add)
		return (NULL);
	add->n = n;
	strider = *h;
	while (strider->next && index < idx)
	{
		index += 1;
		strider = strider->next;
	}
	if (index == idx)
	{
		add->prev = strider->prev;
		add->next = strider;
		if (strider->prev)
			strider->prev->next = add;
		else
			*h = add;
		strider->prev = add;
		return (add);
	}
	if (index == idx - 1)
	{
		free (add);
		return (add_dnodeint_end(h, n));
	}
	return (NULL);
}
