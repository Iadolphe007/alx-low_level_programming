#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: A pointer to the hash table to print.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int flag = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (!flag)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
