#include<stdlib.h>
#include"main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value of array
 * @max:maximum value of array
 *
 * Return:0
 */
int *array_range(int min, int max)
{
	int *betty;
	int x;
	int y;
	if (min > max)
	{
		return(NULL);
	}
	y = max - min + 1;

	betty = malloc(sizeof(int) * y);

	if (betty == NULL)
	{
		return(NULL);
	}
	for(x = 0; min <= max; x++)
	{
		betty[x] = min++;
	}
	return(betty);
}

