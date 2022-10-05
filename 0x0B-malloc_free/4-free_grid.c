#include "main.h"
#include <stdlib.h>
/**
 *  free_grid -  frees a 2 dimensional grid
 *  previously created by your alloc_grid function.
 *  @grid: the two dimensional array of integers to be freed
 *  @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int init;

	for (init = 0; init < height; init++)
		free(grid[init]);

	free(grid);
}
