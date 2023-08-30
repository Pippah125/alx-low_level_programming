#include"variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...) 
{
	va_list print;
	unsigned int m;
	unsigned int value;

	va_start(print, n);
	if (n > 0) 
	{
		value = va_arg(print, int);
		printf("%d", value);
		for (m = 1; m < n; m++) 
		{
		if (separator != NULL) 
		{
			printf("%s", separator);
		}
		else
		{
			value = va_arg(print,int);	
			printf("%d", value);
		}
		}
	}

	va_end(print);
	printf("\n");
}
