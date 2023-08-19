#include"function_pointers.h"
#include<stdlib.h>
#include <stddef.h>
/**
 * array_iterator - loop through an array
 * @array: pointer to array
 * @size: size of the array
 * @action:function pointer
 *
 * Return:0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int  n;

	if (array == NULL || action == NULL || size == 0)
	{
		return;
	}
	for (n = 0; n < size; n++)
	{
		action(array[n]);
	}
}