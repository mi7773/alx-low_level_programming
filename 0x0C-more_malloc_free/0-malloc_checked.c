#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - darft
 * @b: draft
 * Return: draft
 */
void *malloc_checked(unsigned int b)
{
	void *r;

	r = malloc(b);
	if (r == 0)
	{
		exit(98);
	}

	return (r);
}
