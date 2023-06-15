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

	if (a == '\0' || b == '\0')
	{
		printf("Error\n");
	}
	printf("%d\n",result);
		return(0);
}
