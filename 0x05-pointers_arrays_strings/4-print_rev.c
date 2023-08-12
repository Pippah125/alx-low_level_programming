O#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: string to be printed
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int len;
	int j;
	for (len = 0; s[len] != '\0'; len++)
	{
	}
	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
