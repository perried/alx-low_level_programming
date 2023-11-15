#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated to struct dog
 * @d: A struct to free memory
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
