#include"main.h"
#include<stdio.h>
/**
 * _memcpy - copys memory from src to dest
 * @dest:string to be copied to
 * @src:string to be copied from
 * @n:number of bytes to be copied
 *
 * Return:0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *betty = dest
	unsigned int m;
	for(m = 0; m < n; m++)
	{
		*dest = *src;
		dest++
		src ++;
	}
	return(betty);
}
