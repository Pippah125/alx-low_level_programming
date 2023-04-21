#include<stdio.h>
#include"variadic_functions.h"
#include<stdarg.h>
/**
 * print_string - print a string 
 * @separator: string to be printed between string
 * @n: integers
 *
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int y;
	va_list array;
	va_start(array, n);
		for(y = 0; y < n; y++)
		{
			char *x;
			x = va_arg(array,char*);
			if ( x == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s",x);
			}
			if(separator != NULL && y != (n-1))
                                {
                                        printf("%s", separator);
                                }
		}
		  printf("\n");
	va_end(array);
}
