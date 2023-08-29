#include"main.h"
#include<stdlib.h>
void free_grid(int **grid, int height)
{
	int k;
	for (k = 0; k < height; k++)
	{
		free(grid[i]);
	}
	free(grid);
}
