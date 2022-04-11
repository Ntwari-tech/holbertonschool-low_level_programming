#include "hash_tables.h"

/**
 * hash_table_delete - deletes the hash table
 *
 * @ht: is the hashtable
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL, *node = NULL;
	unsigned long int x;

	for (x = 0; x < ht->size; x++)
	{
		node = ht->array[x];
		while (node)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
