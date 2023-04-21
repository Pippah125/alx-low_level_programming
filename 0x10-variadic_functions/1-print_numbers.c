#include"variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int d;
	int x;
	va_list betty;
		va_start(betty,n);
		for(d = 0; d < n; d++)
		{ 
			 if (separator == NULL)
                continue;
			 else
				 printf("%s",separator);
		x = va_arg(betty,unsigned int);
		printf("%d",x);
		printf("\n");}
		va_end(betty);
}
