#include<stdlib.h>
#include"main.h"
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *array = malloc(sizeof(char) * size);
	if (array == NULL || size == 0)
	{
		return(NULL);
	}
	for(x = 0; x < size ; x++)
	{
		array[x] = c;
	}
	free(array);
	return(array);
}
