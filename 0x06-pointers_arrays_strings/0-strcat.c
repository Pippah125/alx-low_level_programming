#include "main.h"

/**
 * _strcat - copies string A to string B
 * @dest: The string to be copied
 * @src: The string to be added to
 *
 */
char *_strcat(char *dest, char *src)
{
	int A;
	int B;
	A = '0';
	while(dest[A] !='\0')
	{
		A++;
	}
	B = '0';
	while (src[B] !='\0')
	{
		dest[A] = src[B];
		A++;
		B++;
	}
	dest[A] ='\0';
		return (dest);
}
