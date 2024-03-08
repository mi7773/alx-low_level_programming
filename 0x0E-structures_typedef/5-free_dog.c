#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - draft
 * @d: draft
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
