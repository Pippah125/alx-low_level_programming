#include "main.h"
int print_last_digit(int a)
{	

	int b;
	b = a % 10;
	
	if (b > 0)
	{
		_putchar('0' + b);
		return (b);
	}
	if (b < 0)
	{
		_putchar('0' + b * -1);
		return (b);
	}
	return (b);
	
}
