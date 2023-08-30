#include"main.h"
#include<stdlib.h>
/**
 * string_nconcat- reserves space for joined strings
 * @s1:destination string
 * @s2:source string
 * @n: size to be copied
 *
 * Return:0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int A, B, C, D;
	char * P;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (A = 0; s1[A] != '\0'; A++)
	{
	}
	for (B = 0; s2[B] != '\0'; B++)
	{
	}
	if (n >= B)
		C = A + B;
	else
		C = A + n;
	P = (char *)malloc(sizeof(char) * C + 1);
	if (P == NULL)
		return (NULL);
	for (D = 0; D < C; D++)
	{
		if (D <= A)
		{
			P[D] = s1[D];
		}
		if (D >= A)
		{
			P[D] = s2[D - A];
				B++;
		}
	}
	P[D] = '\0';
	return (P);
}
