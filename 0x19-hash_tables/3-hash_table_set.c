#include "hash_tables.h"

/**
 * hash_table_set - adds an element into a hash table
 *
 * @ht: Hash Table to add into
 * @key: key string
 * @value: value paired to key
 *
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_val;
	hash_node_t *new = NULL, *strider = NULL;
	char *temp;

	if (!key || !ht || !value)
		return (0);
	if (!strcmp(key, ""))
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	key_val = key_index((const unsigned char *) key, ht->size);
	temp = strdup(value);
	new->key = (char *) key;
	new->value = temp;
	new->next = NULL;
	if (ht->array[key_val])
	{
		strider = ht->array[key_val];
		while (strider)
		{
			if (!strcmp(key, strider->key))
			{
				free(strider->value);
				free(new);
				strider->value = temp;
				return (1);
			}
			strider = strider->next;
		}
		if (!strider)
		{
			new->next = ht->array[key_val];
			ht->array[key_val] = new;
		}
	}
	else
		ht->array[key_val] = new;
	return (1);
}
