#include "dog.h"

/**
 * init_dog - draft
 * @d: draft
 * @name: draft
 * @age: draft
 * @owner: draft
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
