#include "main.h"
int print_last_digit(int a)
{	
	int b;
	b = a %  10;
	if (b < 0)
	{	return( -b *1);
	}
	else 
	{
		return (b);
	}
	return(b + 0);
}
