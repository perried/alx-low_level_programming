#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Create a new dog struct
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: A new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Dog;
	Dog = malloc(sizeof(dog_t));

	if (Dog == NULL)
		return (NULL);
	Dog->name = name;
	Dog->age = age;
	Dog->owner = owner;

	return Dog;
}
