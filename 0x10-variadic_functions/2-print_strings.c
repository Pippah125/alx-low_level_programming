#include<stdio.h>
#include"variadic_functions.h"
#include<stdarg.h>
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int y;
	va_list array;
	va_start(array, n);
		for(y = 0; y < n; y++)
		{
			int x;
			x = va_arg(array,int);
				printf("%d",x);
				if(separator != NULL)
				{
					printf("%s", separator);
				}
			if ( y == NULL)
			{
				printf("nil");
			}
		}
	va_end(array);
	printf("\n");
}
