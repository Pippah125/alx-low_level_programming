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
			char *x;
			x = va_arg(array,char*);
				printf("%s",x);
				if(separator != NULL && y != (n-1))
				{
					printf("%s", separator);
				}
			if ( x == NULL)
			{
				printf("nil");
			}
			else
			{
				printf("%s",x);
			}
		}
	va_end(array);
	printf("\n");
}
