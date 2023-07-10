#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_get - retrieves value associated with key
 * @ht: hash table to look into
 * @key: key to look for
 * Return: value associated with the element, or NULL
 * if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;
	return ((node == NULL) ? NULL : node->value);
}
