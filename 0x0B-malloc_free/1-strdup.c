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
	betty = malloc(sizeof(char) *(y+1));
	if(betty == NULL)
	{
		return(NULL);
	}

	while (str[x] != '\0')
	{
		betty[y] = str[x];
		x++;
		y++;
	}
	betty[y] = '\0';
	return(betty);
}
