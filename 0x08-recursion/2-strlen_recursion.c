#include"main.h"
/**
 * _strlen_recursion - return the length of a string
 * @s:string length to be determined
 *
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		(return (1) + _strlen_recursion(s + 1));
	}
	else
	return (0);
}
