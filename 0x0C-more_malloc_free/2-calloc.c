#include<stdlib.h>
#include"main.h"
/**
 * _calloc - allocate for an array of nmemb elements
 * @nmemb:elements of array
 * @size:number of bytes
 *
 * Return:0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *betty;
	char *mem;
	unsigned int count;
	unsigned int length;

	length = nmemb * size;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	betty = malloc(length);
	if (betty == NULL)
	{
		return (NULL);
	}
	mem = betty;
	for (count = 0; count < length; count++)
	{
		mem[count] = '\0';
	}
	return (betty);
}
