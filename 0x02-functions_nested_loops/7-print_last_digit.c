#include "main.h"
/**
 * print_last_digit - print the last digit of integer
 * @a: integer to be printed
 *
 * Return: 0
 */
int print_last_digit(int a)
{	

	int b;
	b = a % 10;
	
	if (b > 0)
	{
		_putchar('0' + b);
		return (0 + b);
	}
	if (b < 0)
	{
		_putchar('0' + b * -1);
		return (-1 * b);
	}
	_putchar('0' + b);
	return (b);
	
}
