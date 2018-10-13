#include "hash_tables.h"

/**
 * hash_table_print - prints the contents of a hash table
 *
 * @ht: Table to print
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *strider = NULL;
	unsigned long int i, count = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		strider = ht->array[i];
		while (strider)
		{
			if (count > 0)
				printf(", ");
			printf("\'%s\': \'%s\'", strider->key, strider->value);
			strider = strider->next;
			count++;
		}
	}
	printf("}\n");
}
