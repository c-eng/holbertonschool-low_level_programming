#include "lists.h"

/**
 * add_dnodeint - Adds node to the head of a doubly linked list
 *
 * @head: head of list
 * @n: value of new node
 *
 * Return: address of new node or NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add = NULL;

	if (!head)
		return (NULL);
	add = malloc(sizeof(dlistint_t));
	if (!add)
		return (NULL);
	add->n = (int) n;
	add->next = *head;
	add->prev = NULL;
	*head = add;
	if (add->next)
		add->next->prev = add;
	return (add);
}
