#include "main.h"
void print_alphabet_x10(void)
{
	char alphabet;
	int number;
	number = 0;
	while ( number <= 10)
	{
		for ( alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{	_putchar( '%c', alphabet);
		}
		number++
			_putchar('\n');
	}
	return (0);
}
