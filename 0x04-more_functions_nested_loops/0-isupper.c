/**
 * main - check the code.
 *
 * Return: Always 0.
 */
#include "main.h"
/**
 * _isupper-checks if alphabet is Uppercase
 * return 1 if true 
 * return 0 if false
 */

int _isupper(int c)
{
	if(c >= 'A' && c<= 'Z')
	{
		return (1);
	}
	else
	{	return(0);
	}
}
