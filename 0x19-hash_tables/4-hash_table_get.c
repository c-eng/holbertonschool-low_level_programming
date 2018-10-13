#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value from a hash table if it exists
 *
 * @ht: table to retrieve from
 * @key: key of value
 *
 * Return: the value or NULL if key does not exist in table
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key_hsh;
	hash_node_t *strider = NULL;

	if (!ht || !key)
		return (NULL);
	if (!strcmp(key, ""))
		return (NULL);
	key_hsh = key_index((const unsigned char *) key, ht->size);
	strider = ht->array[key_hsh];
	while (strider)
	{
		if (!strcmp(key, strider->key))
		{
			return (strider->value);
		}
		strider = strider->next;
	}
	return (NULL);
}
