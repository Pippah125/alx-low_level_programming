#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[])
{
	int i;
	unsigned int k, sum = 0;
	char * betty;
	if(argc >1)
	{
		for(i = 1; i < argc; i++)
		{
			betty = argv[i];
			for(k = 0; k < strlen(betty); k++)
			{
				if(betty[k] < 48 || betty[k] > 57)
				{
					printf("Error\n");
					return(1);
				}
			}
			sum = sum + atoi(betty);
			betty++;
		}
		printf("%d\n",sum);
	}
	else
	{
		printf("0\n");
	}
	return(0);
}
