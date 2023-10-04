#include<stdlib.h>
#include"main.h"
/**
 * create_array - creates an array of chars
 * @size: counts the numbers of array
 * @c:initalizes the array
 *
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *array = malloc(sizeof(char) * size);
	if (array == NULL || size == 0)
	{
		return (NULL);
	}
	for ( x = 0; x < size; x++)
	{
		array[x] = c;
	}
	return (array);
}

