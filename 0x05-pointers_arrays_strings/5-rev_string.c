#include "main.h"
/**
 * rev_string - print out a string in reverse order
 * @s: string to be reversed
 *
 * Return:0
 */
void rev_string(char *s)
{
	char temp;
	int count;
	int i;
	int j;

	for (count = 0; s[count] != '\0'; count++)
	{
	}
	for (j = 0, i = count - 1; j < i; j++, i--)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}
