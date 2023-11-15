#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initialises the members of dog
 * @d: A pointer to a struct dog
 * @name: Holds name of the dog
 * @age: Holds age of the dog
 * @owner: Holds owner of the dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
