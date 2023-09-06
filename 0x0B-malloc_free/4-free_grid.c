#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: pointer to an array of pointers
 * @height: obviously
 * Return: integer of two dim array.
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
