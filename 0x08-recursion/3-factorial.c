#include"main.h"
/**
 * factorial - calculate the factorial of n
 * @n: number to be calculated
 *
 * Return:0
 */
int factorial(int n)
{
	if(n < 0)
	{
		return(-1);
	}
	if(n <= 1)
	{
		rfeturn(1);
	}
	return(n *factorial(n -1));
}
