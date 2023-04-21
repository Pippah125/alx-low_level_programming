#include "variadic_functions.h"
#include<stdarg.h>
/** 
 * sum_them_all - function to sum each of the unsigned int parameters it receives
 * @n: parameter to be sumed
 *
 * Return:0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a = 0;

	int sum = 0;

	va_list betty;
	va_start(betty , n);

	while (a < n)
	{
	a++;
		sum += va_arg(betty , unsigned int);
	}
	 va_end(betty);
	return (sum);
}
