#include "main.h"
int print_last_digit(int a)
{	
	int x;
	int b;
	b = a % 10;
	x = -1* b;
	if (b > 0)
	{
		_putchar('0' + b);
	
	}
	if (b < 0)
	{
		_putchar('0' + b * -1);
	}
	return (b);
	
}
