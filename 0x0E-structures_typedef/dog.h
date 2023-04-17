#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struxture
 * @name: structure name
 * @owner: structure owener
 * @age: structure age
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
