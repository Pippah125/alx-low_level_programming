#include<stdlib.h>
#include"main.h"
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *betty;
	char *mem;
	unsigned int count;
	unsigned int length;

	betty = malloc(nmemb * size);
	length = nmemb * size;
	if(nmemb == 0 || size == 0)
	{
		return (NULL);
	}
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
