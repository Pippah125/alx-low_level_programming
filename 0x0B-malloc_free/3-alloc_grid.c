#include"main.h"
#include<stdio.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional arry of integers with each element in the array initalized to 0
 * width:The column of the 2 dimensional array
 * @height:The row of the 2 dimensional array
 *
 * Return: 0
 */
int **alloc_grid(int width, int height);
{
	int **mem;
	int x;
	int y;
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	mem = (int *) malloc(sizeof(int*) * height);
	if (mem == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		mem[x] = (int) malloc(sizeof(int) * width);
		if (mem[x] == NULL)
		{
			for(; x >= 0; x--)
			{
				free(mem[x]);
				
				free(mem);
				return (NULL);
			}
		}
	}
	for(x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			mem[x][y] = 0;
		}
	}
	return (mem);
}


