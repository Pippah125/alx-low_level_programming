#include"variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
/**
 * print_numbers - print numbers given to it
 * @separator: to separate integers
 * @n: integers given to it
 *
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int d;
	int x;
	va_list betty;
		va_start(betty, n);
	for (d = 0; d < n; d++)
	{
		x = va_arg(betty, unsigned int);
		printf("%d", x);
		if (separator != NULL && d != (n - 1))
		{
			printf("%s", separator);
		}
	}
		printf("\n");
		va_end(betty);
}
