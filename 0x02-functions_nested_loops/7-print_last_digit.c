#include "main.h"
int print_last_digit(int a)
{	
	int b;
	b = a % 10;
	_putchar('0' + b);
	return (b);
}
