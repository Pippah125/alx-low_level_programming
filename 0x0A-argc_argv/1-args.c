#include<stdio.h>
/**
 * main: to print out the number of arguments given to it
 * @argc: count the number of arguments given to main
 * @argv: arguments given to main but to be ignore during the counting
 *
 * return: 0
 *
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
