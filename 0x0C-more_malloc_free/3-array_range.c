#include<stdlib.h>
#include"main.h"
/**
 * array_range - create an array of integers
 * @min:minimum value in array
 * @max:maximum value in array
 *
 * Return:0
 */
int *array_range(int min, int max)
{
	int *betty;
	int size;
	int A;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	betty = malloc(sizeof(int) * size);
	if (betty == NULL)
	{
		return (NULL);
	}
	for (A = 0; size > A; A++)
	{
		betty[A] = min;
		min++;
	}
	return (betty);
}
