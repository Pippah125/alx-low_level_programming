#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: string to be printed
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int len;
	while(s[len] != '\0')
		len--;
	_putchar("%s", s);
}
