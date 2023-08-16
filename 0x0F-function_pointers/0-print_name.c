#include"function_pointers.h"
void g(char *s);
void g(char *s)
{
	int i;
	for(i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}
void (*f)(char *) = &g;
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
