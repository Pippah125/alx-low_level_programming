#include<stdio.h>
#include<stdlib.h>
/**
 * main - add two positive integer
 * @argc: count argument given
 * @argv: argument vector
 *
 * Return:0
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	 int a;
	int b;
	int result;

	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = (a * b);

	printf("%d\n", result);
		return (0);
}
