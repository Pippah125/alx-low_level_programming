#include"main.h"
int _strlen_recursion(char *s)
{
	int i = 0;
	if (*s != '\0')
	{	i++;
		return (i);
	}
	_strlen_recursion(s);
	return(i);
}
