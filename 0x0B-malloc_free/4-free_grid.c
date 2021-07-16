#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: grid to free
 * @height: number of rows
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i, j;

	if (grid == NULL)
	{
		free(grid);
	}
	for (i = 0; i < height; i++)
	{
		if (grid[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(grid[j]);
			}
			free(grid);
		}
	}
}
