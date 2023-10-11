#include<stdio.h>
#include<stdlib.h>
#include"dog.h"
int length(char *str);
char *_copy(char *dest, char *src);
int length(char *str)
{
	int count;
	for (count = 0; *str != '\0'; count++)
	{
	}
	return (count);
}
char *_copy(char *dest, char *src)
{
	int index = 0;
	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';
	return (dest);
}
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dogg;
	if (name == NULL|| age < 0|| owner == NULL)
	{
		return (NULL);
	}
	new_dogg = malloc(sizeof(dog_t));
	if (new_dogg == NULL)
	{
		return (NULL);
	}
	new_dogg->name = malloc(sizeof(char)*(length(name) + 1));
	if (new_dogg->name == NULL)
	{
		free(new_dogg);
		return (NULL);
	}
	new_dogg->owner= malloc(sizeof(char)* (length(owner) + 1));
	if (new_dogg-> owner == NULL)
	{
		free(new_dogg->name);
		free(new_dogg);
		return (NULL);
	}
	new_dogg->name = _copy(new_dogg->name, name);
	new_dogg->age = age;
	new_dogg-> owner = _copy(new_dogg->owner, owner);
	return (new_dogg);
}

