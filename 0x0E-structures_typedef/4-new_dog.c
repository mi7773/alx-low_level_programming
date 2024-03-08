#include <stdlib.h>
#include "dog.h"

/**
 * copy - draft
 * @s: drafr
 * @d: draft
 */
void copy(char *s, char *d)
{
	int i = 0;

	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
}
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
	if (r == 0)
	{
		return (0);
	}
	if (name && owner)
	{
		r->name = (char *) malloc(sizeof(name));
		if (r->name == 0)
		{
			free(r);
			return (0);
		}
		copy(name, r->name);
		r->age = age;
		r->owner = (char *) malloc(sizeof(owner));
		if (r->owner == 0)
		{
			free(r->name);
			free(r);
			return (0);
		}
		copy(owner, r->owner);
	}
	else
	{
		free(r);
		return (0);
	}
	free(r->name);
	free(r->owner);
	return (r);
}
