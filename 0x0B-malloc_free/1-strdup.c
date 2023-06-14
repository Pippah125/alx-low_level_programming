#include "main.h"
#include <stdlib.h>
char *_strdup(char *str)
{	
	char *betty;
	int x;
	int y;
	*betty= malloc(sizeof(char) *(y+1));
	if (str == NULL || betty == NULL)
	{
		return(NULL);
	}

	while (str[x] != '\0')
	{
		betty[y] = str[x];
		x++;
		y++;
	}
	return(betty);
}
