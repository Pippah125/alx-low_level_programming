#include"main.h"
#include<stdio.h>
/** 
 * betty - calculate square of number
 * @n: square root to calculate
 * @i:loop through number
 *
 * Return: the square root
 */
int betty(int n, int z)
{
	int square = z * z;
	if (square > n)
	{
		return (-1);
	}
	if (square  == n)
	{
		return (z);
	}
	return (betty(n, z + 1));
}    

/**
 * _sqrt_recursion -return perfect square root of a number
 * @n: number to calculate the square root
 *
 * Return: the perfect square root
 */
int _sqrt_recursion(int n)
{
	return (betty(n , 1));
}

