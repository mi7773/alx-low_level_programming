#include <stdlib.h>
#include "main.h"

/**
 * free_grid - draft
 * @grid: draft
 * @height: draft
 */
void free_grid(int **grid, int height)
{
	int i = height;

	while (height--)
		free(*grid++);
	free(grid - i);
}
