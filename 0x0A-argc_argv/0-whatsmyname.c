#include<stdio.h>
/**
 * main - print argc and argv
 * @argc: count arguments given to main
 * @argv: print arguments given to main
 *
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
