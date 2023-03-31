#include "main.h"

/**
 * _strcmp - compare two string
 * @s1: The character to be compared
 * @s2: The character to be compared with
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int A;

	A = 0;
		while (s1[A] != '\0' && s2[A] != '\0')
		{
			if (s1[A] != s2[A])
			{ return (s1[A] - s2[A]);
			}
			A++;
		}
	return (0);
}
