#include"main.h"
#include<stdio.h>
/**
 * factorial - prints out the factorial of a number
 * @n: number to be calculated
 *
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
