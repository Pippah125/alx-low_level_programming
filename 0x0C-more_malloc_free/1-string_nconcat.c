#include"main.h"
#include<stdlib.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int A;
	unsigned int B;
	unsigned int C;
	unsigned int D;
	char *P;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (A = 0; s1[A]!='\0'; A++)
	{
	}
	for (B = 0; s2[B] != '\0'; B++)
	{
	}
	if (n >= B)
	{
		C = A + B;
	}
	else
	{
		C = A + n;
	}
	P = (char *)malloc(sizeof(char) * C + 1);
	if ( P == NULL)
	{
		return (NULL);
	}
	for(B = 0; D < C ; D++)
	{
		if (D <= A)
		{
			P[D] = s1[D];
		}
		if (D >= A)
		{
			P[D] = s2[B];
				B++;
		}
	}
	P[D] = '\0';
	return(P);
}
