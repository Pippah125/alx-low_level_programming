#include "main.h"
/**
 * _isupper - checks for alphabet
 * @c:character to be checked
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{	return(0);
	}
}
