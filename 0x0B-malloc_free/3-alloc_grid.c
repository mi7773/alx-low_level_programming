#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - draft
 * @width: draft
 * @height: draft
 * Return: draft
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int **pp, **r;

	if (width <= 0 || height <= 0)
		return (0);
	pp = (int **) malloc(sizeof(int *) * height);
	if (pp == 0)
		return (0);
	r = pp;
	while (i < height)
	{
		*r = (int *) malloc(sizeof(int) * width);
		if (*r == 0)
		{
			while (i > 0)
			{
				r--;
				free(*r);
			}
			free(pp);
			return (0);
		}
		r++;
		i++;
	}
	r -= i;
	if (r == p)
		printf("555"\n);
	i = width;
	while (height--)
	{
		width = i;
		while (width--)
			*(*(pp + height) + width) = 0;
	}
	return (pp);
}
