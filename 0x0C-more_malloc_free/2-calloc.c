#include <stdlib.h>
#include "main.h"

/**
 * _calloc - draft
 * @nmemb: draft
 * @size: draft
 * Return: draft
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *r;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}
	r = malloc(nmemb * size);
	if (r == 0)
	{
		return (0);
	}
	i = 0;
	while (i < (nmemb * size))
	{
		r[i] = 0;
		i += size;
	}

	return ((void *) r);
}
