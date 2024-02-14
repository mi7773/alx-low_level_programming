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
	int **pp;

	if (width <= 0 || height <= 0)
		return (0);
	pp = (int **) malloc(sizeof(int *) * height);
	if (pp == 0)
		return (0);
	while (i++ < height)
	{
		*pp++ = (int *) malloc(sizeof(int) * width);
		if (pp - 1 == 0)
		{
			while (--i > 0)
			{
				free(*--pp - 1);
			}
			free(pp - 1);
			return (0);
		}
	}
	pp -= i - 1;
	i = width;
	while (height--)
	{
		width = i;
		while (width--)
			*(*(pp + height) + width) = 0;
	}
	return (pp);
}
