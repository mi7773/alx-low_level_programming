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

	if (grid == 0)
		return;
	for (i = 0; i < height; i++)
	{
		free(*grid);
		grid--;
	}
	free(grid);
	return;
}
