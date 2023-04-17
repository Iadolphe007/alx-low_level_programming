#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * print_dog - print struct
 * @d: arg pointer
 */


void print_dog(struct dog *d)
{
	if (d == NULL)
		printf(" ");
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
