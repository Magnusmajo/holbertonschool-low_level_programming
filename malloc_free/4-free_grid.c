#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional
 * grid previously created
 * @grid: Entry int
 * @height: Entry int
 */

void free_grid(int **grid, int height)
{
	int a = height;

	for (a = 0; a < height; a++)
		free(grid[a]);

	free(grid);
}
