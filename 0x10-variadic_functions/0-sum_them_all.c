#include"variadic_functions.h"
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int a;
	int result;
	if(n == 0;)
	{
		return;
	}
	else
	{
		va_start(sum,n);
		for(a = 0; a < n; a++)
		{
			result = result + va_args(sum, int);
		}
		return(result);
	}
	return(0);
}
