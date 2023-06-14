#include "main.h"
#include <stdlib.h>
char *_strdup(char *str)
{	char *betty;
	int x;
	int y;
	y = 0;
	x = 0;

	if (str == NULL)
	{
		return(NULL);
	}

	while (str[x] != '\0')
	{
		x++;
	}

	betty = malloc(sizeof(char) *(x+1));

	
	if(betty == NULL)
	{
		return(NULL);
	}
	while(str[y])
	{
		betty[y] = str[y];
			y++;
	}
	betty[y] = '\0';
	return(betty);
}
