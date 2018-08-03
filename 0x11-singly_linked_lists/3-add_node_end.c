#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - returns length of str s
 * @s: string to be measured
 *
 * Return: length of s
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * add_node_end - adds node at end
 * @head: list
 * @str: string
 *
 * Return: new node address or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *read;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	if (str)
	{
		new->str = strdup(str);
		if (new->str)
			new->len = _strlen(new->str);
	}
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
