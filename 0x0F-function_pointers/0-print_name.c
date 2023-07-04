#include "function_pointers.h"
#include<stdio.h>
/**
 * print_name - function to print out a name 
 * @name: string to be printed to the command line
 * @f: function pointer that accepts name as argument
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if(name == NULL || f == NULL)
		return ;
	f(name);		
}

