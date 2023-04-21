#include "variadic_functions.h"
#include<stdarg.h>
int sum_them_all(const unsigned int n, ...)
{ 
	unsigned int a =0;
	int sum = 0;
	va_list betty;
	va_start(betty,n);
	while(a < n)
	{
	a++;
		sum += va_arg(betty,unsigned int);
	}
	 va_end(betty);
	 return (sum);
}
