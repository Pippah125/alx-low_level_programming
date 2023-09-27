#include"main.h"
#include<stdio.h>
/**
 * _memset - fills memory with constant byte
 * @s:string to be filled
 * @b: byte to fill memory with
 * @n:number of byte to fill with
 *
 * Return:0
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *betty = s;
	while(n >0)
	{
		*s = b;
		s++;
		n--;
	}
	return(betty);
}
