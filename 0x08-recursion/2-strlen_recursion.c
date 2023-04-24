#include"main.h"
int _strlen_recursion(char *s)
{
	int i;
	int j = 0;
	for ( i = 0; s[i] != '\0'; s++)
		j++;
	_strlen_recursion(s);
	return j;
}
