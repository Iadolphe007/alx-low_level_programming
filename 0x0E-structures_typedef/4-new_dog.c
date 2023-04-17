#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - function return new dog
 * @name: function name
 * @age: age arg
 * @owner: owner arg
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_copy;
	char *owner_copy;

	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	
	name_copy = strdup(name);
	owner_copy = strdup(owner);

	if (name_copy == NULL || owner_copy == NULL)
	{
		free(new_dog);
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}
	new_dog->name = name_copy;
	new_dog->owner = owner_copy;
	new_dog->age = age;

	return (new_dog);
}
