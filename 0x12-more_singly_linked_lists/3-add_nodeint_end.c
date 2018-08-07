#include "lists.h"

/**
 * add_nodeint_end - adds int node at end
 * @head: list
 * @n: int
 *
 * Return: new node address or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *read;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (*head == NULL)
		*head = new;
	else
	{
		read = *head;
		while (read->next)
			read = read->next;
		read->next = new;
	}
	return (new);
}
