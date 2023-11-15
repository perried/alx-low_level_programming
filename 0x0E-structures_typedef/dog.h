#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog data structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: a user defined datatype of type dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

#endif
