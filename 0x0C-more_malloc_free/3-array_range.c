#include<stdlib.h>
#include"main.h"
int *array_range(int min, int max)
{
	int *betty;
	int size;
	int A;
	size = max - min +1;
	betty = malloc(size);
	if (betty == NULL)
	{
		return (NULL);
	}
	if (min > max)
	{
		return (NULL);
	}
	for (A = 0; A < size; A++)
	{
		betty[A] = min;
		min++;
	}
	return (betty);
}
