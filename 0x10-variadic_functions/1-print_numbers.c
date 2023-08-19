#include"variadic_functions.h"
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int m;
	if(n == 0)
	{
		return;
	}
	else
	{
		for(m = 0; m < n; m++)
		{
			printf("%d",va_arg(print,int));
			if(m != n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(print);
	}
		printf("\n");
}
