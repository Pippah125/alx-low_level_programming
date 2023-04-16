#include<stdio.h>
/**
 * main: print out the name of the program using argv 
 * @argc: count the number of elements in argv
 * @argv: write out the number of arguments given
 * 
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}

 
