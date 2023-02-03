#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **node;
	unsigned long int i = 0;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	table->size = size;

	node = malloc(sizeof(hash_node_t) * size);
	if (node == NULL)
	{
		free(table);
		table = NULL;
		return (NULL);
	}
	table->array = node;
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);

}

