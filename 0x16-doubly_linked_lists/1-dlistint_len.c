#include "lists.h"

/**
 * dlistint_len - returns length of a doubly linked list
 *
 * @h: doubly linked list head
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;
	dlistint_t *strider = (dlistint_t *) h;

	while (strider)
	{
		node += 1;
		strider = strider->next;
	}
	return (node);
}
