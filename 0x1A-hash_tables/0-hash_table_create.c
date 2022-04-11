#include "hash_tables.h"

/**
 * hash_table_create - makes a hash table
 *
 * @size: array size
 *
 * Return: a pointer to the newly constructed table
 **/

hash_table_t *hash_table_create(unsigned long int size)
{

hash_table_t *table = NULL; /* table variable decl*/

	if (size == 0)
		return (NULL);


	table = malloc(sizeof(hash_table_t));


	if (table == NULL)
		return (NULL);


	table->size = size;


	table->array = malloc(sizeof(hash_node_t *) * size);


	if (table->array == NULL)
		return (NULL);

	return (table);
}
