#include<stdio.h>
#include"main.h"
void print_array(int *a, int n)
{
	for(n = 0; a[n] != '\0'; n++)
	{
		printf("%d, ",a[n]);
	}
	printf("\n");
}
