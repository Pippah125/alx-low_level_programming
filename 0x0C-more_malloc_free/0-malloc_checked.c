#include<stdlib.h>
#include"main.h"
void *malloc_checked(unsigned int b)
{
	void* betty;
	betty = malloc((b));
	if(betty == NULL)
	{
		return(void*)98;
	}
	return(betty);
}
