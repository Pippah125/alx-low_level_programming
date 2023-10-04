#include"main.h"
#include<stdlib.h>
/**
 * str_concat - adds two strings together
 * @s1: first string to be added
 * @s2: to be added to s1
 *
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *betty;
	int y;
	int x;
	int m;

	y = 0;
	x = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[y] != '\0')
	{
		y++;
	}
	while (s2[x] != '\0')
	{
		x++;
	}
	betty = malloc(sizeof(char) * (y + x + 1));
	
	if (betty == NULL)
	{
		return (NULL);
	}

	m = 0;
	y = 0;
	x = 0;

	while (s1[y] != '\0')
	{
		betty[m] = s1[y];
		y++;
		m++;
	}
	
	while (s2[x] != '\0')
	{
		betty[m] = s2[x];
		m++;
		x++;
	}
	return (betty);
}



