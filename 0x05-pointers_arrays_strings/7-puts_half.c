#include"main.h"
/**
 * puts_half - prints the second half of a string
 * @str:string to be divided into 2
 *
 */
void puts_half(char *str)
{
	int m;
	int n;
	for (n =0; str[n] != '\0'; n++)
	{
	}
	if (n % 2 == 0)
	{
		m = n/2;
	}
	else
	{
		m = (n - 1)/2;
		m++
	}
	for(; str[m] != '\0'; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}

