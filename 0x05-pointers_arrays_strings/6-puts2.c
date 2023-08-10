#include "main.h"
#include<stdio.h>
void puts2(char *str)
{
	int i;
	int j;
	for (j = 0; str[j] != '\0'; j++)
	{
	}
	for (i = 0; i < j; i = i +2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
