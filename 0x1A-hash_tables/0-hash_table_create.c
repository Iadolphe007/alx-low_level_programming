#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 * Return: If an error occurs - NULL.
 * Otherwise - a pointer to the new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table = (hash_table_t *) malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (h_table == NULL)
		return (NULL);
	h_table->size = size;
	h_table->array = malloc(sizeof(hash_node_t *) * size);

	if (h_table->array == NULL)
		return (NULL);

	for (i = 0; i < h_table->size; i++)
		h_table->array[i] = NULL;

	return (h_table);
}
