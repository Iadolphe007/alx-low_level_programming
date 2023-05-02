#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print element
 * @h: parameter
 * Return: number of nodes
 */


size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	for (; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
