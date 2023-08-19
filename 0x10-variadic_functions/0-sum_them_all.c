#include"variadic_functions.h"
#include<stdarg.h>
/**
 *sum_them_all-sum all numbers given
 *@n:numbers to be printed
 *
 * Return:0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int a;
	int result;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(sum, n);
		for (a = 0; a < n; a++)
		{
			result = result + va_arg(sum, int);
		}
		return (result);
	}
	return (0);
}
