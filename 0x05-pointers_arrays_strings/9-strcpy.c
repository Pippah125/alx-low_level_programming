#include<stdio.h>
#include"main.h"
/**
 *_strcpy - copies src into dest
 *@dest:src will be copied into it
 *@src:string to be copied
 *
 *Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for(i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
