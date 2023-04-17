#include "main.h"
/**
 * rev_string - print out a string in reverse order
 * @s: string to be reversed
 *
 * Return:0
 */
void rev_string(char *s)
{
	int betty
	
	betty = 0;

	while (s[betty] != '\0')
	{
		betty ++;
	}
	while (betty > 0)
	{
		betty --;
		_putchar(s[betty]);
	}
