#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* free_grid - frees 2D GRID
* @grid: free grid
* @height: grid height
*
*Return: NULL if w/l is 0/-
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
