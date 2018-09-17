#include "lists.h"

/**
 * sum_dlistint - sums contents of a doubly linked list
 *
 * @head: head of the doubly linked list
 *
 * Return: sum of list contents
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
