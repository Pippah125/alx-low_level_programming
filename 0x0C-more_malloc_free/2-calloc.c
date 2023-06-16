#include"main.h"
#include<stdlib.h>
#include<string.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *betty;
		if (nmemb == 0 || size == 0)
		{
			return(NULL);
		}
		betty = malloc(nmemb * size);
	if (betty == NULL)
	{
		return(NULL);
	}
	memset(betty,0, nmemb *size);
	return(betty);
}
