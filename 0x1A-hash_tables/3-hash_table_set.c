#include "hash_tables.h"

/**
 * hash_table_set - that adds an element to the hash table.
 * @ht: pointer to the hash table
 * @key: string
 * @value: is the value of our string "key"
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL;
	hash_node_t *tmp = NULL;
	unsigned long int idx;


	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}

	idx = key_index((unsigned char *)key, ht->size);


	node = malloc(sizeof(hash_node_t));


	if (node == NULL)
	{
		return (0);
	}


	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	tmp = ht->array[idx];
	if (tmp && strcmp(key, tmp->key) == 0)
	{
		free(tmp->value);
		tmp->value = node->value;
		free(node->key);
		free(node);
		return (1);
	}

	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
