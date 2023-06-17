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
	if (min > max)
	{
		return(NULL);
	}
	betty = malloc(sizeof(int) * max - min + 1);
	if (betty == NULL)
	{
		return(NULL);
	}
	while(min <= max)
	{
		x = 0;
		x++;
		betty[x] = min++;
	}
	return(betty);
}

