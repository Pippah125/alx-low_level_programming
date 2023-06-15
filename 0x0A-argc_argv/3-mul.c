#include<stdio.h>
#include<stdlib.h>
int main(__attribute__((unused))int argc, char *argv[])
{
	int a;
	int b;
	int result;

	a = atoi(argv[1]);
	b= atoi(argv[2]);
	result = (a * b);

	if (argv[1] == NULL)
	{
		printf("Error\n");
		return(1);
	}
	if (argv[2] == NULL)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n",result);
		return(0);
}
