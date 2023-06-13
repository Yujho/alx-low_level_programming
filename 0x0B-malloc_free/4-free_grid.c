#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a 2d grid
 * @grid: second dimension grid in question
 * @height: dimension for grid height
 * Return: Always 0 (success)
 */

void free_grid(int **grid, int height)
{
	int l;

	for (l = 0; l < height; l++)	/*height parameter specifies the number of rows*/
	{
		free(*(grid + l));
	}
	free(grid);	/*ensures memory allocated is properly freed*/
}
