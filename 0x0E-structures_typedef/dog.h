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

typedef struct
{
	char *name;
	char *owner;
	float age;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
