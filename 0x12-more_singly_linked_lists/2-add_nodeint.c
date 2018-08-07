#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds int node at beginning
 * @head: list
 * @n: int
 *
 * Return: new node address or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->n = n;
	*head = new;
	return (new);
}
