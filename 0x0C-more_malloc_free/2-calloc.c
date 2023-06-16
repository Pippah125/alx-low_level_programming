#include"main.h"
#include<stdlib.h>
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
	return(betty);
}
