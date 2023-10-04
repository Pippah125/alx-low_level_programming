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
	int n;

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
	n = 0;
	while (s1[m] != '\0')
	{
		betty[m] = s1[m];
		m++;
	}
	
	while (s2[n] != '\0')
	{
		betty[m] = s2[n];
		m++;
		x++;
	}
	betty[m] = '\0';
	return (betty);
}



