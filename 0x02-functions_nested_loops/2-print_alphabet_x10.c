#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times in a roe
 *
 * return void
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int number;

	number = 0;
	for (number = 0; number <= 9; number++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{	_putchar(alphabet);
		}
	_putchar('\n');
	}
}
