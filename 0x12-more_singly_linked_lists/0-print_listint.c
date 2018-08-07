#include "lists.h"

/**
 * print_listint - prints all elements of int list listint
 * @h: int list listint to print
 *
 * Return: Number of nodes in int list listint
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
