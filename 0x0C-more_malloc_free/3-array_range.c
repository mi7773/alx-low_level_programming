#include <stdlib.h>
#include "main.h"

/**
 * array_range - draft
 * @min: draft
 * @max: draft
 * Return: draft
 */
int *array_range(int min, int max)
{
	int *r, i;

	if (min > max)
	{
		return (0);
	}
	r = malloc((max - min + 1) * sizeof(int));
	if (r == 0)
	{
		return (0);
	}
	i = 0;
	while (min <= max)
	{
		r[i] = min;
		min++;
		i++;
	}

	return (r);
}
