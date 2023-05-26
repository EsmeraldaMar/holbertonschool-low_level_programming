#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees 2 dimensional array we made prev
 * @grid: 2 dimensional int array previously made
 * @height: height dimension of grid
 * Return: void
 **/
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
