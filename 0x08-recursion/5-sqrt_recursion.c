#include"main.h"
#include<stdio.h>
int square(int m, int n);
/**
 * square - finds the square root of a number
 * @m: loop through possible square root of n
 * @n: number to be found
 *
 * Return: 0
 */
int square(int m, int n)
{
	if (m * m > n)
	{
		return (-1);
	}
	if (m * m == n)
	{
		return (m);
	}
	else
	{
		return (square(n, m + 1));
	}
}
/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number to be found
 *
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (square(n, 0));
	}
}

