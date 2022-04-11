#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 *
 * @ht: pointer to hash table
 *
 * @key: pointer to the key
 *
 * Return: element value or null
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{

	unsigned long int idx = 0;
	hash_node_t *tmp = NULL;


	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}


	idx = key_index((unsigned char *)key, ht->size);


	tmp = ht->array[idx];
	if (tmp == NULL)
	{
		return (NULL);
	}


	while (strcmp(key, tmp->key) != 0)
	{
		tmp = tmp->next;
	}


	return (tmp->value);
}
