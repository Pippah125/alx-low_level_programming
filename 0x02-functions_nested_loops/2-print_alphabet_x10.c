#include "main.h"
void print_alphabet_x10(void)
{
	char alphabet;
	int number;
	number = 0;
	for(number = 0; number <= 10; number++)
	{
		for ( alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{	_putchar(alphabet);
		}
	_putchar('\n');
	}
}
