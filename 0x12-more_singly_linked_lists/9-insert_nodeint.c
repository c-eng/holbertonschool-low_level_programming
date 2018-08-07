#include "lists.h"

/**
 * insert_nodeint_at_index - inserts int node into int list listint
 * @head: list
 * @idx: insertion index
 * @n: node value
 *
 * Return: address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *neu, *read;
	unsigned int count = 0;

	if (head)
	{
		read = *head;
		while (read && count < (idx - 1))
		{
			count++;
			if (!(read->next))
				break;
			read = read->next;
		}
		neu = malloc(sizeof(listint_t));
		if (neu)
		{
			neu->n = n;
			if (idx == 0)
			{
				neu->next = *head;
				*head = neu;
			}
			else if (count == (idx - 1))
			{
				neu->next = read->next;
				read->next = neu;
			}
			return (neu);
		}
	}
	return (NULL);
}
