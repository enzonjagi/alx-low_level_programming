#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D array initialized to 0
 * @grid : 2D array
 * @height: of array
 *
 * Return: pointer to array
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height > 0)
		free(grid);
}
