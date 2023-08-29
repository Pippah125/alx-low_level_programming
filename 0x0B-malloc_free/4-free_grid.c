#include"main.h"
#include<stdlib.h>
/**
 * free_grid- frees space allocated for a 2d array
 * @grid:the two dimensional array
 * @height:row of the two dimensional array
 *
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
