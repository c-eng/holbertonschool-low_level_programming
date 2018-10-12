#include "hash_tables.h"

/**
 * key_index - Calculates the key index of a string
 *
 * @key: key string
 * @size: hash table size
 *
 * Return: key index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val;

	if (!key)
		return (0);
	if (size == 0)
		return (0);
	hash_val = hash_djb2(key);
	return (hash_val % size);
}
