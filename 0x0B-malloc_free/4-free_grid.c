#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 *
 * @grid: input 2D array
 * @height: grid height
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
	{
		return;
	}
	while (i < height)
	{
		free((int *)grid[i++]);
	}
	free(grid);
}
