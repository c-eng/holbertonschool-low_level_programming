#include "lists.h"

/**
 * print_dlistint - prints the elements of a doubly linked list
 *
 * @h: Head of doubly linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;
	dlistint_t *strider = (dlistint_t *) h;

	while (strider)
	{
		printf("%d\n", strider->n);
		node += 1;
		strider = strider->next;
	}
	return (node);
}
