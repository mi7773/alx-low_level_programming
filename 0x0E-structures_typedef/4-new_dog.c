#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - draft
 * @name: draft
 * @age: draft
 * @owner: draft
 * Return: draft
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *r;

	r = (dog_t *) malloc(sizeof(dog_t));
	r->name = name;
	r->age= age;
	r->owner = owner;
	return (r);
}
