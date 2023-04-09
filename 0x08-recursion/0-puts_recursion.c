#include "main.h"
void _puts_recursion(char *s)
{	
		
		_putchar("%c",s);
		s++;
		if (*s != '\0')
		{	_puts_recursion(char *s);
		}
}
