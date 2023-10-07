#include<stdio.h>
/**
 * main - prints name of program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return:0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", __NAME__);
	return(0);
}
