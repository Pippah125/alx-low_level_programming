#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: The string to be added
 * @n: the number of bytes
 * @src: The string to be added
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int A;
	int B;
	A = 0;
	while (dest[A] != '\0')
	{ 
		A++;
	}
	B= 0;
	while (B < n && src[B] != '\0')
	{
		dest[A] = src[B];
			A++;
			B++;
	}
	dest[A] = '\0';
		return(dest);
}
