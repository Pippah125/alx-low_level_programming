#include "main.h"
char *_memset(char *s, char b, unsigned int n)
{
	char **d;
	*s = &n;
	**d = &s;
	unsigned int b;
	b = 0;
	while (b < n)
	{
		if (b % 10)
		{
			_putchar("");
		}
		if (!(b % 10) && b)
		{
			_putchar("\n")
		}
		_putchar("%x%2x", *s[b]);
	}
	return(d);

