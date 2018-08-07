#include "lists.h"

/**
 * reverse_listint - reverses int list listint
 * @head: int list listint
 *
 * Return: head of reversed int list listint
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *read;

	if (head && *head && (*head)->next)
	{
		read = (*head)->next;
		(*head)->next = NULL;
		if (read->next)
		{
			temp = read->next;
			while (read)
			{
				read->next = *head;
				*head = read;
				read = temp;
				if (temp)
					temp = temp->next;
			}
		}
		else
		{
			read->next = *head;
			*head = read;
		}
	}
	return (*head);
}
