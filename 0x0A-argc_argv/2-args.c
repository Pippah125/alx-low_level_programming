#include<stdio.h>
/**
 * main- prints all arguments received
 * @argc:count all arguments received
 * @argv:agrument vector
 *
 * Return:0
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	int i;

	i = 0;

	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);
			i++;
	}
	return (0);
}

