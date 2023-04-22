#include"function_pointers.h"
#include<stdlib.h>
int int_index(int *array, int size, int (*cmp)(int))
{       
        unsigned int q;
        if (array == NULL || cmp == NULL)
        {
                return (-1);
        }
        if(size <= 0)
        {       
                return (-1);
        }       
	for(q = 0; q < size; q++)
	{
		cmp(array[q]);
		return;
	}
}
