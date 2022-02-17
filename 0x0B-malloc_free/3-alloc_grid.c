#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* **alloc_grid - Rtn a * to 2nd dimensional [] of int
* @width: 2nd [] width
* @height: 2nd [] height
*
*Return: NULL if w/l is 0/-
*/
int **alloc_grid(int width, int height)

{
	int h = 0, w = 0;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)

		return (NULL);

	while (h < height)
	{
		grid[h] = malloc(sizeof(int) * width);

		if (grid[h] == NULL)
		{
			while (h >= 0)
			{
				h--;
				free(grid[h]);
			}
			free(grid);
			return (NULL);
		}
		h++;
	}

	for (h = 0; h < height; h++)

		for (w = 0; w < width; w++)
			grid[h][w] = 0;

	return (grid);
}
