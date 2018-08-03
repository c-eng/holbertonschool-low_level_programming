#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - returns length of str s
 * @s: string to be measured
 *
 * Return: length of s
 */

int _strlen(const char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * add_node - adds node at beginning
 * @head: list
 * @str: string
 *
 * Return: new node address or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->str = strdup(str);
	new->len = _strlen(str);
	*head = new;
	return (new);
}
