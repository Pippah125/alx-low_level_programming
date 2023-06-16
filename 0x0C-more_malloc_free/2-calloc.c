#include"main.h"
#include<stdlib.h>
#include<string.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *betty;
	betty = malloc(nmemb * size);
		if (nmemb == 0 || size == 0)
		{
			return(NULL);
		}
	if (betty == NULL)
	{
		return(NULL);
	}
	memset(betty,0, nmemb *size);
	return(betty);
}
