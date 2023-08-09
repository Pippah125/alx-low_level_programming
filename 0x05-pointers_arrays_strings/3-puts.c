#include "main.h"
/**
 * _puts - print out the string given to it
 * @str: string to be printed
 *
 * Return: 0
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
