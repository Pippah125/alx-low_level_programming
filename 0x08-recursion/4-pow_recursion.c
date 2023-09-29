#include"main.h"
#include<stdio.h>
/**
 * _pow_recursion - calculates x raised to power y
 * @x: number to be multiplied
 * @y: raised to power
 *
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	int result;

	result = 0;
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		result = x * _pow_recursion(x, y - 1);
		return (result);
	}
}
