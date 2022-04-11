#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: pointer
 */

void hash_table_print(const hash_table_t *ht)
{

	unsigned long int x;
	hash_node_t *tmp = NULL;
	unsigned int y = 0;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		tmp = ht->array[x];

		while (tmp != NULL)
		{
			if (y)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			y = 1;
		}
	}
	printf("}\n");
}
