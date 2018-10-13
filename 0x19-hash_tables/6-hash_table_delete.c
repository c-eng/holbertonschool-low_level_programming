#include "hash_tables.h"

/**
 * hash_table_delete - frees a hash table
 *
 * @ht: hash table to be freed
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *strider = NULL, *freeman = NULL;
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		strider = ht->array[i];
		while (strider)
		{
			freeman = strider;
			strider = strider->next;
			free(freeman->value);
			free(freeman);
		}
	}
	free(ht->array);
	free(ht);
}
