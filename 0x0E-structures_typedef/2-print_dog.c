#include <stdio.h>
#include "dog.h"

/**
 * print_dog - draft
 * @d: draft
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if (!(d->name))
		{
			d->name = "(nil)";
		}
		if (!(d->owner))
		{
			d->owner = "(nil)";
		}
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
