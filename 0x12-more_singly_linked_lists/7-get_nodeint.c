#include "lists.h"

/**
 * get_nodeint_at_index - gets nth node of int list listint
 * @head: list
 * @index: index of node
 *
 * Return: node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index && head->next)
	{
		head = head->next;
		count++;
	}
	if (count == index)
		return (head);
	return (NULL);
}
