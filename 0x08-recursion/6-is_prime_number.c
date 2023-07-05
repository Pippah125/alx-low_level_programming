#include"main.h"
#include<stdio.h>
/**
 * betty - check if number is a prime number
 * @n: number to check
 * @a:loop through number
 *
 * Return: 0
 */
int betty(int n, int a)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % a == 0 && a > 1)
	{
		return (0);
	}
	if ((n / a) < a)
	{
		return (1);
	}
	return (betty(n, a + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 *
 * Return: 0
 */
int is_prime_number(int n)
{
	return (betty(n, 1));
}
