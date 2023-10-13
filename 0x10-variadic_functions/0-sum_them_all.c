#include"variadic_functions.h"
#include<stdarg.h>
/**
 * sum_them_all - calculates the addition of its parameters
 * @n: parameters passed to function 
 *
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int count;
	unsigned int result;
	va_start(numbers,n);
	for(count = 0; count < n; count++)
	{
		result = result + va_arg(numbers, int);
	}
	va_end(numbers);
	return (result);
}
