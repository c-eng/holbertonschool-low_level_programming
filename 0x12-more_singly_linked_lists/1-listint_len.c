#include "lists.h"

/**
 * listint_len - len of int list listint h
 * @h: int list listint
 *
 * Return: len of int list listint
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
