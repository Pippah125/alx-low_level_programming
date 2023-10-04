#include"main.h"
#include<stdio.h>
/**
 * free_grid - free 2 dimensional array of integers
 * @grid: 2 dimensional array to be freed.
 * @height:The row of the 2 dimensional array
 *
 */
void free_grid(int **grid, int height)
{
	int x;
	
	for (x = 0; x < height; x++)
	{
		free (grid[x]);
	}
		free(grid);
}	
