#include"main.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
/**
 * main - adds positive numbers 
 * @argc: argument count
 * @argv: argument vector
 *
 * Return:0
 */
int main(int argc, char *argv[])
{
	int y;
	unsigned int x; 
	unsgined int sum;
	char *a;
	
	if(argc >1)
	{
		for (y = 1; y < argc; y++)
		{
			a = argv[y];
		for (x =0; x < strlen(a); x++)
		{
			if (a[x] < 48 || a[x] > 57)
			{ printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(a);
		a++;
		}
		printf("%d\n",sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
