#include"main.h"
#include<stdio.h>
/**
 * _strlen_recursion- returns the length of a string
 * @s: string to be counted
 *
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s != '\0')
	{
		i = i + 1;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}
