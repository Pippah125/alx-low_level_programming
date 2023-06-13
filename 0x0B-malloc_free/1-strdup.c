#include "main.h"
#include <stdlib.h>
char *_strdup(char *str)
{	
	char *betty;
	int x;
	int y;
	if (str == NULL)
	{
		return(NULL);
	}

	while (y = 0)
	{
		str[y] != '\0'
			y++;
	}
	*betty = malloc(sizeof(char) *(y +1))
		if(betty == NULL)
		{
			return(NULL);
		}
	for(x = 0; betty[x]; x++)
	{
		betty[x] = str[x]
	}
	return(betty);
}
