#include<stdio.h>
#include"main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 *
 */
void print_rev(char *s)
{
	int j;
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
