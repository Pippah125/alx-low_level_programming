#include"function_pointers.h"
#include<stdlib.h>
int int_index(int *array, int size, int (*cmp)(int))
{       
         int q;
        if (array == NULL || cmp == NULL || size <= 0)
        {
                return (-1);
        }
        
	for(q = 0; q < size; q++)
	{
		if (cmp(array[q]));
		return (q);
	}
	return (-1);
}
