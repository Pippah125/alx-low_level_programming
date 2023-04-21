#include<stdio.h>
#include"variadic_functions.h"
#include<stdarg.h>
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int y;
	int x;
	va_list array;
	va_start(array, n)
		for(y = 0; y < n; y++)
		{
			x = va_agr(array,int)
				printf("%s",x)
				if(separator != NULL)
				{
					printf("%s", separator)
				}
			if ( y = NULL)
			{
				printf("nil")
			}
		}
	printf("\n");
}
