include "main.h"
/**
 * _strncpy - copy string dest to src
 * @dest: string to be copied
 * @src: string to be copied to
 * @n: integer
 *
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	int A;

	A = 0
	while (n > A && src[A] != '\0')
	{
		dest[A] = src[A];
		A++
	}
	while (n > A)
	{
		dest[A] = '\0'
			A++;
	}
	return (dest)
