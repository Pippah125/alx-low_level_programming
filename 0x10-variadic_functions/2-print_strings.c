#include<stdio.h>
#include"variadic_functions.h"
#include<stdarg.h>
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list array;
	va_start(array, n)
	unsigned int y;
		for(y = 0; y < n; y++)
		{
			int x;
			x = va_arg(array,int);
				printf("%s",x);
				if(separator != NULL)
				{
					printf("%s", separator);
				}
			if ( y = NULL)
			{
				printf("nil");
			}
		}
	va_end(array);
	printf("\n");
}
