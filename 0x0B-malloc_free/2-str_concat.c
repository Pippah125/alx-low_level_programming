#include"main.h"
#include<stdlib.h>
char *str_concat(char *s1, char *s2)
{
	char* betty;
	int y;
	int x;
	y = 0;
	x =0;
	if(s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while(s1[y] != '\0')
	{
		y++;
	}
	while(s2[x] != '\0')
	{
		x++;
	}
	betty = malloc(sizeof(char)*(y + x + 1));
		if (betty == NULL)
		{
			return(NULL);
		}
	y =0 ; x = 0;
		while(s1[y] != '\0')
		{
			betty[y] = s1[y];
				y++;
		}
	while(s2[x] != '\0')
	{
		betty[y] = s2[x];
		y++;
		x++;
	}
	betty[y] = '\0';
	return(betty);
}
