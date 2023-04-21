#include"variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (*separator = NULL)
		continue;
	va _list betty 
		va _start(betty, separator,n)
		unsigned int d;
		int x;
		for(d = 0; d < n; n++)
		{
		x = va_arg(betty,unsigned int);
		printf("%d",x);
		printf("\n");}
		va_end(betty);
}
