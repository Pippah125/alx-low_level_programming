#include"function_pointers.h"
#include<stdlib.h>
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;
	for (n = 0; n <= size; n++)
	action(array[size]);
}
