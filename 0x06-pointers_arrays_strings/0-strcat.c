#include "main.h"
#include <stdio.h>

/**
 * _strcat - copies string A to string B
 * @dest: The input value
 * @src: The input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int A;
	int B;

	A = 0;
	while (dest[A] != 0)
	{
		A++;
	}
	B = 0;
	while (src[B] != 0)
	{
		dest[A] = src[B];
		B++;
		A++;
	}
	dest[A] = '\0';
	return (dest);
}
