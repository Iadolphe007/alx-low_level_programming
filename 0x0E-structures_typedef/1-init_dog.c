#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize dog variable
 * @d: pointer objecter
 * @name: structure obj
 * @age: structure oj
 * @owner: structure obj
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(strlen(name) + 1);
	d->owner = malloc(strlen(owner) + 1);
	strcpy(d->name, name);
	strcpy(d->owner, owner);

	d->age = age;

}
