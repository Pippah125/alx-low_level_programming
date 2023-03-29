#include "main.h"

/**
 * _strlen(char *s)- show length of string
 * @_strlen(char *s): show length of string
 * @*s: the string to be increased
 */
int _strlen(char *s)
{
	int num;

	num = 0;
		for ( ; *s != '\0'; s++)
		{
			num++;
		}
	return (num);
}
