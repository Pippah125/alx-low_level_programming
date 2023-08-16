#include<stdlib.h>
#include"function_pointers.h"
/**
 * print_name - print name if name is not null
 * @name:character to be printed
 * @f:function that points to a function that prints
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	(*f)(name);
}
