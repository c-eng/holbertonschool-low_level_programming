#include "lists.h"

/**
 * sum_listint - sums int list listint
 * @head: list
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head->next)
		{
			sum += head->n;
			head = head->next;
		}
		sum += head->n;
	}
	return (sum);
}
