#include "main.h"
#include<stdio.h>
/**
 * puts2 - prints every other character of str
 * @str: character to be printed
 *
 */
void puts2(char *str)
{
	int i;
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
	}
	for (i = 0; i < j; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
