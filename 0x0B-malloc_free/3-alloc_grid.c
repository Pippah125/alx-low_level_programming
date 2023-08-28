#include"main.h"
#include<stdlib.h>
int **alloc_grid(int width, int height)
{
	int **mem;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	mem = (int **)malloc(sizeof(int *) * width);
	if (mem == NULL)
	{
		return NULL;
	}
	for (i = 0; i < width; i++)
	{
		mem[i] = (int *)malloc(sizeof(int) * height);
		if (mem[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(mem[j]);
			}
			free(mem);
			return NULL;
		}
		for (j = 0; j < height; j++)
		{
			mem[i][j] = 0;
		}
	}						    
				return (mem);
}
