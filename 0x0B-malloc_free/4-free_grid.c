#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid
 * @grid: pointer to pointer
 * @height: number of tows
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
