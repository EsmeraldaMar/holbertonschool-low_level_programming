#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - it points to a 2 dimensional array of integers
 * using malloc, each element must be initialized to 0
 * @width: int size grid width
 * @height: int size grid height
 * Return: if failed returns NULL else points to 2d array (grid) of int
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	while (i < height)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				i--;
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	i++;
	}
	return (grid);
}
