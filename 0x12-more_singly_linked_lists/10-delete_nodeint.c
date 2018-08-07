#include "lists.h"

/**
 * delete_nodeint_at_index - deletes int node into int list listint
 * @head: list
 * @index: deletion index
 *
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *read, *temp;
	unsigned int count = 0;

	if (head && *head)
	{
		read = *head;
                if (index == 0)
                {
                        read = read->next;
                        free(*head);
                        *head = read;
			return (1);
                }
		while (read && count < (index - 1))
		{
			read = read->next;
			count++;
			if (!(read->next))
				break;
		}
		if (count == (index - 1))
		{
			temp = read->next;
			read->next = (read->next)->next;
			free(temp);
		}
		return (1);
	}
	return (-1);
}
