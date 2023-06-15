#include<stdio.h>
int main(__attribute__((unused))int argc, char *argv[])
{
	int i;
	i = 0;
	while(argv[i] != NULL)
	{
		printf("%s",argv[i]);
			i++;
	}
	return(0);
}

