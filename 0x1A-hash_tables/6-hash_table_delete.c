#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: pointer to hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned long int i;
	hash_table_t *head = ht;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node)
			{
				tmp = node;
				node = node->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
			}
		}
	}
	free(head->array);
	free(head);
}
