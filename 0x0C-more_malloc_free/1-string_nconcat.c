#include"main.h"
#include<stdlib.h>
/**
 * string_nconcat - adds two strings together
 * @s1:destination string
 * @s2:source string
 * @n: number of byte to be added to s1
 *
 * Return:0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *betty;
	unsigned int A, B, C, length;

	length = 0;
	if (s1 == NULL)
	{
		s1  =  "";
	}
	if (s2 == NULL)
	{
		s2  =  "";
	}
	for (A = 0; s1[A] != '\0'; A++)
	{
	}
	for (B = 0; s2[B] != '\0'; B++)
	{
	}
	if (n >= B)
	{
		length = A + B;
	}
	else
	{
		length = A + n;
	}
	betty = malloc(sizeof(char) * length + 1);
	if (betty == NULL)
	{
		return (NULL);
	}
	B = 0;
	for (C = 0; C < length; C++)
	{
		if (C <= A)
		{
			betty[C] = s1[C];
		}
		if (C >= A)
		{
			betty[C] = s2[B];
			B++;
		}
	}
	betty[C] = '\0';
	return (betty);
}

