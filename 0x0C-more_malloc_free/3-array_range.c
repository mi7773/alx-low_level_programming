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
	int *r;

	if (min > max)
	{
		return (0);
	}
	r = malloc((max - min + 1) * sizeof(int));
	if (r == 0)
	{
		return (0);
	}
	while (min <= max)
	{
		*r = min;
		min++;
		r++;
	}
	r -= (max - min);

	return (r);
}
