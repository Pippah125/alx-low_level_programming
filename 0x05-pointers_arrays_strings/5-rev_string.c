#include "main.h"
/**
 * rev_string - print out a string in reverse order
 * @s: string to be reversed
 *
 * Return:0
 */
void rev_string(char *s)
{
	int betty;
	int i;
	betty = 0;

	while (s[betty] != '\0')
	{
	
		betty ++;
	}
	for(i = betty - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

}
