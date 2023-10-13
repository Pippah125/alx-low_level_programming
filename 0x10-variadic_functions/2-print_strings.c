#include"variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
/**
 * print_strings - prints characters followed by a new line
 * @separator: the , to be in between strings
 * @n: arguments passed to function
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list betty;
	char *string;
	unsigned int count;
	va_start(betty,n);
	for(count = 0; count < n; count++)
	{
		string = va_arg(betty, char *);
		if(string == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s",string);
		}
		if(count !=(n - 1) && separator != NULL)
		{
			printf("%s",separator);
		}
	}
	printf("\n");
	va_end(betty);
}
