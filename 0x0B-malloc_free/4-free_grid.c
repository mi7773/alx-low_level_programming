#include <stdlib.h>
#include "main.h"

/**
 * free_grid - draft
 * @grid: draft
 * @height: draft
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*grid);
		grid++;
	}
	free(grid - i);
}
