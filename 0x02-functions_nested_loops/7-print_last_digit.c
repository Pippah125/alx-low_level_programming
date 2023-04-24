#include "main.h"
int print_last_digit(int a)
{	
	int b;
	b = a %  10;
	if (b < 0)
	{	_putchar(-b *-1);
	}
	else 
	{
		_putchar(b);
	}
	return(b + 0);
}
