#include <stdlib.h>
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
	int **p;

	if (width <= 0 || height <= 0)
		return (0);
	p = (int **) malloc(sizeof(int *) * height);
	if (p == 0)
		return (0);
	while (i++ < height)
	{
		*p++ = (int *) malloc(sizeof(int) * width);
		if (*(p - 1) == 0)
		{
			while (--i > 0)
				free(*(--p - 1));
			free(p - 1);
			return (0);
		}
	}
	p -= i - 1;
	i = width;
	while (height--)
	{
		width = i;
		while (width--)
			*(*(p + height) + width) = 0;
	}
	return (p);
}
