#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all element of list_t
 * @h: parameter element
 * Return: number of node
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count++;
	}
	return (count);
}
