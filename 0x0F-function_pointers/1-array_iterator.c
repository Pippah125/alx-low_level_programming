#include"function_pointers.h"
#include<stdlib.h>
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int n;
	for (n = 0; n <= size; n++)
	action(array[size]);
}
