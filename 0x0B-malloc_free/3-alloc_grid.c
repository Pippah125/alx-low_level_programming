#include"main.h"
#include<stdlib.h>
int **alloc_grid(int width, int height)
{
	int **mem;
	int i, j, k, l;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	mem = (int **)malloc(sizeof(int *) * width);
	if (mem == NULL)
	{
		free(mem);
		return NULL;
	}
	for (i = 0; i < width; i++)
	{
		mem[i] = (int *)malloc(sizeof(int) * height);
		if (mem[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(mem[j]);
			}
			free(mem);
			return NULL;
		}
		for (k = 0; k < height; k++)
		{
			for(l = 0; l < width; l++)
			{
				mem[k][l] = 0;
			}
		}
	}						    
				return (mem);
}
