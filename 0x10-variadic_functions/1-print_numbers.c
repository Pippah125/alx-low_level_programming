#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"
/**
 * print_numbers - prints parameters
 * @separator: to be printed between numbers
 * @n: numbers passed to the function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list betty;
	unsigned int count;
	va_start(betty,n);
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(betty,int));
		if(count != (n - 1) && separator != NULL)
		{
			printf("%s",separator);
		}
	}
	printf("\n");
	va_end(betty);
}
