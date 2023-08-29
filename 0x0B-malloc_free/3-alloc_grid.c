#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **mem;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return NULL;
	}
	mem = (int **)malloc(sizeof(int *) * height);
	if (mem == NULL)
	{
		return NULL;
	}
	for (i = 0; i < height; i++)
	{
		mem[i] = (int *)malloc(sizeof(int) * width);
		if (mem[i] == NULL)
		{
			for (j = i - 1; j >= 0; j--)
			{
				free(mem[j]);
			}
			free(mem);
			return NULL;
		}
	for (j = 0; j < width; j++)
	{
		mem[i][j] = 0;
	}
	}

	return mem;
}

