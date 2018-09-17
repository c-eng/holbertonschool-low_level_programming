#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a doubly linked list
 *
 * @head: head of list
 * @n: value of node to add
 *
 * Return: address of node or NULL upon failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add = NULL, *strider = NULL;

	if (!head)
		return (NULL);
	strider = *head;
	add = malloc(sizeof(dlistint_t));
	if (!add)
		return (NULL);
	add->n = (int) n;
	add->next = NULL;
	if (!strider)
	{
		add->prev = NULL;
		*head = add;
		return (add);
	}
	while (strider->next)
		strider = strider->next;
	strider->next = add;
	add->prev = strider;
	return (add);
}
