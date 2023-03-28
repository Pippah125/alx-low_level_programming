#include<string.h>
#include "main.h"
int _strlen(char *s)
{
	int num;
	num = 0;
		for(; *s !='\0'; s++)
		{
			num++;
		}
	return (num);
}
