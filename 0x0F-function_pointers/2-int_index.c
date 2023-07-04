#include"function_pointers.h"
#include<stdlib.h>
/**
 * int_index - print out integer
 * @array: pointer to array integer to be printed
 * @size: size of the array
 * @cmp: compare the value of these integers
 *
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int q;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (q = 0; q < size; q++)
	{
		if (cmp(array[q]))
		{
			return (q);
		}
	}
	return (-1);
}
