#include "dog.h"

/**
 * init_dog - Initialises the members of dog
 * @d: A pointer to a struct dog
 * @name: Holds name of the dog
 * @age: Holds age of the dog
 * @Owner: Holds owner of the dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *Dog = d;
	Dog -> name = name;
	Dog -> age = age;
	Dog -> owner = owner;
}
