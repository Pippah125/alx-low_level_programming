#include"main.h"
#include<stdio.h>
int prime(int m, int n);
/**
 * prime - checks if n is a prime number
 * @n: number to be checked
 * @m: loop through possible value that can divide n
 *
 * Return: 0
 */
int prime(int m, int n)
{
	if (m == 1)
	{
		return (1);
	}
	if (m % n == 0 && n > 0)
	{
		return (0);
	}
	else
	{
		return (prime(m, n - 1));
	}
}
/**
 * is_prime_number - checks if a number is prime or not
 * @n: number to be checked
 *
 * Return:0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime(n, n - 1));
	}
}
