#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - add new node at the beginnig
 * @head: pointer to a pointer at the beginning of node
 * @str: pointer to a string
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	char *str_copy;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	str_copy = strdup(str);
	if (str_copy == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = str_copy;
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
